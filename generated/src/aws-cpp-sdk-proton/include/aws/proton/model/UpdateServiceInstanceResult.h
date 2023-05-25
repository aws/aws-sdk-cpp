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
  class UpdateServiceInstanceResult
  {
  public:
    AWS_PROTON_API UpdateServiceInstanceResult();
    AWS_PROTON_API UpdateServiceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateServiceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service instance summary data that's returned by Proton.</p>
     */
    inline const ServiceInstance& GetServiceInstance() const{ return m_serviceInstance; }

    /**
     * <p>The service instance summary data that's returned by Proton.</p>
     */
    inline void SetServiceInstance(const ServiceInstance& value) { m_serviceInstance = value; }

    /**
     * <p>The service instance summary data that's returned by Proton.</p>
     */
    inline void SetServiceInstance(ServiceInstance&& value) { m_serviceInstance = std::move(value); }

    /**
     * <p>The service instance summary data that's returned by Proton.</p>
     */
    inline UpdateServiceInstanceResult& WithServiceInstance(const ServiceInstance& value) { SetServiceInstance(value); return *this;}

    /**
     * <p>The service instance summary data that's returned by Proton.</p>
     */
    inline UpdateServiceInstanceResult& WithServiceInstance(ServiceInstance&& value) { SetServiceInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateServiceInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateServiceInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateServiceInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceInstance m_serviceInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
