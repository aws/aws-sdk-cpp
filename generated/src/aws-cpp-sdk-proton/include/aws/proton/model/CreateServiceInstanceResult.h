/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceInstance.h>
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
namespace Proton
{
namespace Model
{
  class CreateServiceInstanceResult
  {
  public:
    AWS_PROTON_API CreateServiceInstanceResult();
    AWS_PROTON_API CreateServiceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateServiceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the service instance being created.</p>
     */
    inline const ServiceInstance& GetServiceInstance() const{ return m_serviceInstance; }

    /**
     * <p>The detailed data of the service instance being created.</p>
     */
    inline void SetServiceInstance(const ServiceInstance& value) { m_serviceInstance = value; }

    /**
     * <p>The detailed data of the service instance being created.</p>
     */
    inline void SetServiceInstance(ServiceInstance&& value) { m_serviceInstance = std::move(value); }

    /**
     * <p>The detailed data of the service instance being created.</p>
     */
    inline CreateServiceInstanceResult& WithServiceInstance(const ServiceInstance& value) { SetServiceInstance(value); return *this;}

    /**
     * <p>The detailed data of the service instance being created.</p>
     */
    inline CreateServiceInstanceResult& WithServiceInstance(ServiceInstance&& value) { SetServiceInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateServiceInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateServiceInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateServiceInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceInstance m_serviceInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
