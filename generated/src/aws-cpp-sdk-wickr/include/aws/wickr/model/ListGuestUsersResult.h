/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/GuestUser.h>

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
class ListGuestUsersResult {
 public:
  AWS_WICKR_API ListGuestUsersResult() = default;
  AWS_WICKR_API ListGuestUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API ListGuestUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListGuestUsersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of guest user objects within the current page.</p>
   */
  inline const Aws::Vector<GuestUser>& GetGuestlist() const { return m_guestlist; }
  template <typename GuestlistT = Aws::Vector<GuestUser>>
  void SetGuestlist(GuestlistT&& value) {
    m_guestlistHasBeenSet = true;
    m_guestlist = std::forward<GuestlistT>(value);
  }
  template <typename GuestlistT = Aws::Vector<GuestUser>>
  ListGuestUsersResult& WithGuestlist(GuestlistT&& value) {
    SetGuestlist(std::forward<GuestlistT>(value));
    return *this;
  }
  template <typename GuestlistT = GuestUser>
  ListGuestUsersResult& AddGuestlist(GuestlistT&& value) {
    m_guestlistHasBeenSet = true;
    m_guestlist.emplace_back(std::forward<GuestlistT>(value));
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
  ListGuestUsersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<GuestUser> m_guestlist;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_guestlistHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
