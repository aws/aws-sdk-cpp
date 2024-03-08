/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/EnvironmentState.h>
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
      namespace EnvironmentStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        EnvironmentState GetEnvironmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EnvironmentState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EnvironmentState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentState>(hashCode);
          }

          return EnvironmentState::NOT_SET;
        }

        Aws::String GetNameForEnvironmentState(EnvironmentState enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentState::NOT_SET:
            return {};
          case EnvironmentState::CREATING:
            return "CREATING";
          case EnvironmentState::ACTIVE:
            return "ACTIVE";
          case EnvironmentState::DELETING:
            return "DELETING";
          case EnvironmentState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStateMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
