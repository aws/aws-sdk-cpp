/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/RouteType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SNS
  {
    namespace Model
    {
      namespace RouteTypeMapper
      {

        static const int Transactional_HASH = HashingUtils::HashString("Transactional");
        static const int Promotional_HASH = HashingUtils::HashString("Promotional");
        static const int Premium_HASH = HashingUtils::HashString("Premium");


        RouteType GetRouteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Transactional_HASH)
          {
            return RouteType::Transactional;
          }
          else if (hashCode == Promotional_HASH)
          {
            return RouteType::Promotional;
          }
          else if (hashCode == Premium_HASH)
          {
            return RouteType::Premium;
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
          case RouteType::Transactional:
            return "Transactional";
          case RouteType::Promotional:
            return "Promotional";
          case RouteType::Premium:
            return "Premium";
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
  } // namespace SNS
} // namespace Aws
