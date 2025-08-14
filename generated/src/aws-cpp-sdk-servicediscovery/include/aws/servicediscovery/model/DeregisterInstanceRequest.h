/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class DeregisterInstanceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API DeregisterInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterInstance"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service that the instance is
     * associated with. If the namespace associated with the service is shared with
     * your account, specify the service ARN. For more information about shared
     * namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    DeregisterInstanceRequest& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DeregisterInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
