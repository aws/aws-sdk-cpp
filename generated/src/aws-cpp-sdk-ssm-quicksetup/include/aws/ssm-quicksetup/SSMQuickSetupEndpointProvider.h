/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-quicksetup/SSMQuickSetupClientConfiguration.h>
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>

namespace Aws {
namespace SSMQuickSetup {
namespace Endpoint {
using SSMQuickSetupClientConfiguration = Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSMQuickSetupClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSMQUICKSETUP_API SSMQuickSetupBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSMQuickSetupBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSMQuickSetupClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSMQuickSetupClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSMQuickSetupClientConfiguration& config);
};

/**
 * The type for the SSMQuickSetup Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMQuickSetupEndpointProviderBase =
    EndpointProviderBase<SSMQuickSetupClientConfiguration, SSMQuickSetupBuiltInParameters, SSMQuickSetupClientContextParameters>;

using SSMQuickSetupDefaultEpProviderBase =
    BDDEndpointProvider<SSMQuickSetupClientConfiguration, SSMQuickSetupBuiltInParameters, SSMQuickSetupClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSMQuickSetup

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSMQUICKSETUP_EXTERN template class AWS_SSMQUICKSETUP_API Aws::Endpoint::EndpointProviderBase<
    SSMQuickSetup::Endpoint::SSMQuickSetupClientConfiguration, SSMQuickSetup::Endpoint::SSMQuickSetupBuiltInParameters,
    SSMQuickSetup::Endpoint::SSMQuickSetupClientContextParameters>;

AWS_SSMQUICKSETUP_EXTERN template class AWS_SSMQUICKSETUP_API Aws::Endpoint::BDDEndpointProvider<
    SSMQuickSetup::Endpoint::SSMQuickSetupClientConfiguration, SSMQuickSetup::Endpoint::SSMQuickSetupBuiltInParameters,
    SSMQuickSetup::Endpoint::SSMQuickSetupClientContextParameters>;
}  // namespace Endpoint

namespace SSMQuickSetup {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSMQUICKSETUP_API SSMQuickSetupEndpointProvider : public SSMQuickSetupDefaultEpProviderBase {
 public:
  using SSMQuickSetupResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSMQuickSetupEndpointProvider();

  ~SSMQuickSetupEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSMQuickSetup
}  // namespace Aws
