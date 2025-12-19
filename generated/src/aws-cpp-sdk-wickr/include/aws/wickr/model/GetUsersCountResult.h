/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

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
class GetUsersCountResult {
 public:
  AWS_WICKR_API GetUsersCountResult() = default;
  AWS_WICKR_API GetUsersCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetUsersCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The number of users with pending status (invited but not yet accepted).</p>
   */
  inline int GetPending() const { return m_pending; }
  inline void SetPending(int value) {
    m_pendingHasBeenSet = true;
    m_pending = value;
  }
  inline GetUsersCountResult& WithPending(int value) {
    SetPending(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of users with active status in the network.</p>
   */
  inline int GetActive() const { return m_active; }
  inline void SetActive(int value) {
    m_activeHasBeenSet = true;
    m_active = value;
  }
  inline GetUsersCountResult& WithActive(int value) {
    SetActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of users who have rejected network invitations.</p>
   */
  inline int GetRejected() const { return m_rejected; }
  inline void SetRejected(int value) {
    m_rejectedHasBeenSet = true;
    m_rejected = value;
  }
  inline GetUsersCountResult& WithRejected(int value) {
    SetRejected(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of additional users that can be added to the network while
   * maintaining premium free trial eligibility.</p>
   */
  inline int GetRemaining() const { return m_remaining; }
  inline void SetRemaining(int value) {
    m_remainingHasBeenSet = true;
    m_remaining = value;
  }
  inline GetUsersCountResult& WithRemaining(int value) {
    SetRemaining(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of users in the network (active and pending combined).</p>
   */
  inline int GetTotal() const { return m_total; }
  inline void SetTotal(int value) {
    m_totalHasBeenSet = true;
    m_total = value;
  }
  inline GetUsersCountResult& WithTotal(int value) {
    SetTotal(value);
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
  GetUsersCountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_pending{0};

  int m_active{0};

  int m_rejected{0};

  int m_remaining{0};

  int m_total{0};

  Aws::String m_requestId;
  bool m_pendingHasBeenSet = false;
  bool m_activeHasBeenSet = false;
  bool m_rejectedHasBeenSet = false;
  bool m_remainingHasBeenSet = false;
  bool m_totalHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
