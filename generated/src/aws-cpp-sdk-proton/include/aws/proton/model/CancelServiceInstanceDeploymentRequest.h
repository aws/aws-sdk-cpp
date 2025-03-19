/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CancelServiceInstanceDeploymentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CancelServiceInstanceDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelServiceInstanceDeployment"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the service instance with the deployment to cancel.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const { return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    template<typename ServiceInstanceNameT = Aws::String>
    void SetServiceInstanceName(ServiceInstanceNameT&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::forward<ServiceInstanceNameT>(value); }
    template<typename ServiceInstanceNameT = Aws::String>
    CancelServiceInstanceDeploymentRequest& WithServiceInstanceName(ServiceInstanceNameT&& value) { SetServiceInstanceName(std::forward<ServiceInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service with the service instance deployment to cancel.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    CancelServiceInstanceDeploymentRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
