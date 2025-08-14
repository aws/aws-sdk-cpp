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
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverInstances"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>HttpName</code> name of the namespace. The <code>HttpName</code> is
     * found in the <code>HttpProperties</code> member of the <code>Properties</code>
     * member of the namespace. In most cases, <code>Name</code> and
     * <code>HttpName</code> match. However, if you reuse <code>Name</code> for
     * namespace creation, a generated hash is added to <code>HttpName</code> to
     * distinguish the two.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    DiscoverInstancesRequest& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    DiscoverInstancesRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DiscoverInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to scope the results based on custom attributes for the instance (for
     * example, <code>{version=v1, az=1a}</code>). Only instances that match all the
     * specified key-value pairs are returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = Aws::Map<Aws::String, Aws::String>>
    DiscoverInstancesRequest& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    template<typename QueryParametersKeyT = Aws::String, typename QueryParametersValueT = Aws::String>
    DiscoverInstancesRequest& AddQueryParameters(QueryParametersKeyT&& key, QueryParametersValueT&& value) {
      m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::forward<QueryParametersKeyT>(key), std::forward<QueryParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Opportunistic filters to scope the results based on custom attributes. If
     * there are instances that match both the filters specified in both the
     * <code>QueryParameters</code> parameter and this parameter, all of these
     * instances are returned. Otherwise, the filters are ignored, and only instances
     * that match the filters that are specified in the <code>QueryParameters</code>
     * parameter are returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptionalParameters() const { return m_optionalParameters; }
    inline bool OptionalParametersHasBeenSet() const { return m_optionalParametersHasBeenSet; }
    template<typename OptionalParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetOptionalParameters(OptionalParametersT&& value) { m_optionalParametersHasBeenSet = true; m_optionalParameters = std::forward<OptionalParametersT>(value); }
    template<typename OptionalParametersT = Aws::Map<Aws::String, Aws::String>>
    DiscoverInstancesRequest& WithOptionalParameters(OptionalParametersT&& value) { SetOptionalParameters(std::forward<OptionalParametersT>(value)); return *this;}
    template<typename OptionalParametersKeyT = Aws::String, typename OptionalParametersValueT = Aws::String>
    DiscoverInstancesRequest& AddOptionalParameters(OptionalParametersKeyT&& key, OptionalParametersValueT&& value) {
      m_optionalParametersHasBeenSet = true; m_optionalParameters.emplace(std::forward<OptionalParametersKeyT>(key), std::forward<OptionalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline HealthStatusFilter GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(HealthStatusFilter value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline DiscoverInstancesRequest& WithHealthStatus(HealthStatusFilter value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the namespace associated
     * with the instance, as specified in the namespace <code>ResourceOwner</code>
     * field. For instances associated with namespaces that are shared with your
     * account, you must specify an <code>OwnerAccount</code>.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    DiscoverInstancesRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_optionalParameters;
    bool m_optionalParametersHasBeenSet = false;

    HealthStatusFilter m_healthStatus{HealthStatusFilter::NOT_SET};
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
