/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityReference.h>
#include <aws/verifiedpermissions/model/PolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a filter to refine policies returned in a
   * query.</p> <p>This data type is used as a response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyFilter">AWS
   * API Reference</a></p>
   */
  class PolicyFilter
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PolicyFilter() = default;
    AWS_VERIFIEDPERMISSIONS_API PolicyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline const EntityReference& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = EntityReference>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = EntityReference>
    PolicyFilter& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline const EntityReference& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = EntityReference>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = EntityReference>
    PolicyFilter& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline PolicyFilter& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const { return m_policyTemplateId; }
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
    template<typename PolicyTemplateIdT = Aws::String>
    void SetPolicyTemplateId(PolicyTemplateIdT&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::forward<PolicyTemplateIdT>(value); }
    template<typename PolicyTemplateIdT = Aws::String>
    PolicyFilter& WithPolicyTemplateId(PolicyTemplateIdT&& value) { SetPolicyTemplateId(std::forward<PolicyTemplateIdT>(value)); return *this;}
    ///@}
  private:

    EntityReference m_principal;
    bool m_principalHasBeenSet = false;

    EntityReference m_resource;
    bool m_resourceHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyTemplateId;
    bool m_policyTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
