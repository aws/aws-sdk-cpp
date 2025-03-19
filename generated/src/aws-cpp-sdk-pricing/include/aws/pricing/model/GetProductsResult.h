/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetProductsResult
  {
  public:
    AWS_PRICING_API GetProductsResult() = default;
    AWS_PRICING_API GetProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API GetProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline const Aws::String& GetFormatVersion() const { return m_formatVersion; }
    template<typename FormatVersionT = Aws::String>
    void SetFormatVersion(FormatVersionT&& value) { m_formatVersionHasBeenSet = true; m_formatVersion = std::forward<FormatVersionT>(value); }
    template<typename FormatVersionT = Aws::String>
    GetProductsResult& WithFormatVersion(FormatVersionT&& value) { SetFormatVersion(std::forward<FormatVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPriceList() const { return m_priceList; }
    template<typename PriceListT = Aws::Vector<Aws::String>>
    void SetPriceList(PriceListT&& value) { m_priceListHasBeenSet = true; m_priceList = std::forward<PriceListT>(value); }
    template<typename PriceListT = Aws::Vector<Aws::String>>
    GetProductsResult& WithPriceList(PriceListT&& value) { SetPriceList(std::forward<PriceListT>(value)); return *this;}
    template<typename PriceListT = Aws::String>
    GetProductsResult& AddPriceList(PriceListT&& value) { m_priceListHasBeenSet = true; m_priceList.emplace_back(std::forward<PriceListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetProductsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProductsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_formatVersion;
    bool m_formatVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_priceList;
    bool m_priceListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
