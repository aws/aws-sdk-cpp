/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceType.h>
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
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t TrainingJob_HASH = ConstExprHashingUtils::HashString("TrainingJob");
        static constexpr uint32_t Experiment_HASH = ConstExprHashingUtils::HashString("Experiment");
        static constexpr uint32_t ExperimentTrial_HASH = ConstExprHashingUtils::HashString("ExperimentTrial");
        static constexpr uint32_t ExperimentTrialComponent_HASH = ConstExprHashingUtils::HashString("ExperimentTrialComponent");
        static constexpr uint32_t Endpoint_HASH = ConstExprHashingUtils::HashString("Endpoint");
        static constexpr uint32_t ModelPackage_HASH = ConstExprHashingUtils::HashString("ModelPackage");
        static constexpr uint32_t ModelPackageGroup_HASH = ConstExprHashingUtils::HashString("ModelPackageGroup");
        static constexpr uint32_t Pipeline_HASH = ConstExprHashingUtils::HashString("Pipeline");
        static constexpr uint32_t PipelineExecution_HASH = ConstExprHashingUtils::HashString("PipelineExecution");
        static constexpr uint32_t FeatureGroup_HASH = ConstExprHashingUtils::HashString("FeatureGroup");
        static constexpr uint32_t Project_HASH = ConstExprHashingUtils::HashString("Project");
        static constexpr uint32_t FeatureMetadata_HASH = ConstExprHashingUtils::HashString("FeatureMetadata");
        static constexpr uint32_t HyperParameterTuningJob_HASH = ConstExprHashingUtils::HashString("HyperParameterTuningJob");
        static constexpr uint32_t ModelCard_HASH = ConstExprHashingUtils::HashString("ModelCard");
        static constexpr uint32_t Model_HASH = ConstExprHashingUtils::HashString("Model");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TrainingJob_HASH)
          {
            return ResourceType::TrainingJob;
          }
          else if (hashCode == Experiment_HASH)
          {
            return ResourceType::Experiment;
          }
          else if (hashCode == ExperimentTrial_HASH)
          {
            return ResourceType::ExperimentTrial;
          }
          else if (hashCode == ExperimentTrialComponent_HASH)
          {
            return ResourceType::ExperimentTrialComponent;
          }
          else if (hashCode == Endpoint_HASH)
          {
            return ResourceType::Endpoint;
          }
          else if (hashCode == ModelPackage_HASH)
          {
            return ResourceType::ModelPackage;
          }
          else if (hashCode == ModelPackageGroup_HASH)
          {
            return ResourceType::ModelPackageGroup;
          }
          else if (hashCode == Pipeline_HASH)
          {
            return ResourceType::Pipeline;
          }
          else if (hashCode == PipelineExecution_HASH)
          {
            return ResourceType::PipelineExecution;
          }
          else if (hashCode == FeatureGroup_HASH)
          {
            return ResourceType::FeatureGroup;
          }
          else if (hashCode == Project_HASH)
          {
            return ResourceType::Project;
          }
          else if (hashCode == FeatureMetadata_HASH)
          {
            return ResourceType::FeatureMetadata;
          }
          else if (hashCode == HyperParameterTuningJob_HASH)
          {
            return ResourceType::HyperParameterTuningJob;
          }
          else if (hashCode == ModelCard_HASH)
          {
            return ResourceType::ModelCard;
          }
          else if (hashCode == Model_HASH)
          {
            return ResourceType::Model;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::TrainingJob:
            return "TrainingJob";
          case ResourceType::Experiment:
            return "Experiment";
          case ResourceType::ExperimentTrial:
            return "ExperimentTrial";
          case ResourceType::ExperimentTrialComponent:
            return "ExperimentTrialComponent";
          case ResourceType::Endpoint:
            return "Endpoint";
          case ResourceType::ModelPackage:
            return "ModelPackage";
          case ResourceType::ModelPackageGroup:
            return "ModelPackageGroup";
          case ResourceType::Pipeline:
            return "Pipeline";
          case ResourceType::PipelineExecution:
            return "PipelineExecution";
          case ResourceType::FeatureGroup:
            return "FeatureGroup";
          case ResourceType::Project:
            return "Project";
          case ResourceType::FeatureMetadata:
            return "FeatureMetadata";
          case ResourceType::HyperParameterTuningJob:
            return "HyperParameterTuningJob";
          case ResourceType::ModelCard:
            return "ModelCard";
          case ResourceType::Model:
            return "Model";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
