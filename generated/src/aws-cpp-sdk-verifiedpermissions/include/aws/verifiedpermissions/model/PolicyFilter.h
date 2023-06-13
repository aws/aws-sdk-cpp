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
    AWS_VERIFIEDPERMISSIONS_API PolicyFilter();
    AWS_VERIFIEDPERMISSIONS_API PolicyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline const EntityReference& GetPrincipal() const{ return m_principal; }

    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline void SetPrincipal(const EntityReference& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline void SetPrincipal(EntityReference&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline PolicyFilter& WithPrincipal(const EntityReference& value) { SetPrincipal(value); return *this;}

    /**
     * <p>Filters the output to only policies that reference the specified
     * principal.</p>
     */
    inline PolicyFilter& WithPrincipal(EntityReference&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline const EntityReference& GetResource() const{ return m_resource; }

    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline void SetResource(const EntityReference& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline void SetResource(EntityReference&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline PolicyFilter& WithResource(const EntityReference& value) { SetResource(value); return *this;}

    /**
     * <p>Filters the output to only policies that reference the specified
     * resource.</p>
     */
    inline PolicyFilter& WithResource(EntityReference&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline PolicyFilter& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>Filters the output to only policies of the specified type.</p>
     */
    inline PolicyFilter& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = value; }

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::move(value); }

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId.assign(value); }

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline PolicyFilter& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline PolicyFilter& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}

    /**
     * <p>Filters the output to only template-linked policies that were instantiated
     * from the specified policy template.</p>
     */
    inline PolicyFilter& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}

  private:

    EntityReference m_principal;
    bool m_principalHasBeenSet = false;

    EntityReference m_resource;
    bool m_resourceHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyTemplateId;
    bool m_policyTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
