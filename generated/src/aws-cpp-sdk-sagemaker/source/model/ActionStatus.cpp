/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ActionStatus.h>
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
      namespace ActionStatusMapper
      {

        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        ActionStatus GetActionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unknown_HASH)
          {
            return ActionStatus::Unknown;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ActionStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ActionStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ActionStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ActionStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ActionStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionStatus>(hashCode);
          }

          return ActionStatus::NOT_SET;
        }

        Aws::String GetNameForActionStatus(ActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionStatus::NOT_SET:
            return {};
          case ActionStatus::Unknown:
            return "Unknown";
          case ActionStatus::InProgress:
            return "InProgress";
          case ActionStatus::Completed:
            return "Completed";
          case ActionStatus::Failed:
            return "Failed";
          case ActionStatus::Stopping:
            return "Stopping";
          case ActionStatus::Stopped:
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

      } // namespace ActionStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
