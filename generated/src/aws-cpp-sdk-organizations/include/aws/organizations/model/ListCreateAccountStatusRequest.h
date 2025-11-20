/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/CreateAccountState.h>

#include <utility>

namespace Aws {
namespace Organizations {
namespace Model {

/**
 */
class ListCreateAccountStatusRequest : public OrganizationsRequest {
 public:
  AWS_ORGANIZATIONS_API ListCreateAccountStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCreateAccountStatus"; }

  AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

  AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A list of one or more states that you want included in the response. If this
   * parameter isn't present, all requests are included in the response.</p>
   */
  inline const Aws::Vector<CreateAccountState>& GetStates() const { return m_states; }
  inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
  template <typename StatesT = Aws::Vector<CreateAccountState>>
  void SetStates(StatesT&& value) {
    m_statesHasBeenSet = true;
    m_states = std::forward<StatesT>(value);
  }
  template <typename StatesT = Aws::Vector<CreateAccountState>>
  ListCreateAccountStatusRequest& WithStates(StatesT&& value) {
    SetStates(std::forward<StatesT>(value));
    return *this;
  }
  inline ListCreateAccountStatusRequest& AddStates(CreateAccountState value) {
    m_statesHasBeenSet = true;
    m_states.push_back(value);
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
  ListCreateAccountStatusRequest& WithNextToken(NextTokenT&& value) {
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
  inline ListCreateAccountStatusRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CreateAccountState> m_states;
  bool m_statesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
