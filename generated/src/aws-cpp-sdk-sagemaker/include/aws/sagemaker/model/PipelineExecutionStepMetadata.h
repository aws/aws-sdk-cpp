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
    AWS_SAGEMAKER_API PipelineExecutionStepMetadata();
    AWS_SAGEMAKER_API PipelineExecutionStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineExecutionStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline const TrainingJobStepMetadata& GetTrainingJob() const{ return m_trainingJob; }
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }
    inline void SetTrainingJob(const TrainingJobStepMetadata& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }
    inline void SetTrainingJob(TrainingJobStepMetadata&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }
    inline PipelineExecutionStepMetadata& WithTrainingJob(const TrainingJobStepMetadata& value) { SetTrainingJob(value); return *this;}
    inline PipelineExecutionStepMetadata& WithTrainingJob(TrainingJobStepMetadata&& value) { SetTrainingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline const ProcessingJobStepMetadata& GetProcessingJob() const{ return m_processingJob; }
    inline bool ProcessingJobHasBeenSet() const { return m_processingJobHasBeenSet; }
    inline void SetProcessingJob(const ProcessingJobStepMetadata& value) { m_processingJobHasBeenSet = true; m_processingJob = value; }
    inline void SetProcessingJob(ProcessingJobStepMetadata&& value) { m_processingJobHasBeenSet = true; m_processingJob = std::move(value); }
    inline PipelineExecutionStepMetadata& WithProcessingJob(const ProcessingJobStepMetadata& value) { SetProcessingJob(value); return *this;}
    inline PipelineExecutionStepMetadata& WithProcessingJob(ProcessingJobStepMetadata&& value) { SetProcessingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline const TransformJobStepMetadata& GetTransformJob() const{ return m_transformJob; }
    inline bool TransformJobHasBeenSet() const { return m_transformJobHasBeenSet; }
    inline void SetTransformJob(const TransformJobStepMetadata& value) { m_transformJobHasBeenSet = true; m_transformJob = value; }
    inline void SetTransformJob(TransformJobStepMetadata&& value) { m_transformJobHasBeenSet = true; m_transformJob = std::move(value); }
    inline PipelineExecutionStepMetadata& WithTransformJob(const TransformJobStepMetadata& value) { SetTransformJob(value); return *this;}
    inline PipelineExecutionStepMetadata& WithTransformJob(TransformJobStepMetadata&& value) { SetTransformJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline const TuningJobStepMetaData& GetTuningJob() const{ return m_tuningJob; }
    inline bool TuningJobHasBeenSet() const { return m_tuningJobHasBeenSet; }
    inline void SetTuningJob(const TuningJobStepMetaData& value) { m_tuningJobHasBeenSet = true; m_tuningJob = value; }
    inline void SetTuningJob(TuningJobStepMetaData&& value) { m_tuningJobHasBeenSet = true; m_tuningJob = std::move(value); }
    inline PipelineExecutionStepMetadata& WithTuningJob(const TuningJobStepMetaData& value) { SetTuningJob(value); return *this;}
    inline PipelineExecutionStepMetadata& WithTuningJob(TuningJobStepMetaData&& value) { SetTuningJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline const ModelStepMetadata& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const ModelStepMetadata& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(ModelStepMetadata&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline PipelineExecutionStepMetadata& WithModel(const ModelStepMetadata& value) { SetModel(value); return *this;}
    inline PipelineExecutionStepMetadata& WithModel(ModelStepMetadata&& value) { SetModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline const RegisterModelStepMetadata& GetRegisterModel() const{ return m_registerModel; }
    inline bool RegisterModelHasBeenSet() const { return m_registerModelHasBeenSet; }
    inline void SetRegisterModel(const RegisterModelStepMetadata& value) { m_registerModelHasBeenSet = true; m_registerModel = value; }
    inline void SetRegisterModel(RegisterModelStepMetadata&& value) { m_registerModelHasBeenSet = true; m_registerModel = std::move(value); }
    inline PipelineExecutionStepMetadata& WithRegisterModel(const RegisterModelStepMetadata& value) { SetRegisterModel(value); return *this;}
    inline PipelineExecutionStepMetadata& WithRegisterModel(RegisterModelStepMetadata&& value) { SetRegisterModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline const ConditionStepMetadata& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const ConditionStepMetadata& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(ConditionStepMetadata&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline PipelineExecutionStepMetadata& WithCondition(const ConditionStepMetadata& value) { SetCondition(value); return *this;}
    inline PipelineExecutionStepMetadata& WithCondition(ConditionStepMetadata&& value) { SetCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline const CallbackStepMetadata& GetCallback() const{ return m_callback; }
    inline bool CallbackHasBeenSet() const { return m_callbackHasBeenSet; }
    inline void SetCallback(const CallbackStepMetadata& value) { m_callbackHasBeenSet = true; m_callback = value; }
    inline void SetCallback(CallbackStepMetadata&& value) { m_callbackHasBeenSet = true; m_callback = std::move(value); }
    inline PipelineExecutionStepMetadata& WithCallback(const CallbackStepMetadata& value) { SetCallback(value); return *this;}
    inline PipelineExecutionStepMetadata& WithCallback(CallbackStepMetadata&& value) { SetCallback(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline const LambdaStepMetadata& GetLambda() const{ return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    inline void SetLambda(const LambdaStepMetadata& value) { m_lambdaHasBeenSet = true; m_lambda = value; }
    inline void SetLambda(LambdaStepMetadata&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }
    inline PipelineExecutionStepMetadata& WithLambda(const LambdaStepMetadata& value) { SetLambda(value); return *this;}
    inline PipelineExecutionStepMetadata& WithLambda(LambdaStepMetadata&& value) { SetLambda(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline const EMRStepMetadata& GetEMR() const{ return m_eMR; }
    inline bool EMRHasBeenSet() const { return m_eMRHasBeenSet; }
    inline void SetEMR(const EMRStepMetadata& value) { m_eMRHasBeenSet = true; m_eMR = value; }
    inline void SetEMR(EMRStepMetadata&& value) { m_eMRHasBeenSet = true; m_eMR = std::move(value); }
    inline PipelineExecutionStepMetadata& WithEMR(const EMRStepMetadata& value) { SetEMR(value); return *this;}
    inline PipelineExecutionStepMetadata& WithEMR(EMRStepMetadata&& value) { SetEMR(std::move(value)); return *this;}
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
    inline const QualityCheckStepMetadata& GetQualityCheck() const{ return m_qualityCheck; }
    inline bool QualityCheckHasBeenSet() const { return m_qualityCheckHasBeenSet; }
    inline void SetQualityCheck(const QualityCheckStepMetadata& value) { m_qualityCheckHasBeenSet = true; m_qualityCheck = value; }
    inline void SetQualityCheck(QualityCheckStepMetadata&& value) { m_qualityCheckHasBeenSet = true; m_qualityCheck = std::move(value); }
    inline PipelineExecutionStepMetadata& WithQualityCheck(const QualityCheckStepMetadata& value) { SetQualityCheck(value); return *this;}
    inline PipelineExecutionStepMetadata& WithQualityCheck(QualityCheckStepMetadata&& value) { SetQualityCheck(std::move(value)); return *this;}
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
    inline const ClarifyCheckStepMetadata& GetClarifyCheck() const{ return m_clarifyCheck; }
    inline bool ClarifyCheckHasBeenSet() const { return m_clarifyCheckHasBeenSet; }
    inline void SetClarifyCheck(const ClarifyCheckStepMetadata& value) { m_clarifyCheckHasBeenSet = true; m_clarifyCheck = value; }
    inline void SetClarifyCheck(ClarifyCheckStepMetadata&& value) { m_clarifyCheckHasBeenSet = true; m_clarifyCheck = std::move(value); }
    inline PipelineExecutionStepMetadata& WithClarifyCheck(const ClarifyCheckStepMetadata& value) { SetClarifyCheck(value); return *this;}
    inline PipelineExecutionStepMetadata& WithClarifyCheck(ClarifyCheckStepMetadata&& value) { SetClarifyCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline const FailStepMetadata& GetFail() const{ return m_fail; }
    inline bool FailHasBeenSet() const { return m_failHasBeenSet; }
    inline void SetFail(const FailStepMetadata& value) { m_failHasBeenSet = true; m_fail = value; }
    inline void SetFail(FailStepMetadata&& value) { m_failHasBeenSet = true; m_fail = std::move(value); }
    inline PipelineExecutionStepMetadata& WithFail(const FailStepMetadata& value) { SetFail(value); return *this;}
    inline PipelineExecutionStepMetadata& WithFail(FailStepMetadata&& value) { SetFail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline const AutoMLJobStepMetadata& GetAutoMLJob() const{ return m_autoMLJob; }
    inline bool AutoMLJobHasBeenSet() const { return m_autoMLJobHasBeenSet; }
    inline void SetAutoMLJob(const AutoMLJobStepMetadata& value) { m_autoMLJobHasBeenSet = true; m_autoMLJob = value; }
    inline void SetAutoMLJob(AutoMLJobStepMetadata&& value) { m_autoMLJobHasBeenSet = true; m_autoMLJob = std::move(value); }
    inline PipelineExecutionStepMetadata& WithAutoMLJob(const AutoMLJobStepMetadata& value) { SetAutoMLJob(value); return *this;}
    inline PipelineExecutionStepMetadata& WithAutoMLJob(AutoMLJobStepMetadata&& value) { SetAutoMLJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint that was invoked during this step execution.</p>
     */
    inline const EndpointStepMetadata& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const EndpointStepMetadata& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(EndpointStepMetadata&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline PipelineExecutionStepMetadata& WithEndpoint(const EndpointStepMetadata& value) { SetEndpoint(value); return *this;}
    inline PipelineExecutionStepMetadata& WithEndpoint(EndpointStepMetadata&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration used to create an endpoint during this step
     * execution.</p>
     */
    inline const EndpointConfigStepMetadata& GetEndpointConfig() const{ return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    inline void SetEndpointConfig(const EndpointConfigStepMetadata& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = value; }
    inline void SetEndpointConfig(EndpointConfigStepMetadata&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::move(value); }
    inline PipelineExecutionStepMetadata& WithEndpointConfig(const EndpointConfigStepMetadata& value) { SetEndpointConfig(value); return *this;}
    inline PipelineExecutionStepMetadata& WithEndpointConfig(EndpointConfigStepMetadata&& value) { SetEndpointConfig(std::move(value)); return *this;}
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
