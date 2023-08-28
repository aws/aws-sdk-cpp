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
  class ListRequestedServiceQuotaChangeHistoryResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryResult();
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListRequestedServiceQuotaChangeHistoryResult& WithRequestedQuotas(const Aws::Vector<RequestedServiceQuotaChange>& value) { SetRequestedQuotas(value); return *this;}

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryResult& WithRequestedQuotas(Aws::Vector<RequestedServiceQuotaChange>&& value) { SetRequestedQuotas(std::move(value)); return *this;}

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryResult& AddRequestedQuotas(const RequestedServiceQuotaChange& value) { m_requestedQuotas.push_back(value); return *this; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryResult& AddRequestedQuotas(RequestedServiceQuotaChange&& value) { m_requestedQuotas.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRequestedServiceQuotaChangeHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRequestedServiceQuotaChangeHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRequestedServiceQuotaChangeHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<RequestedServiceQuotaChange> m_requestedQuotas;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
