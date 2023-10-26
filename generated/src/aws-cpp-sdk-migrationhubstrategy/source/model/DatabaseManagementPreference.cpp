/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/DatabaseManagementPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace DatabaseManagementPreferenceMapper
      {

        static const int AWS_managed_HASH = HashingUtils::HashString("AWS-managed");
        static const int Self_manage_HASH = HashingUtils::HashString("Self-manage");
        static const int No_preference_HASH = HashingUtils::HashString("No preference");


        DatabaseManagementPreference GetDatabaseManagementPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_managed_HASH)
          {
            return DatabaseManagementPreference::AWS_managed;
          }
          else if (hashCode == Self_manage_HASH)
          {
            return DatabaseManagementPreference::Self_manage;
          }
          else if (hashCode == No_preference_HASH)
          {
            return DatabaseManagementPreference::No_preference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseManagementPreference>(hashCode);
          }

          return DatabaseManagementPreference::NOT_SET;
        }

        Aws::String GetNameForDatabaseManagementPreference(DatabaseManagementPreference enumValue)
        {
          switch(enumValue)
          {
          case DatabaseManagementPreference::NOT_SET:
            return {};
          case DatabaseManagementPreference::AWS_managed:
            return "AWS-managed";
          case DatabaseManagementPreference::Self_manage:
            return "Self-manage";
          case DatabaseManagementPreference::No_preference:
            return "No preference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseManagementPreferenceMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
