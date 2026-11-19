/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLiveClientConfiguration.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Endpoint {
using MediaLiveClientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaLiveClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIALIVE_API MediaLiveBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaLiveBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaLiveClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaLiveClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaLiveClientConfiguration& config);
};

/**
 * The type for the MediaLive Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaLiveEndpointProviderBase =
    EndpointProviderBase<MediaLiveClientConfiguration, MediaLiveBuiltInParameters, MediaLiveClientContextParameters>;

using MediaLiveDefaultEpProviderBase =
    BDDEndpointProvider<MediaLiveClientConfiguration, MediaLiveBuiltInParameters, MediaLiveClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaLive

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIALIVE_EXTERN template class AWS_MEDIALIVE_API
    Aws::Endpoint::EndpointProviderBase<MediaLive::Endpoint::MediaLiveClientConfiguration, MediaLive::Endpoint::MediaLiveBuiltInParameters,
                                        MediaLive::Endpoint::MediaLiveClientContextParameters>;

AWS_MEDIALIVE_EXTERN template class AWS_MEDIALIVE_API
    Aws::Endpoint::BDDEndpointProvider<MediaLive::Endpoint::MediaLiveClientConfiguration, MediaLive::Endpoint::MediaLiveBuiltInParameters,
                                       MediaLive::Endpoint::MediaLiveClientContextParameters>;
}  // namespace Endpoint

namespace MediaLive {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIALIVE_API MediaLiveEndpointProvider : public MediaLiveDefaultEpProviderBase {
 public:
  using MediaLiveResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaLiveEndpointProvider();

  ~MediaLiveEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaLive
}  // namespace Aws
