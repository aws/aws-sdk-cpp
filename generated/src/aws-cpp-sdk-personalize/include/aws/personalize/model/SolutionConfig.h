/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/HPOConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/personalize/model/AutoMLConfig.h>
#include <aws/personalize/model/EventsConfig.h>
#include <aws/personalize/model/OptimizationObjective.h>
#include <aws/personalize/model/TrainingDataConfig.h>
#include <aws/personalize/model/AutoTrainingConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the configuration properties for the solution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionConfig">AWS
   * API Reference</a></p>
   */
  class SolutionConfig
  {
  public:
    AWS_PERSONALIZE_API SolutionConfig() = default;
    AWS_PERSONALIZE_API SolutionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline const Aws::String& GetEventValueThreshold() const { return m_eventValueThreshold; }
    inline bool EventValueThresholdHasBeenSet() const { return m_eventValueThresholdHasBeenSet; }
    template<typename EventValueThresholdT = Aws::String>
    void SetEventValueThreshold(EventValueThresholdT&& value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold = std::forward<EventValueThresholdT>(value); }
    template<typename EventValueThresholdT = Aws::String>
    SolutionConfig& WithEventValueThreshold(EventValueThresholdT&& value) { SetEventValueThreshold(std::forward<EventValueThresholdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the properties for hyperparameter optimization (HPO).</p>
     */
    inline const HPOConfig& GetHpoConfig() const { return m_hpoConfig; }
    inline bool HpoConfigHasBeenSet() const { return m_hpoConfigHasBeenSet; }
    template<typename HpoConfigT = HPOConfig>
    void SetHpoConfig(HpoConfigT&& value) { m_hpoConfigHasBeenSet = true; m_hpoConfig = std::forward<HpoConfigT>(value); }
    template<typename HpoConfigT = HPOConfig>
    SolutionConfig& WithHpoConfig(HpoConfigT&& value) { SetHpoConfig(std::forward<HpoConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the algorithm hyperparameters and their values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAlgorithmHyperParameters() const { return m_algorithmHyperParameters; }
    inline bool AlgorithmHyperParametersHasBeenSet() const { return m_algorithmHyperParametersHasBeenSet; }
    template<typename AlgorithmHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAlgorithmHyperParameters(AlgorithmHyperParametersT&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters = std::forward<AlgorithmHyperParametersT>(value); }
    template<typename AlgorithmHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    SolutionConfig& WithAlgorithmHyperParameters(AlgorithmHyperParametersT&& value) { SetAlgorithmHyperParameters(std::forward<AlgorithmHyperParametersT>(value)); return *this;}
    template<typename AlgorithmHyperParametersKeyT = Aws::String, typename AlgorithmHyperParametersValueT = Aws::String>
    SolutionConfig& AddAlgorithmHyperParameters(AlgorithmHyperParametersKeyT&& key, AlgorithmHyperParametersValueT&& value) {
      m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::forward<AlgorithmHyperParametersKeyT>(key), std::forward<AlgorithmHyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeatureTransformationParameters() const { return m_featureTransformationParameters; }
    inline bool FeatureTransformationParametersHasBeenSet() const { return m_featureTransformationParametersHasBeenSet; }
    template<typename FeatureTransformationParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetFeatureTransformationParameters(FeatureTransformationParametersT&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters = std::forward<FeatureTransformationParametersT>(value); }
    template<typename FeatureTransformationParametersT = Aws::Map<Aws::String, Aws::String>>
    SolutionConfig& WithFeatureTransformationParameters(FeatureTransformationParametersT&& value) { SetFeatureTransformationParameters(std::forward<FeatureTransformationParametersT>(value)); return *this;}
    template<typename FeatureTransformationParametersKeyT = Aws::String, typename FeatureTransformationParametersValueT = Aws::String>
    SolutionConfig& AddFeatureTransformationParameters(FeatureTransformationParametersKeyT&& key, FeatureTransformationParametersValueT&& value) {
      m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::forward<FeatureTransformationParametersKeyT>(key), std::forward<FeatureTransformationParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_AutoMLConfig.html">AutoMLConfig</a>
     * object containing a list of recipes to search when AutoML is performed.</p>
     */
    inline const AutoMLConfig& GetAutoMLConfig() const { return m_autoMLConfig; }
    inline bool AutoMLConfigHasBeenSet() const { return m_autoMLConfigHasBeenSet; }
    template<typename AutoMLConfigT = AutoMLConfig>
    void SetAutoMLConfig(AutoMLConfigT&& value) { m_autoMLConfigHasBeenSet = true; m_autoMLConfig = std::forward<AutoMLConfigT>(value); }
    template<typename AutoMLConfigT = AutoMLConfig>
    SolutionConfig& WithAutoMLConfig(AutoMLConfigT&& value) { SetAutoMLConfig(std::forward<AutoMLConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration of an event, which includes a list of event
     * parameters. You can specify up to 10 event parameters. Events are used in
     * solution creation.</p>
     */
    inline const EventsConfig& GetEventsConfig() const { return m_eventsConfig; }
    inline bool EventsConfigHasBeenSet() const { return m_eventsConfigHasBeenSet; }
    template<typename EventsConfigT = EventsConfig>
    void SetEventsConfig(EventsConfigT&& value) { m_eventsConfigHasBeenSet = true; m_eventsConfig = std::forward<EventsConfigT>(value); }
    template<typename EventsConfigT = EventsConfig>
    SolutionConfig& WithEventsConfig(EventsConfigT&& value) { SetEventsConfig(std::forward<EventsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the additional objective for the solution, such as maximizing
     * streaming minutes or increasing revenue. For more information see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/optimizing-solution-for-objective.html">Optimizing
     * a solution</a>.</p>
     */
    inline const OptimizationObjective& GetOptimizationObjective() const { return m_optimizationObjective; }
    inline bool OptimizationObjectiveHasBeenSet() const { return m_optimizationObjectiveHasBeenSet; }
    template<typename OptimizationObjectiveT = OptimizationObjective>
    void SetOptimizationObjective(OptimizationObjectiveT&& value) { m_optimizationObjectiveHasBeenSet = true; m_optimizationObjective = std::forward<OptimizationObjectiveT>(value); }
    template<typename OptimizationObjectiveT = OptimizationObjective>
    SolutionConfig& WithOptimizationObjective(OptimizationObjectiveT&& value) { SetOptimizationObjective(std::forward<OptimizationObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the training data configuration to use when creating a custom
     * solution version (trained model). </p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const { return m_trainingDataConfig; }
    inline bool TrainingDataConfigHasBeenSet() const { return m_trainingDataConfigHasBeenSet; }
    template<typename TrainingDataConfigT = TrainingDataConfig>
    void SetTrainingDataConfig(TrainingDataConfigT&& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = std::forward<TrainingDataConfigT>(value); }
    template<typename TrainingDataConfigT = TrainingDataConfig>
    SolutionConfig& WithTrainingDataConfig(TrainingDataConfigT&& value) { SetTrainingDataConfig(std::forward<TrainingDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the automatic training configuration to use.</p>
     */
    inline const AutoTrainingConfig& GetAutoTrainingConfig() const { return m_autoTrainingConfig; }
    inline bool AutoTrainingConfigHasBeenSet() const { return m_autoTrainingConfigHasBeenSet; }
    template<typename AutoTrainingConfigT = AutoTrainingConfig>
    void SetAutoTrainingConfig(AutoTrainingConfigT&& value) { m_autoTrainingConfigHasBeenSet = true; m_autoTrainingConfig = std::forward<AutoTrainingConfigT>(value); }
    template<typename AutoTrainingConfigT = AutoTrainingConfig>
    SolutionConfig& WithAutoTrainingConfig(AutoTrainingConfigT&& value) { SetAutoTrainingConfig(std::forward<AutoTrainingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventValueThreshold;
    bool m_eventValueThresholdHasBeenSet = false;

    HPOConfig m_hpoConfig;
    bool m_hpoConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_algorithmHyperParameters;
    bool m_algorithmHyperParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_featureTransformationParameters;
    bool m_featureTransformationParametersHasBeenSet = false;

    AutoMLConfig m_autoMLConfig;
    bool m_autoMLConfigHasBeenSet = false;

    EventsConfig m_eventsConfig;
    bool m_eventsConfigHasBeenSet = false;

    OptimizationObjective m_optimizationObjective;
    bool m_optimizationObjectiveHasBeenSet = false;

    TrainingDataConfig m_trainingDataConfig;
    bool m_trainingDataConfigHasBeenSet = false;

    AutoTrainingConfig m_autoTrainingConfig;
    bool m_autoTrainingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
