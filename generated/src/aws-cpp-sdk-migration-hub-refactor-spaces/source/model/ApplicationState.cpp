/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ApplicationState.h>
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
      namespace ApplicationStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        ApplicationState GetApplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ApplicationState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ApplicationState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApplicationState::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ApplicationState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationState>(hashCode);
          }

          return ApplicationState::NOT_SET;
        }

        Aws::String GetNameForApplicationState(ApplicationState enumValue)
        {
          switch(enumValue)
          {
          case ApplicationState::NOT_SET:
            return {};
          case ApplicationState::CREATING:
            return "CREATING";
          case ApplicationState::ACTIVE:
            return "ACTIVE";
          case ApplicationState::DELETING:
            return "DELETING";
          case ApplicationState::FAILED:
            return "FAILED";
          case ApplicationState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStateMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
