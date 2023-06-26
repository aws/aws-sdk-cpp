/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicediscovery/model/HealthStatusFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class DiscoverInstancesRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverInstances"; }

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
    inline DiscoverInstancesRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline DiscoverInstancesRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The <code>HttpName</code> name of the namespace. It's found in the
     * <code>HttpProperties</code> member of the <code>Properties</code> member of the
     * namespace.</p>
     */
    inline DiscoverInstancesRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


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
    inline DiscoverInstancesRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline DiscoverInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameters() const{ return m_queryParameters; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline void SetQueryParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline void SetQueryParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& WithQueryParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParameters(value); return *this;}

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& WithQueryParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParameters(std::move(value)); return *this;}

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const Aws::String& key, const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, value); return *this; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(Aws::String&& key, const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const Aws::String& key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(Aws::String&& key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const char* key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(Aws::String&& key, const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const char* key, const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, value); return *this; }


    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptionalParameters() const{ return m_optionalParameters; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline bool OptionalParametersHasBeenSet() const { return m_optionalParametersHasBeenSet; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline void SetOptionalParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters = value; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline void SetOptionalParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters = std::move(value); }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& WithOptionalParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetOptionalParameters(value); return *this;}

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& WithOptionalParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetOptionalParameters(std::move(value)); return *this;}

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(const Aws::String& key, const Aws::String& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(key, value); return *this; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(Aws::String&& key, const Aws::String& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(const Aws::String& key, Aws::String&& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(Aws::String&& key, Aws::String&& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(const char* key, Aws::String&& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(Aws::String&& key, const char* value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline DiscoverInstancesRequest& AddOptionalParameters(const char* key, const char* value) { m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(key, value); return *this; }


    /**
     * <p>The health status of the instances that you want to discover. This parameter
     * is ignored for services that don't have a health check configured, and all
     * instances are returned.</p> <dl> <dt>HEALTHY</dt> <dd> <p>Returns healthy
     * instances.</p> </dd> <dt>UNHEALTHY</dt> <dd> <p>Returns unhealthy instances.</p>
     * </dd> <dt>ALL</dt> <dd> <p>Returns all instances.</p> </dd>
     * <dt>HEALTHY_OR_ELSE_ALL</dt> <dd> <p>Returns healthy instances, unless none are
     * reporting a healthy state. In that case, return all instances. This is also
     * called failing open.</p> </dd> </dl>
     */
    inline const HealthStatusFilter& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The health status of the instances that you want to discover. This parameter
     * is ignored for services that don't have a health check configured, and all
     * instances are returned.</p> <dl> <dt>HEALTHY</dt> <dd> <p>Returns healthy
     * instances.</p> </dd> <dt>UNHEALTHY</dt> <dd> <p>Returns unhealthy instances.</p>
     * </dd> <dt>ALL</dt> <dd> <p>Returns all instances.</p> </dd>
     * <dt>HEALTHY_OR_ELSE_ALL</dt> <dd> <p>Returns healthy instances, unless none are
     * reporting a healthy state. In that case, return all instances. This is also
     * called failing open.</p> </dd> </dl>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>The health status of the instances that you want to discover. This parameter
     * is ignored for services that don't have a health check configured, and all
     * instances are returned.</p> <dl> <dt>HEALTHY</dt> <dd> <p>Returns healthy
     * instances.</p> </dd> <dt>UNHEALTHY</dt> <dd> <p>Returns unhealthy instances.</p>
     * </dd> <dt>ALL</dt> <dd> <p>Returns all instances.</p> </dd>
     * <dt>HEALTHY_OR_ELSE_ALL</dt> <dd> <p>Returns healthy instances, unless none are
     * reporting a healthy state. In that case, return all instances. This is also
     * called failing open.</p> </dd> </dl>
     */
    inline void SetHealthStatus(const HealthStatusFilter& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The health status of the instances that you want to discover. This parameter
     * is ignored for services that don't have a health check configured, and all
     * instances are returned.</p> <dl> <dt>HEALTHY</dt> <dd> <p>Returns healthy
     * instances.</p> </dd> <dt>UNHEALTHY</dt> <dd> <p>Returns unhealthy instances.</p>
     * </dd> <dt>ALL</dt> <dd> <p>Returns all instances.</p> </dd>
     * <dt>HEALTHY_OR_ELSE_ALL</dt> <dd> <p>Returns healthy instances, unless none are
     * reporting a healthy state. In that case, return all instances. This is also
     * called failing open.</p> </dd> </dl>
     */
    inline void SetHealthStatus(HealthStatusFilter&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The health status of the instances that you want to discover. This parameter
     * is ignored for services that don't have a health check configured, and all
     * instances are returned.</p> <dl> <dt>HEALTHY</dt> <dd> <p>Returns healthy
     * instances.</p> </dd> <dt>UNHEALTHY</dt> <dd> <p>Returns unhealthy instances.</p>
     * </dd> <dt>ALL</dt> <dd> <p>Returns all instances.</p> </dd>
     * <dt>HEALTHY_OR_ELSE_ALL</dt> <dd> <p>Returns healthy instances, unless none are
     * reporting a healthy state. In that case, return all instances. This is also
     * called failing open.</p> </dd> </dl>
     */
    inline DiscoverInstancesRequest& WithHealthStatus(const HealthStatusFilter& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The health status of the instances that you want to discover. This parameter
     * is ignored for services that don't have a health check configured, and all
     * instances are returned.</p> <dl> <dt>HEALTHY</dt> <dd> <p>Returns healthy
     * instances.</p> </dd> <dt>UNHEALTHY</dt> <dd> <p>Returns unhealthy instances.</p>
     * </dd> <dt>ALL</dt> <dd> <p>Returns all instances.</p> </dd>
     * <dt>HEALTHY_OR_ELSE_ALL</dt> <dd> <p>Returns healthy instances, unless none are
     * reporting a healthy state. In that case, return all instances. This is also
     * called failing open.</p> </dd> </dl>
     */
    inline DiscoverInstancesRequest& WithHealthStatus(HealthStatusFilter&& value) { SetHealthStatus(std::move(value)); return *this;}

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_optionalParameters;
    bool m_optionalParametersHasBeenSet = false;

    HealthStatusFilter m_healthStatus;
    bool m_healthStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
