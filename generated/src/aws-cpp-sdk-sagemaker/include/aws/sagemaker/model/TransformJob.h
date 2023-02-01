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
    AWS_SAGEMAKER_API TransformJob();
    AWS_SAGEMAKER_API TransformJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const{ return m_transformJobName; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(const Aws::String& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = value; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(Aws::String&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::move(value); }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(const char* value) { m_transformJobNameHasBeenSet = true; m_transformJobName.assign(value); }

    /**
     * <p>The name of the transform job.</p>
     */
    inline TransformJob& WithTransformJobName(const Aws::String& value) { SetTransformJobName(value); return *this;}

    /**
     * <p>The name of the transform job.</p>
     */
    inline TransformJob& WithTransformJobName(Aws::String&& value) { SetTransformJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform job.</p>
     */
    inline TransformJob& WithTransformJobName(const char* value) { SetTransformJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const{ return m_transformJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline bool TransformJobArnHasBeenSet() const { return m_transformJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(const Aws::String& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(Aws::String&& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(const char* value) { m_transformJobArnHasBeenSet = true; m_transformJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline TransformJob& WithTransformJobArn(const Aws::String& value) { SetTransformJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline TransformJob& WithTransformJobArn(Aws::String&& value) { SetTransformJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline TransformJob& WithTransformJobArn(const char* value) { SetTransformJobArn(value); return *this;}


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
    inline const TransformJobStatus& GetTransformJobStatus() const{ return m_transformJobStatus; }

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
    inline bool TransformJobStatusHasBeenSet() const { return m_transformJobStatusHasBeenSet; }

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
    inline void SetTransformJobStatus(const TransformJobStatus& value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = value; }

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
    inline void SetTransformJobStatus(TransformJobStatus&& value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = std::move(value); }

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
    inline TransformJob& WithTransformJobStatus(const TransformJobStatus& value) { SetTransformJobStatus(value); return *this;}

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
    inline TransformJob& WithTransformJobStatus(TransformJobStatus&& value) { SetTransformJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline TransformJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline TransformJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline TransformJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline TransformJob& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline TransformJob& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model associated with the transform job.</p>
     */
    inline TransformJob& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to 0 or left
     * unset, SageMaker checks the optional execution-parameters to determine the
     * settings for your chosen algorithm. If the execution-parameters endpoint is not
     * enabled, the default value is 1. For built-in algorithms, you don't need to set
     * a value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline int GetMaxConcurrentTransforms() const{ return m_maxConcurrentTransforms; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to 0 or left
     * unset, SageMaker checks the optional execution-parameters to determine the
     * settings for your chosen algorithm. If the execution-parameters endpoint is not
     * enabled, the default value is 1. For built-in algorithms, you don't need to set
     * a value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline bool MaxConcurrentTransformsHasBeenSet() const { return m_maxConcurrentTransformsHasBeenSet; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to 0 or left
     * unset, SageMaker checks the optional execution-parameters to determine the
     * settings for your chosen algorithm. If the execution-parameters endpoint is not
     * enabled, the default value is 1. For built-in algorithms, you don't need to set
     * a value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransformsHasBeenSet = true; m_maxConcurrentTransforms = value; }

    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. If <code>MaxConcurrentTransforms</code> is set to 0 or left
     * unset, SageMaker checks the optional execution-parameters to determine the
     * settings for your chosen algorithm. If the execution-parameters endpoint is not
     * enabled, the default value is 1. For built-in algorithms, you don't need to set
     * a value for <code>MaxConcurrentTransforms</code>.</p>
     */
    inline TransformJob& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}


    
    inline const ModelClientConfig& GetModelClientConfig() const{ return m_modelClientConfig; }

    
    inline bool ModelClientConfigHasBeenSet() const { return m_modelClientConfigHasBeenSet; }

    
    inline void SetModelClientConfig(const ModelClientConfig& value) { m_modelClientConfigHasBeenSet = true; m_modelClientConfig = value; }

    
    inline void SetModelClientConfig(ModelClientConfig&& value) { m_modelClientConfigHasBeenSet = true; m_modelClientConfig = std::move(value); }

    
    inline TransformJob& WithModelClientConfig(const ModelClientConfig& value) { SetModelClientConfig(value); return *this;}

    
    inline TransformJob& WithModelClientConfig(ModelClientConfig&& value) { SetModelClientConfig(std::move(value)); return *this;}


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
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }

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
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }

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
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }

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
    inline TransformJob& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}


    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline const BatchStrategy& GetBatchStrategy() const{ return m_batchStrategy; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline bool BatchStrategyHasBeenSet() const { return m_batchStrategyHasBeenSet; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline void SetBatchStrategy(const BatchStrategy& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = value; }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline void SetBatchStrategy(BatchStrategy&& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = std::move(value); }

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline TransformJob& WithBatchStrategy(const BatchStrategy& value) { SetBatchStrategy(value); return *this;}

    /**
     * <p>Specifies the number of records to include in a mini-batch for an HTTP
     * inference request. A record is a single unit of input data that inference can be
     * made on. For example, a single line in a CSV file is a record.</p>
     */
    inline TransformJob& WithBatchStrategy(BatchStrategy&& value) { SetBatchStrategy(std::move(value)); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline TransformJob& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    
    inline const TransformInput& GetTransformInput() const{ return m_transformInput; }

    
    inline bool TransformInputHasBeenSet() const { return m_transformInputHasBeenSet; }

    
    inline void SetTransformInput(const TransformInput& value) { m_transformInputHasBeenSet = true; m_transformInput = value; }

    
    inline void SetTransformInput(TransformInput&& value) { m_transformInputHasBeenSet = true; m_transformInput = std::move(value); }

    
    inline TransformJob& WithTransformInput(const TransformInput& value) { SetTransformInput(value); return *this;}

    
    inline TransformJob& WithTransformInput(TransformInput&& value) { SetTransformInput(std::move(value)); return *this;}


    
    inline const TransformOutput& GetTransformOutput() const{ return m_transformOutput; }

    
    inline bool TransformOutputHasBeenSet() const { return m_transformOutputHasBeenSet; }

    
    inline void SetTransformOutput(const TransformOutput& value) { m_transformOutputHasBeenSet = true; m_transformOutput = value; }

    
    inline void SetTransformOutput(TransformOutput&& value) { m_transformOutputHasBeenSet = true; m_transformOutput = std::move(value); }

    
    inline TransformJob& WithTransformOutput(const TransformOutput& value) { SetTransformOutput(value); return *this;}

    
    inline TransformJob& WithTransformOutput(TransformOutput&& value) { SetTransformOutput(std::move(value)); return *this;}


    
    inline const TransformResources& GetTransformResources() const{ return m_transformResources; }

    
    inline bool TransformResourcesHasBeenSet() const { return m_transformResourcesHasBeenSet; }

    
    inline void SetTransformResources(const TransformResources& value) { m_transformResourcesHasBeenSet = true; m_transformResources = value; }

    
    inline void SetTransformResources(TransformResources&& value) { m_transformResourcesHasBeenSet = true; m_transformResources = std::move(value); }

    
    inline TransformJob& WithTransformResources(const TransformResources& value) { SetTransformResources(value); return *this;}

    
    inline TransformJob& WithTransformResources(TransformResources&& value) { SetTransformResources(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline TransformJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline TransformJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformStartTime() const{ return m_transformStartTime; }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline bool TransformStartTimeHasBeenSet() const { return m_transformStartTimeHasBeenSet; }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline void SetTransformStartTime(const Aws::Utils::DateTime& value) { m_transformStartTimeHasBeenSet = true; m_transformStartTime = value; }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline void SetTransformStartTime(Aws::Utils::DateTime&& value) { m_transformStartTimeHasBeenSet = true; m_transformStartTime = std::move(value); }

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline TransformJob& WithTransformStartTime(const Aws::Utils::DateTime& value) { SetTransformStartTime(value); return *this;}

    /**
     * <p>Indicates when the transform job starts on ML instances. You are billed for
     * the time interval between this time and the value of
     * <code>TransformEndTime</code>.</p>
     */
    inline TransformJob& WithTransformStartTime(Aws::Utils::DateTime&& value) { SetTransformStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const{ return m_transformEndTime; }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline bool TransformEndTimeHasBeenSet() const { return m_transformEndTimeHasBeenSet; }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline void SetTransformEndTime(const Aws::Utils::DateTime& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = value; }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline void SetTransformEndTime(Aws::Utils::DateTime&& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = std::move(value); }

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline TransformJob& WithTransformEndTime(const Aws::Utils::DateTime& value) { SetTransformEndTime(value); return *this;}

    /**
     * <p>Indicates when the transform job has been completed, or has stopped or
     * failed. You are billed for the time interval between this time and the value of
     * <code>TransformStartTime</code>.</p>
     */
    inline TransformJob& WithTransformEndTime(Aws::Utils::DateTime&& value) { SetTransformEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline TransformJob& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline TransformJob& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job that created the transform
     * job.</p>
     */
    inline TransformJob& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline TransformJob& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline TransformJob& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job that created the transform
     * job.</p>
     */
    inline TransformJob& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}


    
    inline const DataProcessing& GetDataProcessing() const{ return m_dataProcessing; }

    
    inline bool DataProcessingHasBeenSet() const { return m_dataProcessingHasBeenSet; }

    
    inline void SetDataProcessing(const DataProcessing& value) { m_dataProcessingHasBeenSet = true; m_dataProcessing = value; }

    
    inline void SetDataProcessing(DataProcessing&& value) { m_dataProcessingHasBeenSet = true; m_dataProcessing = std::move(value); }

    
    inline TransformJob& WithDataProcessing(const DataProcessing& value) { SetDataProcessing(value); return *this;}

    
    inline TransformJob& WithDataProcessing(DataProcessing&& value) { SetDataProcessing(std::move(value)); return *this;}


    
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }

    
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }

    
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = value; }

    
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::move(value); }

    
    inline TransformJob& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}

    
    inline TransformJob& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}


    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline TransformJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline TransformJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline TransformJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with the transform job.</p>
     */
    inline TransformJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet = false;

    Aws::String m_transformJobArn;
    bool m_transformJobArnHasBeenSet = false;

    TransformJobStatus m_transformJobStatus;
    bool m_transformJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    int m_maxConcurrentTransforms;
    bool m_maxConcurrentTransformsHasBeenSet = false;

    ModelClientConfig m_modelClientConfig;
    bool m_modelClientConfigHasBeenSet = false;

    int m_maxPayloadInMB;
    bool m_maxPayloadInMBHasBeenSet = false;

    BatchStrategy m_batchStrategy;
    bool m_batchStrategyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    TransformInput m_transformInput;
    bool m_transformInputHasBeenSet = false;

    TransformOutput m_transformOutput;
    bool m_transformOutputHasBeenSet = false;

    TransformResources m_transformResources;
    bool m_transformResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transformStartTime;
    bool m_transformStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transformEndTime;
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
