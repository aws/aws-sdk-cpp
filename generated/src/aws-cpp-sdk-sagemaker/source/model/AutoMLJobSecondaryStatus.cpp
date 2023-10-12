/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobSecondaryStatus.h>
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
      namespace AutoMLJobSecondaryStatusMapper
      {

        static constexpr uint32_t Starting_HASH = ConstExprHashingUtils::HashString("Starting");
        static constexpr uint32_t AnalyzingData_HASH = ConstExprHashingUtils::HashString("AnalyzingData");
        static constexpr uint32_t FeatureEngineering_HASH = ConstExprHashingUtils::HashString("FeatureEngineering");
        static constexpr uint32_t ModelTuning_HASH = ConstExprHashingUtils::HashString("ModelTuning");
        static constexpr uint32_t MaxCandidatesReached_HASH = ConstExprHashingUtils::HashString("MaxCandidatesReached");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t MaxAutoMLJobRuntimeReached_HASH = ConstExprHashingUtils::HashString("MaxAutoMLJobRuntimeReached");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t CandidateDefinitionsGenerated_HASH = ConstExprHashingUtils::HashString("CandidateDefinitionsGenerated");
        static constexpr uint32_t GeneratingExplainabilityReport_HASH = ConstExprHashingUtils::HashString("GeneratingExplainabilityReport");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t ExplainabilityError_HASH = ConstExprHashingUtils::HashString("ExplainabilityError");
        static constexpr uint32_t DeployingModel_HASH = ConstExprHashingUtils::HashString("DeployingModel");
        static constexpr uint32_t ModelDeploymentError_HASH = ConstExprHashingUtils::HashString("ModelDeploymentError");
        static constexpr uint32_t GeneratingModelInsightsReport_HASH = ConstExprHashingUtils::HashString("GeneratingModelInsightsReport");
        static constexpr uint32_t ModelInsightsError_HASH = ConstExprHashingUtils::HashString("ModelInsightsError");
        static constexpr uint32_t TrainingModels_HASH = ConstExprHashingUtils::HashString("TrainingModels");
        static constexpr uint32_t PreTraining_HASH = ConstExprHashingUtils::HashString("PreTraining");


        AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return AutoMLJobSecondaryStatus::Starting;
          }
          else if (hashCode == AnalyzingData_HASH)
          {
            return AutoMLJobSecondaryStatus::AnalyzingData;
          }
          else if (hashCode == FeatureEngineering_HASH)
          {
            return AutoMLJobSecondaryStatus::FeatureEngineering;
          }
          else if (hashCode == ModelTuning_HASH)
          {
            return AutoMLJobSecondaryStatus::ModelTuning;
          }
          else if (hashCode == MaxCandidatesReached_HASH)
          {
            return AutoMLJobSecondaryStatus::MaxCandidatesReached;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutoMLJobSecondaryStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return AutoMLJobSecondaryStatus::Stopped;
          }
          else if (hashCode == MaxAutoMLJobRuntimeReached_HASH)
          {
            return AutoMLJobSecondaryStatus::MaxAutoMLJobRuntimeReached;
          }
          else if (hashCode == Stopping_HASH)
          {
            return AutoMLJobSecondaryStatus::Stopping;
          }
          else if (hashCode == CandidateDefinitionsGenerated_HASH)
          {
            return AutoMLJobSecondaryStatus::CandidateDefinitionsGenerated;
          }
          else if (hashCode == GeneratingExplainabilityReport_HASH)
          {
            return AutoMLJobSecondaryStatus::GeneratingExplainabilityReport;
          }
          else if (hashCode == Completed_HASH)
          {
            return AutoMLJobSecondaryStatus::Completed;
          }
          else if (hashCode == ExplainabilityError_HASH)
          {
            return AutoMLJobSecondaryStatus::ExplainabilityError;
          }
          else if (hashCode == DeployingModel_HASH)
          {
            return AutoMLJobSecondaryStatus::DeployingModel;
          }
          else if (hashCode == ModelDeploymentError_HASH)
          {
            return AutoMLJobSecondaryStatus::ModelDeploymentError;
          }
          else if (hashCode == GeneratingModelInsightsReport_HASH)
          {
            return AutoMLJobSecondaryStatus::GeneratingModelInsightsReport;
          }
          else if (hashCode == ModelInsightsError_HASH)
          {
            return AutoMLJobSecondaryStatus::ModelInsightsError;
          }
          else if (hashCode == TrainingModels_HASH)
          {
            return AutoMLJobSecondaryStatus::TrainingModels;
          }
          else if (hashCode == PreTraining_HASH)
          {
            return AutoMLJobSecondaryStatus::PreTraining;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLJobSecondaryStatus>(hashCode);
          }

          return AutoMLJobSecondaryStatus::NOT_SET;
        }

        Aws::String GetNameForAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoMLJobSecondaryStatus::NOT_SET:
            return {};
          case AutoMLJobSecondaryStatus::Starting:
            return "Starting";
          case AutoMLJobSecondaryStatus::AnalyzingData:
            return "AnalyzingData";
          case AutoMLJobSecondaryStatus::FeatureEngineering:
            return "FeatureEngineering";
          case AutoMLJobSecondaryStatus::ModelTuning:
            return "ModelTuning";
          case AutoMLJobSecondaryStatus::MaxCandidatesReached:
            return "MaxCandidatesReached";
          case AutoMLJobSecondaryStatus::Failed:
            return "Failed";
          case AutoMLJobSecondaryStatus::Stopped:
            return "Stopped";
          case AutoMLJobSecondaryStatus::MaxAutoMLJobRuntimeReached:
            return "MaxAutoMLJobRuntimeReached";
          case AutoMLJobSecondaryStatus::Stopping:
            return "Stopping";
          case AutoMLJobSecondaryStatus::CandidateDefinitionsGenerated:
            return "CandidateDefinitionsGenerated";
          case AutoMLJobSecondaryStatus::GeneratingExplainabilityReport:
            return "GeneratingExplainabilityReport";
          case AutoMLJobSecondaryStatus::Completed:
            return "Completed";
          case AutoMLJobSecondaryStatus::ExplainabilityError:
            return "ExplainabilityError";
          case AutoMLJobSecondaryStatus::DeployingModel:
            return "DeployingModel";
          case AutoMLJobSecondaryStatus::ModelDeploymentError:
            return "ModelDeploymentError";
          case AutoMLJobSecondaryStatus::GeneratingModelInsightsReport:
            return "GeneratingModelInsightsReport";
          case AutoMLJobSecondaryStatus::ModelInsightsError:
            return "ModelInsightsError";
          case AutoMLJobSecondaryStatus::TrainingModels:
            return "TrainingModels";
          case AutoMLJobSecondaryStatus::PreTraining:
            return "PreTraining";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLJobSecondaryStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
