/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/SNSClientConfiguration.h>
#include <aws/sns/SNS_EXPORTS.h>

namespace Aws {
namespace SNS {
namespace Endpoint {
using SNSClientConfiguration = Aws::SNS::SNSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SNSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SNS_API SNSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SNSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SNSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SNSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SNSClientConfiguration& config);
};

/**
 * The type for the SNS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SNSEndpointProviderBase = EndpointProviderBase<SNSClientConfiguration, SNSBuiltInParameters, SNSClientContextParameters>;

using SNSDefaultEpProviderBase = BDDEndpointProvider<SNSClientConfiguration, SNSBuiltInParameters, SNSClientContextParameters>;

}  // namespace Endpoint
}  // namespace SNS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SNS_EXTERN template class AWS_SNS_API Aws::Endpoint::EndpointProviderBase<
    SNS::Endpoint::SNSClientConfiguration, SNS::Endpoint::SNSBuiltInParameters, SNS::Endpoint::SNSClientContextParameters>;

AWS_SNS_EXTERN template class AWS_SNS_API Aws::Endpoint::BDDEndpointProvider<
    SNS::Endpoint::SNSClientConfiguration, SNS::Endpoint::SNSBuiltInParameters, SNS::Endpoint::SNSClientContextParameters>;
}  // namespace Endpoint

namespace SNS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SNS_API SNSEndpointProvider : public SNSDefaultEpProviderBase {
 public:
  using SNSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SNSEndpointProvider();

  ~SNSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SNS
}  // namespace Aws
