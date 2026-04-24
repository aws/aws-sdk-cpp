/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/FulfillmentOption.h>

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
class ListFulfillmentOptionsResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListFulfillmentOptionsResult() = default;
  AWS_MARKETPLACEDISCOVERY_API ListFulfillmentOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API ListFulfillmentOptionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The fulfillment options available for the product. Each option describes how
   * the buyer can deploy or access the product.</p>
   */
  inline const Aws::Vector<FulfillmentOption>& GetFulfillmentOptions() const { return m_fulfillmentOptions; }
  template <typename FulfillmentOptionsT = Aws::Vector<FulfillmentOption>>
  void SetFulfillmentOptions(FulfillmentOptionsT&& value) {
    m_fulfillmentOptionsHasBeenSet = true;
    m_fulfillmentOptions = std::forward<FulfillmentOptionsT>(value);
  }
  template <typename FulfillmentOptionsT = Aws::Vector<FulfillmentOption>>
  ListFulfillmentOptionsResult& WithFulfillmentOptions(FulfillmentOptionsT&& value) {
    SetFulfillmentOptions(std::forward<FulfillmentOptionsT>(value));
    return *this;
  }
  template <typename FulfillmentOptionsT = FulfillmentOption>
  ListFulfillmentOptionsResult& AddFulfillmentOptions(FulfillmentOptionsT&& value) {
    m_fulfillmentOptionsHasBeenSet = true;
    m_fulfillmentOptions.emplace_back(std::forward<FulfillmentOptionsT>(value));
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
  ListFulfillmentOptionsResult& WithNextToken(NextTokenT&& value) {
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
  ListFulfillmentOptionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FulfillmentOption> m_fulfillmentOptions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fulfillmentOptionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
