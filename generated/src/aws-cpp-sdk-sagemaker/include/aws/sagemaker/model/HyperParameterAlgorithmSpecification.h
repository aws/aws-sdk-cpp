/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies which training algorithm to use for training jobs that a
   * hyperparameter tuning job launches and the metrics to monitor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterAlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class HyperParameterAlgorithmSpecification
  {
  public:
    AWS_SAGEMAKER_API HyperParameterAlgorithmSpecification() = default;
    AWS_SAGEMAKER_API HyperParameterAlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterAlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline const Aws::String& GetTrainingImage() const { return m_trainingImage; }
    inline bool TrainingImageHasBeenSet() const { return m_trainingImageHasBeenSet; }
    template<typename TrainingImageT = Aws::String>
    void SetTrainingImage(TrainingImageT&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::forward<TrainingImageT>(value); }
    template<typename TrainingImageT = Aws::String>
    HyperParameterAlgorithmSpecification& WithTrainingImage(TrainingImageT&& value) { SetTrainingImage(std::forward<TrainingImageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline TrainingInputMode GetTrainingInputMode() const { return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    inline void SetTrainingInputMode(TrainingInputMode value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline HyperParameterAlgorithmSpecification& WithTrainingInputMode(TrainingInputMode value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline const Aws::String& GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    template<typename AlgorithmNameT = Aws::String>
    void SetAlgorithmName(AlgorithmNameT&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::forward<AlgorithmNameT>(value); }
    template<typename AlgorithmNameT = Aws::String>
    HyperParameterAlgorithmSpecification& WithAlgorithmName(AlgorithmNameT&& value) { SetAlgorithmName(std::forward<AlgorithmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_MetricDefinition.html">MetricDefinition</a>
     * objects that specify the metrics that the algorithm emits.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const { return m_metricDefinitions; }
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    void SetMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::forward<MetricDefinitionsT>(value); }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    HyperParameterAlgorithmSpecification& WithMetricDefinitions(MetricDefinitionsT&& value) { SetMetricDefinitions(std::forward<MetricDefinitionsT>(value)); return *this;}
    template<typename MetricDefinitionsT = MetricDefinition>
    HyperParameterAlgorithmSpecification& AddMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.emplace_back(std::forward<MetricDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet = false;

    TrainingInputMode m_trainingInputMode{TrainingInputMode::NOT_SET};
    bool m_trainingInputModeHasBeenSet = false;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
