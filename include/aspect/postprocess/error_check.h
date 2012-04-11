/*
  Copyright (C) 2011, 2012 by the authors of the ASPECT code.

  This file is part of ASPECT.

  ASPECT is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  ASPECT is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with ASPECT; see the file doc/COPYING.  If not see
  <http://www.gnu.org/licenses/>.
*/
/*  $Id$  */


#ifndef __aspect__postprocess_error_check_h
#define __aspect__postprocess_error_check_h

#include <aspect/postprocess/interface.h>


namespace aspect
{
  namespace Postprocess
  {
    namespace DuretzEtAl
    {
      /**
       * A postprocessor that generates depth average output in periodic intervals
       * or every time step.
       *
       * @ingroup Postprocessing
       */
      template <int dim>
      class ErrorCheck : public Interface<dim>, public SimulatorAccess<dim>
      {
        public:
          /**
           * Generate graphical output from the current solution.
           */
          virtual
          std::pair<std::string,std::string>
          execute (TableHandler &statistics);
      };
    }
  }
}


#endif