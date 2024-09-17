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
   * <p>Contains information about a policy that was created by instantiating a
   * policy template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/TemplateLinkedPolicyDefinitionDetail">AWS
   * API Reference</a></p>
   */
  class TemplateLinkedPolicyDefinitionDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinitionDetail();
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinitionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinitionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = value; }
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::move(value); }
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId.assign(value); }
    inline TemplateLinkedPolicyDefinitionDetail& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}
    inline TemplateLinkedPolicyDefinitionDetail& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}
    inline TemplateLinkedPolicyDefinitionDetail& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const EntityIdentifier& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(EntityIdentifier&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline TemplateLinkedPolicyDefinitionDetail& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}
    inline TemplateLinkedPolicyDefinitionDetail& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline TemplateLinkedPolicyDefinitionDetail& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}
    inline TemplateLinkedPolicyDefinitionDetail& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}
    ///@}
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
