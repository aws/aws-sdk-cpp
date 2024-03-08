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
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchIsAuthorized"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline BatchIsAuthorizedRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline BatchIsAuthorizedRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make the authorization decisions for the input.</p>
     */
    inline BatchIsAuthorizedRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline const EntitiesDefinition& GetEntities() const{ return m_entities; }

    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline void SetEntities(const EntitiesDefinition& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline void SetEntities(EntitiesDefinition&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline BatchIsAuthorizedRequest& WithEntities(const EntitiesDefinition& value) { SetEntities(value); return *this;}

    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline BatchIsAuthorizedRequest& WithEntities(EntitiesDefinition&& value) { SetEntities(std::move(value)); return *this;}


    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedInputItem>& GetRequests() const{ return m_requests; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline void SetRequests(const Aws::Vector<BatchIsAuthorizedInputItem>& value) { m_requestsHasBeenSet = true; m_requests = value; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline void SetRequests(Aws::Vector<BatchIsAuthorizedInputItem>&& value) { m_requestsHasBeenSet = true; m_requests = std::move(value); }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedRequest& WithRequests(const Aws::Vector<BatchIsAuthorizedInputItem>& value) { SetRequests(value); return *this;}

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedRequest& WithRequests(Aws::Vector<BatchIsAuthorizedInputItem>&& value) { SetRequests(std::move(value)); return *this;}

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedRequest& AddRequests(const BatchIsAuthorizedInputItem& value) { m_requestsHasBeenSet = true; m_requests.push_back(value); return *this; }

    /**
     * <p>An array of up to 30 requests that you want Verified Permissions to
     * evaluate.</p>
     */
    inline BatchIsAuthorizedRequest& AddRequests(BatchIsAuthorizedInputItem&& value) { m_requestsHasBeenSet = true; m_requests.push_back(std::move(value)); return *this; }

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
