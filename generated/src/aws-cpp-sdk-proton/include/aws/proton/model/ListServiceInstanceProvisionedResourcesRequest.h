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
  class ListServiceInstanceProvisionedResourcesRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListServiceInstanceProvisionedResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceInstanceProvisionedResources"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance whose provisioned resources you want.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}


    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * to.</p>
     */
    inline ListServiceInstanceProvisionedResourcesRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
