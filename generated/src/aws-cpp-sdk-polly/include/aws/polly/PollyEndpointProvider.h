/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/PollyClientConfiguration.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Endpoint {
using PollyClientConfiguration = Aws::Polly::PollyClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PollyClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_POLLY_API PollyBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PollyBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PollyClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PollyClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PollyClientConfiguration& config);
};

/**
 * The type for the Polly Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PollyEndpointProviderBase = EndpointProviderBase<PollyClientConfiguration, PollyBuiltInParameters, PollyClientContextParameters>;

using PollyDefaultEpProviderBase = BDDEndpointProvider<PollyClientConfiguration, PollyBuiltInParameters, PollyClientContextParameters>;

}  // namespace Endpoint
}  // namespace Polly

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_POLLY_EXTERN template class AWS_POLLY_API Aws::Endpoint::EndpointProviderBase<
    Polly::Endpoint::PollyClientConfiguration, Polly::Endpoint::PollyBuiltInParameters, Polly::Endpoint::PollyClientContextParameters>;

AWS_POLLY_EXTERN template class AWS_POLLY_API Aws::Endpoint::BDDEndpointProvider<
    Polly::Endpoint::PollyClientConfiguration, Polly::Endpoint::PollyBuiltInParameters, Polly::Endpoint::PollyClientContextParameters>;
}  // namespace Endpoint

namespace Polly {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_POLLY_API PollyEndpointProvider : public PollyDefaultEpProviderBase {
 public:
  using PollyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PollyEndpointProvider();

  ~PollyEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Polly
}  // namespace Aws
