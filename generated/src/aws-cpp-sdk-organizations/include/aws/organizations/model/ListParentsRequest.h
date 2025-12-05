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
class ListParentsRequest : public OrganizationsRequest {
 public:
  AWS_ORGANIZATIONS_API ListParentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListParents"; }

  AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

  AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>ID for the OU or account whose parent containers you want to list. Don't
   * specify a root.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
   * pattern</a> for a child ID string requires one of the following:</p> <ul> <li>
   * <p> <b>Account</b> - A string that consists of exactly 12 digits.</p> </li> <li>
   * <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-" followed
   * by from 4 to 32 lowercase letters or digits (the ID of the root that contains
   * the OU). This string is followed by a second "-" dash and from 8 to 32
   * additional lowercase letters or digits.</p> </li> </ul>
   */
  inline const Aws::String& GetChildId() const { return m_childId; }
  inline bool ChildIdHasBeenSet() const { return m_childIdHasBeenSet; }
  template <typename ChildIdT = Aws::String>
  void SetChildId(ChildIdT&& value) {
    m_childIdHasBeenSet = true;
    m_childId = std::forward<ChildIdT>(value);
  }
  template <typename ChildIdT = Aws::String>
  ListParentsRequest& WithChildId(ChildIdT&& value) {
    SetChildId(std::forward<ChildIdT>(value));
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
  ListParentsRequest& WithNextToken(NextTokenT&& value) {
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
  inline ListParentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_childId;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_childIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
