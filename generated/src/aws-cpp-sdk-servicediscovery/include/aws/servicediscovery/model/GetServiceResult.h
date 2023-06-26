/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/Service.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetServiceResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetServiceResult();
    AWS_SERVICEDISCOVERY_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about the service.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>A complex type that contains information about the service.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>A complex type that contains information about the service.</p>
     */
    inline void SetService(Service&& value) { m_service = std::move(value); }

    /**
     * <p>A complex type that contains information about the service.</p>
     */
    inline GetServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>A complex type that contains information about the service.</p>
     */
    inline GetServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Service m_service;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
