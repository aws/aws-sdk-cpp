/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/SecurityLakeClientConfiguration.h>
#include <aws/securitylake/SecurityLake_EXPORTS.h>

namespace Aws {
namespace SecurityLake {
namespace Endpoint {
using SecurityLakeClientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SecurityLakeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SECURITYLAKE_API SecurityLakeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SecurityLakeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SecurityLakeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SecurityLakeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SecurityLakeClientConfiguration& config);
};

/**
 * The type for the SecurityLake Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityLakeEndpointProviderBase =
    EndpointProviderBase<SecurityLakeClientConfiguration, SecurityLakeBuiltInParameters, SecurityLakeClientContextParameters>;

using SecurityLakeDefaultEpProviderBase =
    BDDEndpointProvider<SecurityLakeClientConfiguration, SecurityLakeBuiltInParameters, SecurityLakeClientContextParameters>;

}  // namespace Endpoint
}  // namespace SecurityLake

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SECURITYLAKE_EXTERN template class AWS_SECURITYLAKE_API Aws::Endpoint::EndpointProviderBase<
    SecurityLake::Endpoint::SecurityLakeClientConfiguration, SecurityLake::Endpoint::SecurityLakeBuiltInParameters,
    SecurityLake::Endpoint::SecurityLakeClientContextParameters>;

AWS_SECURITYLAKE_EXTERN template class AWS_SECURITYLAKE_API Aws::Endpoint::BDDEndpointProvider<
    SecurityLake::Endpoint::SecurityLakeClientConfiguration, SecurityLake::Endpoint::SecurityLakeBuiltInParameters,
    SecurityLake::Endpoint::SecurityLakeClientContextParameters>;
}  // namespace Endpoint

namespace SecurityLake {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYLAKE_API SecurityLakeEndpointProvider : public SecurityLakeDefaultEpProviderBase {
 public:
  using SecurityLakeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SecurityLakeEndpointProvider();

  ~SecurityLakeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SecurityLake
}  // namespace Aws
