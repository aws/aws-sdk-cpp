/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/ServiceSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class ListServicesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API ListServicesResult();
    AWS_SERVICEDISCOVERY_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains one <code>ServiceSummary</code> object for each
     * service that matches the specified filter criteria.</p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServices() const{ return m_services; }
    inline void SetServices(const Aws::Vector<ServiceSummary>& value) { m_services = value; }
    inline void SetServices(Aws::Vector<ServiceSummary>&& value) { m_services = std::move(value); }
    inline ListServicesResult& WithServices(const Aws::Vector<ServiceSummary>& value) { SetServices(value); return *this;}
    inline ListServicesResult& WithServices(Aws::Vector<ServiceSummary>&& value) { SetServices(std::move(value)); return *this;}
    inline ListServicesResult& AddServices(const ServiceSummary& value) { m_services.push_back(value); return *this; }
    inline ListServicesResult& AddServices(ServiceSummary&& value) { m_services.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceSummary> m_services;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
