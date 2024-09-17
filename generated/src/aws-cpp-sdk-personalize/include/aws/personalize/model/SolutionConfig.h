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
    AWS_PERSONALIZE_API SolutionConfig();
    AWS_PERSONALIZE_API SolutionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline const Aws::String& GetEventValueThreshold() const{ return m_eventValueThreshold; }
    inline bool EventValueThresholdHasBeenSet() const { return m_eventValueThresholdHasBeenSet; }
    inline void SetEventValueThreshold(const Aws::String& value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold = value; }
    inline void SetEventValueThreshold(Aws::String&& value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold = std::move(value); }
    inline void SetEventValueThreshold(const char* value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold.assign(value); }
    inline SolutionConfig& WithEventValueThreshold(const Aws::String& value) { SetEventValueThreshold(value); return *this;}
    inline SolutionConfig& WithEventValueThreshold(Aws::String&& value) { SetEventValueThreshold(std::move(value)); return *this;}
    inline SolutionConfig& WithEventValueThreshold(const char* value) { SetEventValueThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the properties for hyperparameter optimization (HPO).</p>
     */
    inline const HPOConfig& GetHpoConfig() const{ return m_hpoConfig; }
    inline bool HpoConfigHasBeenSet() const { return m_hpoConfigHasBeenSet; }
    inline void SetHpoConfig(const HPOConfig& value) { m_hpoConfigHasBeenSet = true; m_hpoConfig = value; }
    inline void SetHpoConfig(HPOConfig&& value) { m_hpoConfigHasBeenSet = true; m_hpoConfig = std::move(value); }
    inline SolutionConfig& WithHpoConfig(const HPOConfig& value) { SetHpoConfig(value); return *this;}
    inline SolutionConfig& WithHpoConfig(HPOConfig&& value) { SetHpoConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the algorithm hyperparameters and their values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAlgorithmHyperParameters() const{ return m_algorithmHyperParameters; }
    inline bool AlgorithmHyperParametersHasBeenSet() const { return m_algorithmHyperParametersHasBeenSet; }
    inline void SetAlgorithmHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters = value; }
    inline void SetAlgorithmHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters = std::move(value); }
    inline SolutionConfig& WithAlgorithmHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAlgorithmHyperParameters(value); return *this;}
    inline SolutionConfig& WithAlgorithmHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAlgorithmHyperParameters(std::move(value)); return *this;}
    inline SolutionConfig& AddAlgorithmHyperParameters(const Aws::String& key, const Aws::String& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, value); return *this; }
    inline SolutionConfig& AddAlgorithmHyperParameters(Aws::String&& key, const Aws::String& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::move(key), value); return *this; }
    inline SolutionConfig& AddAlgorithmHyperParameters(const Aws::String& key, Aws::String&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, std::move(value)); return *this; }
    inline SolutionConfig& AddAlgorithmHyperParameters(Aws::String&& key, Aws::String&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SolutionConfig& AddAlgorithmHyperParameters(const char* key, Aws::String&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, std::move(value)); return *this; }
    inline SolutionConfig& AddAlgorithmHyperParameters(Aws::String&& key, const char* value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::move(key), value); return *this; }
    inline SolutionConfig& AddAlgorithmHyperParameters(const char* key, const char* value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeatureTransformationParameters() const{ return m_featureTransformationParameters; }
    inline bool FeatureTransformationParametersHasBeenSet() const { return m_featureTransformationParametersHasBeenSet; }
    inline void SetFeatureTransformationParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters = value; }
    inline void SetFeatureTransformationParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters = std::move(value); }
    inline SolutionConfig& WithFeatureTransformationParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetFeatureTransformationParameters(value); return *this;}
    inline SolutionConfig& WithFeatureTransformationParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetFeatureTransformationParameters(std::move(value)); return *this;}
    inline SolutionConfig& AddFeatureTransformationParameters(const Aws::String& key, const Aws::String& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, value); return *this; }
    inline SolutionConfig& AddFeatureTransformationParameters(Aws::String&& key, const Aws::String& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::move(key), value); return *this; }
    inline SolutionConfig& AddFeatureTransformationParameters(const Aws::String& key, Aws::String&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, std::move(value)); return *this; }
    inline SolutionConfig& AddFeatureTransformationParameters(Aws::String&& key, Aws::String&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SolutionConfig& AddFeatureTransformationParameters(const char* key, Aws::String&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, std::move(value)); return *this; }
    inline SolutionConfig& AddFeatureTransformationParameters(Aws::String&& key, const char* value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::move(key), value); return *this; }
    inline SolutionConfig& AddFeatureTransformationParameters(const char* key, const char* value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_AutoMLConfig.html">AutoMLConfig</a>
     * object containing a list of recipes to search when AutoML is performed.</p>
     */
    inline const AutoMLConfig& GetAutoMLConfig() const{ return m_autoMLConfig; }
    inline bool AutoMLConfigHasBeenSet() const { return m_autoMLConfigHasBeenSet; }
    inline void SetAutoMLConfig(const AutoMLConfig& value) { m_autoMLConfigHasBeenSet = true; m_autoMLConfig = value; }
    inline void SetAutoMLConfig(AutoMLConfig&& value) { m_autoMLConfigHasBeenSet = true; m_autoMLConfig = std::move(value); }
    inline SolutionConfig& WithAutoMLConfig(const AutoMLConfig& value) { SetAutoMLConfig(value); return *this;}
    inline SolutionConfig& WithAutoMLConfig(AutoMLConfig&& value) { SetAutoMLConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the additional objective for the solution, such as maximizing
     * streaming minutes or increasing revenue. For more information see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/optimizing-solution-for-objective.html">Optimizing
     * a solution</a>.</p>
     */
    inline const OptimizationObjective& GetOptimizationObjective() const{ return m_optimizationObjective; }
    inline bool OptimizationObjectiveHasBeenSet() const { return m_optimizationObjectiveHasBeenSet; }
    inline void SetOptimizationObjective(const OptimizationObjective& value) { m_optimizationObjectiveHasBeenSet = true; m_optimizationObjective = value; }
    inline void SetOptimizationObjective(OptimizationObjective&& value) { m_optimizationObjectiveHasBeenSet = true; m_optimizationObjective = std::move(value); }
    inline SolutionConfig& WithOptimizationObjective(const OptimizationObjective& value) { SetOptimizationObjective(value); return *this;}
    inline SolutionConfig& WithOptimizationObjective(OptimizationObjective&& value) { SetOptimizationObjective(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the training data configuration to use when creating a custom
     * solution version (trained model). </p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const{ return m_trainingDataConfig; }
    inline bool TrainingDataConfigHasBeenSet() const { return m_trainingDataConfigHasBeenSet; }
    inline void SetTrainingDataConfig(const TrainingDataConfig& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = value; }
    inline void SetTrainingDataConfig(TrainingDataConfig&& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = std::move(value); }
    inline SolutionConfig& WithTrainingDataConfig(const TrainingDataConfig& value) { SetTrainingDataConfig(value); return *this;}
    inline SolutionConfig& WithTrainingDataConfig(TrainingDataConfig&& value) { SetTrainingDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the automatic training configuration to use.</p>
     */
    inline const AutoTrainingConfig& GetAutoTrainingConfig() const{ return m_autoTrainingConfig; }
    inline bool AutoTrainingConfigHasBeenSet() const { return m_autoTrainingConfigHasBeenSet; }
    inline void SetAutoTrainingConfig(const AutoTrainingConfig& value) { m_autoTrainingConfigHasBeenSet = true; m_autoTrainingConfig = value; }
    inline void SetAutoTrainingConfig(AutoTrainingConfig&& value) { m_autoTrainingConfigHasBeenSet = true; m_autoTrainingConfig = std::move(value); }
    inline SolutionConfig& WithAutoTrainingConfig(const AutoTrainingConfig& value) { SetAutoTrainingConfig(value); return *this;}
    inline SolutionConfig& WithAutoTrainingConfig(AutoTrainingConfig&& value) { SetAutoTrainingConfig(std::move(value)); return *this;}
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
