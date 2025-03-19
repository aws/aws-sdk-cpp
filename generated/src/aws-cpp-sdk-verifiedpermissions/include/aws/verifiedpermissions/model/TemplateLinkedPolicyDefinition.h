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
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/TemplateLinkedPolicyDefinition">AWS
   * API Reference</a></p>
   */
  class TemplateLinkedPolicyDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinition() = default;
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API TemplateLinkedPolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the policy template used to create this policy.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const { return m_policyTemplateId; }
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
    template<typename PolicyTemplateIdT = Aws::String>
    void SetPolicyTemplateId(PolicyTemplateIdT&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::forward<PolicyTemplateIdT>(value); }
    template<typename PolicyTemplateIdT = Aws::String>
    TemplateLinkedPolicyDefinition& WithPolicyTemplateId(PolicyTemplateIdT&& value) { SetPolicyTemplateId(std::forward<PolicyTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal associated with this template-linked policy. Verified
     * Permissions substitutes this principal for the <code>?principal</code>
     * placeholder in the policy template when it evaluates an authorization
     * request.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = EntityIdentifier>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = EntityIdentifier>
    TemplateLinkedPolicyDefinition& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource associated with this template-linked policy. Verified
     * Permissions substitutes this resource for the <code>?resource</code> placeholder
     * in the policy template when it evaluates an authorization request.</p>
     */
    inline const EntityIdentifier& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = EntityIdentifier>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = EntityIdentifier>
    TemplateLinkedPolicyDefinition& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
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
