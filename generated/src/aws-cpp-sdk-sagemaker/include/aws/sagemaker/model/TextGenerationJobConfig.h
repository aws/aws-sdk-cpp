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
    AWS_SAGEMAKER_API TextGenerationJobConfig();
    AWS_SAGEMAKER_API TextGenerationJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TextGenerationJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }

    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }

    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }

    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }

    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline TextGenerationJobConfig& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}

    /**
     * <p>How long a fine-tuning job is allowed to run. For
     * <code>TextGenerationJobConfig</code> problem types, the
     * <code>MaxRuntimePerTrainingJobInSeconds</code> attribute of
     * <code>AutoMLJobCompletionCriteria</code> defaults to 72h (259200s).</p>
     */
    inline TextGenerationJobConfig& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}


    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline const Aws::String& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline void SetBaseModelName(const Aws::String& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline void SetBaseModelName(Aws::String&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline void SetBaseModelName(const char* value) { m_baseModelNameHasBeenSet = true; m_baseModelName.assign(value); }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline TextGenerationJobConfig& WithBaseModelName(const Aws::String& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline TextGenerationJobConfig& WithBaseModelName(Aws::String&& value) { SetBaseModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-models.html#autopilot-llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * <b>Falcon7BInstruct</b>. </p>
     */
    inline TextGenerationJobConfig& WithBaseModelName(const char* value) { SetBaseModelName(value); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetTextGenerationHyperParameters() const{ return m_textGenerationHyperParameters; }

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
    inline bool TextGenerationHyperParametersHasBeenSet() const { return m_textGenerationHyperParametersHasBeenSet; }

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
    inline void SetTextGenerationHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters = value; }

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
    inline void SetTextGenerationHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters = std::move(value); }

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
    inline TextGenerationJobConfig& WithTextGenerationHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTextGenerationHyperParameters(value); return *this;}

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
    inline TextGenerationJobConfig& WithTextGenerationHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTextGenerationHyperParameters(std::move(value)); return *this;}

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(const Aws::String& key, const Aws::String& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(key, value); return *this; }

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(Aws::String&& key, const Aws::String& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(std::move(key), value); return *this; }

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(const Aws::String& key, Aws::String&& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(key, std::move(value)); return *this; }

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(Aws::String&& key, Aws::String&& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(std::move(key), std::move(value)); return *this; }

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(const char* key, Aws::String&& value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(key, std::move(value)); return *this; }

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(Aws::String&& key, const char* value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(std::move(key), value); return *this; }

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
    inline TextGenerationJobConfig& AddTextGenerationHyperParameters(const char* key, const char* value) { m_textGenerationHyperParametersHasBeenSet = true; m_textGenerationHyperParameters.emplace(key, value); return *this; }


    
    inline const ModelAccessConfig& GetModelAccessConfig() const{ return m_modelAccessConfig; }

    
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }

    
    inline void SetModelAccessConfig(const ModelAccessConfig& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = value; }

    
    inline void SetModelAccessConfig(ModelAccessConfig&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::move(value); }

    
    inline TextGenerationJobConfig& WithModelAccessConfig(const ModelAccessConfig& value) { SetModelAccessConfig(value); return *this;}

    
    inline TextGenerationJobConfig& WithModelAccessConfig(ModelAccessConfig&& value) { SetModelAccessConfig(std::move(value)); return *this;}

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
