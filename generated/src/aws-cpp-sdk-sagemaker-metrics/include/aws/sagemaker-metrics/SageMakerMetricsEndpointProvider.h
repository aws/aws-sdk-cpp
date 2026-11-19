/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-metrics/SageMakerMetricsClientConfiguration.h>
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>

namespace Aws {
namespace SageMakerMetrics {
namespace Endpoint {
using SageMakerMetricsClientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerMetricsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKERMETRICS_API SageMakerMetricsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SageMakerMetricsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SageMakerMetricsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SageMakerMetricsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SageMakerMetricsClientConfiguration& config);
};

/**
 * The type for the SageMakerMetrics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerMetricsEndpointProviderBase =
    EndpointProviderBase<SageMakerMetricsClientConfiguration, SageMakerMetricsBuiltInParameters, SageMakerMetricsClientContextParameters>;

using SageMakerMetricsDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerMetricsClientConfiguration, SageMakerMetricsBuiltInParameters, SageMakerMetricsClientContextParameters>;

}  // namespace Endpoint
}  // namespace SageMakerMetrics

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKERMETRICS_EXTERN template class AWS_SAGEMAKERMETRICS_API Aws::Endpoint::EndpointProviderBase<
    SageMakerMetrics::Endpoint::SageMakerMetricsClientConfiguration, SageMakerMetrics::Endpoint::SageMakerMetricsBuiltInParameters,
    SageMakerMetrics::Endpoint::SageMakerMetricsClientContextParameters>;

AWS_SAGEMAKERMETRICS_EXTERN template class AWS_SAGEMAKERMETRICS_API Aws::Endpoint::BDDEndpointProvider<
    SageMakerMetrics::Endpoint::SageMakerMetricsClientConfiguration, SageMakerMetrics::Endpoint::SageMakerMetricsBuiltInParameters,
    SageMakerMetrics::Endpoint::SageMakerMetricsClientContextParameters>;
}  // namespace Endpoint

namespace SageMakerMetrics {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERMETRICS_API SageMakerMetricsEndpointProvider : public SageMakerMetricsDefaultEpProviderBase {
 public:
  using SageMakerMetricsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerMetricsEndpointProvider();

  ~SageMakerMetricsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerMetrics
}  // namespace Aws
