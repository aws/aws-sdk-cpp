/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/MQClientConfiguration.h>
#include <aws/mq/MQ_EXPORTS.h>

namespace Aws {
namespace MQ {
namespace Endpoint {
using MQClientConfiguration = Aws::MQ::MQClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MQClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MQ_API MQBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MQBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MQClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MQClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MQClientConfiguration& config);
};

/**
 * The type for the MQ Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MQEndpointProviderBase = EndpointProviderBase<MQClientConfiguration, MQBuiltInParameters, MQClientContextParameters>;

using MQDefaultEpProviderBase = BDDEndpointProvider<MQClientConfiguration, MQBuiltInParameters, MQClientContextParameters>;

}  // namespace Endpoint
}  // namespace MQ

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MQ_EXTERN template class AWS_MQ_API Aws::Endpoint::EndpointProviderBase<
    MQ::Endpoint::MQClientConfiguration, MQ::Endpoint::MQBuiltInParameters, MQ::Endpoint::MQClientContextParameters>;

AWS_MQ_EXTERN template class AWS_MQ_API Aws::Endpoint::BDDEndpointProvider<
    MQ::Endpoint::MQClientConfiguration, MQ::Endpoint::MQBuiltInParameters, MQ::Endpoint::MQClientContextParameters>;
}  // namespace Endpoint

namespace MQ {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MQ_API MQEndpointProvider : public MQDefaultEpProviderBase {
 public:
  using MQResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MQEndpointProvider();

  ~MQEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MQ
}  // namespace Aws
