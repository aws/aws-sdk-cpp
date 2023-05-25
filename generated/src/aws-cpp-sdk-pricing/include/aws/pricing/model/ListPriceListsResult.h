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
    AWS_PRICING_API ListPriceListsResult();
    AWS_PRICING_API ListPriceListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API ListPriceListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline const Aws::Vector<PriceList>& GetPriceLists() const{ return m_priceLists; }

    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline void SetPriceLists(const Aws::Vector<PriceList>& value) { m_priceLists = value; }

    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline void SetPriceLists(Aws::Vector<PriceList>&& value) { m_priceLists = std::move(value); }

    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline ListPriceListsResult& WithPriceLists(const Aws::Vector<PriceList>& value) { SetPriceLists(value); return *this;}

    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline ListPriceListsResult& WithPriceLists(Aws::Vector<PriceList>&& value) { SetPriceLists(std::move(value)); return *this;}

    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline ListPriceListsResult& AddPriceLists(const PriceList& value) { m_priceLists.push_back(value); return *this; }

    /**
     * <p>The type of price list references that match your request. </p>
     */
    inline ListPriceListsResult& AddPriceLists(PriceList&& value) { m_priceLists.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline ListPriceListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline ListPriceListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline ListPriceListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPriceListsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPriceListsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPriceListsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PriceList> m_priceLists;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
