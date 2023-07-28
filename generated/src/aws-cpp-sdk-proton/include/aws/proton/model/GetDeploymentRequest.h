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
  class GetDeploymentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API GetDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployment"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of a component that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of a environment that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment that you want to get the detailed data for.</p>
     */
    inline GetDeploymentRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline GetDeploymentRequest& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline GetDeploymentRequest& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance associated with the given deployment ID.
     * <code>serviceName</code> must be specified to identify the service instance.</p>
     */
    inline GetDeploymentRequest& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}


    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline GetDeploymentRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline GetDeploymentRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service associated with the given deployment ID.</p>
     */
    inline GetDeploymentRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
