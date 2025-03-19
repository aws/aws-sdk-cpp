/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
   * Web Services account) that can manage your Systems Manager resources. Currently,
   * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
   * resource policies. The resource policy for <code>OpsItemGroup</code> enables
   * Amazon Web Services accounts to view and interact with OpsCenter operational
   * work items (OpsItems).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetResourcePoliciesResponseEntry">AWS
   * API Reference</a></p>
   */
  class GetResourcePoliciesResponseEntry
  {
  public:
    AWS_SSM_API GetResourcePoliciesResponseEntry() = default;
    AWS_SSM_API GetResourcePoliciesResponseEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API GetResourcePoliciesResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy ID.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    GetResourcePoliciesResponseEntry& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const { return m_policyHash; }
    inline bool PolicyHashHasBeenSet() const { return m_policyHashHasBeenSet; }
    template<typename PolicyHashT = Aws::String>
    void SetPolicyHash(PolicyHashT&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::forward<PolicyHashT>(value); }
    template<typename PolicyHashT = Aws::String>
    GetResourcePoliciesResponseEntry& WithPolicyHash(PolicyHashT&& value) { SetPolicyHash(std::forward<PolicyHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    GetResourcePoliciesResponseEntry& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
