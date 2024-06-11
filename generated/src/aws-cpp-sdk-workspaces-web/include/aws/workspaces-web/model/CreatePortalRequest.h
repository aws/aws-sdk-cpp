﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/workspaces-web/model/AuthenticationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class CreatePortalRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API CreatePortalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortal"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The additional encryption context of the portal.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }
    inline CreatePortalRequest& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}
    inline CreatePortalRequest& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}
    inline CreatePortalRequest& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }
    inline CreatePortalRequest& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline CreatePortalRequest& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline CreatePortalRequest& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline CreatePortalRequest& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline CreatePortalRequest& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline CreatePortalRequest& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
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
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline CreatePortalRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline CreatePortalRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreatePortalRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreatePortalRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreatePortalRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key of the web portal.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }
    inline CreatePortalRequest& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}
    inline CreatePortalRequest& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}
    inline CreatePortalRequest& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreatePortalRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreatePortalRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreatePortalRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and resources of the underlying instance.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline CreatePortalRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline CreatePortalRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent sessions for the portal.</p>
     */
    inline int GetMaxConcurrentSessions() const{ return m_maxConcurrentSessions; }
    inline bool MaxConcurrentSessionsHasBeenSet() const { return m_maxConcurrentSessionsHasBeenSet; }
    inline void SetMaxConcurrentSessions(int value) { m_maxConcurrentSessionsHasBeenSet = true; m_maxConcurrentSessions = value; }
    inline CreatePortalRequest& WithMaxConcurrentSessions(int value) { SetMaxConcurrentSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the web portal. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePortalRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePortalRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePortalRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePortalRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_maxConcurrentSessions;
    bool m_maxConcurrentSessionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
