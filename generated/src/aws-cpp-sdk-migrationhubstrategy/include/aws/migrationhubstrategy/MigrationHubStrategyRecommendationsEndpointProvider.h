/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClientConfiguration.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Endpoint {
using MigrationHubStrategyRecommendationsClientConfiguration =
    Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MigrationHubStrategyRecommendationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API MigrationHubStrategyRecommendationsBuiltInParameters
    : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MigrationHubStrategyRecommendationsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MigrationHubStrategyRecommendationsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MigrationHubStrategyRecommendationsClientConfiguration& config,
                                          const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MigrationHubStrategyRecommendationsClientConfiguration& config);
};

/**
 * The type for the MigrationHubStrategyRecommendations Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubStrategyRecommendationsEndpointProviderBase =
    EndpointProviderBase<MigrationHubStrategyRecommendationsClientConfiguration, MigrationHubStrategyRecommendationsBuiltInParameters,
                         MigrationHubStrategyRecommendationsClientContextParameters>;

using MigrationHubStrategyRecommendationsDefaultEpProviderBase =
    BDDEndpointProvider<MigrationHubStrategyRecommendationsClientConfiguration, MigrationHubStrategyRecommendationsBuiltInParameters,
                        MigrationHubStrategyRecommendationsClientContextParameters>;

}  // namespace Endpoint
}  // namespace MigrationHubStrategyRecommendations

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_EXTERN template class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Endpoint::
    EndpointProviderBase<MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientConfiguration,
                         MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsBuiltInParameters,
                         MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientContextParameters>;

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_EXTERN template class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Endpoint::
    BDDEndpointProvider<MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientConfiguration,
                        MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsBuiltInParameters,
                        MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsClientContextParameters>;
}  // namespace Endpoint

namespace MigrationHubStrategyRecommendations {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API MigrationHubStrategyRecommendationsEndpointProvider
    : public MigrationHubStrategyRecommendationsDefaultEpProviderBase {
 public:
  using MigrationHubStrategyRecommendationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MigrationHubStrategyRecommendationsEndpointProvider();

  ~MigrationHubStrategyRecommendationsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
