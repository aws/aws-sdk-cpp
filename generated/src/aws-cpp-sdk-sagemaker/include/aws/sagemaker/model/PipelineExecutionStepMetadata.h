/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobStepMetadata.h>
#include <aws/sagemaker/model/BedrockCustomModelDeploymentMetadata.h>
#include <aws/sagemaker/model/BedrockCustomModelMetadata.h>
#include <aws/sagemaker/model/BedrockModelImportMetadata.h>
#include <aws/sagemaker/model/BedrockProvisionedModelThroughputMetadata.h>
#include <aws/sagemaker/model/CallbackStepMetadata.h>
#include <aws/sagemaker/model/ClarifyCheckStepMetadata.h>
#include <aws/sagemaker/model/ConditionStepMetadata.h>
#include <aws/sagemaker/model/EMRStepMetadata.h>
#include <aws/sagemaker/model/EndpointConfigStepMetadata.h>
#include <aws/sagemaker/model/EndpointStepMetadata.h>
#include <aws/sagemaker/model/FailStepMetadata.h>
#include <aws/sagemaker/model/InferenceComponentMetadata.h>
#include <aws/sagemaker/model/LambdaStepMetadata.h>
#include <aws/sagemaker/model/LineageMetadata.h>
#include <aws/sagemaker/model/ModelStepMetadata.h>
#include <aws/sagemaker/model/ProcessingJobStepMetadata.h>
#include <aws/sagemaker/model/QualityCheckStepMetadata.h>
#include <aws/sagemaker/model/RegisterModelStepMetadata.h>
#include <aws/sagemaker/model/TrainingJobStepMetadata.h>
#include <aws/sagemaker/model/TransformJobStepMetadata.h>
#include <aws/sagemaker/model/TuningJobStepMetaData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Metadata for a step execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecutionStepMetadata">AWS
 * API Reference</a></p>
 */
class PipelineExecutionStepMetadata {
 public:
  AWS_SAGEMAKER_API PipelineExecutionStepMetadata() = default;
  AWS_SAGEMAKER_API PipelineExecutionStepMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API PipelineExecutionStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
   * execution.</p>
   */
  inline const TrainingJobStepMetadata& GetTrainingJob() const { return m_trainingJob; }
  inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }
  template <typename TrainingJobT = TrainingJobStepMetadata>
  void SetTrainingJob(TrainingJobT&& value) {
    m_trainingJobHasBeenSet = true;
    m_trainingJob = std::forward<TrainingJobT>(value);
  }
  template <typename TrainingJobT = TrainingJobStepMetadata>
  PipelineExecutionStepMetadata& WithTrainingJob(TrainingJobT&& value) {
    SetTrainingJob(std::forward<TrainingJobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
   * step execution.</p>
   */
  inline const ProcessingJobStepMetadata& GetProcessingJob() const { return m_processingJob; }
  inline bool ProcessingJobHasBeenSet() const { return m_processingJobHasBeenSet; }
  template <typename ProcessingJobT = ProcessingJobStepMetadata>
  void SetProcessingJob(ProcessingJobT&& value) {
    m_processingJobHasBeenSet = true;
    m_processingJob = std::forward<ProcessingJobT>(value);
  }
  template <typename ProcessingJobT = ProcessingJobStepMetadata>
  PipelineExecutionStepMetadata& WithProcessingJob(ProcessingJobT&& value) {
    SetProcessingJob(std::forward<ProcessingJobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
   * execution.</p>
   */
  inline const TransformJobStepMetadata& GetTransformJob() const { return m_transformJob; }
  inline bool TransformJobHasBeenSet() const { return m_transformJobHasBeenSet; }
  template <typename TransformJobT = TransformJobStepMetadata>
  void SetTransformJob(TransformJobT&& value) {
    m_transformJobHasBeenSet = true;
    m_transformJob = std::forward<TransformJobT>(value);
  }
  template <typename TransformJobT = TransformJobStepMetadata>
  PipelineExecutionStepMetadata& WithTransformJob(TransformJobT&& value) {
    SetTransformJob(std::forward<TransformJobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
   * execution.</p>
   */
  inline const TuningJobStepMetaData& GetTuningJob() const { return m_tuningJob; }
  inline bool TuningJobHasBeenSet() const { return m_tuningJobHasBeenSet; }
  template <typename TuningJobT = TuningJobStepMetaData>
  void SetTuningJob(TuningJobT&& value) {
    m_tuningJobHasBeenSet = true;
    m_tuningJob = std::forward<TuningJobT>(value);
  }
  template <typename TuningJobT = TuningJobStepMetaData>
  PipelineExecutionStepMetadata& WithTuningJob(TuningJobT&& value) {
    SetTuningJob(std::forward<TuningJobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the model that was created by this step
   * execution.</p>
   */
  inline const ModelStepMetadata& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = ModelStepMetadata>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = ModelStepMetadata>
  PipelineExecutionStepMetadata& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the model package that the model was
   * registered to by this step execution.</p>
   */
  inline const RegisterModelStepMetadata& GetRegisterModel() const { return m_registerModel; }
  inline bool RegisterModelHasBeenSet() const { return m_registerModelHasBeenSet; }
  template <typename RegisterModelT = RegisterModelStepMetadata>
  void SetRegisterModel(RegisterModelT&& value) {
    m_registerModelHasBeenSet = true;
    m_registerModel = std::forward<RegisterModelT>(value);
  }
  template <typename RegisterModelT = RegisterModelStepMetadata>
  PipelineExecutionStepMetadata& WithRegisterModel(RegisterModelT&& value) {
    SetRegisterModel(std::forward<RegisterModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outcome of the condition evaluation that was run by this step
   * execution.</p>
   */
  inline const ConditionStepMetadata& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = ConditionStepMetadata>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = ConditionStepMetadata>
  PipelineExecutionStepMetadata& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
   * generated token, and a list of output parameters.</p>
   */
  inline const CallbackStepMetadata& GetCallback() const { return m_callback; }
  inline bool CallbackHasBeenSet() const { return m_callbackHasBeenSet; }
  template <typename CallbackT = CallbackStepMetadata>
  void SetCallback(CallbackT&& value) {
    m_callbackHasBeenSet = true;
    m_callback = std::forward<CallbackT>(value);
  }
  template <typename CallbackT = CallbackStepMetadata>
  PipelineExecutionStepMetadata& WithCallback(CallbackT&& value) {
    SetCallback(std::forward<CallbackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
   * step execution and a list of output parameters.</p>
   */
  inline const LambdaStepMetadata& GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  template <typename LambdaT = LambdaStepMetadata>
  void SetLambda(LambdaT&& value) {
    m_lambdaHasBeenSet = true;
    m_lambda = std::forward<LambdaT>(value);
  }
  template <typename LambdaT = LambdaStepMetadata>
  PipelineExecutionStepMetadata& WithLambda(LambdaT&& value) {
    SetLambda(std::forward<LambdaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
   */
  inline const EMRStepMetadata& GetEMR() const { return m_eMR; }
  inline bool EMRHasBeenSet() const { return m_eMRHasBeenSet; }
  template <typename EMRT = EMRStepMetadata>
  void SetEMR(EMRT&& value) {
    m_eMRHasBeenSet = true;
    m_eMR = std::forward<EMRT>(value);
  }
  template <typename EMRT = EMRStepMetadata>
  PipelineExecutionStepMetadata& WithEMR(EMRT&& value) {
    SetEMR(std::forward<EMRT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configurations and outcomes of the check step execution. This includes:
   * </p> <ul> <li> <p>The type of the check conducted.</p> </li> <li> <p>The Amazon
   * S3 URIs of baseline constraints and statistics files to be used for the drift
   * check.</p> </li> <li> <p>The Amazon S3 URIs of newly calculated baseline
   * constraints and statistics.</p> </li> <li> <p>The model package group name
   * provided.</p> </li> <li> <p>The Amazon S3 URI of the violation report if
   * violations detected.</p> </li> <li> <p>The Amazon Resource Name (ARN) of check
   * processing job initiated by the step execution.</p> </li> <li> <p>The Boolean
   * flags indicating if the drift check is skipped.</p> </li> <li> <p>If step
   * property <code>BaselineUsedForDriftCheck</code> is set the same as
   * <code>CalculatedBaseline</code>.</p> </li> </ul>
   */
  inline const QualityCheckStepMetadata& GetQualityCheck() const { return m_qualityCheck; }
  inline bool QualityCheckHasBeenSet() const { return m_qualityCheckHasBeenSet; }
  template <typename QualityCheckT = QualityCheckStepMetadata>
  void SetQualityCheck(QualityCheckT&& value) {
    m_qualityCheckHasBeenSet = true;
    m_qualityCheck = std::forward<QualityCheckT>(value);
  }
  template <typename QualityCheckT = QualityCheckStepMetadata>
  PipelineExecutionStepMetadata& WithQualityCheck(QualityCheckT&& value) {
    SetQualityCheck(std::forward<QualityCheckT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Container for the metadata for a Clarify check step. The configurations and
   * outcomes of the check step execution. This includes: </p> <ul> <li> <p>The type
   * of the check conducted,</p> </li> <li> <p>The Amazon S3 URIs of baseline
   * constraints and statistics files to be used for the drift check.</p> </li> <li>
   * <p>The Amazon S3 URIs of newly calculated baseline constraints and
   * statistics.</p> </li> <li> <p>The model package group name provided.</p> </li>
   * <li> <p>The Amazon S3 URI of the violation report if violations detected.</p>
   * </li> <li> <p>The Amazon Resource Name (ARN) of check processing job initiated
   * by the step execution.</p> </li> <li> <p>The boolean flags indicating if the
   * drift check is skipped.</p> </li> <li> <p>If step property
   * <code>BaselineUsedForDriftCheck</code> is set the same as
   * <code>CalculatedBaseline</code>.</p> </li> </ul>
   */
  inline const ClarifyCheckStepMetadata& GetClarifyCheck() const { return m_clarifyCheck; }
  inline bool ClarifyCheckHasBeenSet() const { return m_clarifyCheckHasBeenSet; }
  template <typename ClarifyCheckT = ClarifyCheckStepMetadata>
  void SetClarifyCheck(ClarifyCheckT&& value) {
    m_clarifyCheckHasBeenSet = true;
    m_clarifyCheck = std::forward<ClarifyCheckT>(value);
  }
  template <typename ClarifyCheckT = ClarifyCheckStepMetadata>
  PipelineExecutionStepMetadata& WithClarifyCheck(ClarifyCheckT&& value) {
    SetClarifyCheck(std::forward<ClarifyCheckT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configurations and outcomes of a Fail step execution.</p>
   */
  inline const FailStepMetadata& GetFail() const { return m_fail; }
  inline bool FailHasBeenSet() const { return m_failHasBeenSet; }
  template <typename FailT = FailStepMetadata>
  void SetFail(FailT&& value) {
    m_failHasBeenSet = true;
    m_fail = std::forward<FailT>(value);
  }
  template <typename FailT = FailStepMetadata>
  PipelineExecutionStepMetadata& WithFail(FailT&& value) {
    SetFail(std::forward<FailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
   * step.</p>
   */
  inline const AutoMLJobStepMetadata& GetAutoMLJob() const { return m_autoMLJob; }
  inline bool AutoMLJobHasBeenSet() const { return m_autoMLJobHasBeenSet; }
  template <typename AutoMLJobT = AutoMLJobStepMetadata>
  void SetAutoMLJob(AutoMLJobT&& value) {
    m_autoMLJobHasBeenSet = true;
    m_autoMLJob = std::forward<AutoMLJobT>(value);
  }
  template <typename AutoMLJobT = AutoMLJobStepMetadata>
  PipelineExecutionStepMetadata& WithAutoMLJob(AutoMLJobT&& value) {
    SetAutoMLJob(std::forward<AutoMLJobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint that was invoked during this step execution.</p>
   */
  inline const EndpointStepMetadata& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = EndpointStepMetadata>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = EndpointStepMetadata>
  PipelineExecutionStepMetadata& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint configuration used to create an endpoint during this step
   * execution.</p>
   */
  inline const EndpointConfigStepMetadata& GetEndpointConfig() const { return m_endpointConfig; }
  inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
  template <typename EndpointConfigT = EndpointConfigStepMetadata>
  void SetEndpointConfig(EndpointConfigT&& value) {
    m_endpointConfigHasBeenSet = true;
    m_endpointConfig = std::forward<EndpointConfigT>(value);
  }
  template <typename EndpointConfigT = EndpointConfigStepMetadata>
  PipelineExecutionStepMetadata& WithEndpointConfig(EndpointConfigT&& value) {
    SetEndpointConfig(std::forward<EndpointConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metadata of the Amazon Bedrock custom model used in the pipeline
   * execution step. </p>
   */
  inline const BedrockCustomModelMetadata& GetBedrockCustomModel() const { return m_bedrockCustomModel; }
  inline bool BedrockCustomModelHasBeenSet() const { return m_bedrockCustomModelHasBeenSet; }
  template <typename BedrockCustomModelT = BedrockCustomModelMetadata>
  void SetBedrockCustomModel(BedrockCustomModelT&& value) {
    m_bedrockCustomModelHasBeenSet = true;
    m_bedrockCustomModel = std::forward<BedrockCustomModelT>(value);
  }
  template <typename BedrockCustomModelT = BedrockCustomModelMetadata>
  PipelineExecutionStepMetadata& WithBedrockCustomModel(BedrockCustomModelT&& value) {
    SetBedrockCustomModel(std::forward<BedrockCustomModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metadata of the Amazon Bedrock custom model deployment used in pipeline
   * execution step. </p>
   */
  inline const BedrockCustomModelDeploymentMetadata& GetBedrockCustomModelDeployment() const { return m_bedrockCustomModelDeployment; }
  inline bool BedrockCustomModelDeploymentHasBeenSet() const { return m_bedrockCustomModelDeploymentHasBeenSet; }
  template <typename BedrockCustomModelDeploymentT = BedrockCustomModelDeploymentMetadata>
  void SetBedrockCustomModelDeployment(BedrockCustomModelDeploymentT&& value) {
    m_bedrockCustomModelDeploymentHasBeenSet = true;
    m_bedrockCustomModelDeployment = std::forward<BedrockCustomModelDeploymentT>(value);
  }
  template <typename BedrockCustomModelDeploymentT = BedrockCustomModelDeploymentMetadata>
  PipelineExecutionStepMetadata& WithBedrockCustomModelDeployment(BedrockCustomModelDeploymentT&& value) {
    SetBedrockCustomModelDeployment(std::forward<BedrockCustomModelDeploymentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metadata of the Amazon Bedrock provisioned model throughput used in the
   * pipeline execution step. </p>
   */
  inline const BedrockProvisionedModelThroughputMetadata& GetBedrockProvisionedModelThroughput() const {
    return m_bedrockProvisionedModelThroughput;
  }
  inline bool BedrockProvisionedModelThroughputHasBeenSet() const { return m_bedrockProvisionedModelThroughputHasBeenSet; }
  template <typename BedrockProvisionedModelThroughputT = BedrockProvisionedModelThroughputMetadata>
  void SetBedrockProvisionedModelThroughput(BedrockProvisionedModelThroughputT&& value) {
    m_bedrockProvisionedModelThroughputHasBeenSet = true;
    m_bedrockProvisionedModelThroughput = std::forward<BedrockProvisionedModelThroughputT>(value);
  }
  template <typename BedrockProvisionedModelThroughputT = BedrockProvisionedModelThroughputMetadata>
  PipelineExecutionStepMetadata& WithBedrockProvisionedModelThroughput(BedrockProvisionedModelThroughputT&& value) {
    SetBedrockProvisionedModelThroughput(std::forward<BedrockProvisionedModelThroughputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metadata of Amazon Bedrock model import used in pipeline execution step.
   * </p>
   */
  inline const BedrockModelImportMetadata& GetBedrockModelImport() const { return m_bedrockModelImport; }
  inline bool BedrockModelImportHasBeenSet() const { return m_bedrockModelImportHasBeenSet; }
  template <typename BedrockModelImportT = BedrockModelImportMetadata>
  void SetBedrockModelImport(BedrockModelImportT&& value) {
    m_bedrockModelImportHasBeenSet = true;
    m_bedrockModelImport = std::forward<BedrockModelImportT>(value);
  }
  template <typename BedrockModelImportT = BedrockModelImportMetadata>
  PipelineExecutionStepMetadata& WithBedrockModelImport(BedrockModelImportT&& value) {
    SetBedrockModelImport(std::forward<BedrockModelImportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metadata of the inference component used in pipeline execution step.
   * </p>
   */
  inline const InferenceComponentMetadata& GetInferenceComponent() const { return m_inferenceComponent; }
  inline bool InferenceComponentHasBeenSet() const { return m_inferenceComponentHasBeenSet; }
  template <typename InferenceComponentT = InferenceComponentMetadata>
  void SetInferenceComponent(InferenceComponentT&& value) {
    m_inferenceComponentHasBeenSet = true;
    m_inferenceComponent = std::forward<InferenceComponentT>(value);
  }
  template <typename InferenceComponentT = InferenceComponentMetadata>
  PipelineExecutionStepMetadata& WithInferenceComponent(InferenceComponentT&& value) {
    SetInferenceComponent(std::forward<InferenceComponentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metadata of the lineage used in pipeline execution step. </p>
   */
  inline const LineageMetadata& GetLineage() const { return m_lineage; }
  inline bool LineageHasBeenSet() const { return m_lineageHasBeenSet; }
  template <typename LineageT = LineageMetadata>
  void SetLineage(LineageT&& value) {
    m_lineageHasBeenSet = true;
    m_lineage = std::forward<LineageT>(value);
  }
  template <typename LineageT = LineageMetadata>
  PipelineExecutionStepMetadata& WithLineage(LineageT&& value) {
    SetLineage(std::forward<LineageT>(value));
    return *this;
  }
  ///@}
 private:
  TrainingJobStepMetadata m_trainingJob;

  ProcessingJobStepMetadata m_processingJob;

  TransformJobStepMetadata m_transformJob;

  TuningJobStepMetaData m_tuningJob;

  ModelStepMetadata m_model;

  RegisterModelStepMetadata m_registerModel;

  ConditionStepMetadata m_condition;

  CallbackStepMetadata m_callback;

  LambdaStepMetadata m_lambda;

  EMRStepMetadata m_eMR;

  QualityCheckStepMetadata m_qualityCheck;

  ClarifyCheckStepMetadata m_clarifyCheck;

  FailStepMetadata m_fail;

  AutoMLJobStepMetadata m_autoMLJob;

  EndpointStepMetadata m_endpoint;

  EndpointConfigStepMetadata m_endpointConfig;

  BedrockCustomModelMetadata m_bedrockCustomModel;

  BedrockCustomModelDeploymentMetadata m_bedrockCustomModelDeployment;

  BedrockProvisionedModelThroughputMetadata m_bedrockProvisionedModelThroughput;

  BedrockModelImportMetadata m_bedrockModelImport;

  InferenceComponentMetadata m_inferenceComponent;

  LineageMetadata m_lineage;
  bool m_trainingJobHasBeenSet = false;
  bool m_processingJobHasBeenSet = false;
  bool m_transformJobHasBeenSet = false;
  bool m_tuningJobHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_registerModelHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
  bool m_callbackHasBeenSet = false;
  bool m_lambdaHasBeenSet = false;
  bool m_eMRHasBeenSet = false;
  bool m_qualityCheckHasBeenSet = false;
  bool m_clarifyCheckHasBeenSet = false;
  bool m_failHasBeenSet = false;
  bool m_autoMLJobHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_endpointConfigHasBeenSet = false;
  bool m_bedrockCustomModelHasBeenSet = false;
  bool m_bedrockCustomModelDeploymentHasBeenSet = false;
  bool m_bedrockProvisionedModelThroughputHasBeenSet = false;
  bool m_bedrockModelImportHasBeenSet = false;
  bool m_inferenceComponentHasBeenSet = false;
  bool m_lineageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
