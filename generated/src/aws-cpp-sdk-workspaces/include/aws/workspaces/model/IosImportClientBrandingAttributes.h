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
    AWS_WORKSPACES_API IosImportClientBrandingAttributes();
    AWS_WORKSPACES_API IosImportClientBrandingAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API IosImportClientBrandingAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLogo() const{ return m_logo; }

    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }

    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline void SetLogo(const Aws::Utils::ByteBuffer& value) { m_logoHasBeenSet = true; m_logo = value; }

    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline void SetLogo(Aws::Utils::ByteBuffer&& value) { m_logoHasBeenSet = true; m_logo = std::move(value); }

    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline IosImportClientBrandingAttributes& WithLogo(const Aws::Utils::ByteBuffer& value) { SetLogo(value); return *this;}

    /**
     * <p>The logo. This is the standard-resolution display that has a 1:1 pixel
     * density (or @1x), where one pixel is equal to one point. The only image format
     * accepted is a binary data object that is converted from a <code>.png</code>
     * file.</p>
     */
    inline IosImportClientBrandingAttributes& WithLogo(Aws::Utils::ByteBuffer&& value) { SetLogo(std::move(value)); return *this;}


    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline const Aws::Utils::ByteBuffer& GetLogo2x() const{ return m_logo2x; }

    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline bool Logo2xHasBeenSet() const { return m_logo2xHasBeenSet; }

    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline void SetLogo2x(const Aws::Utils::ByteBuffer& value) { m_logo2xHasBeenSet = true; m_logo2x = value; }

    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline void SetLogo2x(Aws::Utils::ByteBuffer&& value) { m_logo2xHasBeenSet = true; m_logo2x = std::move(value); }

    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline IosImportClientBrandingAttributes& WithLogo2x(const Aws::Utils::ByteBuffer& value) { SetLogo2x(value); return *this;}

    /**
     * <p>The @2x version of the logo. This is the higher resolution display that
     * offers a scale factor of 2.0 (or @2x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline IosImportClientBrandingAttributes& WithLogo2x(Aws::Utils::ByteBuffer&& value) { SetLogo2x(std::move(value)); return *this;}


    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline const Aws::Utils::ByteBuffer& GetLogo3x() const{ return m_logo3x; }

    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline bool Logo3xHasBeenSet() const { return m_logo3xHasBeenSet; }

    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline void SetLogo3x(const Aws::Utils::ByteBuffer& value) { m_logo3xHasBeenSet = true; m_logo3x = value; }

    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline void SetLogo3x(Aws::Utils::ByteBuffer&& value) { m_logo3xHasBeenSet = true; m_logo3x = std::move(value); }

    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline IosImportClientBrandingAttributes& WithLogo3x(const Aws::Utils::ByteBuffer& value) { SetLogo3x(value); return *this;}

    /**
     * <p>The @3x version of the logo. This is the higher resolution display that
     * offers a scale factor of 3.0 (or @3x). The only image format accepted is a
     * binary data object that is converted from a <code>.png</code> file.</p> 
     * <p> For more information about iOS image size and resolution, see <a
     * href="https://developer.apple.com/design/human-interface-guidelines/ios/icons-and-images/image-size-and-resolution/">Image
     * Size and Resolution </a> in the <i>Apple Human Interface Guidelines</i>.</p>
     * 
     */
    inline IosImportClientBrandingAttributes& WithLogo3x(Aws::Utils::ByteBuffer&& value) { SetLogo3x(std::move(value)); return *this;}


    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::move(value); }

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline IosImportClientBrandingAttributes& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline IosImportClientBrandingAttributes& WithSupportEmail(Aws::String&& value) { SetSupportEmail(std::move(value)); return *this;}

    /**
     * <p>The support email. The company's customer support email address.</p> 
     * <ul> <li> <p>In each platform type, the <code>SupportEmail</code> and
     * <code>SupportLink</code> parameters are mutually exclusive. You can specify one
     * parameter for each platform type, but not both.</p> </li> <li> <p>The default
     * email is <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline IosImportClientBrandingAttributes& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}


    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline const Aws::String& GetSupportLink() const{ return m_supportLink; }

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline bool SupportLinkHasBeenSet() const { return m_supportLinkHasBeenSet; }

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline void SetSupportLink(const Aws::String& value) { m_supportLinkHasBeenSet = true; m_supportLink = value; }

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline void SetSupportLink(Aws::String&& value) { m_supportLinkHasBeenSet = true; m_supportLink = std::move(value); }

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline void SetSupportLink(const char* value) { m_supportLinkHasBeenSet = true; m_supportLink.assign(value); }

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline IosImportClientBrandingAttributes& WithSupportLink(const Aws::String& value) { SetSupportLink(value); return *this;}

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline IosImportClientBrandingAttributes& WithSupportLink(Aws::String&& value) { SetSupportLink(std::move(value)); return *this;}

    /**
     * <p>The support link. The link for the company's customer support page for their
     * WorkSpace.</p>  <ul> <li> <p>In each platform type, the
     * <code>SupportEmail</code> and <code>SupportLink</code> parameters are mutually
     * exclusive. You can specify one parameter for each platform type, but not
     * both.</p> </li> <li> <p>The default support link is
     * <code>workspaces-feedback@amazon.com</code>.</p> </li> </ul> 
     */
    inline IosImportClientBrandingAttributes& WithSupportLink(const char* value) { SetSupportLink(value); return *this;}


    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline const Aws::String& GetForgotPasswordLink() const{ return m_forgotPasswordLink; }

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline bool ForgotPasswordLinkHasBeenSet() const { return m_forgotPasswordLinkHasBeenSet; }

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline void SetForgotPasswordLink(const Aws::String& value) { m_forgotPasswordLinkHasBeenSet = true; m_forgotPasswordLink = value; }

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline void SetForgotPasswordLink(Aws::String&& value) { m_forgotPasswordLinkHasBeenSet = true; m_forgotPasswordLink = std::move(value); }

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline void SetForgotPasswordLink(const char* value) { m_forgotPasswordLinkHasBeenSet = true; m_forgotPasswordLink.assign(value); }

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline IosImportClientBrandingAttributes& WithForgotPasswordLink(const Aws::String& value) { SetForgotPasswordLink(value); return *this;}

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline IosImportClientBrandingAttributes& WithForgotPasswordLink(Aws::String&& value) { SetForgotPasswordLink(std::move(value)); return *this;}

    /**
     * <p>The forgotten password link. This is the web address that users can go to if
     * they forget the password for their WorkSpace.</p>
     */
    inline IosImportClientBrandingAttributes& WithForgotPasswordLink(const char* value) { SetForgotPasswordLink(value); return *this;}


    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLoginMessage() const{ return m_loginMessage; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline bool LoginMessageHasBeenSet() const { return m_loginMessageHasBeenSet; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline void SetLoginMessage(const Aws::Map<Aws::String, Aws::String>& value) { m_loginMessageHasBeenSet = true; m_loginMessage = value; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline void SetLoginMessage(Aws::Map<Aws::String, Aws::String>&& value) { m_loginMessageHasBeenSet = true; m_loginMessage = std::move(value); }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& WithLoginMessage(const Aws::Map<Aws::String, Aws::String>& value) { SetLoginMessage(value); return *this;}

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& WithLoginMessage(Aws::Map<Aws::String, Aws::String>&& value) { SetLoginMessage(std::move(value)); return *this;}

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(const Aws::String& key, const Aws::String& value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(key, value); return *this; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(Aws::String&& key, const Aws::String& value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(std::move(key), value); return *this; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(const Aws::String& key, Aws::String&& value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(Aws::String&& key, Aws::String&& value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(const char* key, Aws::String&& value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(Aws::String&& key, const char* value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(std::move(key), value); return *this; }

    /**
     * <p>The login message. Specified as a key value pair, in which the key is a
     * locale and the value is the localized message for that locale. The only key
     * supported is <code>en_US</code>. The HTML tags supported include the following:
     * <code>a, b, blockquote, br, cite, code, dd, dl, dt, div, em, i, li, ol, p, pre,
     * q, small, span, strike, strong, sub, sup, u, ul</code>.</p>
     */
    inline IosImportClientBrandingAttributes& AddLoginMessage(const char* key, const char* value) { m_loginMessageHasBeenSet = true; m_loginMessage.emplace(key, value); return *this; }

  private:

    Aws::Utils::ByteBuffer m_logo;
    bool m_logoHasBeenSet = false;

    Aws::Utils::ByteBuffer m_logo2x;
    bool m_logo2xHasBeenSet = false;

    Aws::Utils::ByteBuffer m_logo3x;
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
