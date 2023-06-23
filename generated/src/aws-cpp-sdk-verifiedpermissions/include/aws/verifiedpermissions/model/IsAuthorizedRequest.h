/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/verifiedpermissions/model/ActionIdentifier.h>
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
  class IsAuthorizedRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IsAuthorized"; }

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
    inline IsAuthorizedRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline IsAuthorizedRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store. Policies in this policy store will be
     * used to make an authorization decision for the input.</p>
     */
    inline IsAuthorizedRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline void SetPrincipal(const EntityIdentifier& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline void SetPrincipal(EntityIdentifier&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline IsAuthorizedRequest& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline IsAuthorizedRequest& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline const ActionIdentifier& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline void SetAction(const ActionIdentifier& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline void SetAction(ActionIdentifier&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline IsAuthorizedRequest& WithAction(const ActionIdentifier& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline IsAuthorizedRequest& WithAction(ActionIdentifier&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline IsAuthorizedRequest& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline IsAuthorizedRequest& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}


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
    inline IsAuthorizedRequest& WithContext(const ContextDefinition& value) { SetContext(value); return *this;}

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline IsAuthorizedRequest& WithContext(ContextDefinition&& value) { SetContext(std::move(value)); return *this;}


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
    inline IsAuthorizedRequest& WithEntities(const EntitiesDefinition& value) { SetEntities(value); return *this;}

    /**
     * <p>Specifies the list of resources and principals and their associated
     * attributes that Verified Permissions can examine when evaluating the policies.
     * </p>  <p>You can include only principal and resource entities in this
     * parameter; you can't include actions. You must specify actions in the
     * schema.</p> 
     */
    inline IsAuthorizedRequest& WithEntities(EntitiesDefinition&& value) { SetEntities(std::move(value)); return *this;}

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    EntityIdentifier m_principal;
    bool m_principalHasBeenSet = false;

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
