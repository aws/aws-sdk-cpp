/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/WAFRegionalClientConfiguration.h>
#include <aws/waf-regional/WAFRegional_EXPORTS.h>

namespace Aws {
namespace WAFRegional {
namespace Endpoint {
using WAFRegionalClientConfiguration = Aws::WAFRegional::WAFRegionalClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WAFRegionalClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WAFREGIONAL_API WAFRegionalBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WAFRegionalBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WAFRegionalClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WAFRegionalClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WAFRegionalClientConfiguration& config);
};

/**
 * The type for the WAFRegional Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WAFRegionalEndpointProviderBase =
    EndpointProviderBase<WAFRegionalClientConfiguration, WAFRegionalBuiltInParameters, WAFRegionalClientContextParameters>;

using WAFRegionalDefaultEpProviderBase =
    BDDEndpointProvider<WAFRegionalClientConfiguration, WAFRegionalBuiltInParameters, WAFRegionalClientContextParameters>;

}  // namespace Endpoint
}  // namespace WAFRegional

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WAFREGIONAL_EXTERN template class AWS_WAFREGIONAL_API Aws::Endpoint::EndpointProviderBase<
    WAFRegional::Endpoint::WAFRegionalClientConfiguration, WAFRegional::Endpoint::WAFRegionalBuiltInParameters,
    WAFRegional::Endpoint::WAFRegionalClientContextParameters>;

AWS_WAFREGIONAL_EXTERN template class AWS_WAFREGIONAL_API Aws::Endpoint::BDDEndpointProvider<
    WAFRegional::Endpoint::WAFRegionalClientConfiguration, WAFRegional::Endpoint::WAFRegionalBuiltInParameters,
    WAFRegional::Endpoint::WAFRegionalClientContextParameters>;
}  // namespace Endpoint

namespace WAFRegional {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WAFREGIONAL_API WAFRegionalEndpointProvider : public WAFRegionalDefaultEpProviderBase {
 public:
  using WAFRegionalResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WAFRegionalEndpointProvider();

  ~WAFRegionalEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WAFRegional
}  // namespace Aws
