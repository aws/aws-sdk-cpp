/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The client branding attributes to import for iOS device types. These
   * attributes are displayed on the iOS client login screen.</p> 
   * <p>Client branding attributes are public facing. Ensure you do not include
   * sensitive information.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/IosImportClientBrandingAttributes">AWS
   * API Reference</a></p>
   */
  class IosImportClientBrandingAttributes
  {
  public:
    AWS_WORKSPACES_API IosImportClientBrandingAttributes() = default;
    AWS_WORKSPACES_API IosImportClientBrandingAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API IosImportClientBrandingAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLogo() const { return m_logo; }
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
    template<typename LogoT = Aws::Utils::ByteBuffer>
    void SetLogo(LogoT&& value) { m_logoHasBeenSet = true; m_logo = std::forward<LogoT>(value); }
    template<typename LogoT = Aws::Utils::ByteBuffer>
    IosImportClientBrandingAttributes& WithLogo(LogoT&& value) { SetLogo(std::forward<LogoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline const Aws::Utils::ByteBuffer& GetLogo2x() const { return m_logo2x; }
    inline bool Logo2xHasBeenSet() const { return m_logo2xHasBeenSet; }
    template<typename Logo2xT = Aws::Utils::ByteBuffer>
    void SetLogo2x(Logo2xT&& value) { m_logo2xHasBeenSet = true; m_logo2x = std::forward<Logo2xT>(value); }
    template<typename Logo2xT = Aws::Utils::ByteBuffer>
    IosImportClientBrandingAttributes& WithLogo2x(Logo2xT&& value) { SetLogo2x(std::forward<Logo2xT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline const Aws::Utils::ByteBuffer& GetLogo3x() const { return m_logo3x; }
    inline bool Logo3xHasBeenSet() const { return m_logo3xHasBeenSet; }
    template<typename Logo3xT = Aws::Utils::ByteBuffer>
    void SetLogo3x(Logo3xT&& value) { m_logo3xHasBeenSet = true; m_logo3x = std::forward<Logo3xT>(value); }
    template<typename Logo3xT = Aws::Utils::ByteBuffer>
    IosImportClientBrandingAttributes& WithLogo3x(Logo3xT&& value) { SetLogo3x(std::forward<Logo3xT>(value)); return *this;}
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
    IosImportClientBrandingAttributes& WithSupportEmail(SupportEmailT&& value) { SetSupportEmail(std::forward<SupportEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline const Aws::String& GetSupportLink() const { return m_supportLink; }
    inline bool SupportLinkHasBeenSet() const { return m_supportLinkHasBeenSet; }
    template<typename SupportLinkT = Aws::String>
    void SetSupportLink(SupportLinkT&& value) { m_supportLinkHasBeenSet = true; m_supportLink = std::forward<SupportLinkT>(value); }
    template<typename SupportLinkT = Aws::String>
    IosImportClientBrandingAttributes& WithSupportLink(SupportLinkT&& value) { SetSupportLink(std::forward<SupportLinkT>(value)); return *this;}
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
    IosImportClientBrandingAttributes& WithForgotPasswordLink(ForgotPasswordLinkT&& value) { SetForgotPasswordLink(std::forward<ForgotPasswordLinkT>(value)); return *this;}
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
    IosImportClientBrandingAttributes& WithLoginMessage(LoginMessageT&& value) { SetLoginMessage(std::forward<LoginMessageT>(value)); return *this;}
    template<typename LoginMessageKeyT = Aws::String, typename LoginMessageValueT = Aws::String>
    IosImportClientBrandingAttributes& AddLoginMessage(LoginMessageKeyT&& key, LoginMessageValueT&& value) {
      m_loginMessageHasBeenSet = true; m_loginMessage.emplace(std::forward<LoginMessageKeyT>(key), std::forward<LoginMessageValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Utils::ByteBuffer m_logo{};
    bool m_logoHasBeenSet = false;

    Aws::Utils::ByteBuffer m_logo2x{};
    bool m_logo2xHasBeenSet = false;

    Aws::Utils::ByteBuffer m_logo3x{};
    bool m_logo3xHasBeenSet = false;

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
