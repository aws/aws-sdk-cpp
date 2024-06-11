﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/ServiceName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ServiceVersion.h>
#include <aws/snowball/model/DependentService.h>
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
namespace Snowball
{
namespace Model
{
  class ListServiceVersionsResult
  {
  public:
    AWS_SNOWBALL_API ListServiceVersionsResult();
    AWS_SNOWBALL_API ListServiceVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListServiceVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of supported versions.</p>
     */
    inline const Aws::Vector<ServiceVersion>& GetServiceVersions() const{ return m_serviceVersions; }
    inline void SetServiceVersions(const Aws::Vector<ServiceVersion>& value) { m_serviceVersions = value; }
    inline void SetServiceVersions(Aws::Vector<ServiceVersion>&& value) { m_serviceVersions = std::move(value); }
    inline ListServiceVersionsResult& WithServiceVersions(const Aws::Vector<ServiceVersion>& value) { SetServiceVersions(value); return *this;}
    inline ListServiceVersionsResult& WithServiceVersions(Aws::Vector<ServiceVersion>&& value) { SetServiceVersions(std::move(value)); return *this;}
    inline ListServiceVersionsResult& AddServiceVersions(const ServiceVersion& value) { m_serviceVersions.push_back(value); return *this; }
    inline ListServiceVersionsResult& AddServiceVersions(ServiceVersion&& value) { m_serviceVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service for which the system provided supported versions.</p>
     */
    inline const ServiceName& GetServiceName() const{ return m_serviceName; }
    inline void SetServiceName(const ServiceName& value) { m_serviceName = value; }
    inline void SetServiceName(ServiceName&& value) { m_serviceName = std::move(value); }
    inline ListServiceVersionsResult& WithServiceName(const ServiceName& value) { SetServiceName(value); return *this;}
    inline ListServiceVersionsResult& WithServiceName(ServiceName&& value) { SetServiceName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names and versions of dependant services of the service for which
     * the system provided supported versions.</p>
     */
    inline const Aws::Vector<DependentService>& GetDependentServices() const{ return m_dependentServices; }
    inline void SetDependentServices(const Aws::Vector<DependentService>& value) { m_dependentServices = value; }
    inline void SetDependentServices(Aws::Vector<DependentService>&& value) { m_dependentServices = std::move(value); }
    inline ListServiceVersionsResult& WithDependentServices(const Aws::Vector<DependentService>& value) { SetDependentServices(value); return *this;}
    inline ListServiceVersionsResult& WithDependentServices(Aws::Vector<DependentService>&& value) { SetDependentServices(std::move(value)); return *this;}
    inline ListServiceVersionsResult& AddDependentServices(const DependentService& value) { m_dependentServices.push_back(value); return *this; }
    inline ListServiceVersionsResult& AddDependentServices(DependentService&& value) { m_dependentServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point of the next
     * list of returned <code>ListServiceVersionsResult</code> results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceVersion> m_serviceVersions;

    ServiceName m_serviceName;

    Aws::Vector<DependentService> m_dependentServices;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
