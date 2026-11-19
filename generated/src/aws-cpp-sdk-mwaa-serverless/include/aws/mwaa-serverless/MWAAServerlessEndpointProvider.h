/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerlessClientConfiguration.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
namespace Endpoint {
using MWAAServerlessClientConfiguration = Aws::MWAAServerless::MWAAServerlessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MWAAServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MWAASERVERLESS_API MWAAServerlessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MWAAServerlessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MWAAServerlessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MWAAServerlessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MWAAServerlessClientConfiguration& config);
};

/**
 * The type for the MWAAServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MWAAServerlessEndpointProviderBase =
    EndpointProviderBase<MWAAServerlessClientConfiguration, MWAAServerlessBuiltInParameters, MWAAServerlessClientContextParameters>;

using MWAAServerlessDefaultEpProviderBase =
    BDDEndpointProvider<MWAAServerlessClientConfiguration, MWAAServerlessBuiltInParameters, MWAAServerlessClientContextParameters>;

}  // namespace Endpoint
}  // namespace MWAAServerless

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MWAASERVERLESS_EXTERN template class AWS_MWAASERVERLESS_API Aws::Endpoint::EndpointProviderBase<
    MWAAServerless::Endpoint::MWAAServerlessClientConfiguration, MWAAServerless::Endpoint::MWAAServerlessBuiltInParameters,
    MWAAServerless::Endpoint::MWAAServerlessClientContextParameters>;

AWS_MWAASERVERLESS_EXTERN template class AWS_MWAASERVERLESS_API Aws::Endpoint::BDDEndpointProvider<
    MWAAServerless::Endpoint::MWAAServerlessClientConfiguration, MWAAServerless::Endpoint::MWAAServerlessBuiltInParameters,
    MWAAServerless::Endpoint::MWAAServerlessClientContextParameters>;
}  // namespace Endpoint

namespace MWAAServerless {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MWAASERVERLESS_API MWAAServerlessEndpointProvider : public MWAAServerlessDefaultEpProviderBase {
 public:
  using MWAAServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MWAAServerlessEndpointProvider();

  ~MWAAServerlessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MWAAServerless
}  // namespace Aws
