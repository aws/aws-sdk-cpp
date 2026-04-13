/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PurchaseOptionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {
class ListPurchaseOptionsResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListPurchaseOptionsResult() = default;
  AWS_MARKETPLACEDISCOVERY_API ListPurchaseOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API ListPurchaseOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The purchase options available to the buyer. Each option is either an offer
   * for a single product or an offer set spanning multiple products.</p>
   */
  inline const Aws::Vector<PurchaseOptionSummary>& GetPurchaseOptions() const { return m_purchaseOptions; }
  template <typename PurchaseOptionsT = Aws::Vector<PurchaseOptionSummary>>
  void SetPurchaseOptions(PurchaseOptionsT&& value) {
    m_purchaseOptionsHasBeenSet = true;
    m_purchaseOptions = std::forward<PurchaseOptionsT>(value);
  }
  template <typename PurchaseOptionsT = Aws::Vector<PurchaseOptionSummary>>
  ListPurchaseOptionsResult& WithPurchaseOptions(PurchaseOptionsT&& value) {
    SetPurchaseOptions(std::forward<PurchaseOptionsT>(value));
    return *this;
  }
  template <typename PurchaseOptionsT = PurchaseOptionSummary>
  ListPurchaseOptionsResult& AddPurchaseOptions(PurchaseOptionsT&& value) {
    m_purchaseOptionsHasBeenSet = true;
    m_purchaseOptions.emplace_back(std::forward<PurchaseOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>nextToken</code> is returned, there are more results available. Make
   * the call again using the returned token to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPurchaseOptionsResult& WithNextToken(NextTokenT&& value) {
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
  ListPurchaseOptionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PurchaseOptionSummary> m_purchaseOptions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_purchaseOptionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
