﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/DomainSummary.h>
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
  /**
   * <p>The ListDomains response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomainsResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainsResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ListDomainsResult();
    AWS_ROUTE53DOMAINS_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of domains.</p>
     */
    inline const Aws::Vector<DomainSummary>& GetDomains() const{ return m_domains; }
    inline void SetDomains(const Aws::Vector<DomainSummary>& value) { m_domains = value; }
    inline void SetDomains(Aws::Vector<DomainSummary>&& value) { m_domains = std::move(value); }
    inline ListDomainsResult& WithDomains(const Aws::Vector<DomainSummary>& value) { SetDomains(value); return *this;}
    inline ListDomainsResult& WithDomains(Aws::Vector<DomainSummary>&& value) { SetDomains(std::move(value)); return *this;}
    inline ListDomainsResult& AddDomains(const DomainSummary& value) { m_domains.push_back(value); return *this; }
    inline ListDomainsResult& AddDomains(DomainSummary&& value) { m_domains.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const{ return m_nextPageMarker; }
    inline void SetNextPageMarker(const Aws::String& value) { m_nextPageMarker = value; }
    inline void SetNextPageMarker(Aws::String&& value) { m_nextPageMarker = std::move(value); }
    inline void SetNextPageMarker(const char* value) { m_nextPageMarker.assign(value); }
    inline ListDomainsResult& WithNextPageMarker(const Aws::String& value) { SetNextPageMarker(value); return *this;}
    inline ListDomainsResult& WithNextPageMarker(Aws::String&& value) { SetNextPageMarker(std::move(value)); return *this;}
    inline ListDomainsResult& WithNextPageMarker(const char* value) { SetNextPageMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainSummary> m_domains;

    Aws::String m_nextPageMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
