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

        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int MaxCandidatesReached_HASH = HashingUtils::HashString("MaxCandidatesReached");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int MaxAutoMLJobRuntimeReached_HASH = HashingUtils::HashString("MaxAutoMLJobRuntimeReached");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int CandidateDefinitionsGenerated_HASH = HashingUtils::HashString("CandidateDefinitionsGenerated");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int ExplainabilityError_HASH = HashingUtils::HashString("ExplainabilityError");
        static const int DeployingModel_HASH = HashingUtils::HashString("DeployingModel");
        static const int ModelDeploymentError_HASH = HashingUtils::HashString("ModelDeploymentError");
        static const int GeneratingModelInsightsReport_HASH = HashingUtils::HashString("GeneratingModelInsightsReport");
        static const int ModelInsightsError_HASH = HashingUtils::HashString("ModelInsightsError");
        static const int AnalyzingData_HASH = HashingUtils::HashString("AnalyzingData");
        static const int FeatureEngineering_HASH = HashingUtils::HashString("FeatureEngineering");
        static const int ModelTuning_HASH = HashingUtils::HashString("ModelTuning");
        static const int GeneratingExplainabilityReport_HASH = HashingUtils::HashString("GeneratingExplainabilityReport");
        static const int TrainingModels_HASH = HashingUtils::HashString("TrainingModels");
        static const int PreTraining_HASH = HashingUtils::HashString("PreTraining");


        AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return AutoMLJobSecondaryStatus::Starting;
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
          else if (hashCode == GeneratingExplainabilityReport_HASH)
          {
            return AutoMLJobSecondaryStatus::GeneratingExplainabilityReport;
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
          case AutoMLJobSecondaryStatus::AnalyzingData:
            return "AnalyzingData";
          case AutoMLJobSecondaryStatus::FeatureEngineering:
            return "FeatureEngineering";
          case AutoMLJobSecondaryStatus::ModelTuning:
            return "ModelTuning";
          case AutoMLJobSecondaryStatus::GeneratingExplainabilityReport:
            return "GeneratingExplainabilityReport";
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
