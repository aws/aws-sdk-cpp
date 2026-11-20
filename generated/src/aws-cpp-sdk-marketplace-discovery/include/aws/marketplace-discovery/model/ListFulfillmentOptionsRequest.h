/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryRequest.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

/**
 */
class ListFulfillmentOptionsRequest : public MarketplaceDiscoveryRequest {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListFulfillmentOptionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFulfillmentOptions"; }

  AWS_MARKETPLACEDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The preferred locale for response content, as a Best Current Practice 47 (BCP
   * 47) language tag or a comma-separated priority list of language tags. See
   * <code>Locale</code> for supported values, constraints, fallback behavior, and
   * the default locale. If you omit this field, the service returns content in the
   * default locale.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  ListFulfillmentOptionsRequest& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the product for which to list fulfillment
   * options.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  ListFulfillmentOptionsRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of fulfillment options to return in each call. If you omit
   * this field, the default is 25. Use <code>nextToken</code> to retrieve the next
   * page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFulfillmentOptionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
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
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFulfillmentOptionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_locale;

  Aws::String m_productId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_localeHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
