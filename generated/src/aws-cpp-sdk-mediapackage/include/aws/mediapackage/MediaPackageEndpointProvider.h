/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/MediaPackageClientConfiguration.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>

namespace Aws {
namespace MediaPackage {
namespace Endpoint {
using MediaPackageClientConfiguration = Aws::MediaPackage::MediaPackageClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaPackageClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIAPACKAGE_API MediaPackageBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaPackageBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaPackageClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaPackageClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaPackageClientConfiguration& config);
};

/**
 * The type for the MediaPackage Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaPackageEndpointProviderBase =
    EndpointProviderBase<MediaPackageClientConfiguration, MediaPackageBuiltInParameters, MediaPackageClientContextParameters>;

using MediaPackageDefaultEpProviderBase =
    BDDEndpointProvider<MediaPackageClientConfiguration, MediaPackageBuiltInParameters, MediaPackageClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaPackage

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIAPACKAGE_EXTERN template class AWS_MEDIAPACKAGE_API Aws::Endpoint::EndpointProviderBase<
    MediaPackage::Endpoint::MediaPackageClientConfiguration, MediaPackage::Endpoint::MediaPackageBuiltInParameters,
    MediaPackage::Endpoint::MediaPackageClientContextParameters>;

AWS_MEDIAPACKAGE_EXTERN template class AWS_MEDIAPACKAGE_API Aws::Endpoint::BDDEndpointProvider<
    MediaPackage::Endpoint::MediaPackageClientConfiguration, MediaPackage::Endpoint::MediaPackageBuiltInParameters,
    MediaPackage::Endpoint::MediaPackageClientContextParameters>;
}  // namespace Endpoint

namespace MediaPackage {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIAPACKAGE_API MediaPackageEndpointProvider : public MediaPackageDefaultEpProviderBase {
 public:
  using MediaPackageResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaPackageEndpointProvider();

  ~MediaPackageEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaPackage
}  // namespace Aws
