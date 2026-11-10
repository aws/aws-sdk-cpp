/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simpledbv2/SimpleDBv2ClientConfiguration.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

namespace Aws {
namespace SimpleDBv2 {
namespace Endpoint {
using SimpleDBv2ClientConfiguration = Aws::SimpleDBv2::SimpleDBv2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SimpleDBv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SIMPLEDBV2_API SimpleDBv2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SimpleDBv2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SimpleDBv2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SimpleDBv2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SimpleDBv2ClientConfiguration& config);
};

/**
 * The type for the SimpleDBv2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SimpleDBv2EndpointProviderBase =
    EndpointProviderBase<SimpleDBv2ClientConfiguration, SimpleDBv2BuiltInParameters, SimpleDBv2ClientContextParameters>;

using SimpleDBv2DefaultEpProviderBase =
    BDDEndpointProvider<SimpleDBv2ClientConfiguration, SimpleDBv2BuiltInParameters, SimpleDBv2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace SimpleDBv2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SIMPLEDBV2_EXTERN template class AWS_SIMPLEDBV2_API Aws::Endpoint::EndpointProviderBase<
    SimpleDBv2::Endpoint::SimpleDBv2ClientConfiguration, SimpleDBv2::Endpoint::SimpleDBv2BuiltInParameters,
    SimpleDBv2::Endpoint::SimpleDBv2ClientContextParameters>;

AWS_SIMPLEDBV2_EXTERN template class AWS_SIMPLEDBV2_API Aws::Endpoint::BDDEndpointProvider<
    SimpleDBv2::Endpoint::SimpleDBv2ClientConfiguration, SimpleDBv2::Endpoint::SimpleDBv2BuiltInParameters,
    SimpleDBv2::Endpoint::SimpleDBv2ClientContextParameters>;
}  // namespace Endpoint

namespace SimpleDBv2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SIMPLEDBV2_API SimpleDBv2EndpointProvider : public SimpleDBv2DefaultEpProviderBase {
 public:
  using SimpleDBv2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SimpleDBv2EndpointProvider();

  ~SimpleDBv2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SimpleDBv2
}  // namespace Aws
