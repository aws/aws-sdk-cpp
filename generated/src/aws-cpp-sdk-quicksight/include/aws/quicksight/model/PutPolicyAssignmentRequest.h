/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class PutPolicyAssignmentRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API PutPolicyAssignmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutPolicyAssignment"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the policy and the
   * principal.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  PutPolicyAssignmentRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy to assign.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  PutPolicyAssignmentRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the user, group, or account to assign the policy to.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  PutPolicyAssignmentRequest& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy that you expect the principal to have before this
   * request. If the principal has a different policy of the same type, or no policy
   * of that type, the request fails with a <code>ConflictException</code> and makes
   * no change. If you don't specify a value, the operation doesn't check the
   * existing assignment.</p>
   */
  inline const Aws::String& GetExistingPolicyArn() const { return m_existingPolicyArn; }
  inline bool ExistingPolicyArnHasBeenSet() const { return m_existingPolicyArnHasBeenSet; }
  template <typename ExistingPolicyArnT = Aws::String>
  void SetExistingPolicyArn(ExistingPolicyArnT&& value) {
    m_existingPolicyArnHasBeenSet = true;
    m_existingPolicyArn = std::forward<ExistingPolicyArnT>(value);
  }
  template <typename ExistingPolicyArnT = Aws::String>
  PutPolicyAssignmentRequest& WithExistingPolicyArn(ExistingPolicyArnT&& value) {
    SetExistingPolicyArn(std::forward<ExistingPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the assignment from your most recent read. If the assignment
   * has changed since that revision, the request fails with a
   * <code>ConflictException</code>. If you don't specify a value, the operation
   * doesn't check the revision.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline PutPolicyAssignmentRequest& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_policyArn;

  Aws::String m_principalArn;

  Aws::String m_existingPolicyArn;

  long long m_revision{0};
  bool m_accountIdHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_principalArnHasBeenSet = false;
  bool m_existingPolicyArnHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
