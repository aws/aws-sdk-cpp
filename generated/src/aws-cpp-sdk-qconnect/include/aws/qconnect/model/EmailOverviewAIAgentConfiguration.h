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
 * <p>Configuration settings for the EMAIL_OVERVIEW AI agent including prompt ID
 * and locale settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailOverviewAIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class EmailOverviewAIAgentConfiguration {
 public:
  AWS_QCONNECT_API EmailOverviewAIAgentConfiguration() = default;
  AWS_QCONNECT_API EmailOverviewAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API EmailOverviewAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the System AI prompt used for generating structured email
   * conversation summaries.</p>
   */
  inline const Aws::String& GetEmailOverviewAIPromptId() const { return m_emailOverviewAIPromptId; }
  inline bool EmailOverviewAIPromptIdHasBeenSet() const { return m_emailOverviewAIPromptIdHasBeenSet; }
  template <typename EmailOverviewAIPromptIdT = Aws::String>
  void SetEmailOverviewAIPromptId(EmailOverviewAIPromptIdT&& value) {
    m_emailOverviewAIPromptIdHasBeenSet = true;
    m_emailOverviewAIPromptId = std::forward<EmailOverviewAIPromptIdT>(value);
  }
  template <typename EmailOverviewAIPromptIdT = Aws::String>
  EmailOverviewAIAgentConfiguration& WithEmailOverviewAIPromptId(EmailOverviewAIPromptIdT&& value) {
    SetEmailOverviewAIPromptId(std::forward<EmailOverviewAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale setting for language-specific email overview processing (for
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
  EmailOverviewAIAgentConfiguration& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailOverviewAIPromptId;

  Aws::String m_locale;
  bool m_emailOverviewAIPromptIdHasBeenSet = false;
  bool m_localeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
