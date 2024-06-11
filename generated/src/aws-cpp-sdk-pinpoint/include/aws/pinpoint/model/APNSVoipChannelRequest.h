/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the status and settings of the APNs (Apple Push Notification
   * service) VoIP channel for an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSVoipChannelRequest">AWS
   * API Reference</a></p>
   */
  class APNSVoipChannelRequest
  {
  public:
    AWS_PINPOINT_API APNSVoipChannelRequest();
    AWS_PINPOINT_API APNSVoipChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API APNSVoipChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bundle identifier that's assigned to your iOS app. This identifier is
     * used for APNs tokens.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline APNSVoipChannelRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline APNSVoipChannelRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The APNs client certificate that you received from Apple, if you want Amazon
     * Pinpoint to communicate with APNs by using an APNs certificate.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }
    inline APNSVoipChannelRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline APNSVoipChannelRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication method that you want Amazon Pinpoint to use when
     * authenticating with APNs, key or certificate.</p>
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const{ return m_defaultAuthenticationMethod; }
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }
    inline void SetDefaultAuthenticationMethod(const Aws::String& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = value; }
    inline void SetDefaultAuthenticationMethod(Aws::String&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::move(value); }
    inline void SetDefaultAuthenticationMethod(const char* value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod.assign(value); }
    inline APNSVoipChannelRequest& WithDefaultAuthenticationMethod(const Aws::String& value) { SetDefaultAuthenticationMethod(value); return *this;}
    inline APNSVoipChannelRequest& WithDefaultAuthenticationMethod(Aws::String&& value) { SetDefaultAuthenticationMethod(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithDefaultAuthenticationMethod(const char* value) { SetDefaultAuthenticationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the APNs VoIP channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline APNSVoipChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key for the APNs client certificate that you want Amazon Pinpoint
     * to use to communicate with APNs.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }
    inline APNSVoipChannelRequest& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}
    inline APNSVoipChannelRequest& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that's assigned to your Apple developer account team. This
     * identifier is used for APNs tokens.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }
    inline APNSVoipChannelRequest& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}
    inline APNSVoipChannelRequest& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithTeamId(const char* value) { SetTeamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication key to use for APNs tokens.</p>
     */
    inline const Aws::String& GetTokenKey() const{ return m_tokenKey; }
    inline bool TokenKeyHasBeenSet() const { return m_tokenKeyHasBeenSet; }
    inline void SetTokenKey(const Aws::String& value) { m_tokenKeyHasBeenSet = true; m_tokenKey = value; }
    inline void SetTokenKey(Aws::String&& value) { m_tokenKeyHasBeenSet = true; m_tokenKey = std::move(value); }
    inline void SetTokenKey(const char* value) { m_tokenKeyHasBeenSet = true; m_tokenKey.assign(value); }
    inline APNSVoipChannelRequest& WithTokenKey(const Aws::String& value) { SetTokenKey(value); return *this;}
    inline APNSVoipChannelRequest& WithTokenKey(Aws::String&& value) { SetTokenKey(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithTokenKey(const char* value) { SetTokenKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key identifier that's assigned to your APNs signing key, if you want
     * Amazon Pinpoint to communicate with APNs by using APNs tokens.</p>
     */
    inline const Aws::String& GetTokenKeyId() const{ return m_tokenKeyId; }
    inline bool TokenKeyIdHasBeenSet() const { return m_tokenKeyIdHasBeenSet; }
    inline void SetTokenKeyId(const Aws::String& value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId = value; }
    inline void SetTokenKeyId(Aws::String&& value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId = std::move(value); }
    inline void SetTokenKeyId(const char* value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId.assign(value); }
    inline APNSVoipChannelRequest& WithTokenKeyId(const Aws::String& value) { SetTokenKeyId(value); return *this;}
    inline APNSVoipChannelRequest& WithTokenKeyId(Aws::String&& value) { SetTokenKeyId(std::move(value)); return *this;}
    inline APNSVoipChannelRequest& WithTokenKeyId(const char* value) { SetTokenKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_tokenKey;
    bool m_tokenKeyHasBeenSet = false;

    Aws::String m_tokenKeyId;
    bool m_tokenKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
