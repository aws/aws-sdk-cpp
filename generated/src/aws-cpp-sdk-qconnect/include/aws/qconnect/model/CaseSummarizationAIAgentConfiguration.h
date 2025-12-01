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
 * <code>CASE_SUMMARIZATION</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CaseSummarizationAIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class CaseSummarizationAIAgentConfiguration {
 public:
  AWS_QCONNECT_API CaseSummarizationAIAgentConfiguration() = default;
  AWS_QCONNECT_API CaseSummarizationAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API CaseSummarizationAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AI Prompt identifier used by the Case Summarization AI Agent.</p>
   */
  inline const Aws::String& GetCaseSummarizationAIPromptId() const { return m_caseSummarizationAIPromptId; }
  inline bool CaseSummarizationAIPromptIdHasBeenSet() const { return m_caseSummarizationAIPromptIdHasBeenSet; }
  template <typename CaseSummarizationAIPromptIdT = Aws::String>
  void SetCaseSummarizationAIPromptId(CaseSummarizationAIPromptIdT&& value) {
    m_caseSummarizationAIPromptIdHasBeenSet = true;
    m_caseSummarizationAIPromptId = std::forward<CaseSummarizationAIPromptIdT>(value);
  }
  template <typename CaseSummarizationAIPromptIdT = Aws::String>
  CaseSummarizationAIAgentConfiguration& WithCaseSummarizationAIPromptId(CaseSummarizationAIPromptIdT&& value) {
    SetCaseSummarizationAIPromptId(std::forward<CaseSummarizationAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI Guardrail identifier used by the Case Summarization AI Agent.</p>
   */
  inline const Aws::String& GetCaseSummarizationAIGuardrailId() const { return m_caseSummarizationAIGuardrailId; }
  inline bool CaseSummarizationAIGuardrailIdHasBeenSet() const { return m_caseSummarizationAIGuardrailIdHasBeenSet; }
  template <typename CaseSummarizationAIGuardrailIdT = Aws::String>
  void SetCaseSummarizationAIGuardrailId(CaseSummarizationAIGuardrailIdT&& value) {
    m_caseSummarizationAIGuardrailIdHasBeenSet = true;
    m_caseSummarizationAIGuardrailId = std::forward<CaseSummarizationAIGuardrailIdT>(value);
  }
  template <typename CaseSummarizationAIGuardrailIdT = Aws::String>
  CaseSummarizationAIAgentConfiguration& WithCaseSummarizationAIGuardrailId(CaseSummarizationAIGuardrailIdT&& value) {
    SetCaseSummarizationAIGuardrailId(std::forward<CaseSummarizationAIGuardrailIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale setting for the Case Summarization AI Agent.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  CaseSummarizationAIAgentConfiguration& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseSummarizationAIPromptId;
  bool m_caseSummarizationAIPromptIdHasBeenSet = false;

  Aws::String m_caseSummarizationAIGuardrailId;
  bool m_caseSummarizationAIGuardrailIdHasBeenSet = false;

  Aws::String m_locale;
  bool m_localeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
