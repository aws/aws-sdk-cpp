﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/workspaces-web/model/AuthenticationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/BrowserType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces-web/model/InstanceType.h>
#include <aws/workspaces-web/model/PortalStatus.h>
#include <aws/workspaces-web/model/RendererType.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The web portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/Portal">AWS
   * API Reference</a></p>
   */
  class Portal
  {
  public:
    AWS_WORKSPACESWEB_API Portal() = default;
    AWS_WORKSPACESWEB_API Portal(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Portal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const { return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::forward<AdditionalEncryptionContextT>(value); }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    Portal& WithAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { SetAdditionalEncryptionContext(std::forward<AdditionalEncryptionContextT>(value)); return *this;}
    template<typename AdditionalEncryptionContextKeyT = Aws::String, typename AdditionalEncryptionContextValueT = Aws::String>
    Portal& AddAdditionalEncryptionContext(AdditionalEncryptionContextKeyT&& key, AdditionalEncryptionContextValueT&& value) {
      m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::forward<AdditionalEncryptionContextKeyT>(key), std::forward<AdditionalEncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center. Identity sources
     * (including external identity provider integration), plus user and group access
     * to your web portal, can be configured in the IAM Identity Center.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline Portal& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const { return m_browserSettingsArn; }
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }
    template<typename BrowserSettingsArnT = Aws::String>
    void SetBrowserSettingsArn(BrowserSettingsArnT&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::forward<BrowserSettingsArnT>(value); }
    template<typename BrowserSettingsArnT = Aws::String>
    Portal& WithBrowserSettingsArn(BrowserSettingsArnT&& value) { SetBrowserSettingsArn(std::forward<BrowserSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline BrowserType GetBrowserType() const { return m_browserType; }
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }
    inline void SetBrowserType(BrowserType value) { m_browserTypeHasBeenSet = true; m_browserType = value; }
    inline Portal& WithBrowserType(BrowserType value) { SetBrowserType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the web portal.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    Portal& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const { return m_customerManagedKey; }
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
    template<typename CustomerManagedKeyT = Aws::String>
    void SetCustomerManagedKey(CustomerManagedKeyT&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::forward<CustomerManagedKeyT>(value); }
    template<typename CustomerManagedKeyT = Aws::String>
    Portal& WithCustomerManagedKey(CustomerManagedKeyT&& value) { SetCustomerManagedKey(std::forward<CustomerManagedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the data protection settings.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const { return m_dataProtectionSettingsArn; }
    inline bool DataProtectionSettingsArnHasBeenSet() const { return m_dataProtectionSettingsArnHasBeenSet; }
    template<typename DataProtectionSettingsArnT = Aws::String>
    void SetDataProtectionSettingsArn(DataProtectionSettingsArnT&& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = std::forward<DataProtectionSettingsArnT>(value); }
    template<typename DataProtectionSettingsArnT = Aws::String>
    Portal& WithDataProtectionSettingsArn(DataProtectionSettingsArnT&& value) { SetDataProtectionSettingsArn(std::forward<DataProtectionSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web portal.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Portal& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline Portal& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const { return m_ipAccessSettingsArn; }
    inline bool IpAccessSettingsArnHasBeenSet() const { return m_ipAccessSettingsArnHasBeenSet; }
    template<typename IpAccessSettingsArnT = Aws::String>
    void SetIpAccessSettingsArn(IpAccessSettingsArnT&& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = std::forward<IpAccessSettingsArnT>(value); }
    template<typename IpAccessSettingsArnT = Aws::String>
    Portal& WithIpAccessSettingsArn(IpAccessSettingsArnT&& value) { SetIpAccessSettingsArn(std::forward<IpAccessSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent sessions for the portal.</p>
     */
    inline int GetMaxConcurrentSessions() const { return m_maxConcurrentSessions; }
    inline bool MaxConcurrentSessionsHasBeenSet() const { return m_maxConcurrentSessionsHasBeenSet; }
    inline void SetMaxConcurrentSessions(int value) { m_maxConcurrentSessionsHasBeenSet = true; m_maxConcurrentSessions = value; }
    inline Portal& WithMaxConcurrentSessions(int value) { SetMaxConcurrentSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const { return m_networkSettingsArn; }
    inline bool NetworkSettingsArnHasBeenSet() const { return m_networkSettingsArnHasBeenSet; }
    template<typename NetworkSettingsArnT = Aws::String>
    void SetNetworkSettingsArn(NetworkSettingsArnT&& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = std::forward<NetworkSettingsArnT>(value); }
    template<typename NetworkSettingsArnT = Aws::String>
    Portal& WithNetworkSettingsArn(NetworkSettingsArnT&& value) { SetNetworkSettingsArn(std::forward<NetworkSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const { return m_portalArn; }
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }
    template<typename PortalArnT = Aws::String>
    void SetPortalArn(PortalArnT&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::forward<PortalArnT>(value); }
    template<typename PortalArnT = Aws::String>
    Portal& WithPortalArn(PortalArnT&& value) { SetPortalArn(std::forward<PortalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline const Aws::String& GetPortalEndpoint() const { return m_portalEndpoint; }
    inline bool PortalEndpointHasBeenSet() const { return m_portalEndpointHasBeenSet; }
    template<typename PortalEndpointT = Aws::String>
    void SetPortalEndpoint(PortalEndpointT&& value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint = std::forward<PortalEndpointT>(value); }
    template<typename PortalEndpointT = Aws::String>
    Portal& WithPortalEndpoint(PortalEndpointT&& value) { SetPortalEndpoint(std::forward<PortalEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the web portal.</p>
     */
    inline PortalStatus GetPortalStatus() const { return m_portalStatus; }
    inline bool PortalStatusHasBeenSet() const { return m_portalStatusHasBeenSet; }
    inline void SetPortalStatus(PortalStatus value) { m_portalStatusHasBeenSet = true; m_portalStatus = value; }
    inline Portal& WithPortalStatus(PortalStatus value) { SetPortalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline RendererType GetRendererType() const { return m_rendererType; }
    inline bool RendererTypeHasBeenSet() const { return m_rendererTypeHasBeenSet; }
    inline void SetRendererType(RendererType value) { m_rendererTypeHasBeenSet = true; m_rendererType = value; }
    inline Portal& WithRendererType(RendererType value) { SetRendererType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Portal& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    Portal& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const { return m_userAccessLoggingSettingsArn; }
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }
    template<typename UserAccessLoggingSettingsArnT = Aws::String>
    void SetUserAccessLoggingSettingsArn(UserAccessLoggingSettingsArnT&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::forward<UserAccessLoggingSettingsArnT>(value); }
    template<typename UserAccessLoggingSettingsArnT = Aws::String>
    Portal& WithUserAccessLoggingSettingsArn(UserAccessLoggingSettingsArnT&& value) { SetUserAccessLoggingSettingsArn(std::forward<UserAccessLoggingSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const { return m_userSettingsArn; }
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }
    template<typename UserSettingsArnT = Aws::String>
    void SetUserSettingsArn(UserSettingsArnT&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::forward<UserSettingsArnT>(value); }
    template<typename UserSettingsArnT = Aws::String>
    Portal& WithUserSettingsArn(UserSettingsArnT&& value) { SetUserSettingsArn(std::forward<UserSettingsArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    BrowserType m_browserType{BrowserType::NOT_SET};
    bool m_browserTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::String m_dataProtectionSettingsArn;
    bool m_dataProtectionSettingsArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_ipAccessSettingsArn;
    bool m_ipAccessSettingsArnHasBeenSet = false;

    int m_maxConcurrentSessions{0};
    bool m_maxConcurrentSessionsHasBeenSet = false;

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_portalEndpoint;
    bool m_portalEndpointHasBeenSet = false;

    PortalStatus m_portalStatus{PortalStatus::NOT_SET};
    bool m_portalStatusHasBeenSet = false;

    RendererType m_rendererType{RendererType::NOT_SET};
    bool m_rendererTypeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;

    Aws::String m_userSettingsArn;
    bool m_userSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
