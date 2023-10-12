/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AugmentedAIRuntime
  {
    namespace Model
    {
      namespace HumanLoopStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");


        HumanLoopStatus GetHumanLoopStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return HumanLoopStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return HumanLoopStatus::Failed;
          }
          else if (hashCode == Completed_HASH)
          {
            return HumanLoopStatus::Completed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return HumanLoopStatus::Stopped;
          }
          else if (hashCode == Stopping_HASH)
          {
            return HumanLoopStatus::Stopping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HumanLoopStatus>(hashCode);
          }

          return HumanLoopStatus::NOT_SET;
        }

        Aws::String GetNameForHumanLoopStatus(HumanLoopStatus enumValue)
        {
          switch(enumValue)
          {
          case HumanLoopStatus::NOT_SET:
            return {};
          case HumanLoopStatus::InProgress:
            return "InProgress";
          case HumanLoopStatus::Failed:
            return "Failed";
          case HumanLoopStatus::Completed:
            return "Completed";
          case HumanLoopStatus::Stopped:
            return "Stopped";
          case HumanLoopStatus::Stopping:
            return "Stopping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HumanLoopStatusMapper
    } // namespace Model
  } // namespace AugmentedAIRuntime
} // namespace Aws
