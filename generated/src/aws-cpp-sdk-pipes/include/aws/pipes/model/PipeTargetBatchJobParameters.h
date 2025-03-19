/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/BatchArrayProperties.h>
#include <aws/pipes/model/BatchRetryStrategy.h>
#include <aws/pipes/model/BatchContainerOverrides.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pipes/model/BatchJobDependency.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an Batch job as a target.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetBatchJobParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetBatchJobParameters
  {
  public:
    AWS_PIPES_API PipeTargetBatchJobParameters() = default;
    AWS_PIPES_API PipeTargetBatchJobParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetBatchJobParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline const Aws::String& GetJobDefinition() const { return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    template<typename JobDefinitionT = Aws::String>
    void SetJobDefinition(JobDefinitionT&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::forward<JobDefinitionT>(value); }
    template<typename JobDefinitionT = Aws::String>
    PipeTargetBatchJobParameters& WithJobDefinition(JobDefinitionT&& value) { SetJobDefinition(std::forward<JobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    PipeTargetBatchJobParameters& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline const BatchArrayProperties& GetArrayProperties() const { return m_arrayProperties; }
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }
    template<typename ArrayPropertiesT = BatchArrayProperties>
    void SetArrayProperties(ArrayPropertiesT&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::forward<ArrayPropertiesT>(value); }
    template<typename ArrayPropertiesT = BatchArrayProperties>
    PipeTargetBatchJobParameters& WithArrayProperties(ArrayPropertiesT&& value) { SetArrayProperties(std::forward<ArrayPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline const BatchRetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    template<typename RetryStrategyT = BatchRetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = BatchRetryStrategy>
    PipeTargetBatchJobParameters& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline const BatchContainerOverrides& GetContainerOverrides() const { return m_containerOverrides; }
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }
    template<typename ContainerOverridesT = BatchContainerOverrides>
    void SetContainerOverrides(ContainerOverridesT&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::forward<ContainerOverridesT>(value); }
    template<typename ContainerOverridesT = BatchContainerOverrides>
    PipeTargetBatchJobParameters& WithContainerOverrides(ContainerOverridesT&& value) { SetContainerOverrides(std::forward<ContainerOverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline const Aws::Vector<BatchJobDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<BatchJobDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<BatchJobDependency>>
    PipeTargetBatchJobParameters& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = BatchJobDependency>
    PipeTargetBatchJobParameters& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    PipeTargetBatchJobParameters& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    PipeTargetBatchJobParameters& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    BatchArrayProperties m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet = false;

    BatchRetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    BatchContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    Aws::Vector<BatchJobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
