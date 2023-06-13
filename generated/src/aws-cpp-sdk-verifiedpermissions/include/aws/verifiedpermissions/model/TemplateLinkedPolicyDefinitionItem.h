/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains information about a policy created by instantiating a policy
   * template. </p> <p>This </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/TemplateLinkedPolicyDefinitionItem">AWS
   * API Reference</a></p>
   */
  class TemplateLinkedPolicyDefinitionItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinitionItem();
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinitionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinitionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = value; }

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::move(value); }

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId.assign(value); }

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}


    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline void SetPrincipal(const EntityIdentifier& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline void SetPrincipal(EntityIdentifier&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }

    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}

    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline TemplateLinkedPolicyDefinitionItem& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}

  private:

    Aws::String m_policyTemplateId;
    bool m_policyTemplateIdHasBeenSet = false;

    EntityIdentifier m_principal;
    bool m_principalHasBeenSet = false;

    EntityIdentifier m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
