/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScheduleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ScheduleStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Scheduled_HASH = ConstExprHashingUtils::HashString("Scheduled");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        ScheduleStatus GetScheduleStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ScheduleStatus::Pending;
          }
          else if (hashCode == Failed_HASH)
          {
            return ScheduleStatus::Failed;
          }
          else if (hashCode == Scheduled_HASH)
          {
            return ScheduleStatus::Scheduled;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ScheduleStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleStatus>(hashCode);
          }

          return ScheduleStatus::NOT_SET;
        }

        Aws::String GetNameForScheduleStatus(ScheduleStatus enumValue)
        {
          switch(enumValue)
          {
          case ScheduleStatus::NOT_SET:
            return {};
          case ScheduleStatus::Pending:
            return "Pending";
          case ScheduleStatus::Failed:
            return "Failed";
          case ScheduleStatus::Scheduled:
            return "Scheduled";
          case ScheduleStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
