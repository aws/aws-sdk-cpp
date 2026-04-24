/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/OfferTerm.h>

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
class GetOfferTermsResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetOfferTermsResult() = default;
  AWS_MARKETPLACEDISCOVERY_API GetOfferTermsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API GetOfferTermsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The terms attached to the offer. Each element contains exactly one term
   * type.</p>
   */
  inline const Aws::Vector<OfferTerm>& GetOfferTerms() const { return m_offerTerms; }
  template <typename OfferTermsT = Aws::Vector<OfferTerm>>
  void SetOfferTerms(OfferTermsT&& value) {
    m_offerTermsHasBeenSet = true;
    m_offerTerms = std::forward<OfferTermsT>(value);
  }
  template <typename OfferTermsT = Aws::Vector<OfferTerm>>
  GetOfferTermsResult& WithOfferTerms(OfferTermsT&& value) {
    SetOfferTerms(std::forward<OfferTermsT>(value));
    return *this;
  }
  template <typename OfferTermsT = OfferTerm>
  GetOfferTermsResult& AddOfferTerms(OfferTermsT&& value) {
    m_offerTermsHasBeenSet = true;
    m_offerTerms.emplace_back(std::forward<OfferTermsT>(value));
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
  GetOfferTermsResult& WithNextToken(NextTokenT&& value) {
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
  GetOfferTermsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OfferTerm> m_offerTerms;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_offerTermsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
