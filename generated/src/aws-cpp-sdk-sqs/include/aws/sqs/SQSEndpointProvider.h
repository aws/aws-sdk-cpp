/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/SQSClientConfiguration.h>
#include <aws/sqs/SQS_EXPORTS.h>

namespace Aws {
namespace SQS {
namespace Endpoint {
using SQSClientConfiguration = Aws::SQS::SQSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SQSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SQS_API SQSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SQSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SQSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SQSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SQSClientConfiguration& config);
};

/**
 * The type for the SQS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SQSEndpointProviderBase = EndpointProviderBase<SQSClientConfiguration, SQSBuiltInParameters, SQSClientContextParameters>;

using SQSDefaultEpProviderBase = BDDEndpointProvider<SQSClientConfiguration, SQSBuiltInParameters, SQSClientContextParameters>;

}  // namespace Endpoint
}  // namespace SQS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SQS_EXTERN template class AWS_SQS_API Aws::Endpoint::EndpointProviderBase<
    SQS::Endpoint::SQSClientConfiguration, SQS::Endpoint::SQSBuiltInParameters, SQS::Endpoint::SQSClientContextParameters>;

AWS_SQS_EXTERN template class AWS_SQS_API Aws::Endpoint::BDDEndpointProvider<
    SQS::Endpoint::SQSClientConfiguration, SQS::Endpoint::SQSBuiltInParameters, SQS::Endpoint::SQSClientContextParameters>;
}  // namespace Endpoint

namespace SQS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SQS_API SQSEndpointProvider : public SQSDefaultEpProviderBase {
 public:
  using SQSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SQSEndpointProvider();

  ~SQSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SQS
}  // namespace Aws
