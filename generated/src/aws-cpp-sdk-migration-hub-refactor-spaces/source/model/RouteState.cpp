/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
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
      namespace RouteStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        RouteState GetRouteStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return RouteState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RouteState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return RouteState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RouteState::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return RouteState::UPDATING;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return RouteState::INACTIVE;
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
          case RouteState::CREATING:
            return "CREATING";
          case RouteState::ACTIVE:
            return "ACTIVE";
          case RouteState::DELETING:
            return "DELETING";
          case RouteState::FAILED:
            return "FAILED";
          case RouteState::UPDATING:
            return "UPDATING";
          case RouteState::INACTIVE:
            return "INACTIVE";
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
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
