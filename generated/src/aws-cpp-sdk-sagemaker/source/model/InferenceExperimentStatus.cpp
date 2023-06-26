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

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        InferenceExperimentStatus GetInferenceExperimentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
