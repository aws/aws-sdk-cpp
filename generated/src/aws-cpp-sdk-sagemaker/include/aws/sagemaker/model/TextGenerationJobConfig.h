/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
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


    
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }

    
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }

    
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }

    
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }

    
    inline TextGenerationJobConfig& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}

    
    inline TextGenerationJobConfig& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}


    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline const Aws::String& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline void SetBaseModelName(const Aws::String& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline void SetBaseModelName(Aws::String&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline void SetBaseModelName(const char* value) { m_baseModelNameHasBeenSet = true; m_baseModelName.assign(value); }

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline TextGenerationJobConfig& WithBaseModelName(const Aws::String& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline TextGenerationJobConfig& WithBaseModelName(Aws::String&& value) { SetBaseModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the base model to fine-tune. Autopilot supports fine-tuning a
     * variety of large language models. For information on the list of supported
     * models, see <a
     * href="https://docs.aws.amazon.com/sagemaker/src/AWSIronmanApiDoc/build/server-root/sagemaker/latest/dg/llms-finetuning-models.html#llms-finetuning-supported-llms">Text
     * generation models supporting fine-tuning in Autopilot</a>. If no
     * <code>BaseModelName</code> is provided, the default model used is
     * Falcon-7B-Instruct. </p>
     */
    inline TextGenerationJobConfig& WithBaseModelName(const char* value) { SetBaseModelName(value); return *this;}

  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    Aws::String m_baseModelName;
    bool m_baseModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
