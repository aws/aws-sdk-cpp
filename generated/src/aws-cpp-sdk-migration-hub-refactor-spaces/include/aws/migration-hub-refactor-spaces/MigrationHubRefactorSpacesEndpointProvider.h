/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClientConfiguration.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>

namespace Aws {
namespace MigrationHubRefactorSpaces {
namespace Endpoint {
using MigrationHubRefactorSpacesClientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MigrationHubRefactorSpacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MIGRATIONHUBREFACTORSPACES_API MigrationHubRefactorSpacesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MigrationHubRefactorSpacesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MigrationHubRefactorSpacesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MigrationHubRefactorSpacesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MigrationHubRefactorSpacesClientConfiguration& config);
};

/**
 * The type for the MigrationHubRefactorSpaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubRefactorSpacesEndpointProviderBase =
    EndpointProviderBase<MigrationHubRefactorSpacesClientConfiguration, MigrationHubRefactorSpacesBuiltInParameters,
                         MigrationHubRefactorSpacesClientContextParameters>;

using MigrationHubRefactorSpacesDefaultEpProviderBase =
    BDDEndpointProvider<MigrationHubRefactorSpacesClientConfiguration, MigrationHubRefactorSpacesBuiltInParameters,
                        MigrationHubRefactorSpacesClientContextParameters>;

}  // namespace Endpoint
}  // namespace MigrationHubRefactorSpaces

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MIGRATIONHUBREFACTORSPACES_EXTERN template class AWS_MIGRATIONHUBREFACTORSPACES_API
    Aws::Endpoint::EndpointProviderBase<MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientConfiguration,
                                        MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesBuiltInParameters,
                                        MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientContextParameters>;

AWS_MIGRATIONHUBREFACTORSPACES_EXTERN template class AWS_MIGRATIONHUBREFACTORSPACES_API
    Aws::Endpoint::BDDEndpointProvider<MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientConfiguration,
                                       MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesBuiltInParameters,
                                       MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesClientContextParameters>;
}  // namespace Endpoint

namespace MigrationHubRefactorSpaces {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBREFACTORSPACES_API MigrationHubRefactorSpacesEndpointProvider
    : public MigrationHubRefactorSpacesDefaultEpProviderBase {
 public:
  using MigrationHubRefactorSpacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MigrationHubRefactorSpacesEndpointProvider();

  ~MigrationHubRefactorSpacesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
