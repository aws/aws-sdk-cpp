/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/ServiceInfo.h>
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
  class ListServicesResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListServicesResult();
    AWS_SERVICEQUOTAS_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the services.</p>
     */
    inline const Aws::Vector<ServiceInfo>& GetServices() const{ return m_services; }

    /**
     * <p>Information about the services.</p>
     */
    inline void SetServices(const Aws::Vector<ServiceInfo>& value) { m_services = value; }

    /**
     * <p>Information about the services.</p>
     */
    inline void SetServices(Aws::Vector<ServiceInfo>&& value) { m_services = std::move(value); }

    /**
     * <p>Information about the services.</p>
     */
    inline ListServicesResult& WithServices(const Aws::Vector<ServiceInfo>& value) { SetServices(value); return *this;}

    /**
     * <p>Information about the services.</p>
     */
    inline ListServicesResult& WithServices(Aws::Vector<ServiceInfo>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>Information about the services.</p>
     */
    inline ListServicesResult& AddServices(const ServiceInfo& value) { m_services.push_back(value); return *this; }

    /**
     * <p>Information about the services.</p>
     */
    inline ListServicesResult& AddServices(ServiceInfo&& value) { m_services.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceInfo> m_services;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
