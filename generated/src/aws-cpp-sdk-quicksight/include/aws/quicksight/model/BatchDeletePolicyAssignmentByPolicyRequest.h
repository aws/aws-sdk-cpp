/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class BatchDeletePolicyAssignmentByPolicyRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentByPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePolicyAssignmentByPolicy"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the policy and the
   * principals.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  BatchDeletePolicyAssignmentByPolicyRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy to remove. For each principal, the operation removes
   * the assignment only if the principal currently has this policy.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  BatchDeletePolicyAssignmentByPolicyRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of 1–50 principal ARNs to remove the policy from. Each ARN must be
   * unique within the request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrincipalArns() const { return m_principalArns; }
  inline bool PrincipalArnsHasBeenSet() const { return m_principalArnsHasBeenSet; }
  template <typename PrincipalArnsT = Aws::Vector<Aws::String>>
  void SetPrincipalArns(PrincipalArnsT&& value) {
    m_principalArnsHasBeenSet = true;
    m_principalArns = std::forward<PrincipalArnsT>(value);
  }
  template <typename PrincipalArnsT = Aws::Vector<Aws::String>>
  BatchDeletePolicyAssignmentByPolicyRequest& WithPrincipalArns(PrincipalArnsT&& value) {
    SetPrincipalArns(std::forward<PrincipalArnsT>(value));
    return *this;
  }
  template <typename PrincipalArnsT = Aws::String>
  BatchDeletePolicyAssignmentByPolicyRequest& AddPrincipalArns(PrincipalArnsT&& value) {
    m_principalArnsHasBeenSet = true;
    m_principalArns.emplace_back(std::forward<PrincipalArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_policyArn;

  Aws::Vector<Aws::String> m_principalArns;
  bool m_accountIdHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_principalArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
