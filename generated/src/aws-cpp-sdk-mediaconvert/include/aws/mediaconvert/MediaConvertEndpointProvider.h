/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/MediaConvertClientConfiguration.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Endpoint {
using MediaConvertClientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaConvertClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIACONVERT_API MediaConvertBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaConvertBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaConvertClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaConvertClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaConvertClientConfiguration& config);
};

/**
 * The type for the MediaConvert Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaConvertEndpointProviderBase =
    EndpointProviderBase<MediaConvertClientConfiguration, MediaConvertBuiltInParameters, MediaConvertClientContextParameters>;

using MediaConvertDefaultEpProviderBase =
    BDDEndpointProvider<MediaConvertClientConfiguration, MediaConvertBuiltInParameters, MediaConvertClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaConvert

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIACONVERT_EXTERN template class AWS_MEDIACONVERT_API Aws::Endpoint::EndpointProviderBase<
    MediaConvert::Endpoint::MediaConvertClientConfiguration, MediaConvert::Endpoint::MediaConvertBuiltInParameters,
    MediaConvert::Endpoint::MediaConvertClientContextParameters>;

AWS_MEDIACONVERT_EXTERN template class AWS_MEDIACONVERT_API Aws::Endpoint::BDDEndpointProvider<
    MediaConvert::Endpoint::MediaConvertClientConfiguration, MediaConvert::Endpoint::MediaConvertBuiltInParameters,
    MediaConvert::Endpoint::MediaConvertClientContextParameters>;
}  // namespace Endpoint

namespace MediaConvert {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIACONVERT_API MediaConvertEndpointProvider : public MediaConvertDefaultEpProviderBase {
 public:
  using MediaConvertResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaConvertEndpointProvider();

  ~MediaConvertEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaConvert
}  // namespace Aws
