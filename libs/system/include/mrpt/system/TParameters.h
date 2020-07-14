/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2020, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */
#pragma once

#include <mrpt/containers/KeyValues.h>

namespace mrpt::system
{
/** For passing arguments by name:
 *  \code
 *    TParameters<double> p;  // or TParametersDouble
 *    p["v_max"] = 1.0;  // Write
 *    ...
 *    cout << p["w_max"]; // Read, even if "p" was const.
 *  \endcode
 *
 * This is a type alias for mrpt::containers::KeyValue, kept for backwards
 * compatibility for MRPT<2.0.5.
 *
 * \deprecated (Since mrpt 2.0.5) Prefer mrpt::containers::Parameters.
 *
 * \ingroup mrpt_system_grp
 */
template <typename T>
using TParameters
	[[deprecated("Prefer mrpt::containers::Parameters [Since mrpt 2.0.5]")]]  //
	= mrpt::containers::KeyValues<T>;

}  // namespace mrpt::system
