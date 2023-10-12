/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/RouteType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace RouteTypeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t URI_PATH_HASH = ConstExprHashingUtils::HashString("URI_PATH");


        RouteType GetRouteTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return RouteType::DEFAULT;
          }
          else if (hashCode == URI_PATH_HASH)
          {
            return RouteType::URI_PATH;
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
          case RouteType::DEFAULT:
            return "DEFAULT";
          case RouteType::URI_PATH:
            return "URI_PATH";
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
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
