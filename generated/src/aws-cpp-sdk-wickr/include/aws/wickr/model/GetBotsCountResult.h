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
class GetBotsCountResult {
 public:
  AWS_WICKR_API GetBotsCountResult() = default;
  AWS_WICKR_API GetBotsCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetBotsCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The number of bots with pending status (invited but not yet activated).</p>
   */
  inline int GetPending() const { return m_pending; }
  inline void SetPending(int value) {
    m_pendingHasBeenSet = true;
    m_pending = value;
  }
  inline GetBotsCountResult& WithPending(int value) {
    SetPending(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bots with active status.</p>
   */
  inline int GetActive() const { return m_active; }
  inline void SetActive(int value) {
    m_activeHasBeenSet = true;
    m_active = value;
  }
  inline GetBotsCountResult& WithActive(int value) {
    SetActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of bots in the network (active and pending).</p>
   */
  inline int GetTotal() const { return m_total; }
  inline void SetTotal(int value) {
    m_totalHasBeenSet = true;
    m_total = value;
  }
  inline GetBotsCountResult& WithTotal(int value) {
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
  GetBotsCountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_pending{0};

  int m_active{0};

  int m_total{0};

  Aws::String m_requestId;
  bool m_pendingHasBeenSet = false;
  bool m_activeHasBeenSet = false;
  bool m_totalHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
