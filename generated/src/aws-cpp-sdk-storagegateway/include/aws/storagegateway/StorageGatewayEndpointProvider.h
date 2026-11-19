/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/StorageGatewayClientConfiguration.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>

namespace Aws {
namespace StorageGateway {
namespace Endpoint {
using StorageGatewayClientConfiguration = Aws::StorageGateway::StorageGatewayClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using StorageGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_STORAGEGATEWAY_API StorageGatewayBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~StorageGatewayBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const StorageGatewayClientConfiguration& config);
  virtual void SetFromClientConfiguration(const StorageGatewayClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const StorageGatewayClientConfiguration& config);
};

/**
 * The type for the StorageGateway Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using StorageGatewayEndpointProviderBase =
    EndpointProviderBase<StorageGatewayClientConfiguration, StorageGatewayBuiltInParameters, StorageGatewayClientContextParameters>;

using StorageGatewayDefaultEpProviderBase =
    BDDEndpointProvider<StorageGatewayClientConfiguration, StorageGatewayBuiltInParameters, StorageGatewayClientContextParameters>;

}  // namespace Endpoint
}  // namespace StorageGateway

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_STORAGEGATEWAY_EXTERN template class AWS_STORAGEGATEWAY_API Aws::Endpoint::EndpointProviderBase<
    StorageGateway::Endpoint::StorageGatewayClientConfiguration, StorageGateway::Endpoint::StorageGatewayBuiltInParameters,
    StorageGateway::Endpoint::StorageGatewayClientContextParameters>;

AWS_STORAGEGATEWAY_EXTERN template class AWS_STORAGEGATEWAY_API Aws::Endpoint::BDDEndpointProvider<
    StorageGateway::Endpoint::StorageGatewayClientConfiguration, StorageGateway::Endpoint::StorageGatewayBuiltInParameters,
    StorageGateway::Endpoint::StorageGatewayClientContextParameters>;
}  // namespace Endpoint

namespace StorageGateway {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_STORAGEGATEWAY_API StorageGatewayEndpointProvider : public StorageGatewayDefaultEpProviderBase {
 public:
  using StorageGatewayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  StorageGatewayEndpointProvider();

  ~StorageGatewayEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace StorageGateway
}  // namespace Aws
