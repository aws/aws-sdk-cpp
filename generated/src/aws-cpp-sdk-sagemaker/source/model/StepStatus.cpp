/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StepStatus.h>
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
      namespace StepStatusMapper
      {

        static constexpr uint32_t Starting_HASH = ConstExprHashingUtils::HashString("Starting");
        static constexpr uint32_t Executing_HASH = ConstExprHashingUtils::HashString("Executing");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");


        StepStatus GetStepStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return StepStatus::Starting;
          }
          else if (hashCode == Executing_HASH)
          {
            return StepStatus::Executing;
          }
          else if (hashCode == Stopping_HASH)
          {
            return StepStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return StepStatus::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return StepStatus::Failed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return StepStatus::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepStatus>(hashCode);
          }

          return StepStatus::NOT_SET;
        }

        Aws::String GetNameForStepStatus(StepStatus enumValue)
        {
          switch(enumValue)
          {
          case StepStatus::NOT_SET:
            return {};
          case StepStatus::Starting:
            return "Starting";
          case StepStatus::Executing:
            return "Executing";
          case StepStatus::Stopping:
            return "Stopping";
          case StepStatus::Stopped:
            return "Stopped";
          case StepStatus::Failed:
            return "Failed";
          case StepStatus::Succeeded:
            return "Succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
