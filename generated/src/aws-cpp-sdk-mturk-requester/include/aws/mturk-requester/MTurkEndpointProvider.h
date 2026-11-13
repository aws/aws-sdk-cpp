/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/MTurkClientConfiguration.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>

namespace Aws {
namespace MTurk {
namespace Endpoint {
using MTurkClientConfiguration = Aws::MTurk::MTurkClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MTurkClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MTURK_API MTurkBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MTurkBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MTurkClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MTurkClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MTurkClientConfiguration& config);
};

/**
 * The type for the MTurk Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MTurkEndpointProviderBase = EndpointProviderBase<MTurkClientConfiguration, MTurkBuiltInParameters, MTurkClientContextParameters>;

using MTurkDefaultEpProviderBase = BDDEndpointProvider<MTurkClientConfiguration, MTurkBuiltInParameters, MTurkClientContextParameters>;

}  // namespace Endpoint
}  // namespace MTurk

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MTURK_EXTERN template class AWS_MTURK_API Aws::Endpoint::EndpointProviderBase<
    MTurk::Endpoint::MTurkClientConfiguration, MTurk::Endpoint::MTurkBuiltInParameters, MTurk::Endpoint::MTurkClientContextParameters>;

AWS_MTURK_EXTERN template class AWS_MTURK_API Aws::Endpoint::BDDEndpointProvider<
    MTurk::Endpoint::MTurkClientConfiguration, MTurk::Endpoint::MTurkBuiltInParameters, MTurk::Endpoint::MTurkClientContextParameters>;
}  // namespace Endpoint

namespace MTurk {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MTURK_API MTurkEndpointProvider : public MTurkDefaultEpProviderBase {
 public:
  using MTurkResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MTurkEndpointProvider();

  ~MTurkEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MTurk
}  // namespace Aws
