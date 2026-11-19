/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/SnowballClientConfiguration.h>
#include <aws/snowball/Snowball_EXPORTS.h>

namespace Aws {
namespace Snowball {
namespace Endpoint {
using SnowballClientConfiguration = Aws::Snowball::SnowballClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SnowballClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SNOWBALL_API SnowballBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SnowballBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SnowballClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SnowballClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SnowballClientConfiguration& config);
};

/**
 * The type for the Snowball Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SnowballEndpointProviderBase =
    EndpointProviderBase<SnowballClientConfiguration, SnowballBuiltInParameters, SnowballClientContextParameters>;

using SnowballDefaultEpProviderBase =
    BDDEndpointProvider<SnowballClientConfiguration, SnowballBuiltInParameters, SnowballClientContextParameters>;

}  // namespace Endpoint
}  // namespace Snowball

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SNOWBALL_EXTERN template class AWS_SNOWBALL_API
    Aws::Endpoint::EndpointProviderBase<Snowball::Endpoint::SnowballClientConfiguration, Snowball::Endpoint::SnowballBuiltInParameters,
                                        Snowball::Endpoint::SnowballClientContextParameters>;

AWS_SNOWBALL_EXTERN template class AWS_SNOWBALL_API
    Aws::Endpoint::BDDEndpointProvider<Snowball::Endpoint::SnowballClientConfiguration, Snowball::Endpoint::SnowballBuiltInParameters,
                                       Snowball::Endpoint::SnowballClientContextParameters>;
}  // namespace Endpoint

namespace Snowball {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SNOWBALL_API SnowballEndpointProvider : public SnowballDefaultEpProviderBase {
 public:
  using SnowballResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SnowballEndpointProvider();

  ~SnowballEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Snowball
}  // namespace Aws
