/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3FilesClientConfiguration.h>
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace S3Files {
namespace Endpoint {
using S3FilesClientConfiguration = Aws::S3Files::S3FilesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using S3FilesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_S3FILES_API S3FilesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~S3FilesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const S3FilesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const S3FilesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const S3FilesClientConfiguration& config);
};

/**
 * The type for the S3Files Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3FilesEndpointProviderBase =
    EndpointProviderBase<S3FilesClientConfiguration, S3FilesBuiltInParameters, S3FilesClientContextParameters>;

using S3FilesDefaultEpProviderBase =
    BDDEndpointProvider<S3FilesClientConfiguration, S3FilesBuiltInParameters, S3FilesClientContextParameters>;

}  // namespace Endpoint
}  // namespace S3Files

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_S3FILES_EXTERN template class AWS_S3FILES_API
    Aws::Endpoint::EndpointProviderBase<S3Files::Endpoint::S3FilesClientConfiguration, S3Files::Endpoint::S3FilesBuiltInParameters,
                                        S3Files::Endpoint::S3FilesClientContextParameters>;

AWS_S3FILES_EXTERN template class AWS_S3FILES_API
    Aws::Endpoint::BDDEndpointProvider<S3Files::Endpoint::S3FilesClientConfiguration, S3Files::Endpoint::S3FilesBuiltInParameters,
                                       S3Files::Endpoint::S3FilesClientContextParameters>;
}  // namespace Endpoint

namespace S3Files {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_S3FILES_API S3FilesEndpointProvider : public S3FilesDefaultEpProviderBase {
 public:
  using S3FilesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  S3FilesEndpointProvider();

  ~S3FilesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace S3Files
}  // namespace Aws
