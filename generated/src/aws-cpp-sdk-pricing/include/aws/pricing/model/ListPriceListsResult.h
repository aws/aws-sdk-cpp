/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing/model/PriceList.h>
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
namespace Pricing
{
namespace Model
{
  class ListPriceListsResult
  {
  public:
    AWS_PRICING_API ListPriceListsResult() = default;
    AWS_PRICING_API ListPriceListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API ListPriceListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline const Aws::Vector<PriceList>& GetPriceLists() const { return m_priceLists; }
    template<typename PriceListsT = Aws::Vector<PriceList>>
    void SetPriceLists(PriceListsT&& value) { m_priceListsHasBeenSet = true; m_priceLists = std::forward<PriceListsT>(value); }
    template<typename PriceListsT = Aws::Vector<PriceList>>
    ListPriceListsResult& WithPriceLists(PriceListsT&& value) { SetPriceLists(std::forward<PriceListsT>(value)); return *this;}
    template<typename PriceListsT = PriceList>
    ListPriceListsResult& AddPriceLists(PriceListsT&& value) { m_priceListsHasBeenSet = true; m_priceLists.emplace_back(std::forward<PriceListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPriceListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPriceListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PriceList> m_priceLists;
    bool m_priceListsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
