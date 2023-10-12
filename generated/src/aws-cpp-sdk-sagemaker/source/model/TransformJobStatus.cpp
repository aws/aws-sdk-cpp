/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformJobStatus.h>
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
      namespace TransformJobStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        TransformJobStatus GetTransformJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return TransformJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return TransformJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return TransformJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return TransformJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return TransformJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformJobStatus>(hashCode);
          }

          return TransformJobStatus::NOT_SET;
        }

        Aws::String GetNameForTransformJobStatus(TransformJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TransformJobStatus::NOT_SET:
            return {};
          case TransformJobStatus::InProgress:
            return "InProgress";
          case TransformJobStatus::Completed:
            return "Completed";
          case TransformJobStatus::Failed:
            return "Failed";
          case TransformJobStatus::Stopping:
            return "Stopping";
          case TransformJobStatus::Stopped:
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

      } // namespace TransformJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
