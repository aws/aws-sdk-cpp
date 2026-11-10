/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/SecretsManagerClientConfiguration.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

namespace Aws {
namespace SecretsManager {
namespace Endpoint {
using SecretsManagerClientConfiguration = Aws::SecretsManager::SecretsManagerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SecretsManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SECRETSMANAGER_API SecretsManagerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SecretsManagerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SecretsManagerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SecretsManagerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SecretsManagerClientConfiguration& config);
};

/**
 * The type for the SecretsManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecretsManagerEndpointProviderBase =
    EndpointProviderBase<SecretsManagerClientConfiguration, SecretsManagerBuiltInParameters, SecretsManagerClientContextParameters>;

using SecretsManagerDefaultEpProviderBase =
    BDDEndpointProvider<SecretsManagerClientConfiguration, SecretsManagerBuiltInParameters, SecretsManagerClientContextParameters>;

}  // namespace Endpoint
}  // namespace SecretsManager

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SECRETSMANAGER_EXTERN template class AWS_SECRETSMANAGER_API Aws::Endpoint::EndpointProviderBase<
    SecretsManager::Endpoint::SecretsManagerClientConfiguration, SecretsManager::Endpoint::SecretsManagerBuiltInParameters,
    SecretsManager::Endpoint::SecretsManagerClientContextParameters>;

AWS_SECRETSMANAGER_EXTERN template class AWS_SECRETSMANAGER_API Aws::Endpoint::BDDEndpointProvider<
    SecretsManager::Endpoint::SecretsManagerClientConfiguration, SecretsManager::Endpoint::SecretsManagerBuiltInParameters,
    SecretsManager::Endpoint::SecretsManagerClientContextParameters>;
}  // namespace Endpoint

namespace SecretsManager {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SECRETSMANAGER_API SecretsManagerEndpointProvider : public SecretsManagerDefaultEpProviderBase {
 public:
  using SecretsManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SecretsManagerEndpointProvider();

  ~SecretsManagerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SecretsManager
}  // namespace Aws
