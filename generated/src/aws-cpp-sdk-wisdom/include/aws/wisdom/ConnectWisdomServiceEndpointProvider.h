/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/ConnectWisdomServiceClientConfiguration.h>
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>

namespace Aws {
namespace ConnectWisdomService {
namespace Endpoint {
using ConnectWisdomServiceClientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectWisdomServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTWISDOMSERVICE_API ConnectWisdomServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectWisdomServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectWisdomServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectWisdomServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectWisdomServiceClientConfiguration& config);
};

/**
 * The type for the ConnectWisdomService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectWisdomServiceEndpointProviderBase =
    EndpointProviderBase<ConnectWisdomServiceClientConfiguration, ConnectWisdomServiceBuiltInParameters,
                         ConnectWisdomServiceClientContextParameters>;

using ConnectWisdomServiceDefaultEpProviderBase =
    BDDEndpointProvider<ConnectWisdomServiceClientConfiguration, ConnectWisdomServiceBuiltInParameters,
                        ConnectWisdomServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectWisdomService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTWISDOMSERVICE_EXTERN template class AWS_CONNECTWISDOMSERVICE_API
    Aws::Endpoint::EndpointProviderBase<ConnectWisdomService::Endpoint::ConnectWisdomServiceClientConfiguration,
                                        ConnectWisdomService::Endpoint::ConnectWisdomServiceBuiltInParameters,
                                        ConnectWisdomService::Endpoint::ConnectWisdomServiceClientContextParameters>;

AWS_CONNECTWISDOMSERVICE_EXTERN template class AWS_CONNECTWISDOMSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<ConnectWisdomService::Endpoint::ConnectWisdomServiceClientConfiguration,
                                       ConnectWisdomService::Endpoint::ConnectWisdomServiceBuiltInParameters,
                                       ConnectWisdomService::Endpoint::ConnectWisdomServiceClientContextParameters>;
}  // namespace Endpoint

namespace ConnectWisdomService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTWISDOMSERVICE_API ConnectWisdomServiceEndpointProvider : public ConnectWisdomServiceDefaultEpProviderBase {
 public:
  using ConnectWisdomServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectWisdomServiceEndpointProvider();

  ~ConnectWisdomServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectWisdomService
}  // namespace Aws
