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

        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int Executing_HASH = HashingUtils::HashString("Executing");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");


        StepStatus GetStepStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
