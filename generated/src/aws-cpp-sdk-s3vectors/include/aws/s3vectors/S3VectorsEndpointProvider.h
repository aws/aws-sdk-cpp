/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/S3VectorsClientConfiguration.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>

namespace Aws {
namespace S3Vectors {
namespace Endpoint {
using S3VectorsClientConfiguration = Aws::S3Vectors::S3VectorsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using S3VectorsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_S3VECTORS_API S3VectorsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~S3VectorsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const S3VectorsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const S3VectorsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const S3VectorsClientConfiguration& config);
};

/**
 * The type for the S3Vectors Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3VectorsEndpointProviderBase =
    EndpointProviderBase<S3VectorsClientConfiguration, S3VectorsBuiltInParameters, S3VectorsClientContextParameters>;

using S3VectorsDefaultEpProviderBase =
    BDDEndpointProvider<S3VectorsClientConfiguration, S3VectorsBuiltInParameters, S3VectorsClientContextParameters>;

}  // namespace Endpoint
}  // namespace S3Vectors

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_S3VECTORS_EXTERN template class AWS_S3VECTORS_API
    Aws::Endpoint::EndpointProviderBase<S3Vectors::Endpoint::S3VectorsClientConfiguration, S3Vectors::Endpoint::S3VectorsBuiltInParameters,
                                        S3Vectors::Endpoint::S3VectorsClientContextParameters>;

AWS_S3VECTORS_EXTERN template class AWS_S3VECTORS_API
    Aws::Endpoint::BDDEndpointProvider<S3Vectors::Endpoint::S3VectorsClientConfiguration, S3Vectors::Endpoint::S3VectorsBuiltInParameters,
                                       S3Vectors::Endpoint::S3VectorsClientContextParameters>;
}  // namespace Endpoint

namespace S3Vectors {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_S3VECTORS_API S3VectorsEndpointProvider : public S3VectorsDefaultEpProviderBase {
 public:
  using S3VectorsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  S3VectorsEndpointProvider();

  ~S3VectorsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace S3Vectors
}  // namespace Aws
