/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog-appregistry/AppRegistryClientConfiguration.h>
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>

namespace Aws {
namespace AppRegistry {
namespace Endpoint {
using AppRegistryClientConfiguration = Aws::AppRegistry::AppRegistryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppRegistryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPREGISTRY_API AppRegistryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppRegistryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppRegistryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppRegistryClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppRegistryClientConfiguration& config);
};

/**
 * The type for the AppRegistry Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppRegistryEndpointProviderBase =
    EndpointProviderBase<AppRegistryClientConfiguration, AppRegistryBuiltInParameters, AppRegistryClientContextParameters>;

using AppRegistryDefaultEpProviderBase =
    BDDEndpointProvider<AppRegistryClientConfiguration, AppRegistryBuiltInParameters, AppRegistryClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppRegistry

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPREGISTRY_EXTERN template class AWS_APPREGISTRY_API Aws::Endpoint::EndpointProviderBase<
    AppRegistry::Endpoint::AppRegistryClientConfiguration, AppRegistry::Endpoint::AppRegistryBuiltInParameters,
    AppRegistry::Endpoint::AppRegistryClientContextParameters>;

AWS_APPREGISTRY_EXTERN template class AWS_APPREGISTRY_API Aws::Endpoint::BDDEndpointProvider<
    AppRegistry::Endpoint::AppRegistryClientConfiguration, AppRegistry::Endpoint::AppRegistryBuiltInParameters,
    AppRegistry::Endpoint::AppRegistryClientContextParameters>;
}  // namespace Endpoint

namespace AppRegistry {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPREGISTRY_API AppRegistryEndpointProvider : public AppRegistryDefaultEpProviderBase {
 public:
  using AppRegistryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppRegistryEndpointProvider();

  ~AppRegistryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppRegistry
}  // namespace Aws
