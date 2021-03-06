/****************************************************************************
 * Copyright (c) 2018-2020 by the Cabana authors                            *
 * All rights reserved.                                                     *
 *                                                                          *
 * This file is part of the Cabana library. Cabana is distributed under a   *
 * BSD 3-clause license. For the licensing terms see the LICENSE file in    *
 * the top-level directory.                                                 *
 *                                                                          *
 * SPDX-License-Identifier: BSD-3-Clause                                    *
 ****************************************************************************/

#ifndef CAJITA_MANUALPARTITIONER_HPP
#define CAJITA_MANUALPARTITIONER_HPP

#include <Cajita_Partitioner.hpp>

#include <array>

#include <mpi.h>

namespace Cajita
{
//---------------------------------------------------------------------------//
class ManualPartitioner : public Partitioner
{
  public:
    ManualPartitioner( const std::array<int, 3>& ranks_per_dim );

    std::array<int, 3> ranksPerDimension(
        MPI_Comm comm,
        const std::array<int, 3>& global_cells_per_dim ) const override;

  private:
    std::array<int, 3> _ranks_per_dim;
};

//---------------------------------------------------------------------------//

} // end namespace Cajita

#endif // end CAJITA_MANUALPARTITIONER_HPP
