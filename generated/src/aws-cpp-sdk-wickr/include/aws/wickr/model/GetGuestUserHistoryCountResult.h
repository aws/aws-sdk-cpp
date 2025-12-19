/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/GuestUserHistoryCount.h>

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
class GetGuestUserHistoryCountResult {
 public:
  AWS_WICKR_API GetGuestUserHistoryCountResult() = default;
  AWS_WICKR_API GetGuestUserHistoryCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetGuestUserHistoryCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of historical guest user counts, organized by month and billing
   * period.</p>
   */
  inline const Aws::Vector<GuestUserHistoryCount>& GetHistory() const { return m_history; }
  template <typename HistoryT = Aws::Vector<GuestUserHistoryCount>>
  void SetHistory(HistoryT&& value) {
    m_historyHasBeenSet = true;
    m_history = std::forward<HistoryT>(value);
  }
  template <typename HistoryT = Aws::Vector<GuestUserHistoryCount>>
  GetGuestUserHistoryCountResult& WithHistory(HistoryT&& value) {
    SetHistory(std::forward<HistoryT>(value));
    return *this;
  }
  template <typename HistoryT = GuestUserHistoryCount>
  GetGuestUserHistoryCountResult& AddHistory(HistoryT&& value) {
    m_historyHasBeenSet = true;
    m_history.emplace_back(std::forward<HistoryT>(value));
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
  GetGuestUserHistoryCountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuestUserHistoryCount> m_history;

  Aws::String m_requestId;
  bool m_historyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
