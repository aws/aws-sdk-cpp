/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3outposts/S3OutpostsClientConfiguration.h>
#include <aws/s3outposts/S3Outposts_EXPORTS.h>

namespace Aws {
namespace S3Outposts {
namespace Endpoint {
using S3OutpostsClientConfiguration = Aws::S3Outposts::S3OutpostsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using S3OutpostsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_S3OUTPOSTS_API S3OutpostsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~S3OutpostsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const S3OutpostsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const S3OutpostsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const S3OutpostsClientConfiguration& config);
};

/**
 * The type for the S3Outposts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3OutpostsEndpointProviderBase =
    EndpointProviderBase<S3OutpostsClientConfiguration, S3OutpostsBuiltInParameters, S3OutpostsClientContextParameters>;

using S3OutpostsDefaultEpProviderBase =
    BDDEndpointProvider<S3OutpostsClientConfiguration, S3OutpostsBuiltInParameters, S3OutpostsClientContextParameters>;

}  // namespace Endpoint
}  // namespace S3Outposts

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_S3OUTPOSTS_EXTERN template class AWS_S3OUTPOSTS_API Aws::Endpoint::EndpointProviderBase<
    S3Outposts::Endpoint::S3OutpostsClientConfiguration, S3Outposts::Endpoint::S3OutpostsBuiltInParameters,
    S3Outposts::Endpoint::S3OutpostsClientContextParameters>;

AWS_S3OUTPOSTS_EXTERN template class AWS_S3OUTPOSTS_API Aws::Endpoint::BDDEndpointProvider<
    S3Outposts::Endpoint::S3OutpostsClientConfiguration, S3Outposts::Endpoint::S3OutpostsBuiltInParameters,
    S3Outposts::Endpoint::S3OutpostsClientContextParameters>;
}  // namespace Endpoint

namespace S3Outposts {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_S3OUTPOSTS_API S3OutpostsEndpointProvider : public S3OutpostsDefaultEpProviderBase {
 public:
  using S3OutpostsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  S3OutpostsEndpointProvider();

  ~S3OutpostsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace S3Outposts
}  // namespace Aws
