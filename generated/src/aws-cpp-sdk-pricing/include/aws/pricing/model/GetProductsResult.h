﻿/**
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
    AWS_PRICING_API GetProductsResult();
    AWS_PRICING_API GetProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API GetProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The format version of the response. For example, aws_v1.</p>
     */
    inline const Aws::String& GetFormatVersion() const{ return m_formatVersion; }
    inline void SetFormatVersion(const Aws::String& value) { m_formatVersion = value; }
    inline void SetFormatVersion(Aws::String&& value) { m_formatVersion = std::move(value); }
    inline void SetFormatVersion(const char* value) { m_formatVersion.assign(value); }
    inline GetProductsResult& WithFormatVersion(const Aws::String& value) { SetFormatVersion(value); return *this;}
    inline GetProductsResult& WithFormatVersion(Aws::String&& value) { SetFormatVersion(std::move(value)); return *this;}
    inline GetProductsResult& WithFormatVersion(const char* value) { SetFormatVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of products that match your filters. The list contains both the
     * product metadata and the price information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPriceList() const{ return m_priceList; }
    inline void SetPriceList(const Aws::Vector<Aws::String>& value) { m_priceList = value; }
    inline void SetPriceList(Aws::Vector<Aws::String>&& value) { m_priceList = std::move(value); }
    inline GetProductsResult& WithPriceList(const Aws::Vector<Aws::String>& value) { SetPriceList(value); return *this;}
    inline GetProductsResult& WithPriceList(Aws::Vector<Aws::String>&& value) { SetPriceList(std::move(value)); return *this;}
    inline GetProductsResult& AddPriceList(const Aws::String& value) { m_priceList.push_back(value); return *this; }
    inline GetProductsResult& AddPriceList(Aws::String&& value) { m_priceList.push_back(std::move(value)); return *this; }
    inline GetProductsResult& AddPriceList(const char* value) { m_priceList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetProductsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetProductsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetProductsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProductsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProductsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProductsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_formatVersion;

    Aws::Vector<Aws::String> m_priceList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
