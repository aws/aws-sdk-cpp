/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SearchRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SearchRecord::SearchRecord() : 
    m_trainingJobHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_trialComponentHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_modelPackageHasBeenSet(false),
    m_modelPackageGroupHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_pipelineExecutionHasBeenSet(false),
    m_featureGroupHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_featureMetadataHasBeenSet(false),
    m_hyperParameterTuningJobHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelCardHasBeenSet(false)
{
}

SearchRecord::SearchRecord(JsonView jsonValue) : 
    m_trainingJobHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_trialComponentHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_modelPackageHasBeenSet(false),
    m_modelPackageGroupHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_pipelineExecutionHasBeenSet(false),
    m_featureGroupHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_featureMetadataHasBeenSet(false),
    m_hyperParameterTuningJobHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelCardHasBeenSet(false)
{
  *this = jsonValue;
}

SearchRecord& SearchRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJob"))
  {
    m_trainingJob = jsonValue.GetObject("TrainingJob");

    m_trainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Experiment"))
  {
    m_experiment = jsonValue.GetObject("Experiment");

    m_experimentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Trial"))
  {
    m_trial = jsonValue.GetObject("Trial");

    m_trialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponent"))
  {
    m_trialComponent = jsonValue.GetObject("TrialComponent");

    m_trialComponentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetObject("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackage"))
  {
    m_modelPackage = jsonValue.GetObject("ModelPackage");

    m_modelPackageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroup"))
  {
    m_modelPackageGroup = jsonValue.GetObject("ModelPackageGroup");

    m_modelPackageGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pipeline"))
  {
    m_pipeline = jsonValue.GetObject("Pipeline");

    m_pipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecution"))
  {
    m_pipelineExecution = jsonValue.GetObject("PipelineExecution");

    m_pipelineExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureGroup"))
  {
    m_featureGroup = jsonValue.GetObject("FeatureGroup");

    m_featureGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Project"))
  {
    m_project = jsonValue.GetObject("Project");

    m_projectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureMetadata"))
  {
    m_featureMetadata = jsonValue.GetObject("FeatureMetadata");

    m_featureMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJob"))
  {
    m_hyperParameterTuningJob = jsonValue.GetObject("HyperParameterTuningJob");

    m_hyperParameterTuningJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetObject("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCard"))
  {
    m_modelCard = jsonValue.GetObject("ModelCard");

    m_modelCardHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchRecord::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobHasBeenSet)
  {
   payload.WithObject("TrainingJob", m_trainingJob.Jsonize());

  }

  if(m_experimentHasBeenSet)
  {
   payload.WithObject("Experiment", m_experiment.Jsonize());

  }

  if(m_trialHasBeenSet)
  {
   payload.WithObject("Trial", m_trial.Jsonize());

  }

  if(m_trialComponentHasBeenSet)
  {
   payload.WithObject("TrialComponent", m_trialComponent.Jsonize());

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("Endpoint", m_endpoint.Jsonize());

  }

  if(m_modelPackageHasBeenSet)
  {
   payload.WithObject("ModelPackage", m_modelPackage.Jsonize());

  }

  if(m_modelPackageGroupHasBeenSet)
  {
   payload.WithObject("ModelPackageGroup", m_modelPackageGroup.Jsonize());

  }

  if(m_pipelineHasBeenSet)
  {
   payload.WithObject("Pipeline", m_pipeline.Jsonize());

  }

  if(m_pipelineExecutionHasBeenSet)
  {
   payload.WithObject("PipelineExecution", m_pipelineExecution.Jsonize());

  }

  if(m_featureGroupHasBeenSet)
  {
   payload.WithObject("FeatureGroup", m_featureGroup.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("Project", m_project.Jsonize());

  }

  if(m_featureMetadataHasBeenSet)
  {
   payload.WithObject("FeatureMetadata", m_featureMetadata.Jsonize());

  }

  if(m_hyperParameterTuningJobHasBeenSet)
  {
   payload.WithObject("HyperParameterTuningJob", m_hyperParameterTuningJob.Jsonize());

  }

  if(m_modelHasBeenSet)
  {
   payload.WithObject("Model", m_model.Jsonize());

  }

  if(m_modelCardHasBeenSet)
  {
   payload.WithObject("ModelCard", m_modelCard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
