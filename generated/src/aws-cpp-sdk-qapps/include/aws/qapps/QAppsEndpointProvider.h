/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/QAppsClientConfiguration.h>
#include <aws/qapps/QApps_EXPORTS.h>

namespace Aws {
namespace QApps {
namespace Endpoint {
using QAppsClientConfiguration = Aws::QApps::QAppsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QAppsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QAPPS_API QAppsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QAppsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QAppsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QAppsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const QAppsClientConfiguration& config);
};

/**
 * The type for the QApps Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QAppsEndpointProviderBase = EndpointProviderBase<QAppsClientConfiguration, QAppsBuiltInParameters, QAppsClientContextParameters>;

using QAppsDefaultEpProviderBase = BDDEndpointProvider<QAppsClientConfiguration, QAppsBuiltInParameters, QAppsClientContextParameters>;

}  // namespace Endpoint
}  // namespace QApps

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QAPPS_EXTERN template class AWS_QAPPS_API Aws::Endpoint::EndpointProviderBase<
    QApps::Endpoint::QAppsClientConfiguration, QApps::Endpoint::QAppsBuiltInParameters, QApps::Endpoint::QAppsClientContextParameters>;

AWS_QAPPS_EXTERN template class AWS_QAPPS_API Aws::Endpoint::BDDEndpointProvider<
    QApps::Endpoint::QAppsClientConfiguration, QApps::Endpoint::QAppsBuiltInParameters, QApps::Endpoint::QAppsClientContextParameters>;
}  // namespace Endpoint

namespace QApps {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QAPPS_API QAppsEndpointProvider : public QAppsDefaultEpProviderBase {
 public:
  using QAppsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QAppsEndpointProvider();

  ~QAppsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QApps
}  // namespace Aws
