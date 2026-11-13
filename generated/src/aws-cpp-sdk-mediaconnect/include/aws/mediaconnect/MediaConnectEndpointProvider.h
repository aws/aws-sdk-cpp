/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnectClientConfiguration.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Endpoint {
using MediaConnectClientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIACONNECT_API MediaConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaConnectClientConfiguration& config);
};

/**
 * The type for the MediaConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaConnectEndpointProviderBase =
    EndpointProviderBase<MediaConnectClientConfiguration, MediaConnectBuiltInParameters, MediaConnectClientContextParameters>;

using MediaConnectDefaultEpProviderBase =
    BDDEndpointProvider<MediaConnectClientConfiguration, MediaConnectBuiltInParameters, MediaConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaConnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIACONNECT_EXTERN template class AWS_MEDIACONNECT_API Aws::Endpoint::EndpointProviderBase<
    MediaConnect::Endpoint::MediaConnectClientConfiguration, MediaConnect::Endpoint::MediaConnectBuiltInParameters,
    MediaConnect::Endpoint::MediaConnectClientContextParameters>;

AWS_MEDIACONNECT_EXTERN template class AWS_MEDIACONNECT_API Aws::Endpoint::BDDEndpointProvider<
    MediaConnect::Endpoint::MediaConnectClientConfiguration, MediaConnect::Endpoint::MediaConnectBuiltInParameters,
    MediaConnect::Endpoint::MediaConnectClientContextParameters>;
}  // namespace Endpoint

namespace MediaConnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIACONNECT_API MediaConnectEndpointProvider : public MediaConnectDefaultEpProviderBase {
 public:
  using MediaConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaConnectEndpointProvider();

  ~MediaConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaConnect
}  // namespace Aws
