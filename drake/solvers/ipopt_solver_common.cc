#include "drake/solvers/ipopt_solver.h"

#include "drake/common/never_destroyed.h"

namespace drake {
namespace solvers {

SolverId IpoptSolver::solver_id() const {
  return id();
}

SolverId IpoptSolver::id() {
  static const never_destroyed<SolverId> singleton{"IPOPT"};
  return singleton.access();
}

}  // namespace solvers
}  // namespace drake
