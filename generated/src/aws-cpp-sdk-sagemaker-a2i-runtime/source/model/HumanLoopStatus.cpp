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

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");


        HumanLoopStatus GetHumanLoopStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
