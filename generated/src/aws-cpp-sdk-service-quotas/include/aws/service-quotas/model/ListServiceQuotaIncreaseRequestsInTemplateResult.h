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
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ServiceQuotaIncreaseRequestInTemplate> m_serviceQuotaIncreaseRequestInTemplateList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
