/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteType.h>
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
      namespace RouteTypeMapper
      {

        static const int PROPAGATED_HASH = HashingUtils::HashString("PROPAGATED");
        static const int STATIC__HASH = HashingUtils::HashString("STATIC");


        RouteType GetRouteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROPAGATED_HASH)
          {
            return RouteType::PROPAGATED;
          }
          else if (hashCode == STATIC__HASH)
          {
            return RouteType::STATIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteType>(hashCode);
          }

          return RouteType::NOT_SET;
        }

        Aws::String GetNameForRouteType(RouteType enumValue)
        {
          switch(enumValue)
          {
          case RouteType::NOT_SET:
            return {};
          case RouteType::PROPAGATED:
            return "PROPAGATED";
          case RouteType::STATIC_:
            return "STATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTypeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
