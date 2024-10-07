/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration for a prompt template that supports full textual prompt
   * configuration using a YAML prompt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/TextFullAIPromptEditTemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class TextFullAIPromptEditTemplateConfiguration
  {
  public:
    AWS_QCONNECT_API TextFullAIPromptEditTemplateConfiguration();
    AWS_QCONNECT_API TextFullAIPromptEditTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API TextFullAIPromptEditTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The YAML text for the AI Prompt template.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline TextFullAIPromptEditTemplateConfiguration& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline TextFullAIPromptEditTemplateConfiguration& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline TextFullAIPromptEditTemplateConfiguration& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
