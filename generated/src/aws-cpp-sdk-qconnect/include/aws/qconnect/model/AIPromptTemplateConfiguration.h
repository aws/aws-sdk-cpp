/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TextFullAIPromptEditTemplateConfiguration.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>A typed union that specifies the configuration for a prompt template based on
   * its type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIPromptTemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class AIPromptTemplateConfiguration
  {
  public:
    AWS_QCONNECT_API AIPromptTemplateConfiguration() = default;
    AWS_QCONNECT_API AIPromptTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIPromptTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for a prompt template that supports full textual prompt
     * configuration using a YAML prompt.</p>
     */
    inline const TextFullAIPromptEditTemplateConfiguration& GetTextFullAIPromptEditTemplateConfiguration() const { return m_textFullAIPromptEditTemplateConfiguration; }
    inline bool TextFullAIPromptEditTemplateConfigurationHasBeenSet() const { return m_textFullAIPromptEditTemplateConfigurationHasBeenSet; }
    template<typename TextFullAIPromptEditTemplateConfigurationT = TextFullAIPromptEditTemplateConfiguration>
    void SetTextFullAIPromptEditTemplateConfiguration(TextFullAIPromptEditTemplateConfigurationT&& value) { m_textFullAIPromptEditTemplateConfigurationHasBeenSet = true; m_textFullAIPromptEditTemplateConfiguration = std::forward<TextFullAIPromptEditTemplateConfigurationT>(value); }
    template<typename TextFullAIPromptEditTemplateConfigurationT = TextFullAIPromptEditTemplateConfiguration>
    AIPromptTemplateConfiguration& WithTextFullAIPromptEditTemplateConfiguration(TextFullAIPromptEditTemplateConfigurationT&& value) { SetTextFullAIPromptEditTemplateConfiguration(std::forward<TextFullAIPromptEditTemplateConfigurationT>(value)); return *this;}
    ///@}
  private:

    TextFullAIPromptEditTemplateConfiguration m_textFullAIPromptEditTemplateConfiguration;
    bool m_textFullAIPromptEditTemplateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
