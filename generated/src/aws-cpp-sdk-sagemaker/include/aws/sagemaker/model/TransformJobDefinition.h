/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BatchStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/TransformInput.h>
#include <aws/sagemaker/model/TransformOutput.h>
#include <aws/sagemaker/model/TransformResources.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines the input needed to run a transform job using the inference
   * specification specified in the algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformJobDefinition">AWS
   * API Reference</a></p>
   */
  class TransformJobDefinition
  {
  public:
    AWS_SAGEMAKER_API TransformJobDefinition();
    AWS_SAGEMAKER_API TransformJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of parallel requests that can be sent to each instance in
     * a transform job. The default value is 1.</p>
     */
    inline int GetMaxConcurrentTransforms() const{ return m_maxConcurrentTransforms; }
    inline bool MaxConcurrentTransformsHasBeenSet() const { return m_maxConcurrentTransformsHasBeenSet; }
    inline void SetMaxConcurrentTransforms(int value) { m_maxConcurrentTransformsHasBeenSet = true; m_maxConcurrentTransforms = value; }
    inline TransformJobDefinition& WithMaxConcurrentTransforms(int value) { SetMaxConcurrentTransforms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum payload size allowed, in MB. A payload is the data portion of a
     * record (without metadata).</p>
     */
    inline int GetMaxPayloadInMB() const{ return m_maxPayloadInMB; }
    inline bool MaxPayloadInMBHasBeenSet() const { return m_maxPayloadInMBHasBeenSet; }
    inline void SetMaxPayloadInMB(int value) { m_maxPayloadInMBHasBeenSet = true; m_maxPayloadInMB = value; }
    inline TransformJobDefinition& WithMaxPayloadInMB(int value) { SetMaxPayloadInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that determines the number of records included in a single
     * mini-batch.</p> <p> <code>SingleRecord</code> means only one record is used per
     * mini-batch. <code>MultiRecord</code> means a mini-batch is set to contain as
     * many records that can fit within the <code>MaxPayloadInMB</code> limit.</p>
     */
    inline const BatchStrategy& GetBatchStrategy() const{ return m_batchStrategy; }
    inline bool BatchStrategyHasBeenSet() const { return m_batchStrategyHasBeenSet; }
    inline void SetBatchStrategy(const BatchStrategy& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = value; }
    inline void SetBatchStrategy(BatchStrategy&& value) { m_batchStrategyHasBeenSet = true; m_batchStrategy = std::move(value); }
    inline TransformJobDefinition& WithBatchStrategy(const BatchStrategy& value) { SetBatchStrategy(value); return *this;}
    inline TransformJobDefinition& WithBatchStrategy(BatchStrategy&& value) { SetBatchStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. We support up to 16
     * key and values entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline TransformJobDefinition& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline TransformJobDefinition& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline TransformJobDefinition& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline TransformJobDefinition& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline TransformJobDefinition& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline TransformJobDefinition& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline TransformJobDefinition& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline TransformJobDefinition& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline TransformJobDefinition& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the input source and the way the transform job consumes
     * it.</p>
     */
    inline const TransformInput& GetTransformInput() const{ return m_transformInput; }
    inline bool TransformInputHasBeenSet() const { return m_transformInputHasBeenSet; }
    inline void SetTransformInput(const TransformInput& value) { m_transformInputHasBeenSet = true; m_transformInput = value; }
    inline void SetTransformInput(TransformInput&& value) { m_transformInputHasBeenSet = true; m_transformInput = std::move(value); }
    inline TransformJobDefinition& WithTransformInput(const TransformInput& value) { SetTransformInput(value); return *this;}
    inline TransformJobDefinition& WithTransformInput(TransformInput&& value) { SetTransformInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon S3 location where you want Amazon SageMaker to save the
     * results from the transform job.</p>
     */
    inline const TransformOutput& GetTransformOutput() const{ return m_transformOutput; }
    inline bool TransformOutputHasBeenSet() const { return m_transformOutputHasBeenSet; }
    inline void SetTransformOutput(const TransformOutput& value) { m_transformOutputHasBeenSet = true; m_transformOutput = value; }
    inline void SetTransformOutput(TransformOutput&& value) { m_transformOutputHasBeenSet = true; m_transformOutput = std::move(value); }
    inline TransformJobDefinition& WithTransformOutput(const TransformOutput& value) { SetTransformOutput(value); return *this;}
    inline TransformJobDefinition& WithTransformOutput(TransformOutput&& value) { SetTransformOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the ML compute instances for the transform job.</p>
     */
    inline const TransformResources& GetTransformResources() const{ return m_transformResources; }
    inline bool TransformResourcesHasBeenSet() const { return m_transformResourcesHasBeenSet; }
    inline void SetTransformResources(const TransformResources& value) { m_transformResourcesHasBeenSet = true; m_transformResources = value; }
    inline void SetTransformResources(TransformResources&& value) { m_transformResourcesHasBeenSet = true; m_transformResources = std::move(value); }
    inline TransformJobDefinition& WithTransformResources(const TransformResources& value) { SetTransformResources(value); return *this;}
    inline TransformJobDefinition& WithTransformResources(TransformResources&& value) { SetTransformResources(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxConcurrentTransforms;
    bool m_maxConcurrentTransformsHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
