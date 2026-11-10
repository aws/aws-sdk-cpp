/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/Mediapackagev2ClientConfiguration.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Endpoint {
using Mediapackagev2ClientConfiguration = Aws::mediapackagev2::Mediapackagev2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Mediapackagev2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIAPACKAGEV2_API Mediapackagev2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Mediapackagev2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Mediapackagev2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Mediapackagev2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Mediapackagev2ClientConfiguration& config);
};

/**
 * The type for the mediapackagev2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Mediapackagev2EndpointProviderBase =
    EndpointProviderBase<Mediapackagev2ClientConfiguration, Mediapackagev2BuiltInParameters, Mediapackagev2ClientContextParameters>;

using Mediapackagev2DefaultEpProviderBase =
    BDDEndpointProvider<Mediapackagev2ClientConfiguration, Mediapackagev2BuiltInParameters, Mediapackagev2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace mediapackagev2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIAPACKAGEV2_EXTERN template class AWS_MEDIAPACKAGEV2_API Aws::Endpoint::EndpointProviderBase<
    mediapackagev2::Endpoint::Mediapackagev2ClientConfiguration, mediapackagev2::Endpoint::Mediapackagev2BuiltInParameters,
    mediapackagev2::Endpoint::Mediapackagev2ClientContextParameters>;

AWS_MEDIAPACKAGEV2_EXTERN template class AWS_MEDIAPACKAGEV2_API Aws::Endpoint::BDDEndpointProvider<
    mediapackagev2::Endpoint::Mediapackagev2ClientConfiguration, mediapackagev2::Endpoint::Mediapackagev2BuiltInParameters,
    mediapackagev2::Endpoint::Mediapackagev2ClientContextParameters>;
}  // namespace Endpoint

namespace mediapackagev2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIAPACKAGEV2_API Mediapackagev2EndpointProvider : public Mediapackagev2DefaultEpProviderBase {
 public:
  using Mediapackagev2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Mediapackagev2EndpointProvider();

  ~Mediapackagev2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace mediapackagev2
}  // namespace Aws
