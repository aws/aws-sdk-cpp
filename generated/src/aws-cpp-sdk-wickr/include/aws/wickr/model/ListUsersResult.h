/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/User.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class ListUsersResult {
 public:
  AWS_WICKR_API ListUsersResult() = default;
  AWS_WICKR_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to use for retrieving the next page of results. If this is not
   * present, there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUsersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of user objects matching the specified filters and within the current
   * page.</p>
   */
  inline const Aws::Vector<User>& GetUsers() const { return m_users; }
  template <typename UsersT = Aws::Vector<User>>
  void SetUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users = std::forward<UsersT>(value);
  }
  template <typename UsersT = Aws::Vector<User>>
  ListUsersResult& WithUsers(UsersT&& value) {
    SetUsers(std::forward<UsersT>(value));
    return *this;
  }
  template <typename UsersT = User>
  ListUsersResult& AddUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users.emplace_back(std::forward<UsersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListUsersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<User> m_users;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_usersHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
