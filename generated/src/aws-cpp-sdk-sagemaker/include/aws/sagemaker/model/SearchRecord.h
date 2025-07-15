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
#include <aws/sagemaker/model/PipelineVersion.h>
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
    AWS_SAGEMAKER_API SearchRecord() = default;
    AWS_SAGEMAKER_API SearchRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SearchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties of a training job.</p>
     */
    inline const TrainingJob& GetTrainingJob() const { return m_trainingJob; }
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }
    template<typename TrainingJobT = TrainingJob>
    void SetTrainingJob(TrainingJobT&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::forward<TrainingJobT>(value); }
    template<typename TrainingJobT = TrainingJob>
    SearchRecord& WithTrainingJob(TrainingJobT&& value) { SetTrainingJob(std::forward<TrainingJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of an experiment.</p>
     */
    inline const Experiment& GetExperiment() const { return m_experiment; }
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }
    template<typename ExperimentT = Experiment>
    void SetExperiment(ExperimentT&& value) { m_experimentHasBeenSet = true; m_experiment = std::forward<ExperimentT>(value); }
    template<typename ExperimentT = Experiment>
    SearchRecord& WithExperiment(ExperimentT&& value) { SetExperiment(std::forward<ExperimentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a trial.</p>
     */
    inline const Trial& GetTrial() const { return m_trial; }
    inline bool TrialHasBeenSet() const { return m_trialHasBeenSet; }
    template<typename TrialT = Trial>
    void SetTrial(TrialT&& value) { m_trialHasBeenSet = true; m_trial = std::forward<TrialT>(value); }
    template<typename TrialT = Trial>
    SearchRecord& WithTrial(TrialT&& value) { SetTrial(std::forward<TrialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a trial component.</p>
     */
    inline const TrialComponent& GetTrialComponent() const { return m_trialComponent; }
    inline bool TrialComponentHasBeenSet() const { return m_trialComponentHasBeenSet; }
    template<typename TrialComponentT = TrialComponent>
    void SetTrialComponent(TrialComponentT&& value) { m_trialComponentHasBeenSet = true; m_trialComponent = std::forward<TrialComponentT>(value); }
    template<typename TrialComponentT = TrialComponent>
    SearchRecord& WithTrialComponent(TrialComponentT&& value) { SetTrialComponent(std::forward<TrialComponentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Endpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Endpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Endpoint>
    SearchRecord& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelPackage& GetModelPackage() const { return m_modelPackage; }
    inline bool ModelPackageHasBeenSet() const { return m_modelPackageHasBeenSet; }
    template<typename ModelPackageT = ModelPackage>
    void SetModelPackage(ModelPackageT&& value) { m_modelPackageHasBeenSet = true; m_modelPackage = std::forward<ModelPackageT>(value); }
    template<typename ModelPackageT = ModelPackage>
    SearchRecord& WithModelPackage(ModelPackageT&& value) { SetModelPackage(std::forward<ModelPackageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelPackageGroup& GetModelPackageGroup() const { return m_modelPackageGroup; }
    inline bool ModelPackageGroupHasBeenSet() const { return m_modelPackageGroupHasBeenSet; }
    template<typename ModelPackageGroupT = ModelPackageGroup>
    void SetModelPackageGroup(ModelPackageGroupT&& value) { m_modelPackageGroupHasBeenSet = true; m_modelPackageGroup = std::forward<ModelPackageGroupT>(value); }
    template<typename ModelPackageGroupT = ModelPackageGroup>
    SearchRecord& WithModelPackageGroup(ModelPackageGroupT&& value) { SetModelPackageGroup(std::forward<ModelPackageGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Pipeline& GetPipeline() const { return m_pipeline; }
    inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }
    template<typename PipelineT = Pipeline>
    void SetPipeline(PipelineT&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::forward<PipelineT>(value); }
    template<typename PipelineT = Pipeline>
    SearchRecord& WithPipeline(PipelineT&& value) { SetPipeline(std::forward<PipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PipelineExecution& GetPipelineExecution() const { return m_pipelineExecution; }
    inline bool PipelineExecutionHasBeenSet() const { return m_pipelineExecutionHasBeenSet; }
    template<typename PipelineExecutionT = PipelineExecution>
    void SetPipelineExecution(PipelineExecutionT&& value) { m_pipelineExecutionHasBeenSet = true; m_pipelineExecution = std::forward<PipelineExecutionT>(value); }
    template<typename PipelineExecutionT = PipelineExecution>
    SearchRecord& WithPipelineExecution(PipelineExecutionT&& value) { SetPipelineExecution(std::forward<PipelineExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the pipeline.</p>
     */
    inline const PipelineVersion& GetPipelineVersion() const { return m_pipelineVersion; }
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
    template<typename PipelineVersionT = PipelineVersion>
    void SetPipelineVersion(PipelineVersionT&& value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = std::forward<PipelineVersionT>(value); }
    template<typename PipelineVersionT = PipelineVersion>
    SearchRecord& WithPipelineVersion(PipelineVersionT&& value) { SetPipelineVersion(std::forward<PipelineVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FeatureGroup& GetFeatureGroup() const { return m_featureGroup; }
    inline bool FeatureGroupHasBeenSet() const { return m_featureGroupHasBeenSet; }
    template<typename FeatureGroupT = FeatureGroup>
    void SetFeatureGroup(FeatureGroupT&& value) { m_featureGroupHasBeenSet = true; m_featureGroup = std::forward<FeatureGroupT>(value); }
    template<typename FeatureGroupT = FeatureGroup>
    SearchRecord& WithFeatureGroup(FeatureGroupT&& value) { SetFeatureGroup(std::forward<FeatureGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature metadata used to search through the features.</p>
     */
    inline const FeatureMetadata& GetFeatureMetadata() const { return m_featureMetadata; }
    inline bool FeatureMetadataHasBeenSet() const { return m_featureMetadataHasBeenSet; }
    template<typename FeatureMetadataT = FeatureMetadata>
    void SetFeatureMetadata(FeatureMetadataT&& value) { m_featureMetadataHasBeenSet = true; m_featureMetadata = std::forward<FeatureMetadataT>(value); }
    template<typename FeatureMetadataT = FeatureMetadata>
    SearchRecord& WithFeatureMetadata(FeatureMetadataT&& value) { SetFeatureMetadata(std::forward<FeatureMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a project.</p>
     */
    inline const Project& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Project>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Project>
    SearchRecord& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of a hyperparameter tuning job.</p>
     */
    inline const HyperParameterTuningJobSearchEntity& GetHyperParameterTuningJob() const { return m_hyperParameterTuningJob; }
    inline bool HyperParameterTuningJobHasBeenSet() const { return m_hyperParameterTuningJobHasBeenSet; }
    template<typename HyperParameterTuningJobT = HyperParameterTuningJobSearchEntity>
    void SetHyperParameterTuningJob(HyperParameterTuningJobT&& value) { m_hyperParameterTuningJobHasBeenSet = true; m_hyperParameterTuningJob = std::forward<HyperParameterTuningJobT>(value); }
    template<typename HyperParameterTuningJobT = HyperParameterTuningJobSearchEntity>
    SearchRecord& WithHyperParameterTuningJob(HyperParameterTuningJobT&& value) { SetHyperParameterTuningJob(std::forward<HyperParameterTuningJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon SageMaker Model Card that documents details about a machine
     * learning model.</p>
     */
    inline const ModelCard& GetModelCard() const { return m_modelCard; }
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }
    template<typename ModelCardT = ModelCard>
    void SetModelCard(ModelCardT&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::forward<ModelCardT>(value); }
    template<typename ModelCardT = ModelCard>
    SearchRecord& WithModelCard(ModelCardT&& value) { SetModelCard(std::forward<ModelCardT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelDashboardModel& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = ModelDashboardModel>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = ModelDashboardModel>
    SearchRecord& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
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

    PipelineVersion m_pipelineVersion;
    bool m_pipelineVersionHasBeenSet = false;

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
