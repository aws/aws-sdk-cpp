/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/ModelAccessConfig.h>
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
   * <p>The collection of settings used by an AutoML job V2 for the text generation
   * problem type.</p>  <p>The text generation models that support fine-tuning
   * in Autopilot are currently accessible exclusively in regions supported by
   * Canvas. Refer to the documentation of Canvas for the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
   * its supported Regions</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TextGenerationJobConfig">AWS
   * API Reference</a></p>
   */
  class TextGenerationJobConfig
  {
  public:
    AWS_SAGEMAKER_API TextGenerationJobConfig() = default;
    AWS_SAGEMAKER_API TextGenerationJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TextGenerationJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const { return m_completionCriteria; }
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    void SetCompletionCriteria(CompletionCriteriaT&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::forward<CompletionCriteriaT>(value); }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    TextGenerationJobConfig& WithCompletionCriteria(CompletionCriteriaT&& value) { SetCompletionCriteria(std::forward<CompletionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline const Aws::String& GetBaseModelName() const { return m_baseModelName; }
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }
    template<typename BaseModelNameT = Aws::String>
    void SetBaseModelName(BaseModelNameT&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::forward<BaseModelNameT>(value); }
    template<typename BaseModelNameT = Aws::String>
    TextGenerationJobConfig& WithBaseModelName(BaseModelNameT&& value) { SetBaseModelName(std::forward<BaseModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters used to configure and optimize the learning process of
     * the base model. You can set any combination of the following hyperparameters for
     * all base models. For more information on each supported hyperparameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-set-hyperparameters.html">Optimize
     * the learning process of your text generation models with
     * hyperparameters</a>.</p> <ul> <li> <p> <code>"epochCount"</code>: The number of
     * times the model goes through the entire training dataset. Its value should be a
     * string containing an integer value within the range of "1" to "10".</p> </li>
     * <li> <p> <code>"batchSize"</code>: The number of data samples used in each
     * iteration of training. Its value should be a string containing an integer value
     * within the range of "1" to "64".</p> </li> <li> <p> <code>"learningRate"</code>:
     * The step size at which a model's parameters are updated during training. Its
     * value should be a string containing a floating-point value within the range of
     * "0" to "1".</p> </li> <li> <p> <code>"learningRateWarmupSteps"</code>: The
     * number of training steps during which the learning rate gradually increases
     * before reaching its target or maximum value. Its value should be a string
     * containing an integer value within the range of "0" to "250".</p> </li> </ul>
     * <p>Here is an example where all four hyperparameters are configured.</p> <p>
     * <code>{ "epochCount":"5", "learningRate":"0.5", "batchSize": "32",
     * "learningRateWarmupSteps": "10" }</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTextGenerationHyperParameters() const { return m_textGenerationHyperParameters; }
    inline bool TextGenerationHyperParametersHasBeenSet() const { return m_textGenerationHyperParametersHasBeenSet; }
    template<typename TextGenerationHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTextGenerationHyperParameters(TextGenerationHyperParametersT&& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters = std::forward<TextGenerationHyperParametersT>(value); }
    template<typename TextGenerationHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    TextGenerationJobConfig& WithTextGenerationHyperParameters(TextGenerationHyperParametersT&& value) { SetTextGenerationHyperParameters(std::forward<TextGenerationHyperParametersT>(value)); return *this;}
    template<typename TextGenerationHyperParametersKeyT = Aws::String, typename TextGenerationHyperParametersValueT = Aws::String>
    TextGenerationJobConfig& AddTextGenerationHyperParameters(TextGenerationHyperParametersKeyT&& key, TextGenerationHyperParametersValueT&& value) {
      m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(std::forward<TextGenerationHyperParametersKeyT>(key), std::forward<TextGenerationHyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ModelAccessConfig& GetModelAccessConfig() const { return m_modelAccessConfig; }
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }
    template<typename ModelAccessConfigT = ModelAccessConfig>
    void SetModelAccessConfig(ModelAccessConfigT&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::forward<ModelAccessConfigT>(value); }
    template<typename ModelAccessConfigT = ModelAccessConfig>
    TextGenerationJobConfig& WithModelAccessConfig(ModelAccessConfigT&& value) { SetModelAccessConfig(std::forward<ModelAccessConfigT>(value)); return *this;}
    ///@}
  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    Aws::String m_baseModelName;
    bool m_baseModelNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_textGenerationHyperParameters;
    bool m_textGenerationHyperParametersHasBeenSet = false;

    ModelAccessConfig m_modelAccessConfig;
    bool m_modelAccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
