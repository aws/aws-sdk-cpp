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
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareAllocationSummary.h>

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
class ListMarketplaceRevenueShareAllocationsResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueShareAllocationsResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueShareAllocationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueShareAllocationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of allocation summaries for the current page.</p>
   */
  inline const Aws::Vector<MarketplaceRevenueShareAllocationSummary>& GetMarketplaceRevenueShareAllocationSummaries() const {
    return m_marketplaceRevenueShareAllocationSummaries;
  }
  template <typename MarketplaceRevenueShareAllocationSummariesT = Aws::Vector<MarketplaceRevenueShareAllocationSummary>>
  void SetMarketplaceRevenueShareAllocationSummaries(MarketplaceRevenueShareAllocationSummariesT&& value) {
    m_marketplaceRevenueShareAllocationSummariesHasBeenSet = true;
    m_marketplaceRevenueShareAllocationSummaries = std::forward<MarketplaceRevenueShareAllocationSummariesT>(value);
  }
  template <typename MarketplaceRevenueShareAllocationSummariesT = Aws::Vector<MarketplaceRevenueShareAllocationSummary>>
  ListMarketplaceRevenueShareAllocationsResult& WithMarketplaceRevenueShareAllocationSummaries(
      MarketplaceRevenueShareAllocationSummariesT&& value) {
    SetMarketplaceRevenueShareAllocationSummaries(std::forward<MarketplaceRevenueShareAllocationSummariesT>(value));
    return *this;
  }
  template <typename MarketplaceRevenueShareAllocationSummariesT = MarketplaceRevenueShareAllocationSummary>
  ListMarketplaceRevenueShareAllocationsResult& AddMarketplaceRevenueShareAllocationSummaries(
      MarketplaceRevenueShareAllocationSummariesT&& value) {
    m_marketplaceRevenueShareAllocationSummariesHasBeenSet = true;
    m_marketplaceRevenueShareAllocationSummaries.emplace_back(std::forward<MarketplaceRevenueShareAllocationSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for the next page. Absent if no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMarketplaceRevenueShareAllocationsResult& WithNextToken(NextTokenT&& value) {
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
  ListMarketplaceRevenueShareAllocationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<MarketplaceRevenueShareAllocationSummary> m_marketplaceRevenueShareAllocationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_marketplaceRevenueShareAllocationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
