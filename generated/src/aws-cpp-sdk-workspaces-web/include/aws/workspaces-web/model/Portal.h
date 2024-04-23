/**
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
    AWS_WORKSPACESWEB_API Portal();
    AWS_WORKSPACESWEB_API Portal(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Portal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline Portal& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center (successor to Single
     * Sign-On). Identity sources (including external identity provider integration),
     * plus user and group access to your web portal, can be configured in the IAM
     * Identity Center.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center (successor to Single
     * Sign-On). Identity sources (including external identity provider integration),
     * plus user and group access to your web portal, can be configured in the IAM
     * Identity Center.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center (successor to Single
     * Sign-On). Identity sources (including external identity provider integration),
     * plus user and group access to your web portal, can be configured in the IAM
     * Identity Center.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center (successor to Single
     * Sign-On). Identity sources (including external identity provider integration),
     * plus user and group access to your web portal, can be configured in the IAM
     * Identity Center.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center (successor to Single
     * Sign-On). Identity sources (including external identity provider integration),
     * plus user and group access to your web portal, can be configured in the IAM
     * Identity Center.</p>
     */
    inline Portal& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM Identity Center</code> web
     * portals are authenticated through IAM Identity Center (successor to Single
     * Sign-On). Identity sources (including external identity provider integration),
     * plus user and group access to your web portal, can be configured in the IAM
     * Identity Center.</p>
     */
    inline Portal& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline Portal& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline Portal& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline Portal& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline const BrowserType& GetBrowserType() const{ return m_browserType; }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline void SetBrowserType(const BrowserType& value) { m_browserTypeHasBeenSet = true; m_browserType = value; }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline void SetBrowserType(BrowserType&& value) { m_browserTypeHasBeenSet = true; m_browserType = std::move(value); }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline Portal& WithBrowserType(const BrowserType& value) { SetBrowserType(value); return *this;}

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline Portal& WithBrowserType(BrowserType&& value) { SetBrowserType(std::move(value)); return *this;}


    /**
     * <p>The creation date of the web portal.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline Portal& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline Portal& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline Portal& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline Portal& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}

    /**
     * <p>The customer managed key used to encrypt sensitive information in the
     * portal.</p>
     */
    inline Portal& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}


    /**
     * <p>The name of the web portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the web portal.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the web portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the web portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the web portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the web portal.</p>
     */
    inline Portal& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the web portal.</p>
     */
    inline Portal& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the web portal.</p>
     */
    inline Portal& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline Portal& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline Portal& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const{ return m_ipAccessSettingsArn; }

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline bool IpAccessSettingsArnHasBeenSet() const { return m_ipAccessSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline void SetIpAccessSettingsArn(const Aws::String& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = value; }

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline void SetIpAccessSettingsArn(Aws::String&& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline void SetIpAccessSettingsArn(const char* value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn.assign(value); }

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline Portal& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline Portal& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline Portal& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}


    /**
     * <p>The maximum number of concurrent sessions for the portal.</p>
     */
    inline int GetMaxConcurrentSessions() const{ return m_maxConcurrentSessions; }

    /**
     * <p>The maximum number of concurrent sessions for the portal.</p>
     */
    inline bool MaxConcurrentSessionsHasBeenSet() const { return m_maxConcurrentSessionsHasBeenSet; }

    /**
     * <p>The maximum number of concurrent sessions for the portal.</p>
     */
    inline void SetMaxConcurrentSessions(int value) { m_maxConcurrentSessionsHasBeenSet = true; m_maxConcurrentSessions = value; }

    /**
     * <p>The maximum number of concurrent sessions for the portal.</p>
     */
    inline Portal& WithMaxConcurrentSessions(int value) { SetMaxConcurrentSessions(value); return *this;}


    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const{ return m_networkSettingsArn; }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline bool NetworkSettingsArnHasBeenSet() const { return m_networkSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline void SetNetworkSettingsArn(const Aws::String& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = value; }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline void SetNetworkSettingsArn(Aws::String&& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline void SetNetworkSettingsArn(const char* value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn.assign(value); }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline Portal& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline Portal& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline Portal& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArnHasBeenSet = true; m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArnHasBeenSet = true; m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline Portal& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline Portal& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline Portal& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline const Aws::String& GetPortalEndpoint() const{ return m_portalEndpoint; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline bool PortalEndpointHasBeenSet() const { return m_portalEndpointHasBeenSet; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(const Aws::String& value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint = value; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(Aws::String&& value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint = std::move(value); }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(const char* value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint.assign(value); }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline Portal& WithPortalEndpoint(const Aws::String& value) { SetPortalEndpoint(value); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline Portal& WithPortalEndpoint(Aws::String&& value) { SetPortalEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline Portal& WithPortalEndpoint(const char* value) { SetPortalEndpoint(value); return *this;}


    /**
     * <p>The status of the web portal.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the web portal.</p>
     */
    inline bool PortalStatusHasBeenSet() const { return m_portalStatusHasBeenSet; }

    /**
     * <p>The status of the web portal.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatusHasBeenSet = true; m_portalStatus = value; }

    /**
     * <p>The status of the web portal.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatusHasBeenSet = true; m_portalStatus = std::move(value); }

    /**
     * <p>The status of the web portal.</p>
     */
    inline Portal& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the web portal.</p>
     */
    inline Portal& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}


    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline const RendererType& GetRendererType() const{ return m_rendererType; }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline bool RendererTypeHasBeenSet() const { return m_rendererTypeHasBeenSet; }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline void SetRendererType(const RendererType& value) { m_rendererTypeHasBeenSet = true; m_rendererType = value; }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline void SetRendererType(RendererType&& value) { m_rendererTypeHasBeenSet = true; m_rendererType = std::move(value); }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline Portal& WithRendererType(const RendererType& value) { SetRendererType(value); return *this;}

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline Portal& WithRendererType(RendererType&& value) { SetRendererType(std::move(value)); return *this;}


    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline Portal& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline Portal& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline Portal& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = value; }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline Portal& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline Portal& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline Portal& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}


    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = value; }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline Portal& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline Portal& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline Portal& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    BrowserType m_browserType;
    bool m_browserTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_ipAccessSettingsArn;
    bool m_ipAccessSettingsArnHasBeenSet = false;

    int m_maxConcurrentSessions;
    bool m_maxConcurrentSessionsHasBeenSet = false;

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_portalEndpoint;
    bool m_portalEndpointHasBeenSet = false;

    PortalStatus m_portalStatus;
    bool m_portalStatusHasBeenSet = false;

    RendererType m_rendererType;
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
