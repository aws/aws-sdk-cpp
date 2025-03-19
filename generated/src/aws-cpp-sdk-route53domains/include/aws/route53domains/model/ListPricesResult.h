/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/DomainPrice.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  class ListPricesResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ListPricesResult() = default;
    AWS_ROUTE53DOMAINS_API ListPricesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ListPricesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that includes all the pricing information. If you specify a
     * TLD, this array contains only the pricing for that TLD.</p>
     */
    inline const Aws::Vector<DomainPrice>& GetPrices() const { return m_prices; }
    template<typename PricesT = Aws::Vector<DomainPrice>>
    void SetPrices(PricesT&& value) { m_pricesHasBeenSet = true; m_prices = std::forward<PricesT>(value); }
    template<typename PricesT = Aws::Vector<DomainPrice>>
    ListPricesResult& WithPrices(PricesT&& value) { SetPrices(std::forward<PricesT>(value)); return *this;}
    template<typename PricesT = DomainPrice>
    ListPricesResult& AddPrices(PricesT&& value) { m_pricesHasBeenSet = true; m_prices.emplace_back(std::forward<PricesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more prices than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>. </p> <p>Used
     * only for all TLDs. If you specify a TLD, don't specify a
     * <code>NextPageMarker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const { return m_nextPageMarker; }
    template<typename NextPageMarkerT = Aws::String>
    void SetNextPageMarker(NextPageMarkerT&& value) { m_nextPageMarkerHasBeenSet = true; m_nextPageMarker = std::forward<NextPageMarkerT>(value); }
    template<typename NextPageMarkerT = Aws::String>
    ListPricesResult& WithNextPageMarker(NextPageMarkerT&& value) { SetNextPageMarker(std::forward<NextPageMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPricesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainPrice> m_prices;
    bool m_pricesHasBeenSet = false;

    Aws::String m_nextPageMarker;
    bool m_nextPageMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
