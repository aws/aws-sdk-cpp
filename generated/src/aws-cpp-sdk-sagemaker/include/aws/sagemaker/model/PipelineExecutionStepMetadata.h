/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingJobStepMetadata.h>
#include <aws/sagemaker/model/ProcessingJobStepMetadata.h>
#include <aws/sagemaker/model/TransformJobStepMetadata.h>
#include <aws/sagemaker/model/TuningJobStepMetaData.h>
#include <aws/sagemaker/model/ModelStepMetadata.h>
#include <aws/sagemaker/model/RegisterModelStepMetadata.h>
#include <aws/sagemaker/model/ConditionStepMetadata.h>
#include <aws/sagemaker/model/CallbackStepMetadata.h>
#include <aws/sagemaker/model/LambdaStepMetadata.h>
#include <aws/sagemaker/model/EMRStepMetadata.h>
#include <aws/sagemaker/model/QualityCheckStepMetadata.h>
#include <aws/sagemaker/model/ClarifyCheckStepMetadata.h>
#include <aws/sagemaker/model/FailStepMetadata.h>
#include <aws/sagemaker/model/AutoMLJobStepMetadata.h>
#include <aws/sagemaker/model/EndpointStepMetadata.h>
#include <aws/sagemaker/model/EndpointConfigStepMetadata.h>
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
   * <p>Metadata for a step execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecutionStepMetadata">AWS
   * API Reference</a></p>
   */
  class PipelineExecutionStepMetadata
  {
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
    template<typename TrainingJobT = TrainingJobStepMetadata>
    void SetTrainingJob(TrainingJobT&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::forward<TrainingJobT>(value); }
    template<typename TrainingJobT = TrainingJobStepMetadata>
    PipelineExecutionStepMetadata& WithTrainingJob(TrainingJobT&& value) { SetTrainingJob(std::forward<TrainingJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline const ProcessingJobStepMetadata& GetProcessingJob() const { return m_processingJob; }
    inline bool ProcessingJobHasBeenSet() const { return m_processingJobHasBeenSet; }
    template<typename ProcessingJobT = ProcessingJobStepMetadata>
    void SetProcessingJob(ProcessingJobT&& value) { m_processingJobHasBeenSet = true; m_processingJob = std::forward<ProcessingJobT>(value); }
    template<typename ProcessingJobT = ProcessingJobStepMetadata>
    PipelineExecutionStepMetadata& WithProcessingJob(ProcessingJobT&& value) { SetProcessingJob(std::forward<ProcessingJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline const TransformJobStepMetadata& GetTransformJob() const { return m_transformJob; }
    inline bool TransformJobHasBeenSet() const { return m_transformJobHasBeenSet; }
    template<typename TransformJobT = TransformJobStepMetadata>
    void SetTransformJob(TransformJobT&& value) { m_transformJobHasBeenSet = true; m_transformJob = std::forward<TransformJobT>(value); }
    template<typename TransformJobT = TransformJobStepMetadata>
    PipelineExecutionStepMetadata& WithTransformJob(TransformJobT&& value) { SetTransformJob(std::forward<TransformJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline const TuningJobStepMetaData& GetTuningJob() const { return m_tuningJob; }
    inline bool TuningJobHasBeenSet() const { return m_tuningJobHasBeenSet; }
    template<typename TuningJobT = TuningJobStepMetaData>
    void SetTuningJob(TuningJobT&& value) { m_tuningJobHasBeenSet = true; m_tuningJob = std::forward<TuningJobT>(value); }
    template<typename TuningJobT = TuningJobStepMetaData>
    PipelineExecutionStepMetadata& WithTuningJob(TuningJobT&& value) { SetTuningJob(std::forward<TuningJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline const ModelStepMetadata& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = ModelStepMetadata>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = ModelStepMetadata>
    PipelineExecutionStepMetadata& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline const RegisterModelStepMetadata& GetRegisterModel() const { return m_registerModel; }
    inline bool RegisterModelHasBeenSet() const { return m_registerModelHasBeenSet; }
    template<typename RegisterModelT = RegisterModelStepMetadata>
    void SetRegisterModel(RegisterModelT&& value) { m_registerModelHasBeenSet = true; m_registerModel = std::forward<RegisterModelT>(value); }
    template<typename RegisterModelT = RegisterModelStepMetadata>
    PipelineExecutionStepMetadata& WithRegisterModel(RegisterModelT&& value) { SetRegisterModel(std::forward<RegisterModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline const ConditionStepMetadata& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = ConditionStepMetadata>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = ConditionStepMetadata>
    PipelineExecutionStepMetadata& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline const CallbackStepMetadata& GetCallback() const { return m_callback; }
    inline bool CallbackHasBeenSet() const { return m_callbackHasBeenSet; }
    template<typename CallbackT = CallbackStepMetadata>
    void SetCallback(CallbackT&& value) { m_callbackHasBeenSet = true; m_callback = std::forward<CallbackT>(value); }
    template<typename CallbackT = CallbackStepMetadata>
    PipelineExecutionStepMetadata& WithCallback(CallbackT&& value) { SetCallback(std::forward<CallbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline const LambdaStepMetadata& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = LambdaStepMetadata>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = LambdaStepMetadata>
    PipelineExecutionStepMetadata& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline const EMRStepMetadata& GetEMR() const { return m_eMR; }
    inline bool EMRHasBeenSet() const { return m_eMRHasBeenSet; }
    template<typename EMRT = EMRStepMetadata>
    void SetEMR(EMRT&& value) { m_eMRHasBeenSet = true; m_eMR = std::forward<EMRT>(value); }
    template<typename EMRT = EMRStepMetadata>
    PipelineExecutionStepMetadata& WithEMR(EMRT&& value) { SetEMR(std::forward<EMRT>(value)); return *this;}
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
    template<typename QualityCheckT = QualityCheckStepMetadata>
    void SetQualityCheck(QualityCheckT&& value) { m_qualityCheckHasBeenSet = true; m_qualityCheck = std::forward<QualityCheckT>(value); }
    template<typename QualityCheckT = QualityCheckStepMetadata>
    PipelineExecutionStepMetadata& WithQualityCheck(QualityCheckT&& value) { SetQualityCheck(std::forward<QualityCheckT>(value)); return *this;}
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
    template<typename ClarifyCheckT = ClarifyCheckStepMetadata>
    void SetClarifyCheck(ClarifyCheckT&& value) { m_clarifyCheckHasBeenSet = true; m_clarifyCheck = std::forward<ClarifyCheckT>(value); }
    template<typename ClarifyCheckT = ClarifyCheckStepMetadata>
    PipelineExecutionStepMetadata& WithClarifyCheck(ClarifyCheckT&& value) { SetClarifyCheck(std::forward<ClarifyCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline const FailStepMetadata& GetFail() const { return m_fail; }
    inline bool FailHasBeenSet() const { return m_failHasBeenSet; }
    template<typename FailT = FailStepMetadata>
    void SetFail(FailT&& value) { m_failHasBeenSet = true; m_fail = std::forward<FailT>(value); }
    template<typename FailT = FailStepMetadata>
    PipelineExecutionStepMetadata& WithFail(FailT&& value) { SetFail(std::forward<FailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline const AutoMLJobStepMetadata& GetAutoMLJob() const { return m_autoMLJob; }
    inline bool AutoMLJobHasBeenSet() const { return m_autoMLJobHasBeenSet; }
    template<typename AutoMLJobT = AutoMLJobStepMetadata>
    void SetAutoMLJob(AutoMLJobT&& value) { m_autoMLJobHasBeenSet = true; m_autoMLJob = std::forward<AutoMLJobT>(value); }
    template<typename AutoMLJobT = AutoMLJobStepMetadata>
    PipelineExecutionStepMetadata& WithAutoMLJob(AutoMLJobT&& value) { SetAutoMLJob(std::forward<AutoMLJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint that was invoked during this step execution.</p>
     */
    inline const EndpointStepMetadata& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = EndpointStepMetadata>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = EndpointStepMetadata>
    PipelineExecutionStepMetadata& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration used to create an endpoint during this step
     * execution.</p>
     */
    inline const EndpointConfigStepMetadata& GetEndpointConfig() const { return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    template<typename EndpointConfigT = EndpointConfigStepMetadata>
    void SetEndpointConfig(EndpointConfigT&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::forward<EndpointConfigT>(value); }
    template<typename EndpointConfigT = EndpointConfigStepMetadata>
    PipelineExecutionStepMetadata& WithEndpointConfig(EndpointConfigT&& value) { SetEndpointConfig(std::forward<EndpointConfigT>(value)); return *this;}
    ///@}
  private:

    TrainingJobStepMetadata m_trainingJob;
    bool m_trainingJobHasBeenSet = false;

    ProcessingJobStepMetadata m_processingJob;
    bool m_processingJobHasBeenSet = false;

    TransformJobStepMetadata m_transformJob;
    bool m_transformJobHasBeenSet = false;

    TuningJobStepMetaData m_tuningJob;
    bool m_tuningJobHasBeenSet = false;

    ModelStepMetadata m_model;
    bool m_modelHasBeenSet = false;

    RegisterModelStepMetadata m_registerModel;
    bool m_registerModelHasBeenSet = false;

    ConditionStepMetadata m_condition;
    bool m_conditionHasBeenSet = false;

    CallbackStepMetadata m_callback;
    bool m_callbackHasBeenSet = false;

    LambdaStepMetadata m_lambda;
    bool m_lambdaHasBeenSet = false;

    EMRStepMetadata m_eMR;
    bool m_eMRHasBeenSet = false;

    QualityCheckStepMetadata m_qualityCheck;
    bool m_qualityCheckHasBeenSet = false;

    ClarifyCheckStepMetadata m_clarifyCheck;
    bool m_clarifyCheckHasBeenSet = false;

    FailStepMetadata m_fail;
    bool m_failHasBeenSet = false;

    AutoMLJobStepMetadata m_autoMLJob;
    bool m_autoMLJobHasBeenSet = false;

    EndpointStepMetadata m_endpoint;
    bool m_endpointHasBeenSet = false;

    EndpointConfigStepMetadata m_endpointConfig;
    bool m_endpointConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
