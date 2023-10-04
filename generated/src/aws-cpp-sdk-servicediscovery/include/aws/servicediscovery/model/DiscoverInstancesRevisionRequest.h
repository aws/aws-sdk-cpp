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
  class DiscoverInstancesRevisionRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverInstancesRevision"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline DiscoverInstancesRevisionRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline DiscoverInstancesRevisionRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline DiscoverInstancesRevisionRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRevisionRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRevisionRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRevisionRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
