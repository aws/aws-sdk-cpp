/**
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
    AWS_SAGEMAKER_API DescribeTransformJobResult() = default;
    AWS_SAGEMAKER_API DescribeTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const { return m_transformJobName; }
    template<typename TransformJobNameT = Aws::String>
    void SetTransformJobName(TransformJobNameT&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::forward<TransformJobNameT>(value); }
    template<typename TransformJobNameT = Aws::String>
    DescribeTransformJobResult& WithTransformJobName(TransformJobNameT&& value) { SetTransformJobName(std::forward<TransformJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const { return m_transformJobArn; }
    template<typename TransformJobArnT = Aws::String>
    void SetTransformJobArn(TransformJobArnT&& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = std::forward<TransformJobArnT>(value); }
    template<typename TransformJobArnT = Aws::String>
    DescribeTransformJobResult& WithTransformJobArn(TransformJobArnT&& value) { SetTransformJobArn(std::forward<TransformJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the transform job. If the transform job failed, the reason is
     * returned in the <code>FailureReason</code> field.</p>
     */
    inline TransformJobStatus GetTransformJobStatus() const { return m_transformJobStatus; }
    inline void SetTransformJobStatus(TransformJobStatus value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = value; }
    inline DescribeTransformJobResult& WithTransformJobStatus(TransformJobStatus value) { SetTransformJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the transform job failed, <code>FailureReason</code> describes why it
     * failed. A transform job creates a log file, which includes error messages, and
     * stores it as an Amazon S3 object. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/logging-cloudwatch.html">Log
     * Amazon SageMaker Events with Amazon CloudWatch</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeTransformJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model used in the transform job.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeTransformJobResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of parallel requests on each instance node that can be
     * launched in a transform job. The default value is 1.</p>
     */
    inline int GetMaxConcurrentTransforms() const { return m_maxConcurrentTransforms; }
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransformsHasBeenSet = true; m_maxConcurrentTransforms = value; }
    inline DescribeTransformJobResult& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout and maximum number of retries for processing a transform job
     * invocation.</p>
     */
    inline const ModelClientConfig& GetModelClientConfig() const { return m_modelClientConfig; }
    template<typename ModelClientConfigT = ModelClientConfig>
    void SetModelClientConfig(ModelClientConfigT&& value) { m_modelClientConfigHasBeenSet = true; m_modelClientConfig = std::forward<ModelClientConfigT>(value); }
    template<typename ModelClientConfigT = ModelClientConfig>
    DescribeTransformJobResult& WithModelClientConfig(ModelClientConfigT&& value) { SetModelClientConfig(std::forward<ModelClientConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum payload size, in MB, used in the transform job.</p>
     */
    inline int GetMaxPayloadInMB() const { return m_maxPayloadInMB; }
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }
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
    inline BatchStrategy GetBatchStrategy() const { return m_batchStrategy; }
    inline void SetBatchStrategy(BatchStrategy value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = value; }
    inline DescribeTransformJobResult& WithBatchStrategy(BatchStrategy value) { SetBatchStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    DescribeTransformJobResult& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    DescribeTransformJobResult& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Describes the dataset to be transformed and the Amazon S3 location where it
     * is stored.</p>
     */
    inline const TransformInput& GetTransformInput() const { return m_transformInput; }
    template<typename TransformInputT = TransformInput>
    void SetTransformInput(TransformInputT&& value) { m_transformInputHasBeenSet = true; m_transformInput = std::forward<TransformInputT>(value); }
    template<typename TransformInputT = TransformInput>
    DescribeTransformJobResult& WithTransformInput(TransformInputT&& value) { SetTransformInput(std::forward<TransformInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline const TransformOutput& GetTransformOutput() const { return m_transformOutput; }
    template<typename TransformOutputT = TransformOutput>
    void SetTransformOutput(TransformOutputT&& value) { m_transformOutputHasBeenSet = true; m_transformOutput = std::forward<TransformOutputT>(value); }
    template<typename TransformOutputT = TransformOutput>
    DescribeTransformJobResult& WithTransformOutput(TransformOutputT&& value) { SetTransformOutput(std::forward<TransformOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to control how SageMaker captures inference data.</p>
     */
    inline const BatchDataCaptureConfig& GetDataCaptureConfig() const { return m_dataCaptureConfig; }
    template<typename DataCaptureConfigT = BatchDataCaptureConfig>
    void SetDataCaptureConfig(DataCaptureConfigT&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::forward<DataCaptureConfigT>(value); }
    template<typename DataCaptureConfigT = BatchDataCaptureConfig>
    DescribeTransformJobResult& WithDataCaptureConfig(DataCaptureConfigT&& value) { SetDataCaptureConfig(std::forward<DataCaptureConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the resources, including ML instance types and ML instance count,
     * to use for the transform job.</p>
     */
    inline const TransformResources& GetTransformResources() const { return m_transformResources; }
    template<typename TransformResourcesT = TransformResources>
    void SetTransformResources(TransformResourcesT&& value) { m_transformResourcesHasBeenSet = true; m_transformResources = std::forward<TransformResourcesT>(value); }
    template<typename TransformResourcesT = TransformResources>
    DescribeTransformJobResult& WithTransformResources(TransformResourcesT&& value) { SetTransformResources(std::forward<TransformResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeTransformJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformStartTime() const { return m_transformStartTime; }
    template<typename TransformStartTimeT = Aws::Utils::DateTime>
    void SetTransformStartTime(TransformStartTimeT&& value) { m_transformStartTimeHasBeenSet = true; m_transformStartTime = std::forward<TransformStartTimeT>(value); }
    template<typename TransformStartTimeT = Aws::Utils::DateTime>
    DescribeTransformJobResult& WithTransformStartTime(TransformStartTimeT&& value) { SetTransformStartTime(std::forward<TransformStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const { return m_transformEndTime; }
    template<typename TransformEndTimeT = Aws::Utils::DateTime>
    void SetTransformEndTime(TransformEndTimeT&& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = std::forward<TransformEndTimeT>(value); }
    template<typename TransformEndTimeT = Aws::Utils::DateTime>
    DescribeTransformJobResult& WithTransformEndTime(TransformEndTimeT&& value) { SetTransformEndTime(std::forward<TransformEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    DescribeTransformJobResult& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML transform job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    DescribeTransformJobResult& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataProcessing& GetDataProcessing() const { return m_dataProcessing; }
    template<typename DataProcessingT = DataProcessing>
    void SetDataProcessing(DataProcessingT&& value) { m_dataProcessingHasBeenSet = true; m_dataProcessing = std::forward<DataProcessingT>(value); }
    template<typename DataProcessingT = DataProcessing>
    DescribeTransformJobResult& WithDataProcessing(DataProcessingT&& value) { SetDataProcessing(std::forward<DataProcessingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    DescribeTransformJobResult& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTransformJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet = false;

    Aws::String m_transformJobArn;
    bool m_transformJobArnHasBeenSet = false;

    TransformJobStatus m_transformJobStatus{TransformJobStatus::NOT_SET};
    bool m_transformJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    int m_maxConcurrentTransforms{0};
    bool m_maxConcurrentTransformsHasBeenSet = false;

    ModelClientConfig m_modelClientConfig;
    bool m_modelClientConfigHasBeenSet = false;

    int m_maxPayloadInMB{0};
    bool m_maxPayloadInMBHasBeenSet = false;

    BatchStrategy m_batchStrategy{BatchStrategy::NOT_SET};
    bool m_batchStrategyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    TransformInput m_transformInput;
    bool m_transformInputHasBeenSet = false;

    TransformOutput m_transformOutput;
    bool m_transformOutputHasBeenSet = false;

    BatchDataCaptureConfig m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    TransformResources m_transformResources;
    bool m_transformResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transformStartTime{};
    bool m_transformStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transformEndTime{};
    bool m_transformEndTimeHasBeenSet = false;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    DataProcessing m_dataProcessing;
    bool m_dataProcessingHasBeenSet = false;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
