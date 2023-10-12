/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExperimentStatus.h>
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
      namespace InferenceExperimentStatusMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Running_HASH = ConstExprHashingUtils::HashString("Running");
        static constexpr uint32_t Starting_HASH = ConstExprHashingUtils::HashString("Starting");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");


        InferenceExperimentStatus GetInferenceExperimentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return InferenceExperimentStatus::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return InferenceExperimentStatus::Created;
          }
          else if (hashCode == Updating_HASH)
          {
            return InferenceExperimentStatus::Updating;
          }
          else if (hashCode == Running_HASH)
          {
            return InferenceExperimentStatus::Running;
          }
          else if (hashCode == Starting_HASH)
          {
            return InferenceExperimentStatus::Starting;
          }
          else if (hashCode == Stopping_HASH)
          {
            return InferenceExperimentStatus::Stopping;
          }
          else if (hashCode == Completed_HASH)
          {
            return InferenceExperimentStatus::Completed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return InferenceExperimentStatus::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceExperimentStatus>(hashCode);
          }

          return InferenceExperimentStatus::NOT_SET;
        }

        Aws::String GetNameForInferenceExperimentStatus(InferenceExperimentStatus enumValue)
        {
          switch(enumValue)
          {
          case InferenceExperimentStatus::NOT_SET:
            return {};
          case InferenceExperimentStatus::Creating:
            return "Creating";
          case InferenceExperimentStatus::Created:
            return "Created";
          case InferenceExperimentStatus::Updating:
            return "Updating";
          case InferenceExperimentStatus::Running:
            return "Running";
          case InferenceExperimentStatus::Starting:
            return "Starting";
          case InferenceExperimentStatus::Stopping:
            return "Stopping";
          case InferenceExperimentStatus::Completed:
            return "Completed";
          case InferenceExperimentStatus::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceExperimentStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
