/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PutAssignmentEntry.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class BatchPutPolicyAssignmentByPolicyRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API BatchPutPolicyAssignmentByPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchPutPolicyAssignmentByPolicy"; }

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
  BatchPutPolicyAssignmentByPolicyRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy to assign.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  BatchPutPolicyAssignmentByPolicyRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of 1–50 principals to assign the policy to. Each principal ARN must be
   * unique within the request.</p>
   */
  inline const Aws::Vector<PutAssignmentEntry>& GetAssignments() const { return m_assignments; }
  inline bool AssignmentsHasBeenSet() const { return m_assignmentsHasBeenSet; }
  template <typename AssignmentsT = Aws::Vector<PutAssignmentEntry>>
  void SetAssignments(AssignmentsT&& value) {
    m_assignmentsHasBeenSet = true;
    m_assignments = std::forward<AssignmentsT>(value);
  }
  template <typename AssignmentsT = Aws::Vector<PutAssignmentEntry>>
  BatchPutPolicyAssignmentByPolicyRequest& WithAssignments(AssignmentsT&& value) {
    SetAssignments(std::forward<AssignmentsT>(value));
    return *this;
  }
  template <typename AssignmentsT = PutAssignmentEntry>
  BatchPutPolicyAssignmentByPolicyRequest& AddAssignments(AssignmentsT&& value) {
    m_assignmentsHasBeenSet = true;
    m_assignments.emplace_back(std::forward<AssignmentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_policyArn;

  Aws::Vector<PutAssignmentEntry> m_assignments;
  bool m_accountIdHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_assignmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
