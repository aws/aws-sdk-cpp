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
    AWS_SERVICEDISCOVERY_API DeregisterInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterInstance"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline DeregisterInstanceRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline DeregisterInstanceRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline DeregisterInstanceRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline DeregisterInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline DeregisterInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
     * request.</p>
     */
    inline DeregisterInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
