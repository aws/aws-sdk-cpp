/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClientConfiguration.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>

namespace Aws {
namespace MigrationHubOrchestrator {
namespace Endpoint {
using MigrationHubOrchestratorClientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MigrationHubOrchestratorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MIGRATIONHUBORCHESTRATOR_API MigrationHubOrchestratorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MigrationHubOrchestratorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MigrationHubOrchestratorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MigrationHubOrchestratorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MigrationHubOrchestratorClientConfiguration& config);
};

/**
 * The type for the MigrationHubOrchestrator Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubOrchestratorEndpointProviderBase =
    EndpointProviderBase<MigrationHubOrchestratorClientConfiguration, MigrationHubOrchestratorBuiltInParameters,
                         MigrationHubOrchestratorClientContextParameters>;

using MigrationHubOrchestratorDefaultEpProviderBase =
    BDDEndpointProvider<MigrationHubOrchestratorClientConfiguration, MigrationHubOrchestratorBuiltInParameters,
                        MigrationHubOrchestratorClientContextParameters>;

}  // namespace Endpoint
}  // namespace MigrationHubOrchestrator

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MIGRATIONHUBORCHESTRATOR_EXTERN template class AWS_MIGRATIONHUBORCHESTRATOR_API
    Aws::Endpoint::EndpointProviderBase<MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientConfiguration,
                                        MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorBuiltInParameters,
                                        MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientContextParameters>;

AWS_MIGRATIONHUBORCHESTRATOR_EXTERN template class AWS_MIGRATIONHUBORCHESTRATOR_API
    Aws::Endpoint::BDDEndpointProvider<MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientConfiguration,
                                       MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorBuiltInParameters,
                                       MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorClientContextParameters>;
}  // namespace Endpoint

namespace MigrationHubOrchestrator {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBORCHESTRATOR_API MigrationHubOrchestratorEndpointProvider : public MigrationHubOrchestratorDefaultEpProviderBase {
 public:
  using MigrationHubOrchestratorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MigrationHubOrchestratorEndpointProvider();

  ~MigrationHubOrchestratorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
