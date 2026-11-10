/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/MediaTailorClientConfiguration.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Endpoint {
using MediaTailorClientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaTailorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIATAILOR_API MediaTailorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaTailorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaTailorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaTailorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaTailorClientConfiguration& config);
};

/**
 * The type for the MediaTailor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaTailorEndpointProviderBase =
    EndpointProviderBase<MediaTailorClientConfiguration, MediaTailorBuiltInParameters, MediaTailorClientContextParameters>;

using MediaTailorDefaultEpProviderBase =
    BDDEndpointProvider<MediaTailorClientConfiguration, MediaTailorBuiltInParameters, MediaTailorClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaTailor

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIATAILOR_EXTERN template class AWS_MEDIATAILOR_API Aws::Endpoint::EndpointProviderBase<
    MediaTailor::Endpoint::MediaTailorClientConfiguration, MediaTailor::Endpoint::MediaTailorBuiltInParameters,
    MediaTailor::Endpoint::MediaTailorClientContextParameters>;

AWS_MEDIATAILOR_EXTERN template class AWS_MEDIATAILOR_API Aws::Endpoint::BDDEndpointProvider<
    MediaTailor::Endpoint::MediaTailorClientConfiguration, MediaTailor::Endpoint::MediaTailorBuiltInParameters,
    MediaTailor::Endpoint::MediaTailorClientContextParameters>;
}  // namespace Endpoint

namespace MediaTailor {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIATAILOR_API MediaTailorEndpointProvider : public MediaTailorDefaultEpProviderBase {
 public:
  using MediaTailorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaTailorEndpointProvider();

  ~MediaTailorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaTailor
}  // namespace Aws
