/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/BlockedGuestUser.h>

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
class ListBlockedGuestUsersResult {
 public:
  AWS_WICKR_API ListBlockedGuestUsersResult() = default;
  AWS_WICKR_API ListBlockedGuestUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API ListBlockedGuestUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListBlockedGuestUsersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of blocked guest user objects within the current page.</p>
   */
  inline const Aws::Vector<BlockedGuestUser>& GetBlocklist() const { return m_blocklist; }
  template <typename BlocklistT = Aws::Vector<BlockedGuestUser>>
  void SetBlocklist(BlocklistT&& value) {
    m_blocklistHasBeenSet = true;
    m_blocklist = std::forward<BlocklistT>(value);
  }
  template <typename BlocklistT = Aws::Vector<BlockedGuestUser>>
  ListBlockedGuestUsersResult& WithBlocklist(BlocklistT&& value) {
    SetBlocklist(std::forward<BlocklistT>(value));
    return *this;
  }
  template <typename BlocklistT = BlockedGuestUser>
  ListBlockedGuestUsersResult& AddBlocklist(BlocklistT&& value) {
    m_blocklistHasBeenSet = true;
    m_blocklist.emplace_back(std::forward<BlocklistT>(value));
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
  ListBlockedGuestUsersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<BlockedGuestUser> m_blocklist;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_blocklistHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
