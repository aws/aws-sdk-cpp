﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TransformJobStatus.h>
#include <aws/sagemaker/model/ModelClientConfig.h>
#include <aws/sagemaker/model/BatchStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/TransformInput.h>
#include <aws/sagemaker/model/TransformOutput.h>
#include <aws/sagemaker/model/BatchDataCaptureConfig.h>
#include <aws/sagemaker/model/TransformResources.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DataProcessing.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeTransformJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeTransformJobResult();
    AWS_SAGEMAKER_API DescribeTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const{ return m_transformJobName; }
    inline void SetTransformJobName(const Aws::String& value) { m_transformJobName = value; }
    inline void SetTransformJobName(Aws::String&& value) { m_transformJobName = std::move(value); }
    inline void SetTransformJobName(const char* value) { m_transformJobName.assign(value); }
    inline DescribeTransformJobResult& WithTransformJobName(const Aws::String& value) { SetTransformJobName(value); return *this;}
    inline DescribeTransformJobResult& WithTransformJobName(Aws::String&& value) { SetTransformJobName(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithTransformJobName(const char* value) { SetTransformJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const{ return m_transformJobArn; }
    inline void SetTransformJobArn(const Aws::String& value) { m_transformJobArn = value; }
    inline void SetTransformJobArn(Aws::String&& value) { m_transformJobArn = std::move(value); }
    inline void SetTransformJobArn(const char* value) { m_transformJobArn.assign(value); }
    inline DescribeTransformJobResult& WithTransformJobArn(const Aws::String& value) { SetTransformJobArn(value); return *this;}
    inline DescribeTransformJobResult& WithTransformJobArn(Aws::String&& value) { SetTransformJobArn(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithTransformJobArn(const char* value) { SetTransformJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline const TransformJobStatus& GetTransformJobStatus() const{ return m_transformJobStatus; }
    inline void SetTransformJobStatus(const TransformJobStatus& value) { m_transformJobStatus = value; }
    inline void SetTransformJobStatus(TransformJobStatus&& value) { m_transformJobStatus = std::move(value); }
    inline DescribeTransformJobResult& WithTransformJobStatus(const TransformJobStatus& value) { SetTransformJobStatus(value); return *this;}
    inline DescribeTransformJobResult& WithTransformJobStatus(TransformJobStatus&& value) { SetTransformJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeTransformJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeTransformJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline DescribeTransformJobResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline DescribeTransformJobResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of parallel requests on each instance node that can be
     * launched in a transform job. The default value is 1.</p>
     */
    inline int GetMaxConcurrentTransforms() const{ return m_maxConcurrentTransforms; }
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransforms = value; }
    inline DescribeTransformJobResult& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout and maximum number of retries for processing a transform job
     * invocation.</p>
     */
    inline const ModelClientConfig& GetModelClientConfig() const{ return m_modelClientConfig; }
    inline void SetModelClientConfig(const ModelClientConfig& value) { m_modelClientConfig = value; }
    inline void SetModelClientConfig(ModelClientConfig&& value) { m_modelClientConfig = std::move(value); }
    inline DescribeTransformJobResult& WithModelClientConfig(const ModelClientConfig& value) { SetModelClientConfig(value); return *this;}
    inline DescribeTransformJobResult& WithModelClientConfig(ModelClientConfig&& value) { SetModelClientConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum payload size, in MB, used in the transform job.</p>
     */
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMB = value; }
    inline DescribeTransformJobResult& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A <i>record</i> <i/> is a single unit of input data that
     * inference can be made on. For example, a single line in a CSV file is a record.
     * </p> <p>To enable the batch strategy, you must set <code>SplitType</code> to
     * <code>Line</code>, <code>RecordIO</code>, or <code>TFRecord</code>.</p>
     */
    inline const BatchStrategy& GetBatchStrategy() const{ return m_batchStrategy; }
    inline void SetBatchStrategy(const BatchStrategy& value) { m_batchStrategy = value; }
    inline void SetBatchStrategy(BatchStrategy&& value) { m_batchStrategy = std::move(value); }
    inline DescribeTransformJobResult& WithBatchStrategy(const BatchStrategy& value) { SetBatchStrategy(value); return *this;}
    inline DescribeTransformJobResult& WithBatchStrategy(BatchStrategy&& value) { SetBatchStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environment = std::move(value); }
    inline DescribeTransformJobResult& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline DescribeTransformJobResult& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline DescribeTransformJobResult& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environment.emplace(key, value); return *this; }
    inline DescribeTransformJobResult& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environment.emplace(std::move(key), value); return *this; }
    inline DescribeTransformJobResult& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }
    inline DescribeTransformJobResult& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeTransformJobResult& AddEnvironment(const char* key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }
    inline DescribeTransformJobResult& AddEnvironment(Aws::String&& key, const char* value) { m_environment.emplace(std::move(key), value); return *this; }
    inline DescribeTransformJobResult& AddEnvironment(const char* key, const char* value) { m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline const TransformInput& GetTransformInput() const{ return m_transformInput; }
    inline void SetTransformInput(const TransformInput& value) { m_transformInput = value; }
    inline void SetTransformInput(TransformInput&& value) { m_transformInput = std::move(value); }
    inline DescribeTransformJobResult& WithTransformInput(const TransformInput& value) { SetTransformInput(value); return *this;}
    inline DescribeTransformJobResult& WithTransformInput(TransformInput&& value) { SetTransformInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline const TransformOutput& GetTransformOutput() const{ return m_transformOutput; }
    inline void SetTransformOutput(const TransformOutput& value) { m_transformOutput = value; }
    inline void SetTransformOutput(TransformOutput&& value) { m_transformOutput = std::move(value); }
    inline DescribeTransformJobResult& WithTransformOutput(const TransformOutput& value) { SetTransformOutput(value); return *this;}
    inline DescribeTransformJobResult& WithTransformOutput(TransformOutput&& value) { SetTransformOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to control how SageMaker captures inference data.</p>
     */
    inline const BatchDataCaptureConfig& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }
    inline void SetDataCaptureConfig(const BatchDataCaptureConfig& value) { m_dataCaptureConfig = value; }
    inline void SetDataCaptureConfig(BatchDataCaptureConfig&& value) { m_dataCaptureConfig = std::move(value); }
    inline DescribeTransformJobResult& WithDataCaptureConfig(const BatchDataCaptureConfig& value) { SetDataCaptureConfig(value); return *this;}
    inline DescribeTransformJobResult& WithDataCaptureConfig(BatchDataCaptureConfig&& value) { SetDataCaptureConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline const TransformResources& GetTransformResources() const{ return m_transformResources; }
    inline void SetTransformResources(const TransformResources& value) { m_transformResources = value; }
    inline void SetTransformResources(TransformResources&& value) { m_transformResources = std::move(value); }
    inline DescribeTransformJobResult& WithTransformResources(const TransformResources& value) { SetTransformResources(value); return *this;}
    inline DescribeTransformJobResult& WithTransformResources(TransformResources&& value) { SetTransformResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeTransformJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeTransformJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformStartTime() const{ return m_transformStartTime; }
    inline void SetTransformStartTime(const Aws::Utils::DateTime& value) { m_transformStartTime = value; }
    inline void SetTransformStartTime(Aws::Utils::DateTime&& value) { m_transformStartTime = std::move(value); }
    inline DescribeTransformJobResult& WithTransformStartTime(const Aws::Utils::DateTime& value) { SetTransformStartTime(value); return *this;}
    inline DescribeTransformJobResult& WithTransformStartTime(Aws::Utils::DateTime&& value) { SetTransformStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const{ return m_transformEndTime; }
    inline void SetTransformEndTime(const Aws::Utils::DateTime& value) { m_transformEndTime = value; }
    inline void SetTransformEndTime(Aws::Utils::DateTime&& value) { m_transformEndTime = std::move(value); }
    inline DescribeTransformJobResult& WithTransformEndTime(const Aws::Utils::DateTime& value) { SetTransformEndTime(value); return *this;}
    inline DescribeTransformJobResult& WithTransformEndTime(Aws::Utils::DateTime&& value) { SetTransformEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }
    inline DescribeTransformJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}
    inline DescribeTransformJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML transform job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }
    inline DescribeTransformJobResult& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}
    inline DescribeTransformJobResult& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataProcessing& GetDataProcessing() const{ return m_dataProcessing; }
    inline void SetDataProcessing(const DataProcessing& value) { m_dataProcessing = value; }
    inline void SetDataProcessing(DataProcessing&& value) { m_dataProcessing = std::move(value); }
    inline DescribeTransformJobResult& WithDataProcessing(const DataProcessing& value) { SetDataProcessing(value); return *this;}
    inline DescribeTransformJobResult& WithDataProcessing(DataProcessing&& value) { SetDataProcessing(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfig = value; }
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfig = std::move(value); }
    inline DescribeTransformJobResult& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}
    inline DescribeTransformJobResult& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTransformJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTransformJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTransformJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformJobName;

    Aws::String m_transformJobArn;

    TransformJobStatus m_transformJobStatus;

    Aws::String m_failureReason;

    Aws::String m_modelName;

    int m_maxConcurrentTransforms;

    ModelClientConfig m_modelClientConfig;

    int m_maxPayloadInMB;

    BatchStrategy m_batchStrategy;

    Aws::Map<Aws::String, Aws::String> m_environment;

    TransformInput m_transformInput;

    TransformOutput m_transformOutput;

    BatchDataCaptureConfig m_dataCaptureConfig;

    TransformResources m_transformResources;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_transformStartTime;

    Aws::Utils::DateTime m_transformEndTime;

    Aws::String m_labelingJobArn;

    Aws::String m_autoMLJobArn;

    DataProcessing m_dataProcessing;

    ExperimentConfig m_experimentConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
