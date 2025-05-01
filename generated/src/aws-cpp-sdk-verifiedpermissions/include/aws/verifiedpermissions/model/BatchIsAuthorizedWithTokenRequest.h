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
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchIsAuthorizedWithToken"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    BatchIsAuthorizedWithTokenRequest& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an identity (ID) token for the principal that you want to authorize
     * in each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an ID token. Verified Permissions returns an error if the <code>token_use</code>
     * claim in the submitted token isn't <code>id</code>.</p>
     */
    inline const Aws::String& GetIdentityToken() const { return m_identityToken; }
    inline bool IdentityTokenHasBeenSet() const { return m_identityTokenHasBeenSet; }
    template<typename IdentityTokenT = Aws::String>
    void SetIdentityToken(IdentityTokenT&& value) { m_identityTokenHasBeenSet = true; m_identityToken = std::forward<IdentityTokenT>(value); }
    template<typename IdentityTokenT = Aws::String>
    BatchIsAuthorizedWithTokenRequest& WithIdentityToken(IdentityTokenT&& value) { SetIdentityToken(std::forward<IdentityTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an access token for the principal that you want to authorize in
     * each request. This token is provided to you by the identity provider (IdP)
     * associated with the specified identity source. You must specify either an
     * <code>accessToken</code>, an <code>identityToken</code>, or both.</p> <p>Must be
     * an access token. Verified Permissions returns an error if the
     * <code>token_use</code> claim in the submitted token isn't
     * <code>access</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    BatchIsAuthorizedWithTokenRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specifies the list of resources and their associated attributes
     * that Verified Permissions can examine when evaluating the policies. These
     * additional entities and their attributes can be referenced and checked by
     * conditional elements in the policies in the specified policy store.</p>
     *  <p>You can't include principals in this parameter, only resource and
     * action entities. This parameter can't include any entities of a type that
     * matches the user or group entity types that you defined in your identity
     * source.</p> <ul> <li> <p>The <code>BatchIsAuthorizedWithToken</code> operation
     * takes principal attributes from <b> <i>only</i> </b> the
     * <code>identityToken</code> or <code>accessToken</code> passed to the
     * operation.</p> </li> <li> <p>For action entities, you can include only their
     * <code>Identifier</code> and <code>EntityType</code>. </p> </li> </ul>
     * 
     */
    inline const EntitiesDefinition& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = EntitiesDefinition>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = EntitiesDefinition>
    BatchIsAuthorizedWithTokenRequest& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedWithTokenInputItem>& GetRequests() const { return m_requests; }
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }
    template<typename RequestsT = Aws::Vector<BatchIsAuthorizedWithTokenInputItem>>
    void SetRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests = std::forward<RequestsT>(value); }
    template<typename RequestsT = Aws::Vector<BatchIsAuthorizedWithTokenInputItem>>
    BatchIsAuthorizedWithTokenRequest& WithRequests(RequestsT&& value) { SetRequests(std::forward<RequestsT>(value)); return *this;}
    template<typename RequestsT = BatchIsAuthorizedWithTokenInputItem>
    BatchIsAuthorizedWithTokenRequest& AddRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests.emplace_back(std::forward<RequestsT>(value)); return *this; }
    ///@}
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
