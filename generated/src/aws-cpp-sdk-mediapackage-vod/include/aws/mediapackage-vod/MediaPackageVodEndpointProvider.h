/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/MediaPackageVodClientConfiguration.h>
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>

namespace Aws {
namespace MediaPackageVod {
namespace Endpoint {
using MediaPackageVodClientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaPackageVodClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIAPACKAGEVOD_API MediaPackageVodBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaPackageVodBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaPackageVodClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaPackageVodClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaPackageVodClientConfiguration& config);
};

/**
 * The type for the MediaPackageVod Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaPackageVodEndpointProviderBase =
    EndpointProviderBase<MediaPackageVodClientConfiguration, MediaPackageVodBuiltInParameters, MediaPackageVodClientContextParameters>;

using MediaPackageVodDefaultEpProviderBase =
    BDDEndpointProvider<MediaPackageVodClientConfiguration, MediaPackageVodBuiltInParameters, MediaPackageVodClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaPackageVod

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIAPACKAGEVOD_EXTERN template class AWS_MEDIAPACKAGEVOD_API Aws::Endpoint::EndpointProviderBase<
    MediaPackageVod::Endpoint::MediaPackageVodClientConfiguration, MediaPackageVod::Endpoint::MediaPackageVodBuiltInParameters,
    MediaPackageVod::Endpoint::MediaPackageVodClientContextParameters>;

AWS_MEDIAPACKAGEVOD_EXTERN template class AWS_MEDIAPACKAGEVOD_API Aws::Endpoint::BDDEndpointProvider<
    MediaPackageVod::Endpoint::MediaPackageVodClientConfiguration, MediaPackageVod::Endpoint::MediaPackageVodBuiltInParameters,
    MediaPackageVod::Endpoint::MediaPackageVodClientContextParameters>;
}  // namespace Endpoint

namespace MediaPackageVod {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIAPACKAGEVOD_API MediaPackageVodEndpointProvider : public MediaPackageVodDefaultEpProviderBase {
 public:
  using MediaPackageVodResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaPackageVodEndpointProvider();

  ~MediaPackageVodEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaPackageVod
}  // namespace Aws
