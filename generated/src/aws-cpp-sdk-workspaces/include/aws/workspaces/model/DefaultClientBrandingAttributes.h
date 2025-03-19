/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Returns default client branding attributes that were imported. These
   * attributes display on the client login screen.</p>  <p>Client
   * branding attributes are public facing. Ensure that you don't include sensitive
   * information.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DefaultClientBrandingAttributes">AWS
   * API Reference</a></p>
   */
  class DefaultClientBrandingAttributes
  {
  public:
    AWS_WORKSPACES_API DefaultClientBrandingAttributes() = default;
    AWS_WORKSPACES_API DefaultClientBrandingAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DefaultClientBrandingAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logo. The only image format accepted is a binary data object that is
     * converted from a <code>.png</code> file.</p>
     */
    inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    template<typename LogoUrlT = Aws::String>
    void SetLogoUrl(LogoUrlT&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::forward<LogoUrlT>(value); }
    template<typename LogoUrlT = Aws::String>
    DefaultClientBrandingAttributes& WithLogoUrl(LogoUrlT&& value) { SetLogoUrl(std::forward<LogoUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline const Aws::String& GetSupportEmail() const { return m_supportEmail; }
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }
    template<typename SupportEmailT = Aws::String>
    void SetSupportEmail(SupportEmailT&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::forward<SupportEmailT>(value); }
    template<typename SupportEmailT = Aws::String>
    DefaultClientBrandingAttributes& WithSupportEmail(SupportEmailT&& value) { SetSupportEmail(std::forward<SupportEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive.You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline const Aws::String& GetSupportLink() const { return m_supportLink; }
    inline bool SupportLinkHasBeenSet() const { return m_supportLinkHasBeenSet; }
    template<typename SupportLinkT = Aws::String>
    void SetSupportLink(SupportLinkT&& value) { m_supportLinkHasBeenSet = true; m_supportLink = std::forward<SupportLinkT>(value); }
    template<typename SupportLinkT = Aws::String>
    DefaultClientBrandingAttributes& WithSupportLink(SupportLinkT&& value) { SetSupportLink(std::forward<SupportLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline const Aws::String& GetForgotPasswordLink() const { return m_forgotPasswordLink; }
    inline bool ForgotPasswordLinkHasBeenSet() const { return m_forgotPasswordLinkHasBeenSet; }
    template<typename ForgotPasswordLinkT = Aws::String>
    void SetForgotPasswordLink(ForgotPasswordLinkT&& value) { m_forgotPasswordLinkHasBeenSet = true; m_forgotPasswordLink = std::forward<ForgotPasswordLinkT>(value); }
    template<typename ForgotPasswordLinkT = Aws::String>
    DefaultClientBrandingAttributes& WithForgotPasswordLink(ForgotPasswordLinkT&& value) { SetForgotPasswordLink(std::forward<ForgotPasswordLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLoginMessage() const { return m_loginMessage; }
    inline bool LoginMessageHasBeenSet() const { return m_loginMessageHasBeenSet; }
    template<typename LoginMessageT = Aws::Map<Aws::String, Aws::String>>
    void SetLoginMessage(LoginMessageT&& value) { m_loginMessageHasBeenSet = true; m_loginMessage = std::forward<LoginMessageT>(value); }
    template<typename LoginMessageT = Aws::Map<Aws::String, Aws::String>>
    DefaultClientBrandingAttributes& WithLoginMessage(LoginMessageT&& value) { SetLoginMessage(std::forward<LoginMessageT>(value)); return *this;}
    template<typename LoginMessageKeyT = Aws::String, typename LoginMessageValueT = Aws::String>
    DefaultClientBrandingAttributes& AddLoginMessage(LoginMessageKeyT&& key, LoginMessageValueT&& value) {
      m_loginMessageHasBeenSet = true; m_loginMessage.emplace(std::forward<LoginMessageKeyT>(key), std::forward<LoginMessageValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_logoUrl;
    bool m_logoUrlHasBeenSet = false;

    Aws::String m_supportEmail;
    bool m_supportEmailHasBeenSet = false;

    Aws::String m_supportLink;
    bool m_supportLinkHasBeenSet = false;

    Aws::String m_forgotPasswordLink;
    bool m_forgotPasswordLinkHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_loginMessage;
    bool m_loginMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
