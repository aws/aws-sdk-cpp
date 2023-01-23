/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/RequestedServiceQuotaChange.h>
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
namespace ServiceQuotas
{
namespace Model
{
  class ListRequestedServiceQuotaChangeHistoryByQuotaResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult();
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryByQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline const Aws::Vector<RequestedServiceQuotaChange>& GetRequestedQuotas() const{ return m_requestedQuotas; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline void SetRequestedQuotas(const Aws::Vector<RequestedServiceQuotaChange>& value) { m_requestedQuotas = value; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline void SetRequestedQuotas(Aws::Vector<RequestedServiceQuotaChange>&& value) { m_requestedQuotas = std::move(value); }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithRequestedQuotas(const Aws::Vector<RequestedServiceQuotaChange>& value) { SetRequestedQuotas(value); return *this;}

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& WithRequestedQuotas(Aws::Vector<RequestedServiceQuotaChange>&& value) { SetRequestedQuotas(std::move(value)); return *this;}

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& AddRequestedQuotas(const RequestedServiceQuotaChange& value) { m_requestedQuotas.push_back(value); return *this; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryByQuotaResult& AddRequestedQuotas(RequestedServiceQuotaChange&& value) { m_requestedQuotas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RequestedServiceQuotaChange> m_requestedQuotas;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
