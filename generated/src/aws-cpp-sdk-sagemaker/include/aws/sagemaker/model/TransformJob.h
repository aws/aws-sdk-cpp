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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
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
   * <p>A batch transform job. For information about SageMaker batch transform, see
   * <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Use
   * Batch Transform</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformJob">AWS
   * API Reference</a></p>
   */
  class TransformJob
  {
  public:
    AWS_SAGEMAKER_API TransformJob() = default;
    AWS_SAGEMAKER_API TransformJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const { return m_transformJobName; }
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }
    template<typename TransformJobNameT = Aws::String>
    void SetTransformJobName(TransformJobNameT&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::forward<TransformJobNameT>(value); }
    template<typename TransformJobNameT = Aws::String>
    TransformJob& WithTransformJobName(TransformJobNameT&& value) { SetTransformJobName(std::forward<TransformJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const { return m_transformJobArn; }
    inline bool TransformJobArnHasBeenSet() const { return m_transformJobArnHasBeenSet; }
    template<typename TransformJobArnT = Aws::String>
    void SetTransformJobArn(TransformJobArnT&& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = std::forward<TransformJobArnT>(value); }
    template<typename TransformJobArnT = Aws::String>
    TransformJob& WithTransformJobArn(TransformJobArnT&& value) { SetTransformJobArn(std::forward<TransformJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the transform job.</p> <p>Transform job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The job is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The transform job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTransformJob</code> call.</p> </li> <li> <p> <code>Stopping</code>
     * - The transform job is stopping.</p> </li> <li> <p> <code>Stopped</code> - The
     * transform job has stopped.</p> </li> </ul>
     */
    inline TransformJobStatus GetTransformJobStatus() const { return m_transformJobStatus; }
    inline bool TransformJobStatusHasBeenSet() const { return m_transformJobStatusHasBeenSet; }
    inline void SetTransformJobStatus(TransformJobStatus value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = value; }
    inline TransformJob& WithTransformJobStatus(TransformJobStatus value) { SetTransformJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    TransformJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    TransformJob& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to 0 or left
     * unset, SageMaker checks the optional execution-parameters to determine the
     * settings for your chosen algorithm. If the execution-parameters endpoint is not
     * enabled, the default value is 1. For built-in algorithms, you don't need to set
     * a value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline int GetMaxConcurrentTransforms() const { return m_maxConcurrentTransforms; }
    inline bool MaxConcurrentTransformsHasBeenSet() const { return m_maxConcurrentTransformsHasBeenSet; }
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransformsHasBeenSet = true; m_maxConcurrentTransforms = value; }
    inline TransformJob& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}
    ///@}

    ///@{
    
    inline const ModelClientConfig& GetModelClientConfig() const { return m_modelClientConfig; }
    inline bool ModelClientConfigHasBeenSet() const { return m_modelClientConfigHasBeenSet; }
    template<typename ModelClientConfigT = ModelClientConfig>
    void SetModelClientConfig(ModelClientConfigT&& value) { m_modelClientConfigHasBeenSet = true; m_modelClientConfig = std::forward<ModelClientConfigT>(value); }
    template<typename ModelClientConfigT = ModelClientConfig>
    TransformJob& WithModelClientConfig(ModelClientConfigT&& value) { SetModelClientConfig(std::forward<ModelClientConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed size of the payload, in MB. A payload is the data portion
     * of a record (without metadata). The value in <code>MaxPayloadInMB</code> must be
     * greater than, or equal to, the size of a single record. To estimate the size of
     * a record in MB, divide the size of your dataset by the number of records. To
     * ensure that the records fit within the maximum payload size, we recommend using
     * a slightly larger value. The default value is 6 MB. For cases where the payload
     * might be arbitrarily large and is transmitted using HTTP chunked encoding, set
     * the value to 0. This feature works only in supported algorithms. Currently,
     * SageMaker built-in algorithms do not support HTTP chunked encoding.</p>
     */
    inline int GetMaxPayloadInMB() const { return m_maxPayloadInMB; }
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }
    inline TransformJob& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline BatchStrategy GetBatchStrategy() const { return m_batchStrategy; }
    inline bool BatchStrategyHasBeenSet() const { return m_batchStrategyHasBeenSet; }
    inline void SetBatchStrategy(BatchStrategy value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = value; }
    inline TransformJob& WithBatchStrategy(BatchStrategy value) { SetBatchStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    TransformJob& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    TransformJob& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const TransformInput& GetTransformInput() const { return m_transformInput; }
    inline bool TransformInputHasBeenSet() const { return m_transformInputHasBeenSet; }
    template<typename TransformInputT = TransformInput>
    void SetTransformInput(TransformInputT&& value) { m_transformInputHasBeenSet = true; m_transformInput = std::forward<TransformInputT>(value); }
    template<typename TransformInputT = TransformInput>
    TransformJob& WithTransformInput(TransformInputT&& value) { SetTransformInput(std::forward<TransformInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TransformOutput& GetTransformOutput() const { return m_transformOutput; }
    inline bool TransformOutputHasBeenSet() const { return m_transformOutputHasBeenSet; }
    template<typename TransformOutputT = TransformOutput>
    void SetTransformOutput(TransformOutputT&& value) { m_transformOutputHasBeenSet = true; m_transformOutput = std::forward<TransformOutputT>(value); }
    template<typename TransformOutputT = TransformOutput>
    TransformJob& WithTransformOutput(TransformOutputT&& value) { SetTransformOutput(std::forward<TransformOutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BatchDataCaptureConfig& GetDataCaptureConfig() const { return m_dataCaptureConfig; }
    inline bool DataCaptureConfigHasBeenSet() const { return m_dataCaptureConfigHasBeenSet; }
    template<typename DataCaptureConfigT = BatchDataCaptureConfig>
    void SetDataCaptureConfig(DataCaptureConfigT&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::forward<DataCaptureConfigT>(value); }
    template<typename DataCaptureConfigT = BatchDataCaptureConfig>
    TransformJob& WithDataCaptureConfig(DataCaptureConfigT&& value) { SetDataCaptureConfig(std::forward<DataCaptureConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TransformResources& GetTransformResources() const { return m_transformResources; }
    inline bool TransformResourcesHasBeenSet() const { return m_transformResourcesHasBeenSet; }
    template<typename TransformResourcesT = TransformResources>
    void SetTransformResources(TransformResourcesT&& value) { m_transformResourcesHasBeenSet = true; m_transformResources = std::forward<TransformResourcesT>(value); }
    template<typename TransformResourcesT = TransformResources>
    TransformJob& WithTransformResources(TransformResourcesT&& value) { SetTransformResources(std::forward<TransformResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransformJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformStartTime() const { return m_transformStartTime; }
    inline bool TransformStartTimeHasBeenSet() const { return m_transformStartTimeHasBeenSet; }
    template<typename TransformStartTimeT = Aws::Utils::DateTime>
    void SetTransformStartTime(TransformStartTimeT&& value) { m_transformStartTimeHasBeenSet = true; m_transformStartTime = std::forward<TransformStartTimeT>(value); }
    template<typename TransformStartTimeT = Aws::Utils::DateTime>
    TransformJob& WithTransformStartTime(TransformStartTimeT&& value) { SetTransformStartTime(std::forward<TransformStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const { return m_transformEndTime; }
    inline bool TransformEndTimeHasBeenSet() const { return m_transformEndTimeHasBeenSet; }
    template<typename TransformEndTimeT = Aws::Utils::DateTime>
    void SetTransformEndTime(TransformEndTimeT&& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = std::forward<TransformEndTimeT>(value); }
    template<typename TransformEndTimeT = Aws::Utils::DateTime>
    TransformJob& WithTransformEndTime(TransformEndTimeT&& value) { SetTransformEndTime(std::forward<TransformEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    TransformJob& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    TransformJob& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataProcessing& GetDataProcessing() const { return m_dataProcessing; }
    inline bool DataProcessingHasBeenSet() const { return m_dataProcessingHasBeenSet; }
    template<typename DataProcessingT = DataProcessing>
    void SetDataProcessing(DataProcessingT&& value) { m_dataProcessingHasBeenSet = true; m_dataProcessing = std::forward<DataProcessingT>(value); }
    template<typename DataProcessingT = DataProcessing>
    TransformJob& WithDataProcessing(DataProcessingT&& value) { SetDataProcessing(std::forward<DataProcessingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    TransformJob& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TransformJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TransformJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
