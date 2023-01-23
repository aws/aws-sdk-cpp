/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroups
  {
    namespace Model
    {
      namespace GroupConfigurationStatusMapper
      {

        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        GroupConfigurationStatus GetGroupConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATING_HASH)
          {
            return GroupConfigurationStatus::UPDATING;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return GroupConfigurationStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return GroupConfigurationStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupConfigurationStatus>(hashCode);
          }

          return GroupConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForGroupConfigurationStatus(GroupConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case GroupConfigurationStatus::UPDATING:
            return "UPDATING";
          case GroupConfigurationStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case GroupConfigurationStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupConfigurationStatusMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
