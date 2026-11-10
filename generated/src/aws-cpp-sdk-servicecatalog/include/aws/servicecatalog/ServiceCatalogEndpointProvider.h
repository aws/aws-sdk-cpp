/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/ServiceCatalogClientConfiguration.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>

namespace Aws {
namespace ServiceCatalog {
namespace Endpoint {
using ServiceCatalogClientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ServiceCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SERVICECATALOG_API ServiceCatalogBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ServiceCatalogBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ServiceCatalogClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ServiceCatalogClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ServiceCatalogClientConfiguration& config);
};

/**
 * The type for the ServiceCatalog Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServiceCatalogEndpointProviderBase =
    EndpointProviderBase<ServiceCatalogClientConfiguration, ServiceCatalogBuiltInParameters, ServiceCatalogClientContextParameters>;

using ServiceCatalogDefaultEpProviderBase =
    BDDEndpointProvider<ServiceCatalogClientConfiguration, ServiceCatalogBuiltInParameters, ServiceCatalogClientContextParameters>;

}  // namespace Endpoint
}  // namespace ServiceCatalog

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SERVICECATALOG_EXTERN template class AWS_SERVICECATALOG_API Aws::Endpoint::EndpointProviderBase<
    ServiceCatalog::Endpoint::ServiceCatalogClientConfiguration, ServiceCatalog::Endpoint::ServiceCatalogBuiltInParameters,
    ServiceCatalog::Endpoint::ServiceCatalogClientContextParameters>;

AWS_SERVICECATALOG_EXTERN template class AWS_SERVICECATALOG_API Aws::Endpoint::BDDEndpointProvider<
    ServiceCatalog::Endpoint::ServiceCatalogClientConfiguration, ServiceCatalog::Endpoint::ServiceCatalogBuiltInParameters,
    ServiceCatalog::Endpoint::ServiceCatalogClientContextParameters>;
}  // namespace Endpoint

namespace ServiceCatalog {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SERVICECATALOG_API ServiceCatalogEndpointProvider : public ServiceCatalogDefaultEpProviderBase {
 public:
  using ServiceCatalogResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ServiceCatalogEndpointProvider();

  ~ServiceCatalogEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ServiceCatalog
}  // namespace Aws
