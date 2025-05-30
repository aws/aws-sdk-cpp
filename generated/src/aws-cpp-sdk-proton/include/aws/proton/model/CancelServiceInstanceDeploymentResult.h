﻿/**
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
  class CancelServiceInstanceDeploymentResult
  {
  public:
    AWS_PROTON_API CancelServiceInstanceDeploymentResult() = default;
    AWS_PROTON_API CancelServiceInstanceDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CancelServiceInstanceDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service instance summary data that's returned by Proton.</p>
     */
    inline const ServiceInstance& GetServiceInstance() const { return m_serviceInstance; }
    template<typename ServiceInstanceT = ServiceInstance>
    void SetServiceInstance(ServiceInstanceT&& value) { m_serviceInstanceHasBeenSet = true; m_serviceInstance = std::forward<ServiceInstanceT>(value); }
    template<typename ServiceInstanceT = ServiceInstance>
    CancelServiceInstanceDeploymentResult& WithServiceInstance(ServiceInstanceT&& value) { SetServiceInstance(std::forward<ServiceInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelServiceInstanceDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceInstance m_serviceInstance;
    bool m_serviceInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
