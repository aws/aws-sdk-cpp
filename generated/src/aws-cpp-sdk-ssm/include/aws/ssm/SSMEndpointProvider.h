/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSMClientConfiguration.h>
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws {
namespace SSM {
namespace Endpoint {
using SSMClientConfiguration = Aws::SSM::SSMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSM_API SSMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSMClientConfiguration& config);
};

/**
 * The type for the SSM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMEndpointProviderBase = EndpointProviderBase<SSMClientConfiguration, SSMBuiltInParameters, SSMClientContextParameters>;

using SSMDefaultEpProviderBase = BDDEndpointProvider<SSMClientConfiguration, SSMBuiltInParameters, SSMClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSM_EXTERN template class AWS_SSM_API Aws::Endpoint::EndpointProviderBase<
    SSM::Endpoint::SSMClientConfiguration, SSM::Endpoint::SSMBuiltInParameters, SSM::Endpoint::SSMClientContextParameters>;

AWS_SSM_EXTERN template class AWS_SSM_API Aws::Endpoint::BDDEndpointProvider<
    SSM::Endpoint::SSMClientConfiguration, SSM::Endpoint::SSMBuiltInParameters, SSM::Endpoint::SSMClientContextParameters>;
}  // namespace Endpoint

namespace SSM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSM_API SSMEndpointProvider : public SSMDefaultEpProviderBase {
 public:
  using SSMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSMEndpointProvider();

  ~SSMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSM
}  // namespace Aws
