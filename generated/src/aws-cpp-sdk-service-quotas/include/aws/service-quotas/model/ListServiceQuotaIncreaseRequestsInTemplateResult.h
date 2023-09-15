/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/ServiceQuotaIncreaseRequestInTemplate.h>
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
  class ListServiceQuotaIncreaseRequestsInTemplateResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateResult();
    AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline const Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>& GetServiceQuotaIncreaseRequestInTemplateList() const{ return m_serviceQuotaIncreaseRequestInTemplateList; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline void SetServiceQuotaIncreaseRequestInTemplateList(const Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>& value) { m_serviceQuotaIncreaseRequestInTemplateList = value; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline void SetServiceQuotaIncreaseRequestInTemplateList(Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>&& value) { m_serviceQuotaIncreaseRequestInTemplateList = std::move(value); }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithServiceQuotaIncreaseRequestInTemplateList(const Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>& value) { SetServiceQuotaIncreaseRequestInTemplateList(value); return *this;}

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithServiceQuotaIncreaseRequestInTemplateList(Aws::Vector<ServiceQuotaIncreaseRequestInTemplate>&& value) { SetServiceQuotaIncreaseRequestInTemplateList(std::move(value)); return *this;}

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& AddServiceQuotaIncreaseRequestInTemplateList(const ServiceQuotaIncreaseRequestInTemplate& value) { m_serviceQuotaIncreaseRequestInTemplateList.push_back(value); return *this; }

    /**
     * <p>Information about the quota increase requests.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& AddServiceQuotaIncreaseRequestInTemplateList(ServiceQuotaIncreaseRequestInTemplate&& value) { m_serviceQuotaIncreaseRequestInTemplateList.push_back(std::move(value)); return *this; }


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
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ServiceQuotaIncreaseRequestInTemplate> m_serviceQuotaIncreaseRequestInTemplateList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
