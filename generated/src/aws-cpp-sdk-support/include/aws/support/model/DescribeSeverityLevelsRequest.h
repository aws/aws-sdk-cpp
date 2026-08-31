/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/SupportRequest.h>
#include <aws/support/Support_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Support {
namespace Model {

/**
 */
class DescribeSeverityLevelsRequest : public SupportRequest {
 public:
  AWS_SUPPORT_API DescribeSeverityLevelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeSeverityLevels"; }

  AWS_SUPPORT_API Aws::String SerializePayload() const override;

  AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The language in which Amazon Web Services Support handles the case. Amazon
   * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
   * ("ja") , Chinese ("zh"), Spanish ("es"), Portuguese ("pt"), French ("fr"),
   * Korean (“ko”), and Turkish ("tr"). You must specify the ISO 639-1 code for the
   * <code>language</code> parameter if you want support in that language.</p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  DescribeSeverityLevelsRequest& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without actually returning severity
   * levels. When set to <code>true</code>, the request is validated but no severity
   * levels are returned, and the operation returns a
   * <code>DryRunOperationException</code>. When omitted or set to
   * <code>false</code>, the request runs normally.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DescribeSeverityLevelsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_language;

  bool m_dryRun{false};
  bool m_languageHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
