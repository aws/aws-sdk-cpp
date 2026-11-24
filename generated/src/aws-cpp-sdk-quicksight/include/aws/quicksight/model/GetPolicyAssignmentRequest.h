/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PolicyType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace QuickSight {
namespace Model {

/**
 */
class GetPolicyAssignmentRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API GetPolicyAssignmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPolicyAssignment"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the principal.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  GetPolicyAssignmentRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of policy to describe. Choose one of the following values:</p> <ul>
   * <li> <p> <code>LIMITS_PROFILE</code> – A limits profile that sets resource usage
   * limits.</p> </li> <li> <p> <code>CUSTOM_PERMISSIONS</code> – A custom
   * permissions profile that restricts the capabilities available to a
   * principal.</p> </li> </ul>
   */
  inline PolicyType GetPolicyType() const { return m_policyType; }
  inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
  inline void SetPolicyType(PolicyType value) {
    m_policyTypeHasBeenSet = true;
    m_policyType = value;
  }
  inline GetPolicyAssignmentRequest& WithPolicyType(PolicyType value) {
    SetPolicyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the user, group, or account.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  GetPolicyAssignmentRequest& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  PolicyType m_policyType{PolicyType::NOT_SET};

  Aws::String m_principalArn;
  bool m_accountIdHasBeenSet = false;
  bool m_policyTypeHasBeenSet = false;
  bool m_principalArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
