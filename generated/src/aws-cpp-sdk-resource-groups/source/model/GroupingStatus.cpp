/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupingStatus.h>
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
      namespace GroupingStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        GroupingStatus GetGroupingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return GroupingStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GroupingStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return GroupingStatus::IN_PROGRESS;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return GroupingStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupingStatus>(hashCode);
          }

          return GroupingStatus::NOT_SET;
        }

        Aws::String GetNameForGroupingStatus(GroupingStatus enumValue)
        {
          switch(enumValue)
          {
          case GroupingStatus::NOT_SET:
            return {};
          case GroupingStatus::SUCCESS:
            return "SUCCESS";
          case GroupingStatus::FAILED:
            return "FAILED";
          case GroupingStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case GroupingStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingStatusMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
