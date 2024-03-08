/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TabularResolvedAttributes.h>
#include <aws/sagemaker/model/TextGenerationResolvedAttributes.h>
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
   * <p>Stores resolved attributes specific to the problem type of an AutoML job
   * V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLProblemTypeResolvedAttributes">AWS
   * API Reference</a></p>
   */
  class AutoMLProblemTypeResolvedAttributes
  {
  public:
    AWS_SAGEMAKER_API AutoMLProblemTypeResolvedAttributes();
    AWS_SAGEMAKER_API AutoMLProblemTypeResolvedAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLProblemTypeResolvedAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resolved attributes for the tabular problem type.</p>
     */
    inline const TabularResolvedAttributes& GetTabularResolvedAttributes() const{ return m_tabularResolvedAttributes; }

    /**
     * <p>The resolved attributes for the tabular problem type.</p>
     */
    inline bool TabularResolvedAttributesHasBeenSet() const { return m_tabularResolvedAttributesHasBeenSet; }

    /**
     * <p>The resolved attributes for the tabular problem type.</p>
     */
    inline void SetTabularResolvedAttributes(const TabularResolvedAttributes& value) { m_tabularResolvedAttributesHasBeenSet = true; m_tabularResolvedAttributes = value; }

    /**
     * <p>The resolved attributes for the tabular problem type.</p>
     */
    inline void SetTabularResolvedAttributes(TabularResolvedAttributes&& value) { m_tabularResolvedAttributesHasBeenSet = true; m_tabularResolvedAttributes = std::move(value); }

    /**
     * <p>The resolved attributes for the tabular problem type.</p>
     */
    inline AutoMLProblemTypeResolvedAttributes& WithTabularResolvedAttributes(const TabularResolvedAttributes& value) { SetTabularResolvedAttributes(value); return *this;}

    /**
     * <p>The resolved attributes for the tabular problem type.</p>
     */
    inline AutoMLProblemTypeResolvedAttributes& WithTabularResolvedAttributes(TabularResolvedAttributes&& value) { SetTabularResolvedAttributes(std::move(value)); return *this;}


    /**
     * <p>The resolved attributes for the text generation problem type.</p>
     */
    inline const TextGenerationResolvedAttributes& GetTextGenerationResolvedAttributes() const{ return m_textGenerationResolvedAttributes; }

    /**
     * <p>The resolved attributes for the text generation problem type.</p>
     */
    inline bool TextGenerationResolvedAttributesHasBeenSet() const { return m_textGenerationResolvedAttributesHasBeenSet; }

    /**
     * <p>The resolved attributes for the text generation problem type.</p>
     */
    inline void SetTextGenerationResolvedAttributes(const TextGenerationResolvedAttributes& value) { m_textGenerationResolvedAttributesHasBeenSet = true; m_textGenerationResolvedAttributes = value; }

    /**
     * <p>The resolved attributes for the text generation problem type.</p>
     */
    inline void SetTextGenerationResolvedAttributes(TextGenerationResolvedAttributes&& value) { m_textGenerationResolvedAttributesHasBeenSet = true; m_textGenerationResolvedAttributes = std::move(value); }

    /**
     * <p>The resolved attributes for the text generation problem type.</p>
     */
    inline AutoMLProblemTypeResolvedAttributes& WithTextGenerationResolvedAttributes(const TextGenerationResolvedAttributes& value) { SetTextGenerationResolvedAttributes(value); return *this;}

    /**
     * <p>The resolved attributes for the text generation problem type.</p>
     */
    inline AutoMLProblemTypeResolvedAttributes& WithTextGenerationResolvedAttributes(TextGenerationResolvedAttributes&& value) { SetTextGenerationResolvedAttributes(std::move(value)); return *this;}

  private:

    TabularResolvedAttributes m_tabularResolvedAttributes;
    bool m_tabularResolvedAttributesHasBeenSet = false;

    TextGenerationResolvedAttributes m_textGenerationResolvedAttributes;
    bool m_textGenerationResolvedAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
