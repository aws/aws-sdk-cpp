/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WorkSpacesWeb {
namespace Model {

/**
 * <p>Localized text strings for a specific language that customize the web
 * portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/LocalizedBrandingStrings">AWS
 * API Reference</a></p>
 */
class LocalizedBrandingStrings {
 public:
  AWS_WORKSPACESWEB_API LocalizedBrandingStrings() = default;
  AWS_WORKSPACESWEB_API LocalizedBrandingStrings(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API LocalizedBrandingStrings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text displayed in the browser tab title.</p>
   */
  inline const Aws::String& GetBrowserTabTitle() const { return m_browserTabTitle; }
  inline bool BrowserTabTitleHasBeenSet() const { return m_browserTabTitleHasBeenSet; }
  template <typename BrowserTabTitleT = Aws::String>
  void SetBrowserTabTitle(BrowserTabTitleT&& value) {
    m_browserTabTitleHasBeenSet = true;
    m_browserTabTitle = std::forward<BrowserTabTitleT>(value);
  }
  template <typename BrowserTabTitleT = Aws::String>
  LocalizedBrandingStrings& WithBrowserTabTitle(BrowserTabTitleT&& value) {
    SetBrowserTabTitle(std::forward<BrowserTabTitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The welcome text displayed on the sign-in page.</p>
   */
  inline const Aws::String& GetWelcomeText() const { return m_welcomeText; }
  inline bool WelcomeTextHasBeenSet() const { return m_welcomeTextHasBeenSet; }
  template <typename WelcomeTextT = Aws::String>
  void SetWelcomeText(WelcomeTextT&& value) {
    m_welcomeTextHasBeenSet = true;
    m_welcomeText = std::forward<WelcomeTextT>(value);
  }
  template <typename WelcomeTextT = Aws::String>
  LocalizedBrandingStrings& WithWelcomeText(WelcomeTextT&& value) {
    SetWelcomeText(std::forward<WelcomeTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title text for the login section. This field is optional and defaults to
   * "Sign In".</p>
   */
  inline const Aws::String& GetLoginTitle() const { return m_loginTitle; }
  inline bool LoginTitleHasBeenSet() const { return m_loginTitleHasBeenSet; }
  template <typename LoginTitleT = Aws::String>
  void SetLoginTitle(LoginTitleT&& value) {
    m_loginTitleHasBeenSet = true;
    m_loginTitle = std::forward<LoginTitleT>(value);
  }
  template <typename LoginTitleT = Aws::String>
  LocalizedBrandingStrings& WithLoginTitle(LoginTitleT&& value) {
    SetLoginTitle(std::forward<LoginTitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description text for the login section. This field is optional and
   * defaults to "Sign in to your session".</p>
   */
  inline const Aws::String& GetLoginDescription() const { return m_loginDescription; }
  inline bool LoginDescriptionHasBeenSet() const { return m_loginDescriptionHasBeenSet; }
  template <typename LoginDescriptionT = Aws::String>
  void SetLoginDescription(LoginDescriptionT&& value) {
    m_loginDescriptionHasBeenSet = true;
    m_loginDescription = std::forward<LoginDescriptionT>(value);
  }
  template <typename LoginDescriptionT = Aws::String>
  LocalizedBrandingStrings& WithLoginDescription(LoginDescriptionT&& value) {
    SetLoginDescription(std::forward<LoginDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text displayed on the login button. This field is optional and defaults
   * to "Sign In".</p>
   */
  inline const Aws::String& GetLoginButtonText() const { return m_loginButtonText; }
  inline bool LoginButtonTextHasBeenSet() const { return m_loginButtonTextHasBeenSet; }
  template <typename LoginButtonTextT = Aws::String>
  void SetLoginButtonText(LoginButtonTextT&& value) {
    m_loginButtonTextHasBeenSet = true;
    m_loginButtonText = std::forward<LoginButtonTextT>(value);
  }
  template <typename LoginButtonTextT = Aws::String>
  LocalizedBrandingStrings& WithLoginButtonText(LoginButtonTextT&& value) {
    SetLoginButtonText(std::forward<LoginButtonTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A contact link URL. The URL must start with <code>https://</code> or
   * <code>mailto:</code>. If not provided, the contact button will be hidden from
   * the web portal screen.</p>
   */
  inline const Aws::String& GetContactLink() const { return m_contactLink; }
  inline bool ContactLinkHasBeenSet() const { return m_contactLinkHasBeenSet; }
  template <typename ContactLinkT = Aws::String>
  void SetContactLink(ContactLinkT&& value) {
    m_contactLinkHasBeenSet = true;
    m_contactLink = std::forward<ContactLinkT>(value);
  }
  template <typename ContactLinkT = Aws::String>
  LocalizedBrandingStrings& WithContactLink(ContactLinkT&& value) {
    SetContactLink(std::forward<ContactLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text displayed on the contact button. This field is optional and defaults
   * to "Contact us".</p>
   */
  inline const Aws::String& GetContactButtonText() const { return m_contactButtonText; }
  inline bool ContactButtonTextHasBeenSet() const { return m_contactButtonTextHasBeenSet; }
  template <typename ContactButtonTextT = Aws::String>
  void SetContactButtonText(ContactButtonTextT&& value) {
    m_contactButtonTextHasBeenSet = true;
    m_contactButtonText = std::forward<ContactButtonTextT>(value);
  }
  template <typename ContactButtonTextT = Aws::String>
  LocalizedBrandingStrings& WithContactButtonText(ContactButtonTextT&& value) {
    SetContactButtonText(std::forward<ContactButtonTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text displayed during session loading. This field is optional and
   * defaults to "Loading your session".</p>
   */
  inline const Aws::String& GetLoadingText() const { return m_loadingText; }
  inline bool LoadingTextHasBeenSet() const { return m_loadingTextHasBeenSet; }
  template <typename LoadingTextT = Aws::String>
  void SetLoadingText(LoadingTextT&& value) {
    m_loadingTextHasBeenSet = true;
    m_loadingText = std::forward<LoadingTextT>(value);
  }
  template <typename LoadingTextT = Aws::String>
  LocalizedBrandingStrings& WithLoadingText(LoadingTextT&& value) {
    SetLoadingText(std::forward<LoadingTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_browserTabTitle;

  Aws::String m_welcomeText;

  Aws::String m_loginTitle;

  Aws::String m_loginDescription;

  Aws::String m_loginButtonText;

  Aws::String m_contactLink;

  Aws::String m_contactButtonText;

  Aws::String m_loadingText;
  bool m_browserTabTitleHasBeenSet = false;
  bool m_welcomeTextHasBeenSet = false;
  bool m_loginTitleHasBeenSet = false;
  bool m_loginDescriptionHasBeenSet = false;
  bool m_loginButtonTextHasBeenSet = false;
  bool m_contactLinkHasBeenSet = false;
  bool m_contactButtonTextHasBeenSet = false;
  bool m_loadingTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
