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

        static constexpr uint32_t Executing_HASH = ConstExprHashingUtils::HashString("Executing");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");


        PipelineExecutionStatus GetPipelineExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
