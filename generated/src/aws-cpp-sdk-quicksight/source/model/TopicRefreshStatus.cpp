/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRefreshStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TopicRefreshStatusMapper
      {

        static constexpr uint32_t INITIALIZED_HASH = ConstExprHashingUtils::HashString("INITIALIZED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        TopicRefreshStatus GetTopicRefreshStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return TopicRefreshStatus::INITIALIZED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return TopicRefreshStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TopicRefreshStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TopicRefreshStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return TopicRefreshStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicRefreshStatus>(hashCode);
          }

          return TopicRefreshStatus::NOT_SET;
        }

        Aws::String GetNameForTopicRefreshStatus(TopicRefreshStatus enumValue)
        {
          switch(enumValue)
          {
          case TopicRefreshStatus::NOT_SET:
            return {};
          case TopicRefreshStatus::INITIALIZED:
            return "INITIALIZED";
          case TopicRefreshStatus::RUNNING:
            return "RUNNING";
          case TopicRefreshStatus::FAILED:
            return "FAILED";
          case TopicRefreshStatus::COMPLETED:
            return "COMPLETED";
          case TopicRefreshStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicRefreshStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
