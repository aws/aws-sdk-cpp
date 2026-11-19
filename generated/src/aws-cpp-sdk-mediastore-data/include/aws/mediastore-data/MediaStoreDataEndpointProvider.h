/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore-data/MediaStoreDataClientConfiguration.h>
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>

namespace Aws {
namespace MediaStoreData {
namespace Endpoint {
using MediaStoreDataClientConfiguration = Aws::MediaStoreData::MediaStoreDataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MediaStoreDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDIASTOREDATA_API MediaStoreDataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MediaStoreDataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MediaStoreDataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MediaStoreDataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MediaStoreDataClientConfiguration& config);
};

/**
 * The type for the MediaStoreData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaStoreDataEndpointProviderBase =
    EndpointProviderBase<MediaStoreDataClientConfiguration, MediaStoreDataBuiltInParameters, MediaStoreDataClientContextParameters>;

using MediaStoreDataDefaultEpProviderBase =
    BDDEndpointProvider<MediaStoreDataClientConfiguration, MediaStoreDataBuiltInParameters, MediaStoreDataClientContextParameters>;

}  // namespace Endpoint
}  // namespace MediaStoreData

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDIASTOREDATA_EXTERN template class AWS_MEDIASTOREDATA_API Aws::Endpoint::EndpointProviderBase<
    MediaStoreData::Endpoint::MediaStoreDataClientConfiguration, MediaStoreData::Endpoint::MediaStoreDataBuiltInParameters,
    MediaStoreData::Endpoint::MediaStoreDataClientContextParameters>;

AWS_MEDIASTOREDATA_EXTERN template class AWS_MEDIASTOREDATA_API Aws::Endpoint::BDDEndpointProvider<
    MediaStoreData::Endpoint::MediaStoreDataClientConfiguration, MediaStoreData::Endpoint::MediaStoreDataBuiltInParameters,
    MediaStoreData::Endpoint::MediaStoreDataClientContextParameters>;
}  // namespace Endpoint

namespace MediaStoreData {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIASTOREDATA_API MediaStoreDataEndpointProvider : public MediaStoreDataDefaultEpProviderBase {
 public:
  using MediaStoreDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MediaStoreDataEndpointProvider();

  ~MediaStoreDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MediaStoreData
}  // namespace Aws
