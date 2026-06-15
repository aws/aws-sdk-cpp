/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/SettlementRecord.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {
class ListSettlementRecordsResult {
 public:
  AWS_WAFV2_API ListSettlementRecordsResult() = default;
  AWS_WAFV2_API ListSettlementRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WAFV2_API ListSettlementRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of settlement records.</p>
   */
  inline const Aws::Vector<SettlementRecord>& GetSettlements() const { return m_settlements; }
  template <typename SettlementsT = Aws::Vector<SettlementRecord>>
  void SetSettlements(SettlementsT&& value) {
    m_settlementsHasBeenSet = true;
    m_settlements = std::forward<SettlementsT>(value);
  }
  template <typename SettlementsT = Aws::Vector<SettlementRecord>>
  ListSettlementRecordsResult& WithSettlements(SettlementsT&& value) {
    SetSettlements(std::forward<SettlementsT>(value));
    return *this;
  }
  template <typename SettlementsT = SettlementRecord>
  ListSettlementRecordsResult& AddSettlements(SettlementsT&& value) {
    m_settlementsHasBeenSet = true;
    m_settlements.emplace_back(std::forward<SettlementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you get a paginated response, this marker indicates that additional
   * results are available.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListSettlementRecordsResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
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
  ListSettlementRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SettlementRecord> m_settlements;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_settlementsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
