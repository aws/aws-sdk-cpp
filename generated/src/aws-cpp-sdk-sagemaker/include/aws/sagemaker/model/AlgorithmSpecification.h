/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrainingImageConfig.h>
#include <aws/sagemaker/model/MetricDefinition.h>
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
   * <p>Specifies the training algorithm to use in a <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingJob.html">CreateTrainingJob</a>
   * request.</p>  <p>SageMaker uses its own SageMaker account credentials
   * to pull and access built-in algorithms so built-in algorithms are universally
   * accessible across all Amazon Web Services accounts. As a result, built-in
   * algorithms have standard, unrestricted access. You cannot restrict built-in
   * algorithms using IAM roles. Use custom algorithms if you require specific access
   * controls.</p>  <p>For more information about algorithms provided by
   * SageMaker, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
   * For information about using your own algorithms, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
   * Your Own Algorithms with Amazon SageMaker</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AlgorithmSpecification
  {
  public:
    AWS_SAGEMAKER_API AlgorithmSpecification() = default;
    AWS_SAGEMAKER_API AlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for SageMaker built-in algorithms,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Docker
     * Registry Paths and Example Code</a> in the <i>Amazon SageMaker developer
     * guide</i>. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information about using your custom training container, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>  <p>You must specify
     * either the algorithm name to the <code>AlgorithmName</code> parameter or the
     * image URI of the algorithm container to the <code>TrainingImage</code>
     * parameter.</p> <p>For more information, see the note in the
     * <code>AlgorithmName</code> parameter description.</p> 
     */
    inline const Aws::String& GetTrainingImage() const { return m_trainingImage; }
    inline bool TrainingImageHasBeenSet() const { return m_trainingImageHasBeenSet; }
    template<typename TrainingImageT = Aws::String>
    void SetTrainingImage(TrainingImageT&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::forward<TrainingImageT>(value); }
    template<typename TrainingImageT = Aws::String>
    AlgorithmSpecification& WithTrainingImage(TrainingImageT&& value) { SetTrainingImage(std::forward<TrainingImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on Amazon Web Services
     * Marketplace.</p>  <p>You must specify either the algorithm name to the
     * <code>AlgorithmName</code> parameter or the image URI of the algorithm container
     * to the <code>TrainingImage</code> parameter.</p> <p>Note that the
     * <code>AlgorithmName</code> parameter is mutually exclusive with the
     * <code>TrainingImage</code> parameter. If you specify a value for the
     * <code>AlgorithmName</code> parameter, you can't specify a value for
     * <code>TrainingImage</code>, and vice versa.</p> <p>If you specify values for
     * both parameters, the training job might break; if you don't specify any value
     * for both parameters, the training job might raise a <code>null</code> error.</p>
     * 
     */
    inline const Aws::String& GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    template<typename AlgorithmNameT = Aws::String>
    void SetAlgorithmName(AlgorithmNameT&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::forward<AlgorithmNameT>(value); }
    template<typename AlgorithmNameT = Aws::String>
    AlgorithmSpecification& WithAlgorithmName(AlgorithmNameT&& value) { SetAlgorithmName(std::forward<AlgorithmNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline TrainingInputMode GetTrainingInputMode() const { return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    inline void SetTrainingInputMode(TrainingInputMode value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline AlgorithmSpecification& WithTrainingInputMode(TrainingInputMode value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. SageMaker publishes each
     * metric to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const { return m_metricDefinitions; }
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    void SetMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::forward<MetricDefinitionsT>(value); }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    AlgorithmSpecification& WithMetricDefinitions(MetricDefinitionsT&& value) { SetMetricDefinitions(std::forward<MetricDefinitionsT>(value)); return *this;}
    template<typename MetricDefinitionsT = MetricDefinition>
    AlgorithmSpecification& AddMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.emplace_back(std::forward<MetricDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>To generate and save time-series metrics during training, set to
     * <code>true</code>. The default is <code>false</code> and time-series metrics
     * aren't generated except in the following cases:</p> <ul> <li> <p>You use one of
     * the SageMaker built-in algorithms</p> </li> <li> <p>You use one of the following
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pre-built-containers-frameworks-deep-learning.html">Prebuilt
     * SageMaker Docker Images</a>:</p> <ul> <li> <p>Tensorflow (version &gt;=
     * 1.15)</p> </li> <li> <p>MXNet (version &gt;= 1.6)</p> </li> <li> <p>PyTorch
     * (version &gt;= 1.3)</p> </li> </ul> </li> <li> <p>You specify at least one <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_MetricDefinition.html">MetricDefinition</a>
     * </p> </li> </ul>
     */
    inline bool GetEnableSageMakerMetricsTimeSeries() const { return m_enableSageMakerMetricsTimeSeries; }
    inline bool EnableSageMakerMetricsTimeSeriesHasBeenSet() const { return m_enableSageMakerMetricsTimeSeriesHasBeenSet; }
    inline void SetEnableSageMakerMetricsTimeSeries(bool value) { m_enableSageMakerMetricsTimeSeriesHasBeenSet = true; m_enableSageMakerMetricsTimeSeries = value; }
    inline AlgorithmSpecification& WithEnableSageMakerMetricsTimeSeries(bool value) { SetEnableSageMakerMetricsTimeSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a href="https://docs.docker.com/engine/reference/builder/">entrypoint
     * script for a Docker container</a> used to run a training job. This script takes
     * precedence over the default train processing instructions. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-training-algo-dockerfile.html">How
     * Amazon SageMaker Runs Your Training Image</a> for more information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const { return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    void SetContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::forward<ContainerEntrypointT>(value); }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    AlgorithmSpecification& WithContainerEntrypoint(ContainerEntrypointT&& value) { SetContainerEntrypoint(std::forward<ContainerEntrypointT>(value)); return *this;}
    template<typename ContainerEntrypointT = Aws::String>
    AlgorithmSpecification& AddContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.emplace_back(std::forward<ContainerEntrypointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments for a container used to run a training job. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-training-algo-dockerfile.html">How
     * Amazon SageMaker Runs Your Training Image</a> for additional information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const { return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    void SetContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::forward<ContainerArgumentsT>(value); }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    AlgorithmSpecification& WithContainerArguments(ContainerArgumentsT&& value) { SetContainerArguments(std::forward<ContainerArgumentsT>(value)); return *this;}
    template<typename ContainerArgumentsT = Aws::String>
    AlgorithmSpecification& AddContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.emplace_back(std::forward<ContainerArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to use an image from a private Docker registry for a
     * training job.</p>
     */
    inline const TrainingImageConfig& GetTrainingImageConfig() const { return m_trainingImageConfig; }
    inline bool TrainingImageConfigHasBeenSet() const { return m_trainingImageConfigHasBeenSet; }
    template<typename TrainingImageConfigT = TrainingImageConfig>
    void SetTrainingImageConfig(TrainingImageConfigT&& value) { m_trainingImageConfigHasBeenSet = true; m_trainingImageConfig = std::forward<TrainingImageConfigT>(value); }
    template<typename TrainingImageConfigT = TrainingImageConfig>
    AlgorithmSpecification& WithTrainingImageConfig(TrainingImageConfigT&& value) { SetTrainingImageConfig(std::forward<TrainingImageConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet = false;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    TrainingInputMode m_trainingInputMode{TrainingInputMode::NOT_SET};
    bool m_trainingInputModeHasBeenSet = false;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;

    bool m_enableSageMakerMetricsTimeSeries{false};
    bool m_enableSageMakerMetricsTimeSeriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerEntrypoint;
    bool m_containerEntrypointHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerArguments;
    bool m_containerArgumentsHasBeenSet = false;

    TrainingImageConfig m_trainingImageConfig;
    bool m_trainingImageConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
