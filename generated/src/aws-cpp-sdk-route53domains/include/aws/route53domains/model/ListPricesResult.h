﻿/**
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
    AWS_ROUTE53DOMAINS_API ListPricesResult();
    AWS_ROUTE53DOMAINS_API ListPricesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ListPricesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that includes all the pricing information. If you specify a
     * TLD, this array contains only the pricing for that TLD.</p>
     */
    inline const Aws::Vector<DomainPrice>& GetPrices() const{ return m_prices; }
    inline void SetPrices(const Aws::Vector<DomainPrice>& value) { m_prices = value; }
    inline void SetPrices(Aws::Vector<DomainPrice>&& value) { m_prices = std::move(value); }
    inline ListPricesResult& WithPrices(const Aws::Vector<DomainPrice>& value) { SetPrices(value); return *this;}
    inline ListPricesResult& WithPrices(Aws::Vector<DomainPrice>&& value) { SetPrices(std::move(value)); return *this;}
    inline ListPricesResult& AddPrices(const DomainPrice& value) { m_prices.push_back(value); return *this; }
    inline ListPricesResult& AddPrices(DomainPrice&& value) { m_prices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more prices than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>. </p> <p>Used
     * only for all TLDs. If you specify a TLD, don't specify a
     * <code>NextPageMarker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const{ return m_nextPageMarker; }
    inline void SetNextPageMarker(const Aws::String& value) { m_nextPageMarker = value; }
    inline void SetNextPageMarker(Aws::String&& value) { m_nextPageMarker = std::move(value); }
    inline void SetNextPageMarker(const char* value) { m_nextPageMarker.assign(value); }
    inline ListPricesResult& WithNextPageMarker(const Aws::String& value) { SetNextPageMarker(value); return *this;}
    inline ListPricesResult& WithNextPageMarker(Aws::String&& value) { SetNextPageMarker(std::move(value)); return *this;}
    inline ListPricesResult& WithNextPageMarker(const char* value) { SetNextPageMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPricesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPricesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPricesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainPrice> m_prices;

    Aws::String m_nextPageMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
