/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-guiconnect/SSMGuiConnectClientConfiguration.h>
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>

namespace Aws {
namespace SSMGuiConnect {
namespace Endpoint {
using SSMGuiConnectClientConfiguration = Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSMGuiConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSMGUICONNECT_API SSMGuiConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSMGuiConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSMGuiConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSMGuiConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSMGuiConnectClientConfiguration& config);
};

/**
 * The type for the SSMGuiConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMGuiConnectEndpointProviderBase =
    EndpointProviderBase<SSMGuiConnectClientConfiguration, SSMGuiConnectBuiltInParameters, SSMGuiConnectClientContextParameters>;

using SSMGuiConnectDefaultEpProviderBase =
    BDDEndpointProvider<SSMGuiConnectClientConfiguration, SSMGuiConnectBuiltInParameters, SSMGuiConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSMGuiConnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSMGUICONNECT_EXTERN template class AWS_SSMGUICONNECT_API Aws::Endpoint::EndpointProviderBase<
    SSMGuiConnect::Endpoint::SSMGuiConnectClientConfiguration, SSMGuiConnect::Endpoint::SSMGuiConnectBuiltInParameters,
    SSMGuiConnect::Endpoint::SSMGuiConnectClientContextParameters>;

AWS_SSMGUICONNECT_EXTERN template class AWS_SSMGUICONNECT_API Aws::Endpoint::BDDEndpointProvider<
    SSMGuiConnect::Endpoint::SSMGuiConnectClientConfiguration, SSMGuiConnect::Endpoint::SSMGuiConnectBuiltInParameters,
    SSMGuiConnect::Endpoint::SSMGuiConnectClientContextParameters>;
}  // namespace Endpoint

namespace SSMGuiConnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSMGUICONNECT_API SSMGuiConnectEndpointProvider : public SSMGuiConnectDefaultEpProviderBase {
 public:
  using SSMGuiConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSMGuiConnectEndpointProvider();

  ~SSMGuiConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSMGuiConnect
}  // namespace Aws
