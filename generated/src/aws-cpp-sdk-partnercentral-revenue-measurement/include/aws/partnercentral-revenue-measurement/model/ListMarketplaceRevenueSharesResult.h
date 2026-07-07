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
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareSummary.h>

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
class ListMarketplaceRevenueSharesResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueSharesResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueSharesResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ListMarketplaceRevenueSharesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of marketplace revenue share summaries.</p>
   */
  inline const Aws::Vector<MarketplaceRevenueShareSummary>& GetMarketplaceRevenueShareSummaries() const {
    return m_marketplaceRevenueShareSummaries;
  }
  template <typename MarketplaceRevenueShareSummariesT = Aws::Vector<MarketplaceRevenueShareSummary>>
  void SetMarketplaceRevenueShareSummaries(MarketplaceRevenueShareSummariesT&& value) {
    m_marketplaceRevenueShareSummariesHasBeenSet = true;
    m_marketplaceRevenueShareSummaries = std::forward<MarketplaceRevenueShareSummariesT>(value);
  }
  template <typename MarketplaceRevenueShareSummariesT = Aws::Vector<MarketplaceRevenueShareSummary>>
  ListMarketplaceRevenueSharesResult& WithMarketplaceRevenueShareSummaries(MarketplaceRevenueShareSummariesT&& value) {
    SetMarketplaceRevenueShareSummaries(std::forward<MarketplaceRevenueShareSummariesT>(value));
    return *this;
  }
  template <typename MarketplaceRevenueShareSummariesT = MarketplaceRevenueShareSummary>
  ListMarketplaceRevenueSharesResult& AddMarketplaceRevenueShareSummaries(MarketplaceRevenueShareSummariesT&& value) {
    m_marketplaceRevenueShareSummariesHasBeenSet = true;
    m_marketplaceRevenueShareSummaries.emplace_back(std::forward<MarketplaceRevenueShareSummariesT>(value));
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
  ListMarketplaceRevenueSharesResult& WithNextToken(NextTokenT&& value) {
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
  ListMarketplaceRevenueSharesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<MarketplaceRevenueShareSummary> m_marketplaceRevenueShareSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_marketplaceRevenueShareSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
