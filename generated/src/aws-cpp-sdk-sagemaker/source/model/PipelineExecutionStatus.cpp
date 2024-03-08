/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExecutionStatus.h>
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
      namespace PipelineExecutionStatusMapper
      {

        static const int Executing_HASH = HashingUtils::HashString("Executing");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");


        PipelineExecutionStatus GetPipelineExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Executing_HASH)
          {
            return PipelineExecutionStatus::Executing;
          }
          else if (hashCode == Stopping_HASH)
          {
            return PipelineExecutionStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return PipelineExecutionStatus::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return PipelineExecutionStatus::Failed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return PipelineExecutionStatus::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineExecutionStatus>(hashCode);
          }

          return PipelineExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForPipelineExecutionStatus(PipelineExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case PipelineExecutionStatus::NOT_SET:
            return {};
          case PipelineExecutionStatus::Executing:
            return "Executing";
          case PipelineExecutionStatus::Stopping:
            return "Stopping";
          case PipelineExecutionStatus::Stopped:
            return "Stopped";
          case PipelineExecutionStatus::Failed:
            return "Failed";
          case PipelineExecutionStatus::Succeeded:
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

      } // namespace PipelineExecutionStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
