/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/MediaStoreClientConfiguration.h>
#include <aws/mediastore/MediaStore_EXPORTS.h>

namespace Aws {
namespace MediaStore {
namespace Endpoint {
using MediaStoreClientConfiguration = Aws::MediaStore::MediaStoreClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIASTORE_API MediaStoreBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaStoreBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaStoreClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaStoreClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaStoreClientConfiguration& config);
};

/**
 * The type for the MediaStore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaStoreEndpointProviderBase =
    EndpointProviderBase<MediaStoreClientConfiguration, MediaStoreBuiltInParameters, MediaStoreClientContextParameters>;

using MediaStoreDefaultEpProviderBase =
    BDDEndpointProvider<MediaStoreClientConfiguration, MediaStoreBuiltInParameters, MediaStoreClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaStore

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIASTORE_EXTERN template class AWS_MEDIASTORE_API Aws::Endpoint::EndpointProviderBase<
    MediaStore::Endpoint::MediaStoreClientConfiguration, MediaStore::Endpoint::MediaStoreBuiltInParameters,
    MediaStore::Endpoint::MediaStoreClientContextParameters>;

AWS_MEDIASTORE_EXTERN template class AWS_MEDIASTORE_API Aws::Endpoint::BDDEndpointProvider<
    MediaStore::Endpoint::MediaStoreClientConfiguration, MediaStore::Endpoint::MediaStoreBuiltInParameters,
    MediaStore::Endpoint::MediaStoreClientContextParameters>;
}  // namespace Endpoint

namespace MediaStore {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIASTORE_API MediaStoreEndpointProvider : public MediaStoreDefaultEpProviderBase {
 public:
  using MediaStoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaStoreEndpointProvider();

  ~MediaStoreEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaStore
}  // namespace Aws
