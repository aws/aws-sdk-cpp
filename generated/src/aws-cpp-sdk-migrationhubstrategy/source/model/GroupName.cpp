/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GroupName.h>
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
      namespace GroupNameMapper
      {

        static const int ExternalId_HASH = HashingUtils::HashString("ExternalId");
        static const int ExternalSourceType_HASH = HashingUtils::HashString("ExternalSourceType");


        GroupName GetGroupNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExternalId_HASH)
          {
            return GroupName::ExternalId;
          }
          else if (hashCode == ExternalSourceType_HASH)
          {
            return GroupName::ExternalSourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupName>(hashCode);
          }

          return GroupName::NOT_SET;
        }

        Aws::String GetNameForGroupName(GroupName enumValue)
        {
          switch(enumValue)
          {
          case GroupName::NOT_SET:
            return {};
          case GroupName::ExternalId:
            return "ExternalId";
          case GroupName::ExternalSourceType:
            return "ExternalSourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupNameMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
