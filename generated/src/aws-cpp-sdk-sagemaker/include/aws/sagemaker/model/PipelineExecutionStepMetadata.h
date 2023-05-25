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
#include <aws/sagemaker/model/QualityCheckStepMetadata.h>
#include <aws/sagemaker/model/ClarifyCheckStepMetadata.h>
#include <aws/sagemaker/model/EMRStepMetadata.h>
#include <aws/sagemaker/model/FailStepMetadata.h>
#include <aws/sagemaker/model/AutoMLJobStepMetadata.h>
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


    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline const TrainingJobStepMetadata& GetTrainingJob() const{ return m_trainingJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline void SetTrainingJob(const TrainingJobStepMetadata& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline void SetTrainingJob(TrainingJobStepMetadata&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTrainingJob(const TrainingJobStepMetadata& value) { SetTrainingJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTrainingJob(TrainingJobStepMetadata&& value) { SetTrainingJob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline const ProcessingJobStepMetadata& GetProcessingJob() const{ return m_processingJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline bool ProcessingJobHasBeenSet() const { return m_processingJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline void SetProcessingJob(const ProcessingJobStepMetadata& value) { m_processingJobHasBeenSet = true; m_processingJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline void SetProcessingJob(ProcessingJobStepMetadata&& value) { m_processingJobHasBeenSet = true; m_processingJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithProcessingJob(const ProcessingJobStepMetadata& value) { SetProcessingJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithProcessingJob(ProcessingJobStepMetadata&& value) { SetProcessingJob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline const TransformJobStepMetadata& GetTransformJob() const{ return m_transformJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline bool TransformJobHasBeenSet() const { return m_transformJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline void SetTransformJob(const TransformJobStepMetadata& value) { m_transformJobHasBeenSet = true; m_transformJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline void SetTransformJob(TransformJobStepMetadata&& value) { m_transformJobHasBeenSet = true; m_transformJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTransformJob(const TransformJobStepMetadata& value) { SetTransformJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTransformJob(TransformJobStepMetadata&& value) { SetTransformJob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline const TuningJobStepMetaData& GetTuningJob() const{ return m_tuningJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline bool TuningJobHasBeenSet() const { return m_tuningJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline void SetTuningJob(const TuningJobStepMetaData& value) { m_tuningJobHasBeenSet = true; m_tuningJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline void SetTuningJob(TuningJobStepMetaData&& value) { m_tuningJobHasBeenSet = true; m_tuningJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTuningJob(const TuningJobStepMetaData& value) { SetTuningJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTuningJob(TuningJobStepMetaData&& value) { SetTuningJob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline const ModelStepMetadata& GetModel() const{ return m_model; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline void SetModel(const ModelStepMetadata& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline void SetModel(ModelStepMetadata&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithModel(const ModelStepMetadata& value) { SetModel(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model that was created by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithModel(ModelStepMetadata&& value) { SetModel(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline const RegisterModelStepMetadata& GetRegisterModel() const{ return m_registerModel; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline bool RegisterModelHasBeenSet() const { return m_registerModelHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline void SetRegisterModel(const RegisterModelStepMetadata& value) { m_registerModelHasBeenSet = true; m_registerModel = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline void SetRegisterModel(RegisterModelStepMetadata&& value) { m_registerModelHasBeenSet = true; m_registerModel = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithRegisterModel(const RegisterModelStepMetadata& value) { SetRegisterModel(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package that the model was
     * registered to by this step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithRegisterModel(RegisterModelStepMetadata&& value) { SetRegisterModel(std::move(value)); return *this;}


    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline const ConditionStepMetadata& GetCondition() const{ return m_condition; }

    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline void SetCondition(const ConditionStepMetadata& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline void SetCondition(ConditionStepMetadata&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithCondition(const ConditionStepMetadata& value) { SetCondition(value); return *this;}

    /**
     * <p>The outcome of the condition evaluation that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithCondition(ConditionStepMetadata&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline const CallbackStepMetadata& GetCallback() const{ return m_callback; }

    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline bool CallbackHasBeenSet() const { return m_callbackHasBeenSet; }

    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline void SetCallback(const CallbackStepMetadata& value) { m_callbackHasBeenSet = true; m_callback = value; }

    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline void SetCallback(CallbackStepMetadata&& value) { m_callbackHasBeenSet = true; m_callback = std::move(value); }

    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline PipelineExecutionStepMetadata& WithCallback(const CallbackStepMetadata& value) { SetCallback(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue used by this step execution, the pipeline
     * generated token, and a list of output parameters.</p>
     */
    inline PipelineExecutionStepMetadata& WithCallback(CallbackStepMetadata&& value) { SetCallback(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline const LambdaStepMetadata& GetLambda() const{ return m_lambda; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline void SetLambda(const LambdaStepMetadata& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline void SetLambda(LambdaStepMetadata&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline PipelineExecutionStepMetadata& WithLambda(const LambdaStepMetadata& value) { SetLambda(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution and a list of output parameters.</p>
     */
    inline PipelineExecutionStepMetadata& WithLambda(LambdaStepMetadata&& value) { SetLambda(std::move(value)); return *this;}


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
    inline bool QualityCheckHasBeenSet() const { return m_qualityCheckHasBeenSet; }

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
    inline void SetQualityCheck(const QualityCheckStepMetadata& value) { m_qualityCheckHasBeenSet = true; m_qualityCheck = value; }

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
    inline void SetQualityCheck(QualityCheckStepMetadata&& value) { m_qualityCheckHasBeenSet = true; m_qualityCheck = std::move(value); }

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
    inline PipelineExecutionStepMetadata& WithQualityCheck(const QualityCheckStepMetadata& value) { SetQualityCheck(value); return *this;}

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
    inline PipelineExecutionStepMetadata& WithQualityCheck(QualityCheckStepMetadata&& value) { SetQualityCheck(std::move(value)); return *this;}


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
    inline bool ClarifyCheckHasBeenSet() const { return m_clarifyCheckHasBeenSet; }

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
    inline void SetClarifyCheck(const ClarifyCheckStepMetadata& value) { m_clarifyCheckHasBeenSet = true; m_clarifyCheck = value; }

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
    inline void SetClarifyCheck(ClarifyCheckStepMetadata&& value) { m_clarifyCheckHasBeenSet = true; m_clarifyCheck = std::move(value); }

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
    inline PipelineExecutionStepMetadata& WithClarifyCheck(const ClarifyCheckStepMetadata& value) { SetClarifyCheck(value); return *this;}

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
    inline PipelineExecutionStepMetadata& WithClarifyCheck(ClarifyCheckStepMetadata&& value) { SetClarifyCheck(std::move(value)); return *this;}


    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline const EMRStepMetadata& GetEMR() const{ return m_eMR; }

    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline bool EMRHasBeenSet() const { return m_eMRHasBeenSet; }

    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline void SetEMR(const EMRStepMetadata& value) { m_eMRHasBeenSet = true; m_eMR = value; }

    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline void SetEMR(EMRStepMetadata&& value) { m_eMRHasBeenSet = true; m_eMR = std::move(value); }

    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithEMR(const EMRStepMetadata& value) { SetEMR(value); return *this;}

    /**
     * <p>The configurations and outcomes of an Amazon EMR step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithEMR(EMRStepMetadata&& value) { SetEMR(std::move(value)); return *this;}


    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline const FailStepMetadata& GetFail() const{ return m_fail; }

    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline bool FailHasBeenSet() const { return m_failHasBeenSet; }

    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline void SetFail(const FailStepMetadata& value) { m_failHasBeenSet = true; m_fail = value; }

    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline void SetFail(FailStepMetadata&& value) { m_failHasBeenSet = true; m_fail = std::move(value); }

    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithFail(const FailStepMetadata& value) { SetFail(value); return *this;}

    /**
     * <p>The configurations and outcomes of a Fail step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithFail(FailStepMetadata&& value) { SetFail(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline const AutoMLJobStepMetadata& GetAutoMLJob() const{ return m_autoMLJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline bool AutoMLJobHasBeenSet() const { return m_autoMLJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline void SetAutoMLJob(const AutoMLJobStepMetadata& value) { m_autoMLJobHasBeenSet = true; m_autoMLJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline void SetAutoMLJob(AutoMLJobStepMetadata&& value) { m_autoMLJobHasBeenSet = true; m_autoMLJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline PipelineExecutionStepMetadata& WithAutoMLJob(const AutoMLJobStepMetadata& value) { SetAutoMLJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that was run by this
     * step.</p>
     */
    inline PipelineExecutionStepMetadata& WithAutoMLJob(AutoMLJobStepMetadata&& value) { SetAutoMLJob(std::move(value)); return *this;}

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

    QualityCheckStepMetadata m_qualityCheck;
    bool m_qualityCheckHasBeenSet = false;

    ClarifyCheckStepMetadata m_clarifyCheck;
    bool m_clarifyCheckHasBeenSet = false;

    EMRStepMetadata m_eMR;
    bool m_eMRHasBeenSet = false;

    FailStepMetadata m_fail;
    bool m_failHasBeenSet = false;

    AutoMLJobStepMetadata m_autoMLJob;
    bool m_autoMLJobHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
