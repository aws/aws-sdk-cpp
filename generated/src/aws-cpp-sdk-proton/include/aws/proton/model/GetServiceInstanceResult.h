/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceInstance.h>
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
  class GetServiceInstanceResult
  {
  public:
    AWS_PROTON_API GetServiceInstanceResult();
    AWS_PROTON_API GetServiceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetServiceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested service instance.</p>
     */
    inline const ServiceInstance& GetServiceInstance() const{ return m_serviceInstance; }

    /**
     * <p>The detailed data of the requested service instance.</p>
     */
    inline void SetServiceInstance(const ServiceInstance& value) { m_serviceInstance = value; }

    /**
     * <p>The detailed data of the requested service instance.</p>
     */
    inline void SetServiceInstance(ServiceInstance&& value) { m_serviceInstance = std::move(value); }

    /**
     * <p>The detailed data of the requested service instance.</p>
     */
    inline GetServiceInstanceResult& WithServiceInstance(const ServiceInstance& value) { SetServiceInstance(value); return *this;}

    /**
     * <p>The detailed data of the requested service instance.</p>
     */
    inline GetServiceInstanceResult& WithServiceInstance(ServiceInstance&& value) { SetServiceInstance(std::move(value)); return *this;}

  private:

    ServiceInstance m_serviceInstance;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
