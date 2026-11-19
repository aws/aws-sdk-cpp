/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnectClientConfiguration.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Endpoint {
using QConnectClientConfiguration = Aws::QConnect::QConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QCONNECT_API QConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const QConnectClientConfiguration& config);
};

/**
 * The type for the QConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QConnectEndpointProviderBase =
    EndpointProviderBase<QConnectClientConfiguration, QConnectBuiltInParameters, QConnectClientContextParameters>;

using QConnectDefaultEpProviderBase =
    BDDEndpointProvider<QConnectClientConfiguration, QConnectBuiltInParameters, QConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace QConnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QCONNECT_EXTERN template class AWS_QCONNECT_API
    Aws::Endpoint::EndpointProviderBase<QConnect::Endpoint::QConnectClientConfiguration, QConnect::Endpoint::QConnectBuiltInParameters,
                                        QConnect::Endpoint::QConnectClientContextParameters>;

AWS_QCONNECT_EXTERN template class AWS_QCONNECT_API
    Aws::Endpoint::BDDEndpointProvider<QConnect::Endpoint::QConnectClientConfiguration, QConnect::Endpoint::QConnectBuiltInParameters,
                                       QConnect::Endpoint::QConnectClientContextParameters>;
}  // namespace Endpoint

namespace QConnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QCONNECT_API QConnectEndpointProvider : public QConnectDefaultEpProviderBase {
 public:
  using QConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QConnectEndpointProvider();

  ~QConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QConnect
}  // namespace Aws
