/// \file
/// \author Vincent Zalzal
/// \date   2015
/// \copyright The MIT license (see LICENSE file)
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include <libkalman/extended_kalman.h>

namespace ublas = boost::numeric::ublas;

int main()
{
    ublas::vector<double> v(3);
    for (unsigned i = 0; i < v.size(); ++i)
        v(i) = i;
    return 0;
}
