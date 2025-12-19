/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WebCrawlerAuthType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The parameters for a web crawler data source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WebCrawlerParameters">AWS
 * API Reference</a></p>
 */
class WebCrawlerParameters {
 public:
  AWS_QUICKSIGHT_API WebCrawlerParameters() = default;
  AWS_QUICKSIGHT_API WebCrawlerParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API WebCrawlerParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authentication type for the web crawler. The type can be one of the
   * following:</p> <ul> <li> <p> <code>NO_AUTH</code>: No authentication
   * required.</p> </li> <li> <p> <code>BASIC_AUTH</code>: Basic authentication using
   * username and password.</p> </li> <li> <p> <code>SAML</code>: SAML-based
   * authentication.</p> </li> <li> <p> <code>FORM</code>: Form-based
   * authentication.</p> </li> </ul>
   */
  inline WebCrawlerAuthType GetWebCrawlerAuthType() const { return m_webCrawlerAuthType; }
  inline bool WebCrawlerAuthTypeHasBeenSet() const { return m_webCrawlerAuthTypeHasBeenSet; }
  inline void SetWebCrawlerAuthType(WebCrawlerAuthType value) {
    m_webCrawlerAuthTypeHasBeenSet = true;
    m_webCrawlerAuthType = value;
  }
  inline WebCrawlerParameters& WithWebCrawlerAuthType(WebCrawlerAuthType value) {
    SetWebCrawlerAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XPath expression for locating the username field on the login page.</p>
   */
  inline const Aws::String& GetUsernameFieldXpath() const { return m_usernameFieldXpath; }
  inline bool UsernameFieldXpathHasBeenSet() const { return m_usernameFieldXpathHasBeenSet; }
  template <typename UsernameFieldXpathT = Aws::String>
  void SetUsernameFieldXpath(UsernameFieldXpathT&& value) {
    m_usernameFieldXpathHasBeenSet = true;
    m_usernameFieldXpath = std::forward<UsernameFieldXpathT>(value);
  }
  template <typename UsernameFieldXpathT = Aws::String>
  WebCrawlerParameters& WithUsernameFieldXpath(UsernameFieldXpathT&& value) {
    SetUsernameFieldXpath(std::forward<UsernameFieldXpathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XPath expression for locating the password field on the login page.</p>
   */
  inline const Aws::String& GetPasswordFieldXpath() const { return m_passwordFieldXpath; }
  inline bool PasswordFieldXpathHasBeenSet() const { return m_passwordFieldXpathHasBeenSet; }
  template <typename PasswordFieldXpathT = Aws::String>
  void SetPasswordFieldXpath(PasswordFieldXpathT&& value) {
    m_passwordFieldXpathHasBeenSet = true;
    m_passwordFieldXpath = std::forward<PasswordFieldXpathT>(value);
  }
  template <typename PasswordFieldXpathT = Aws::String>
  WebCrawlerParameters& WithPasswordFieldXpath(PasswordFieldXpathT&& value) {
    SetPasswordFieldXpath(std::forward<PasswordFieldXpathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XPath expression for locating the username submit button on the login
   * page.</p>
   */
  inline const Aws::String& GetUsernameButtonXpath() const { return m_usernameButtonXpath; }
  inline bool UsernameButtonXpathHasBeenSet() const { return m_usernameButtonXpathHasBeenSet; }
  template <typename UsernameButtonXpathT = Aws::String>
  void SetUsernameButtonXpath(UsernameButtonXpathT&& value) {
    m_usernameButtonXpathHasBeenSet = true;
    m_usernameButtonXpath = std::forward<UsernameButtonXpathT>(value);
  }
  template <typename UsernameButtonXpathT = Aws::String>
  WebCrawlerParameters& WithUsernameButtonXpath(UsernameButtonXpathT&& value) {
    SetUsernameButtonXpath(std::forward<UsernameButtonXpathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XPath expression for locating the password submit button on the login
   * page.</p>
   */
  inline const Aws::String& GetPasswordButtonXpath() const { return m_passwordButtonXpath; }
  inline bool PasswordButtonXpathHasBeenSet() const { return m_passwordButtonXpathHasBeenSet; }
  template <typename PasswordButtonXpathT = Aws::String>
  void SetPasswordButtonXpath(PasswordButtonXpathT&& value) {
    m_passwordButtonXpathHasBeenSet = true;
    m_passwordButtonXpath = std::forward<PasswordButtonXpathT>(value);
  }
  template <typename PasswordButtonXpathT = Aws::String>
  WebCrawlerParameters& WithPasswordButtonXpath(PasswordButtonXpathT&& value) {
    SetPasswordButtonXpath(std::forward<PasswordButtonXpathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the login page for the web crawler to authenticate.</p>
   */
  inline const Aws::String& GetLoginPageUrl() const { return m_loginPageUrl; }
  inline bool LoginPageUrlHasBeenSet() const { return m_loginPageUrlHasBeenSet; }
  template <typename LoginPageUrlT = Aws::String>
  void SetLoginPageUrl(LoginPageUrlT&& value) {
    m_loginPageUrlHasBeenSet = true;
    m_loginPageUrl = std::forward<LoginPageUrlT>(value);
  }
  template <typename LoginPageUrlT = Aws::String>
  WebCrawlerParameters& WithLoginPageUrl(LoginPageUrlT&& value) {
    SetLoginPageUrl(std::forward<LoginPageUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hostname of the web proxy server for the web crawler.</p>
   */
  inline const Aws::String& GetWebProxyHostName() const { return m_webProxyHostName; }
  inline bool WebProxyHostNameHasBeenSet() const { return m_webProxyHostNameHasBeenSet; }
  template <typename WebProxyHostNameT = Aws::String>
  void SetWebProxyHostName(WebProxyHostNameT&& value) {
    m_webProxyHostNameHasBeenSet = true;
    m_webProxyHostName = std::forward<WebProxyHostNameT>(value);
  }
  template <typename WebProxyHostNameT = Aws::String>
  WebCrawlerParameters& WithWebProxyHostName(WebProxyHostNameT&& value) {
    SetWebProxyHostName(std::forward<WebProxyHostNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number of the web proxy server for the web crawler.</p>
   */
  inline int GetWebProxyPortNumber() const { return m_webProxyPortNumber; }
  inline bool WebProxyPortNumberHasBeenSet() const { return m_webProxyPortNumberHasBeenSet; }
  inline void SetWebProxyPortNumber(int value) {
    m_webProxyPortNumberHasBeenSet = true;
    m_webProxyPortNumber = value;
  }
  inline WebCrawlerParameters& WithWebProxyPortNumber(int value) {
    SetWebProxyPortNumber(value);
    return *this;
  }
  ///@}
 private:
  WebCrawlerAuthType m_webCrawlerAuthType{WebCrawlerAuthType::NOT_SET};

  Aws::String m_usernameFieldXpath;

  Aws::String m_passwordFieldXpath;

  Aws::String m_usernameButtonXpath;

  Aws::String m_passwordButtonXpath;

  Aws::String m_loginPageUrl;

  Aws::String m_webProxyHostName;

  int m_webProxyPortNumber{0};
  bool m_webCrawlerAuthTypeHasBeenSet = false;
  bool m_usernameFieldXpathHasBeenSet = false;
  bool m_passwordFieldXpathHasBeenSet = false;
  bool m_usernameButtonXpathHasBeenSet = false;
  bool m_passwordButtonXpathHasBeenSet = false;
  bool m_loginPageUrlHasBeenSet = false;
  bool m_webProxyHostNameHasBeenSet = false;
  bool m_webProxyPortNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
