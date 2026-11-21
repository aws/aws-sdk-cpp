/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PrincipalType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace QuickSight {
namespace Model {

/**
 */
class ListPrincipalsForPolicyRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API ListPrincipalsForPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListPrincipalsForPolicy"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the policy.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ListPrincipalsForPolicyRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  ListPrincipalsForPolicyRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter that limits the results to principals of the specified
   * type. If you don't specify a value, the operation returns principals of all
   * types. You can specify one of the following values:</p> <ul> <li> <p>
   * <code>USER</code> – An Amazon Quick Sight user.</p> </li> <li> <p>
   * <code>GROUP</code> – An Amazon Quick Sight group.</p> </li> <li> <p>
   * <code>ACCOUNT</code> – The Amazon Quick Sight account.</p> </li> </ul>
   */
  inline PrincipalType GetPrincipalType() const { return m_principalType; }
  inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
  inline void SetPrincipalType(PrincipalType value) {
    m_principalTypeHasBeenSet = true;
    m_principalType = value;
  }
  inline ListPrincipalsForPolicyRequest& WithPrincipalType(PrincipalType value) {
    SetPrincipalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Valid range is
   * 1–100. If you don't specify a value, the operation returns up to 100
   * results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListPrincipalsForPolicyRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned by a previous call. Use it to get the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPrincipalsForPolicyRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_policyArn;

  PrincipalType m_principalType{PrincipalType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_accountIdHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_principalTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
