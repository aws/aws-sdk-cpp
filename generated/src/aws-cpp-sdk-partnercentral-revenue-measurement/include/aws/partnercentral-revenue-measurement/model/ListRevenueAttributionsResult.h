/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AttributionSummary.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {
class ListRevenueAttributionsResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListRevenueAttributionsResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListRevenueAttributionsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListRevenueAttributionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of revenue attribution summaries.</p>
   */
  inline const Aws::Vector<AttributionSummary>& GetRevenueAttributionSummaries() const { return m_revenueAttributionSummaries; }
  template <typename RevenueAttributionSummariesT = Aws::Vector<AttributionSummary>>
  void SetRevenueAttributionSummaries(RevenueAttributionSummariesT&& value) {
    m_revenueAttributionSummariesHasBeenSet = true;
    m_revenueAttributionSummaries = std::forward<RevenueAttributionSummariesT>(value);
  }
  template <typename RevenueAttributionSummariesT = Aws::Vector<AttributionSummary>>
  ListRevenueAttributionsResult& WithRevenueAttributionSummaries(RevenueAttributionSummariesT&& value) {
    SetRevenueAttributionSummaries(std::forward<RevenueAttributionSummariesT>(value));
    return *this;
  }
  template <typename RevenueAttributionSummariesT = AttributionSummary>
  ListRevenueAttributionsResult& AddRevenueAttributionSummaries(RevenueAttributionSummariesT&& value) {
    m_revenueAttributionSummariesHasBeenSet = true;
    m_revenueAttributionSummaries.emplace_back(std::forward<RevenueAttributionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination. Present if there are more results available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRevenueAttributionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListRevenueAttributionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AttributionSummary> m_revenueAttributionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_revenueAttributionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
