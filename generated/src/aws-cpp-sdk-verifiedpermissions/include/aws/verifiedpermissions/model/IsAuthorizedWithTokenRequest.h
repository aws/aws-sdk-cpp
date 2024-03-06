/**
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


    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline const Aws::String& GetIdentityToken() const{ return m_identityToken; }

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline bool IdentityTokenHasBeenSet() const { return m_identityTokenHasBeenSet; }

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline void SetIdentityToken(const Aws::String& value) { m_identityTokenHasBeenSet = true; m_identityToken = value; }

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline void SetIdentityToken(Aws::String&& value) { m_identityTokenHasBeenSet = true; m_identityToken = std::move(value); }

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline void SetIdentityToken(const char* value) { m_identityTokenHasBeenSet = true; m_identityToken.assign(value); }

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithIdentityToken(const Aws::String& value) { SetIdentityToken(value); return *this;}

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithIdentityToken(Aws::String&& value) { SetIdentityToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an identity token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an ID token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>id</code>.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithIdentityToken(const char* value) { SetIdentityToken(value); return *this;}


    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an access token for the principal to be authorized. This token is
     * provided to you by the identity provider (IdP) associated with the specified
     * identity source. You must specify either an <code>accessToken</code>, an
     * <code>identityToken</code>, or both.</p> <p>Must be an access token. Verified
     * Permissions returns an error if the <code>token_use</code> claim in the
     * submitted token isn't <code>access</code>.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline const ActionIdentifier& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline void SetAction(const ActionIdentifier& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline void SetAction(ActionIdentifier&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithAction(const ActionIdentifier& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the requested action to be authorized. Is the specified principal
     * authorized to perform this action on the specified resource.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithAction(ActionIdentifier&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }

    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline IsAuthorizedWithTokenRequest& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}

    /**
     * <p>Specifies the resource for which the authorization decision is made. For
     * example, is the principal allowed to perform the action on the resource?</p>
     */
    inline IsAuthorizedWithTokenRequest& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline const ContextDefinition& GetContext() const{ return m_context; }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline void SetContext(const ContextDefinition& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline void SetContext(ContextDefinition&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithContext(const ContextDefinition& value) { SetContext(value); return *this;}

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline IsAuthorizedWithTokenRequest& WithContext(ContextDefinition&& value) { SetContext(std::move(value)); return *this;}


    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You can
     * include only resource and action entities in this parameter; you can't include
     * principals.</p> <ul> <li> <p>The <code>IsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul> 
     */
    inline const EntitiesDefinition& GetEntities() const{ return m_entities; }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You can
     * include only resource and action entities in this parameter; you can't include
     * principals.</p> <ul> <li> <p>The <code>IsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul> 
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You can
     * include only resource and action entities in this parameter; you can't include
     * principals.</p> <ul> <li> <p>The <code>IsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul> 
     */
    inline void SetEntities(const EntitiesDefinition& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You can
     * include only resource and action entities in this parameter; you can't include
     * principals.</p> <ul> <li> <p>The <code>IsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul> 
     */
    inline void SetEntities(EntitiesDefinition&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You can
     * include only resource and action entities in this parameter; you can't include
     * principals.</p> <ul> <li> <p>The <code>IsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul> 
     */
    inline IsAuthorizedWithTokenRequest& WithEntities(const EntitiesDefinition& value) { SetEntities(value); return *this;}

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You can
     * include only resource and action entities in this parameter; you can't include
     * principals.</p> <ul> <li> <p>The <code>IsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul> 
     */
    inline IsAuthorizedWithTokenRequest& WithEntities(EntitiesDefinition&& value) { SetEntities(std::move(value)); return *this;}

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
