/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhub-config/MigrationHubConfigClientConfiguration.h>
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>

namespace Aws {
namespace MigrationHubConfig {
namespace Endpoint {
using MigrationHubConfigClientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MigrationHubConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MIGRATIONHUBCONFIG_API MigrationHubConfigBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MigrationHubConfigBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MigrationHubConfigClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MigrationHubConfigClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MigrationHubConfigClientConfiguration& config);
};

/**
 * The type for the MigrationHubConfig Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubConfigEndpointProviderBase =
    EndpointProviderBase<MigrationHubConfigClientConfiguration, MigrationHubConfigBuiltInParameters,
                         MigrationHubConfigClientContextParameters>;

using MigrationHubConfigDefaultEpProviderBase =
    BDDEndpointProvider<MigrationHubConfigClientConfiguration, MigrationHubConfigBuiltInParameters,
                        MigrationHubConfigClientContextParameters>;

}  // namespace Endpoint
}  // namespace MigrationHubConfig

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MIGRATIONHUBCONFIG_EXTERN template class AWS_MIGRATIONHUBCONFIG_API Aws::Endpoint::EndpointProviderBase<
    MigrationHubConfig::Endpoint::MigrationHubConfigClientConfiguration, MigrationHubConfig::Endpoint::MigrationHubConfigBuiltInParameters,
    MigrationHubConfig::Endpoint::MigrationHubConfigClientContextParameters>;

AWS_MIGRATIONHUBCONFIG_EXTERN template class AWS_MIGRATIONHUBCONFIG_API Aws::Endpoint::BDDEndpointProvider<
    MigrationHubConfig::Endpoint::MigrationHubConfigClientConfiguration, MigrationHubConfig::Endpoint::MigrationHubConfigBuiltInParameters,
    MigrationHubConfig::Endpoint::MigrationHubConfigClientContextParameters>;
}  // namespace Endpoint

namespace MigrationHubConfig {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBCONFIG_API MigrationHubConfigEndpointProvider : public MigrationHubConfigDefaultEpProviderBase {
 public:
  using MigrationHubConfigResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MigrationHubConfigEndpointProvider();

  ~MigrationHubConfigEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MigrationHubConfig
}  // namespace Aws
