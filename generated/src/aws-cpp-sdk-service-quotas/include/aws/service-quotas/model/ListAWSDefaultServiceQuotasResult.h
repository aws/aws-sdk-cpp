/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/ServiceQuota.h>
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
  class ListAWSDefaultServiceQuotasResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult();
    AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListAWSDefaultServiceQuotasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListAWSDefaultServiceQuotasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the quotas.</p>
     */
    inline const Aws::Vector<ServiceQuota>& GetQuotas() const{ return m_quotas; }

    /**
     * <p>Information about the quotas.</p>
     */
    inline void SetQuotas(const Aws::Vector<ServiceQuota>& value) { m_quotas = value; }

    /**
     * <p>Information about the quotas.</p>
     */
    inline void SetQuotas(Aws::Vector<ServiceQuota>&& value) { m_quotas = std::move(value); }

    /**
     * <p>Information about the quotas.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithQuotas(const Aws::Vector<ServiceQuota>& value) { SetQuotas(value); return *this;}

    /**
     * <p>Information about the quotas.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& WithQuotas(Aws::Vector<ServiceQuota>&& value) { SetQuotas(std::move(value)); return *this;}

    /**
     * <p>Information about the quotas.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& AddQuotas(const ServiceQuota& value) { m_quotas.push_back(value); return *this; }

    /**
     * <p>Information about the quotas.</p>
     */
    inline ListAWSDefaultServiceQuotasResult& AddQuotas(ServiceQuota&& value) { m_quotas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceQuota> m_quotas;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
