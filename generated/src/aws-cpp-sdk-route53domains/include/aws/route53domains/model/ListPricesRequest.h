/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   */
  class ListPricesRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API ListPricesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrices"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The TLD for which you want to receive the pricing information. For example.
     * <code>.net</code>.</p> <p>If a <code>Tld</code> value is not provided, a list of
     * prices for all TLDs supported by Route 53 is returned.</p>
     */
    inline const Aws::String& GetTld() const { return m_tld; }
    inline bool TldHasBeenSet() const { return m_tldHasBeenSet; }
    template<typename TldT = Aws::String>
    void SetTld(TldT&& value) { m_tldHasBeenSet = true; m_tld = std::forward<TldT>(value); }
    template<typename TldT = Aws::String>
    ListPricesRequest& WithTld(TldT&& value) { SetTld(std::forward<TldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an initial request for a list of prices, omit this element. If the number
     * of prices that are not yet complete is greater than the value that you specified
     * for <code>MaxItems</code>, you can use <code>Marker</code> to return additional
     * prices. Get the value of <code>NextPageMarker</code> from the previous response,
     * and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p> <p>Used
     * only for all TLDs. If you specify a TLD, don't specify a
     * <code>Marker</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListPricesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of <code>Prices</code> to be returned.</p> <p>Used only for all TLDs.
     * If you specify a TLD, don't specify a <code>MaxItems</code>.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListPricesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::String m_tld;
    bool m_tldHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
