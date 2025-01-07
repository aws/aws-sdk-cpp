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
    AWS_SAGEMAKER_API AlgorithmSpecification();
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
    inline const Aws::String& GetTrainingImage() const{ return m_trainingImage; }
    inline bool TrainingImageHasBeenSet() const { return m_trainingImageHasBeenSet; }
    inline void SetTrainingImage(const Aws::String& value) { m_trainingImageHasBeenSet = true; m_trainingImage = value; }
    inline void SetTrainingImage(Aws::String&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::move(value); }
    inline void SetTrainingImage(const char* value) { m_trainingImageHasBeenSet = true; m_trainingImage.assign(value); }
    inline AlgorithmSpecification& WithTrainingImage(const Aws::String& value) { SetTrainingImage(value); return *this;}
    inline AlgorithmSpecification& WithTrainingImage(Aws::String&& value) { SetTrainingImage(std::move(value)); return *this;}
    inline AlgorithmSpecification& WithTrainingImage(const char* value) { SetTrainingImage(value); return *this;}
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
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }
    inline AlgorithmSpecification& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}
    inline AlgorithmSpecification& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}
    inline AlgorithmSpecification& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}
    ///@}

    ///@{
    
    inline const TrainingInputMode& GetTrainingInputMode() const{ return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    inline void SetTrainingInputMode(const TrainingInputMode& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline void SetTrainingInputMode(TrainingInputMode&& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = std::move(value); }
    inline AlgorithmSpecification& WithTrainingInputMode(const TrainingInputMode& value) { SetTrainingInputMode(value); return *this;}
    inline AlgorithmSpecification& WithTrainingInputMode(TrainingInputMode&& value) { SetTrainingInputMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. SageMaker publishes each
     * metric to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = value; }
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::move(value); }
    inline AlgorithmSpecification& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}
    inline AlgorithmSpecification& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}
    inline AlgorithmSpecification& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(value); return *this; }
    inline AlgorithmSpecification& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(std::move(value)); return *this; }
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
    inline bool GetEnableSageMakerMetricsTimeSeries() const{ return m_enableSageMakerMetricsTimeSeries; }
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
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const{ return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    inline void SetContainerEntrypoint(const Aws::Vector<Aws::String>& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = value; }
    inline void SetContainerEntrypoint(Aws::Vector<Aws::String>&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::move(value); }
    inline AlgorithmSpecification& WithContainerEntrypoint(const Aws::Vector<Aws::String>& value) { SetContainerEntrypoint(value); return *this;}
    inline AlgorithmSpecification& WithContainerEntrypoint(Aws::Vector<Aws::String>&& value) { SetContainerEntrypoint(std::move(value)); return *this;}
    inline AlgorithmSpecification& AddContainerEntrypoint(const Aws::String& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }
    inline AlgorithmSpecification& AddContainerEntrypoint(Aws::String&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(std::move(value)); return *this; }
    inline AlgorithmSpecification& AddContainerEntrypoint(const char* value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments for a container used to run a training job. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-training-algo-dockerfile.html">How
     * Amazon SageMaker Runs Your Training Image</a> for additional information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const{ return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    inline void SetContainerArguments(const Aws::Vector<Aws::String>& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = value; }
    inline void SetContainerArguments(Aws::Vector<Aws::String>&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::move(value); }
    inline AlgorithmSpecification& WithContainerArguments(const Aws::Vector<Aws::String>& value) { SetContainerArguments(value); return *this;}
    inline AlgorithmSpecification& WithContainerArguments(Aws::Vector<Aws::String>&& value) { SetContainerArguments(std::move(value)); return *this;}
    inline AlgorithmSpecification& AddContainerArguments(const Aws::String& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }
    inline AlgorithmSpecification& AddContainerArguments(Aws::String&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(std::move(value)); return *this; }
    inline AlgorithmSpecification& AddContainerArguments(const char* value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to use an image from a private Docker registry for a
     * training job.</p>
     */
    inline const TrainingImageConfig& GetTrainingImageConfig() const{ return m_trainingImageConfig; }
    inline bool TrainingImageConfigHasBeenSet() const { return m_trainingImageConfigHasBeenSet; }
    inline void SetTrainingImageConfig(const TrainingImageConfig& value) { m_trainingImageConfigHasBeenSet = true; m_trainingImageConfig = value; }
    inline void SetTrainingImageConfig(TrainingImageConfig&& value) { m_trainingImageConfigHasBeenSet = true; m_trainingImageConfig = std::move(value); }
    inline AlgorithmSpecification& WithTrainingImageConfig(const TrainingImageConfig& value) { SetTrainingImageConfig(value); return *this;}
    inline AlgorithmSpecification& WithTrainingImageConfig(TrainingImageConfig&& value) { SetTrainingImageConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet = false;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    TrainingInputMode m_trainingInputMode;
    bool m_trainingInputModeHasBeenSet = false;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;

    bool m_enableSageMakerMetricsTimeSeries;
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
