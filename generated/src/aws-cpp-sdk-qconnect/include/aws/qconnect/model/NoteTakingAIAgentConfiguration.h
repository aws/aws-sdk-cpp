/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The configuration for AI Agents of type
 * <code>NOTE_TAKING</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/NoteTakingAIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class NoteTakingAIAgentConfiguration {
 public:
  AWS_QCONNECT_API NoteTakingAIAgentConfiguration() = default;
  AWS_QCONNECT_API NoteTakingAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API NoteTakingAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AI Prompt identifier used by the Note Taking AI Agent.</p>
   */
  inline const Aws::String& GetNoteTakingAIPromptId() const { return m_noteTakingAIPromptId; }
  inline bool NoteTakingAIPromptIdHasBeenSet() const { return m_noteTakingAIPromptIdHasBeenSet; }
  template <typename NoteTakingAIPromptIdT = Aws::String>
  void SetNoteTakingAIPromptId(NoteTakingAIPromptIdT&& value) {
    m_noteTakingAIPromptIdHasBeenSet = true;
    m_noteTakingAIPromptId = std::forward<NoteTakingAIPromptIdT>(value);
  }
  template <typename NoteTakingAIPromptIdT = Aws::String>
  NoteTakingAIAgentConfiguration& WithNoteTakingAIPromptId(NoteTakingAIPromptIdT&& value) {
    SetNoteTakingAIPromptId(std::forward<NoteTakingAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI Guardrail identifier used by the Note Taking AI Agent.</p>
   */
  inline const Aws::String& GetNoteTakingAIGuardrailId() const { return m_noteTakingAIGuardrailId; }
  inline bool NoteTakingAIGuardrailIdHasBeenSet() const { return m_noteTakingAIGuardrailIdHasBeenSet; }
  template <typename NoteTakingAIGuardrailIdT = Aws::String>
  void SetNoteTakingAIGuardrailId(NoteTakingAIGuardrailIdT&& value) {
    m_noteTakingAIGuardrailIdHasBeenSet = true;
    m_noteTakingAIGuardrailId = std::forward<NoteTakingAIGuardrailIdT>(value);
  }
  template <typename NoteTakingAIGuardrailIdT = Aws::String>
  NoteTakingAIAgentConfiguration& WithNoteTakingAIGuardrailId(NoteTakingAIGuardrailIdT&& value) {
    SetNoteTakingAIGuardrailId(std::forward<NoteTakingAIGuardrailIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale setting for language-specific case summarization generation (for
   * example, en_US, es_ES).</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  NoteTakingAIAgentConfiguration& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_noteTakingAIPromptId;
  bool m_noteTakingAIPromptIdHasBeenSet = false;

  Aws::String m_noteTakingAIGuardrailId;
  bool m_noteTakingAIGuardrailIdHasBeenSet = false;

  Aws::String m_locale;
  bool m_localeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
