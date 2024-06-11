/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingJob.h>
#include <aws/sagemaker/model/Experiment.h>
#include <aws/sagemaker/model/Trial.h>
#include <aws/sagemaker/model/TrialComponent.h>
#include <aws/sagemaker/model/Endpoint.h>
#include <aws/sagemaker/model/ModelPackage.h>
#include <aws/sagemaker/model/ModelPackageGroup.h>
#include <aws/sagemaker/model/Pipeline.h>
#include <aws/sagemaker/model/PipelineExecution.h>
#include <aws/sagemaker/model/FeatureGroup.h>
#include <aws/sagemaker/model/FeatureMetadata.h>
#include <aws/sagemaker/model/Project.h>
#include <aws/sagemaker/model/HyperParameterTuningJobSearchEntity.h>
#include <aws/sagemaker/model/ModelCard.h>
#include <aws/sagemaker/model/ModelDashboardModel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A single resource returned as part of the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
   * API response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SearchRecord">AWS
   * API Reference</a></p>
   */
  class SearchRecord
  {
  public:
    AWS_SAGEMAKER_API SearchRecord();
    AWS_SAGEMAKER_API SearchRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SearchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties of a training job.</p>
     */
    inline const TrainingJob& GetTrainingJob() const{ return m_trainingJob; }
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }
    inline void SetTrainingJob(const TrainingJob& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }
    inline void SetTrainingJob(TrainingJob&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }
    inline SearchRecord& WithTrainingJob(const TrainingJob& value) { SetTrainingJob(value); return *this;}
    inline SearchRecord& WithTrainingJob(TrainingJob&& value) { SetTrainingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of an experiment.</p>
     */
    inline const Experiment& GetExperiment() const{ return m_experiment; }
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }
    inline void SetExperiment(const Experiment& value) { m_experimentHasBeenSet = true; m_experiment = value; }
    inline void SetExperiment(Experiment&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }
    inline SearchRecord& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}
    inline SearchRecord& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a trial.</p>
     */
    inline const Trial& GetTrial() const{ return m_trial; }
    inline bool TrialHasBeenSet() const { return m_trialHasBeenSet; }
    inline void SetTrial(const Trial& value) { m_trialHasBeenSet = true; m_trial = value; }
    inline void SetTrial(Trial&& value) { m_trialHasBeenSet = true; m_trial = std::move(value); }
    inline SearchRecord& WithTrial(const Trial& value) { SetTrial(value); return *this;}
    inline SearchRecord& WithTrial(Trial&& value) { SetTrial(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a trial component.</p>
     */
    inline const TrialComponent& GetTrialComponent() const{ return m_trialComponent; }
    inline bool TrialComponentHasBeenSet() const { return m_trialComponentHasBeenSet; }
    inline void SetTrialComponent(const TrialComponent& value) { m_trialComponentHasBeenSet = true; m_trialComponent = value; }
    inline void SetTrialComponent(TrialComponent&& value) { m_trialComponentHasBeenSet = true; m_trialComponent = std::move(value); }
    inline SearchRecord& WithTrialComponent(const TrialComponent& value) { SetTrialComponent(value); return *this;}
    inline SearchRecord& WithTrialComponent(TrialComponent&& value) { SetTrialComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline SearchRecord& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}
    inline SearchRecord& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelPackage& GetModelPackage() const{ return m_modelPackage; }
    inline bool ModelPackageHasBeenSet() const { return m_modelPackageHasBeenSet; }
    inline void SetModelPackage(const ModelPackage& value) { m_modelPackageHasBeenSet = true; m_modelPackage = value; }
    inline void SetModelPackage(ModelPackage&& value) { m_modelPackageHasBeenSet = true; m_modelPackage = std::move(value); }
    inline SearchRecord& WithModelPackage(const ModelPackage& value) { SetModelPackage(value); return *this;}
    inline SearchRecord& WithModelPackage(ModelPackage&& value) { SetModelPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelPackageGroup& GetModelPackageGroup() const{ return m_modelPackageGroup; }
    inline bool ModelPackageGroupHasBeenSet() const { return m_modelPackageGroupHasBeenSet; }
    inline void SetModelPackageGroup(const ModelPackageGroup& value) { m_modelPackageGroupHasBeenSet = true; m_modelPackageGroup = value; }
    inline void SetModelPackageGroup(ModelPackageGroup&& value) { m_modelPackageGroupHasBeenSet = true; m_modelPackageGroup = std::move(value); }
    inline SearchRecord& WithModelPackageGroup(const ModelPackageGroup& value) { SetModelPackageGroup(value); return *this;}
    inline SearchRecord& WithModelPackageGroup(ModelPackageGroup&& value) { SetModelPackageGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }
    inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }
    inline void SetPipeline(const Pipeline& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }
    inline void SetPipeline(Pipeline&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::move(value); }
    inline SearchRecord& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}
    inline SearchRecord& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const PipelineExecution& GetPipelineExecution() const{ return m_pipelineExecution; }
    inline bool PipelineExecutionHasBeenSet() const { return m_pipelineExecutionHasBeenSet; }
    inline void SetPipelineExecution(const PipelineExecution& value) { m_pipelineExecutionHasBeenSet = true; m_pipelineExecution = value; }
    inline void SetPipelineExecution(PipelineExecution&& value) { m_pipelineExecutionHasBeenSet = true; m_pipelineExecution = std::move(value); }
    inline SearchRecord& WithPipelineExecution(const PipelineExecution& value) { SetPipelineExecution(value); return *this;}
    inline SearchRecord& WithPipelineExecution(PipelineExecution&& value) { SetPipelineExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FeatureGroup& GetFeatureGroup() const{ return m_featureGroup; }
    inline bool FeatureGroupHasBeenSet() const { return m_featureGroupHasBeenSet; }
    inline void SetFeatureGroup(const FeatureGroup& value) { m_featureGroupHasBeenSet = true; m_featureGroup = value; }
    inline void SetFeatureGroup(FeatureGroup&& value) { m_featureGroupHasBeenSet = true; m_featureGroup = std::move(value); }
    inline SearchRecord& WithFeatureGroup(const FeatureGroup& value) { SetFeatureGroup(value); return *this;}
    inline SearchRecord& WithFeatureGroup(FeatureGroup&& value) { SetFeatureGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature metadata used to search through the features.</p>
     */
    inline const FeatureMetadata& GetFeatureMetadata() const{ return m_featureMetadata; }
    inline bool FeatureMetadataHasBeenSet() const { return m_featureMetadataHasBeenSet; }
    inline void SetFeatureMetadata(const FeatureMetadata& value) { m_featureMetadataHasBeenSet = true; m_featureMetadata = value; }
    inline void SetFeatureMetadata(FeatureMetadata&& value) { m_featureMetadataHasBeenSet = true; m_featureMetadata = std::move(value); }
    inline SearchRecord& WithFeatureMetadata(const FeatureMetadata& value) { SetFeatureMetadata(value); return *this;}
    inline SearchRecord& WithFeatureMetadata(FeatureMetadata&& value) { SetFeatureMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a project.</p>
     */
    inline const Project& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Project& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Project&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline SearchRecord& WithProject(const Project& value) { SetProject(value); return *this;}
    inline SearchRecord& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a hyperparameter tuning job.</p>
     */
    inline const HyperParameterTuningJobSearchEntity& GetHyperParameterTuningJob() const{ return m_hyperParameterTuningJob; }
    inline bool HyperParameterTuningJobHasBeenSet() const { return m_hyperParameterTuningJobHasBeenSet; }
    inline void SetHyperParameterTuningJob(const HyperParameterTuningJobSearchEntity& value) { m_hyperParameterTuningJobHasBeenSet = true; m_hyperParameterTuningJob = value; }
    inline void SetHyperParameterTuningJob(HyperParameterTuningJobSearchEntity&& value) { m_hyperParameterTuningJobHasBeenSet = true; m_hyperParameterTuningJob = std::move(value); }
    inline SearchRecord& WithHyperParameterTuningJob(const HyperParameterTuningJobSearchEntity& value) { SetHyperParameterTuningJob(value); return *this;}
    inline SearchRecord& WithHyperParameterTuningJob(HyperParameterTuningJobSearchEntity&& value) { SetHyperParameterTuningJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon SageMaker Model Card that documents details about a machine
     * learning model.</p>
     */
    inline const ModelCard& GetModelCard() const{ return m_modelCard; }
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }
    inline void SetModelCard(const ModelCard& value) { m_modelCardHasBeenSet = true; m_modelCard = value; }
    inline void SetModelCard(ModelCard&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::move(value); }
    inline SearchRecord& WithModelCard(const ModelCard& value) { SetModelCard(value); return *this;}
    inline SearchRecord& WithModelCard(ModelCard&& value) { SetModelCard(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelDashboardModel& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const ModelDashboardModel& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(ModelDashboardModel&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline SearchRecord& WithModel(const ModelDashboardModel& value) { SetModel(value); return *this;}
    inline SearchRecord& WithModel(ModelDashboardModel&& value) { SetModel(std::move(value)); return *this;}
    ///@}
  private:

    TrainingJob m_trainingJob;
    bool m_trainingJobHasBeenSet = false;

    Experiment m_experiment;
    bool m_experimentHasBeenSet = false;

    Trial m_trial;
    bool m_trialHasBeenSet = false;

    TrialComponent m_trialComponent;
    bool m_trialComponentHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    ModelPackage m_modelPackage;
    bool m_modelPackageHasBeenSet = false;

    ModelPackageGroup m_modelPackageGroup;
    bool m_modelPackageGroupHasBeenSet = false;

    Pipeline m_pipeline;
    bool m_pipelineHasBeenSet = false;

    PipelineExecution m_pipelineExecution;
    bool m_pipelineExecutionHasBeenSet = false;

    FeatureGroup m_featureGroup;
    bool m_featureGroupHasBeenSet = false;

    FeatureMetadata m_featureMetadata;
    bool m_featureMetadataHasBeenSet = false;

    Project m_project;
    bool m_projectHasBeenSet = false;

    HyperParameterTuningJobSearchEntity m_hyperParameterTuningJob;
    bool m_hyperParameterTuningJobHasBeenSet = false;

    ModelCard m_modelCard;
    bool m_modelCardHasBeenSet = false;

    ModelDashboardModel m_model;
    bool m_modelHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
