/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rum/CloudWatchRUMClientConfiguration.h>
#include <aws/rum/CloudWatchRUM_EXPORTS.h>

namespace Aws {
namespace CloudWatchRUM {
namespace Endpoint {
using CloudWatchRUMClientConfiguration = Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudWatchRUMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDWATCHRUM_API CloudWatchRUMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudWatchRUMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudWatchRUMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudWatchRUMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudWatchRUMClientConfiguration& config);
};

/**
 * The type for the CloudWatchRUM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchRUMEndpointProviderBase =
    EndpointProviderBase<CloudWatchRUMClientConfiguration, CloudWatchRUMBuiltInParameters, CloudWatchRUMClientContextParameters>;

using CloudWatchRUMDefaultEpProviderBase =
    BDDEndpointProvider<CloudWatchRUMClientConfiguration, CloudWatchRUMBuiltInParameters, CloudWatchRUMClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudWatchRUM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDWATCHRUM_EXTERN template class AWS_CLOUDWATCHRUM_API Aws::Endpoint::EndpointProviderBase<
    CloudWatchRUM::Endpoint::CloudWatchRUMClientConfiguration, CloudWatchRUM::Endpoint::CloudWatchRUMBuiltInParameters,
    CloudWatchRUM::Endpoint::CloudWatchRUMClientContextParameters>;

AWS_CLOUDWATCHRUM_EXTERN template class AWS_CLOUDWATCHRUM_API Aws::Endpoint::BDDEndpointProvider<
    CloudWatchRUM::Endpoint::CloudWatchRUMClientConfiguration, CloudWatchRUM::Endpoint::CloudWatchRUMBuiltInParameters,
    CloudWatchRUM::Endpoint::CloudWatchRUMClientContextParameters>;
}  // namespace Endpoint

namespace CloudWatchRUM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHRUM_API CloudWatchRUMEndpointProvider : public CloudWatchRUMDefaultEpProviderBase {
 public:
  using CloudWatchRUMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudWatchRUMEndpointProvider();

  ~CloudWatchRUMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudWatchRUM
}  // namespace Aws
