/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MlTools.h>
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
      namespace MlToolsMapper
      {

        static const int DataWrangler_HASH = HashingUtils::HashString("DataWrangler");
        static const int FeatureStore_HASH = HashingUtils::HashString("FeatureStore");
        static const int EmrClusters_HASH = HashingUtils::HashString("EmrClusters");
        static const int AutoMl_HASH = HashingUtils::HashString("AutoMl");
        static const int Experiments_HASH = HashingUtils::HashString("Experiments");
        static const int Training_HASH = HashingUtils::HashString("Training");
        static const int ModelEvaluation_HASH = HashingUtils::HashString("ModelEvaluation");
        static const int Pipelines_HASH = HashingUtils::HashString("Pipelines");
        static const int Models_HASH = HashingUtils::HashString("Models");
        static const int JumpStart_HASH = HashingUtils::HashString("JumpStart");
        static const int InferenceRecommender_HASH = HashingUtils::HashString("InferenceRecommender");
        static const int Endpoints_HASH = HashingUtils::HashString("Endpoints");
        static const int Projects_HASH = HashingUtils::HashString("Projects");
        static const int InferenceOptimization_HASH = HashingUtils::HashString("InferenceOptimization");
        static const int PerformanceEvaluation_HASH = HashingUtils::HashString("PerformanceEvaluation");
        static const int LakeraGuard_HASH = HashingUtils::HashString("LakeraGuard");
        static const int Comet_HASH = HashingUtils::HashString("Comet");
        static const int DeepchecksLLMEvaluation_HASH = HashingUtils::HashString("DeepchecksLLMEvaluation");
        static const int Fiddler_HASH = HashingUtils::HashString("Fiddler");
        static const int HyperPodClusters_HASH = HashingUtils::HashString("HyperPodClusters");


        MlTools GetMlToolsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DataWrangler_HASH)
          {
            return MlTools::DataWrangler;
          }
          else if (hashCode == FeatureStore_HASH)
          {
            return MlTools::FeatureStore;
          }
          else if (hashCode == EmrClusters_HASH)
          {
            return MlTools::EmrClusters;
          }
          else if (hashCode == AutoMl_HASH)
          {
            return MlTools::AutoMl;
          }
          else if (hashCode == Experiments_HASH)
          {
            return MlTools::Experiments;
          }
          else if (hashCode == Training_HASH)
          {
            return MlTools::Training;
          }
          else if (hashCode == ModelEvaluation_HASH)
          {
            return MlTools::ModelEvaluation;
          }
          else if (hashCode == Pipelines_HASH)
          {
            return MlTools::Pipelines;
          }
          else if (hashCode == Models_HASH)
          {
            return MlTools::Models;
          }
          else if (hashCode == JumpStart_HASH)
          {
            return MlTools::JumpStart;
          }
          else if (hashCode == InferenceRecommender_HASH)
          {
            return MlTools::InferenceRecommender;
          }
          else if (hashCode == Endpoints_HASH)
          {
            return MlTools::Endpoints;
          }
          else if (hashCode == Projects_HASH)
          {
            return MlTools::Projects;
          }
          else if (hashCode == InferenceOptimization_HASH)
          {
            return MlTools::InferenceOptimization;
          }
          else if (hashCode == PerformanceEvaluation_HASH)
          {
            return MlTools::PerformanceEvaluation;
          }
          else if (hashCode == LakeraGuard_HASH)
          {
            return MlTools::LakeraGuard;
          }
          else if (hashCode == Comet_HASH)
          {
            return MlTools::Comet;
          }
          else if (hashCode == DeepchecksLLMEvaluation_HASH)
          {
            return MlTools::DeepchecksLLMEvaluation;
          }
          else if (hashCode == Fiddler_HASH)
          {
            return MlTools::Fiddler;
          }
          else if (hashCode == HyperPodClusters_HASH)
          {
            return MlTools::HyperPodClusters;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MlTools>(hashCode);
          }

          return MlTools::NOT_SET;
        }

        Aws::String GetNameForMlTools(MlTools enumValue)
        {
          switch(enumValue)
          {
          case MlTools::NOT_SET:
            return {};
          case MlTools::DataWrangler:
            return "DataWrangler";
          case MlTools::FeatureStore:
            return "FeatureStore";
          case MlTools::EmrClusters:
            return "EmrClusters";
          case MlTools::AutoMl:
            return "AutoMl";
          case MlTools::Experiments:
            return "Experiments";
          case MlTools::Training:
            return "Training";
          case MlTools::ModelEvaluation:
            return "ModelEvaluation";
          case MlTools::Pipelines:
            return "Pipelines";
          case MlTools::Models:
            return "Models";
          case MlTools::JumpStart:
            return "JumpStart";
          case MlTools::InferenceRecommender:
            return "InferenceRecommender";
          case MlTools::Endpoints:
            return "Endpoints";
          case MlTools::Projects:
            return "Projects";
          case MlTools::InferenceOptimization:
            return "InferenceOptimization";
          case MlTools::PerformanceEvaluation:
            return "PerformanceEvaluation";
          case MlTools::LakeraGuard:
            return "LakeraGuard";
          case MlTools::Comet:
            return "Comet";
          case MlTools::DeepchecksLLMEvaluation:
            return "DeepchecksLLMEvaluation";
          case MlTools::Fiddler:
            return "Fiddler";
          case MlTools::HyperPodClusters:
            return "HyperPodClusters";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MlToolsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
