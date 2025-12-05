/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/EffectivePolicyType.h>

#include <utility>

namespace Aws {
namespace Organizations {
namespace Model {

/**
 */
class ListEffectivePolicyValidationErrorsRequest : public OrganizationsRequest {
 public:
  AWS_ORGANIZATIONS_API ListEffectivePolicyValidationErrorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEffectivePolicyValidationErrors"; }

  AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

  AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the account that you want details about. Specifying an organization
   * root or organizational unit (OU) as the target is not supported.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ListEffectivePolicyValidationErrorsRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of policy that you want information about. You can specify one of
   * the following values:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_declarative.html">DECLARATIVE_POLICY_EC2</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_chatbot.html">CHATBOT_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_security_hub.html">SECURITYHUB_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_upgrade_rollout.html">UPGRADE_ROLLOUT_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_inspector.html">INSPECTOR_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_bedrock.html">BEDROCK_POLICY</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_S3.html">S3_POLICY</a>
   * </p> </li> </ul>
   */
  inline EffectivePolicyType GetPolicyType() const { return m_policyType; }
  inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
  inline void SetPolicyType(EffectivePolicyType value) {
    m_policyTypeHasBeenSet = true;
    m_policyType = value;
  }
  inline ListEffectivePolicyValidationErrorsRequest& WithPolicyType(EffectivePolicyType value) {
    SetPolicyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameter for receiving additional results if you receive a
   * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
   * response indicates that more output is available. Set this parameter to the
   * value of the previous call's <code>NextToken</code> response to indicate where
   * the output should continue from.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEffectivePolicyValidationErrorsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return in the response. If more results exist
   * than the specified <code>MaxResults</code> value, a token is included in the
   * response so that you can retrieve the remaining results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEffectivePolicyValidationErrorsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  EffectivePolicyType m_policyType{EffectivePolicyType::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_accountIdHasBeenSet = false;
  bool m_policyTypeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
