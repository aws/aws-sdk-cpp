/*
Original code by Lee Thomason (www.grinninglizard.com)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any
damages arising from the use of this software.

Permission is granted to anyone to use this software for any
purpose, including commercial applications, and to alter it and
redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must
not claim that you wrote the original software. If you use this
software in a product, an acknowledgment in the product documentation
would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and
must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.
*/
/*
This file has been modified from its original version by Amazon:
  (1) Memory management operations use aws memory management api
  (2) Import-export preprocessor logic tweaked for better integration into core library
  (3) Wrapped everything in Amazon namespace to prevent static linking issues if the user includes a version of this code through another dependency
*/

#ifndef NON_LEGACY_BUILD
#include <aws/core/external/tinyxml2/tinyxml2_legacy.h>
#else
/**
 * This code below is an interface wrapper for cJSON intended for transition cJSON into an external dependency in
 * Aws SDK for C++ 1.10 while still supporting legacy build code. It will be removed when the legacy build
 * support is removed.
 */

#ifndef TINYXML2_TRANSITION_WRAP__h
#define TINYXML2_TRANSITION_WRAP__h

#include<tinyxml2.h>

namespace Aws {
namespace External {
namespace tinyxml2 = ::tinyxml2;
}
}

#endif // TINYXML2_INCLUDED

#endif