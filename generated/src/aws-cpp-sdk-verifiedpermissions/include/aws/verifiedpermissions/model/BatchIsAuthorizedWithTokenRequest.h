/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/EntitiesDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedWithTokenInputItem.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class BatchIsAuthorizedWithTokenRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchIsAuthorizedWithToken"; }

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
    inline BatchIsAuthorizedWithTokenRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline const Aws::String& GetIdentityToken() const{ return m_identityToken; }

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline bool IdentityTokenHasBeenSet() const { return m_identityTokenHasBeenSet; }

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline void SetIdentityToken(const Aws::String& value) { m_identityTokenHasBeenSet = true; m_identityToken = value; }

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline void SetIdentityToken(Aws::String&& value) { m_identityTokenHasBeenSet = true; m_identityToken = std::move(value); }

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline void SetIdentityToken(const char* value) { m_identityTokenHasBeenSet = true; m_identityToken.assign(value); }

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithIdentityToken(const Aws::String& value) { SetIdentityToken(value); return *this;}

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithIdentityToken(Aws::String&& value) { SetIdentityToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithIdentityToken(const char* value) { SetIdentityToken(value); return *this;}


    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>BatchIsAuthorizedWithToken</code> operation takes principal
     * attributes from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline const EntitiesDefinition& GetEntities() const{ return m_entities; }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>BatchIsAuthorizedWithToken</code> operation takes principal
     * attributes from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>BatchIsAuthorizedWithToken</code> operation takes principal
     * attributes from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline void SetEntities(const EntitiesDefinition& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>BatchIsAuthorizedWithToken</code> operation takes principal
     * attributes from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline void SetEntities(EntitiesDefinition&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>BatchIsAuthorizedWithToken</code> operation takes principal
     * attributes from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline BatchIsAuthorizedWithTokenRequest& WithEntities(const EntitiesDefinition& value) { SetEntities(value); return *this;}

    /**
     * <p>Specifies the list of resources and their associated attributes that Verified
     * Permissions can examine when evaluating the policies. </p>  <p>You
     * can't include principals in this parameter, only resource and action entities.
     * This parameter can't include any entities of a type that matches the user or
     * group entity types that you defined in your identity source.</p> <ul> <li>
     * <p>The <code>BatchIsAuthorizedWithToken</code> operation takes principal
     * attributes from <b> <i>only</i> </b> the <code>identityToken</code> or
     * <code>accessToken</code> passed to the operation.</p> </li> <li> <p>For action
     * entities, you can include only their <code>Identifier</code> and
     * <code>EntityType</code>. </p> </li> </ul> 
     */
    inline BatchIsAuthorizedWithTokenRequest& WithEntities(EntitiesDefinition&& value) { SetEntities(std::move(value)); return *this;}


    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedWithTokenInputItem>& GetRequests() const{ return m_requests; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline void SetRequests(const Aws::Vector<BatchIsAuthorizedWithTokenInputItem>& value) { m_requestsHasBeenSet = true; m_requests = value; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline void SetRequests(Aws::Vector<BatchIsAuthorizedWithTokenInputItem>&& value) { m_requestsHasBeenSet = true; m_requests = std::move(value); }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithRequests(const Aws::Vector<BatchIsAuthorizedWithTokenInputItem>& value) { SetRequests(value); return *this;}

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& WithRequests(Aws::Vector<BatchIsAuthorizedWithTokenInputItem>&& value) { SetRequests(std::move(value)); return *this;}

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& AddRequests(const BatchIsAuthorizedWithTokenInputItem& value) { m_requestsHasBeenSet = true; m_requests.push_back(value); return *this; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedWithTokenRequest& AddRequests(BatchIsAuthorizedWithTokenInputItem&& value) { m_requestsHasBeenSet = true; m_requests.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_identityToken;
    bool m_identityTokenHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    EntitiesDefinition m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::Vector<BatchIsAuthorizedWithTokenInputItem> m_requests;
    bool m_requestsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
