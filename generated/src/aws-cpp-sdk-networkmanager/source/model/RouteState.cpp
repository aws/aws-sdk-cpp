/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace RouteStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int BLACKHOLE_HASH = HashingUtils::HashString("BLACKHOLE");


        RouteState GetRouteStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RouteState::ACTIVE;
          }
          else if (hashCode == BLACKHOLE_HASH)
          {
            return RouteState::BLACKHOLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteState>(hashCode);
          }

          return RouteState::NOT_SET;
        }

        Aws::String GetNameForRouteState(RouteState enumValue)
        {
          switch(enumValue)
          {
          case RouteState::NOT_SET:
            return {};
          case RouteState::ACTIVE:
            return "ACTIVE";
          case RouteState::BLACKHOLE:
            return "BLACKHOLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
