#ifndef __STAN__MCMC__DENSE__E__STATIC__HMC__BETA__
#define __STAN__MCMC__DENSE__E__STATIC__HMC__BETA__

#include <stan/mcmc/base_static_hmc.hpp>
#include <stan/mcmc/dense_e_point.hpp>
#include <stan/mcmc/dense_e_metric.hpp>
#include <stan/mcmc/expl_leapfrog.hpp>

namespace stan {

  namespace mcmc {

    // Hamiltonian Monte Carlo on a 
    // Euclidean manifold with dense metric
    // and static integration time
    
    template <typename M, class BaseRNG>
    class dense_e_static_hmc: public base_static_hmc<M, 
                                                     dense_e_point,
                                                     dense_e_metric, 
                                                     expl_leapfrog, 
                                                     BaseRNG> {
      
    public:
      
      dense_e_static_hmc(M &m, BaseRNG& rng): base_static_hmc<M, dense_e_point, dense_e_metric, 
                                                              expl_leapfrog, BaseRNG>(m, rng)
      {};
                                            
                        
    };

  } // mcmc

} // stan
          

#endif
