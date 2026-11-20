/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListingAttributeResults.h>

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
/**
 * <p>Contains the requested listing attributes and pagination
 * information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListListingAttributesOutput">AWS
 * API Reference</a></p>
 */
class ListListingAttributesResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListListingAttributesResult() = default;
  AWS_MARKETPLACEDISCOVERY_API ListListingAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API ListListingAttributesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The locale of the returned content. See <code>Locale</code> for details.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  ListListingAttributesResult& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested attributes. Each entry contains one attribute type.</p>
   */
  inline const Aws::Vector<ListingAttributeResults>& GetListingAttributes() const { return m_listingAttributes; }
  template <typename ListingAttributesT = Aws::Vector<ListingAttributeResults>>
  void SetListingAttributes(ListingAttributesT&& value) {
    m_listingAttributesHasBeenSet = true;
    m_listingAttributes = std::forward<ListingAttributesT>(value);
  }
  template <typename ListingAttributesT = Aws::Vector<ListingAttributeResults>>
  ListListingAttributesResult& WithListingAttributes(ListingAttributesT&& value) {
    SetListingAttributes(std::forward<ListingAttributesT>(value));
    return *this;
  }
  template <typename ListingAttributesT = ListingAttributeResults>
  ListListingAttributesResult& AddListingAttributes(ListingAttributesT&& value) {
    m_listingAttributesHasBeenSet = true;
    m_listingAttributes.emplace_back(std::forward<ListingAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the service returns <code>nextToken</code>, more results are available.
   * The value of <code>nextToken</code> is a unique pagination token for each page.
   * Make the call again with the returned token to retrieve the next page. Keep all
   * other arguments unchanged. Each pagination token expires after 24 hours. An
   * expired pagination token returns a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListListingAttributesResult& WithNextToken(NextTokenT&& value) {
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
  ListListingAttributesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_locale;

  Aws::Vector<ListingAttributeResults> m_listingAttributes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_localeHasBeenSet = false;
  bool m_listingAttributesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
