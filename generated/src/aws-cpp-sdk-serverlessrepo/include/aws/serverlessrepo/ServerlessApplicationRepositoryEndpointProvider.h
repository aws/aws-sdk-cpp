/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryClientConfiguration.h>
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>

namespace Aws {
namespace ServerlessApplicationRepository {
namespace Endpoint {
using ServerlessApplicationRepositoryClientConfiguration =
    Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ServerlessApplicationRepositoryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ServerlessApplicationRepositoryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ServerlessApplicationRepositoryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ServerlessApplicationRepositoryClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ServerlessApplicationRepositoryClientConfiguration& config);
};

/**
 * The type for the ServerlessApplicationRepository Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServerlessApplicationRepositoryEndpointProviderBase =
    EndpointProviderBase<ServerlessApplicationRepositoryClientConfiguration, ServerlessApplicationRepositoryBuiltInParameters,
                         ServerlessApplicationRepositoryClientContextParameters>;

using ServerlessApplicationRepositoryDefaultEpProviderBase =
    BDDEndpointProvider<ServerlessApplicationRepositoryClientConfiguration, ServerlessApplicationRepositoryBuiltInParameters,
                        ServerlessApplicationRepositoryClientContextParameters>;

}  // namespace Endpoint
}  // namespace ServerlessApplicationRepository

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SERVERLESSAPPLICATIONREPOSITORY_EXTERN template class AWS_SERVERLESSAPPLICATIONREPOSITORY_API
    Aws::Endpoint::EndpointProviderBase<ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientConfiguration,
                                        ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryBuiltInParameters,
                                        ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientContextParameters>;

AWS_SERVERLESSAPPLICATIONREPOSITORY_EXTERN template class AWS_SERVERLESSAPPLICATIONREPOSITORY_API
    Aws::Endpoint::BDDEndpointProvider<ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientConfiguration,
                                       ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryBuiltInParameters,
                                       ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryClientContextParameters>;
}  // namespace Endpoint

namespace ServerlessApplicationRepository {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryEndpointProvider
    : public ServerlessApplicationRepositoryDefaultEpProviderBase {
 public:
  using ServerlessApplicationRepositoryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ServerlessApplicationRepositoryEndpointProvider();

  ~ServerlessApplicationRepositoryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ServerlessApplicationRepository
}  // namespace Aws
