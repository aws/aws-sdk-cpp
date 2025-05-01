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
#include <aws/verifiedpermissions/model/BatchIsAuthorizedInputItem.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class BatchIsAuthorizedRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchIsAuthorized"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    BatchIsAuthorizedRequest& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specifies the list of resources and principals and their
     * associated attributes that Verified Permissions can examine when evaluating the
     * policies. These additional entities and their attributes can be referenced and
     * checked by conditional elements in the policies in the specified policy
     * store.</p>  <p>You can include only principal and resource entities in
     * this parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline const EntitiesDefinition& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = EntitiesDefinition>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = EntitiesDefinition>
    BatchIsAuthorizedRequest& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedInputItem>& GetRequests() const { return m_requests; }
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }
    template<typename RequestsT = Aws::Vector<BatchIsAuthorizedInputItem>>
    void SetRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests = std::forward<RequestsT>(value); }
    template<typename RequestsT = Aws::Vector<BatchIsAuthorizedInputItem>>
    BatchIsAuthorizedRequest& WithRequests(RequestsT&& value) { SetRequests(std::forward<RequestsT>(value)); return *this;}
    template<typename RequestsT = BatchIsAuthorizedInputItem>
    BatchIsAuthorizedRequest& AddRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests.emplace_back(std::forward<RequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    EntitiesDefinition m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::Vector<BatchIsAuthorizedInputItem> m_requests;
    bool m_requestsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
