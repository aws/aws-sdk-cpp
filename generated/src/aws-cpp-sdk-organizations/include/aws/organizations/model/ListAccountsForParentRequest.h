/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/Organizations_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Organizations {
namespace Model {

/**
 */
class ListAccountsForParentRequest : public OrganizationsRequest {
 public:
  AWS_ORGANIZATIONS_API ListAccountsForParentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAccountsForParent"; }

  AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

  AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier (ID) for the parent root or organization unit (OU)
   * whose accounts you want to list.</p>
   */
  inline const Aws::String& GetParentId() const { return m_parentId; }
  inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
  template <typename ParentIdT = Aws::String>
  void SetParentId(ParentIdT&& value) {
    m_parentIdHasBeenSet = true;
    m_parentId = std::forward<ParentIdT>(value);
  }
  template <typename ParentIdT = Aws::String>
  ListAccountsForParentRequest& WithParentId(ParentIdT&& value) {
    SetParentId(std::forward<ParentIdT>(value));
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
  ListAccountsForParentRequest& WithNextToken(NextTokenT&& value) {
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
  inline ListAccountsForParentRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_parentId;
  bool m_parentIdHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
