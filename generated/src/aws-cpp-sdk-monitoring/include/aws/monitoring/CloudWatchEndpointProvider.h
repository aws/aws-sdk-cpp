/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchClientConfiguration.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace CloudWatch {
namespace Endpoint {
using CloudWatchClientConfiguration = Aws::CloudWatch::CloudWatchClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudWatchClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDWATCH_API CloudWatchBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudWatchBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudWatchClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudWatchClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudWatchClientConfiguration& config);
};

/**
 * The type for the CloudWatch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchEndpointProviderBase =
    EndpointProviderBase<CloudWatchClientConfiguration, CloudWatchBuiltInParameters, CloudWatchClientContextParameters>;

using CloudWatchDefaultEpProviderBase =
    BDDEndpointProvider<CloudWatchClientConfiguration, CloudWatchBuiltInParameters, CloudWatchClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudWatch

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDWATCH_EXTERN template class AWS_CLOUDWATCH_API Aws::Endpoint::EndpointProviderBase<
    CloudWatch::Endpoint::CloudWatchClientConfiguration, CloudWatch::Endpoint::CloudWatchBuiltInParameters,
    CloudWatch::Endpoint::CloudWatchClientContextParameters>;

AWS_CLOUDWATCH_EXTERN template class AWS_CLOUDWATCH_API Aws::Endpoint::BDDEndpointProvider<
    CloudWatch::Endpoint::CloudWatchClientConfiguration, CloudWatch::Endpoint::CloudWatchBuiltInParameters,
    CloudWatch::Endpoint::CloudWatchClientContextParameters>;
}  // namespace Endpoint

namespace CloudWatch {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCH_API CloudWatchEndpointProvider : public CloudWatchDefaultEpProviderBase {
 public:
  using CloudWatchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudWatchEndpointProvider();

  ~CloudWatchEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudWatch
}  // namespace Aws
