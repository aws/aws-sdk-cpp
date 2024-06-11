﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ActionIdentifier.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/verifiedpermissions/model/ContextDefinition.h>
#include <aws/verifiedpermissions/model/EntitiesDefinition.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class IsAuthorizedWithTokenRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedWithTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IsAuthorizedWithToken"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }
    inline IsAuthorizedWithTokenRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline IsAuthorizedWithTokenRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline const Aws::String& GetIdentityToken() const{ return m_identityToken; }
    inline bool IdentityTokenHasBeenSet() const { return m_identityTokenHasBeenSet; }
    inline void SetIdentityToken(const Aws::String& value) { m_identityTokenHasBeenSet = true; m_identityToken = value; }
    inline void SetIdentityToken(Aws::String&& value) { m_identityTokenHasBeenSet = true; m_identityToken = std::move(value); }
    inline void SetIdentityToken(const char* value) { m_identityTokenHasBeenSet = true; m_identityToken.assign(value); }
    inline IsAuthorizedWithTokenRequest& WithIdentityToken(const Aws::String& value) { SetIdentityToken(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithIdentityToken(Aws::String&& value) { SetIdentityToken(std::move(value)); return *this;}
    inline IsAuthorizedWithTokenRequest& WithIdentityToken(const char* value) { SetIdentityToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline IsAuthorizedWithTokenRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline IsAuthorizedWithTokenRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline const ActionIdentifier& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ActionIdentifier& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ActionIdentifier&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline IsAuthorizedWithTokenRequest& WithAction(const ActionIdentifier& value) { SetAction(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithAction(ActionIdentifier&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline IsAuthorizedWithTokenRequest& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline const ContextDefinition& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const ContextDefinition& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(ContextDefinition&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline IsAuthorizedWithTokenRequest& WithContext(const ContextDefinition& value) { SetContext(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithContext(ContextDefinition&& value) { SetContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>IsAuthorizedWithToken</code> operation takes principal attributes
     * from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline const EntitiesDefinition& GetEntities() const{ return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    inline void SetEntities(const EntitiesDefinition& value) { m_entitiesHasBeenSet = true; m_entities = value; }
    inline void SetEntities(EntitiesDefinition&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }
    inline IsAuthorizedWithTokenRequest& WithEntities(const EntitiesDefinition& value) { SetEntities(value); return *this;}
    inline IsAuthorizedWithTokenRequest& WithEntities(EntitiesDefinition&& value) { SetEntities(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_identityToken;
    bool m_identityTokenHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    ActionIdentifier m_action;
    bool m_actionHasBeenSet = false;

    EntityIdentifier m_resource;
    bool m_resourceHasBeenSet = false;

    ContextDefinition m_context;
    bool m_contextHasBeenSet = false;

    EntitiesDefinition m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
