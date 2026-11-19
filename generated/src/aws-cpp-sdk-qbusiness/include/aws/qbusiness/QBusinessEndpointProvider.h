/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/QBusinessClientConfiguration.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Endpoint {
using QBusinessClientConfiguration = Aws::QBusiness::QBusinessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QBusinessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QBUSINESS_API QBusinessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QBusinessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QBusinessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QBusinessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const QBusinessClientConfiguration& config);
};

/**
 * The type for the QBusiness Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QBusinessEndpointProviderBase =
    EndpointProviderBase<QBusinessClientConfiguration, QBusinessBuiltInParameters, QBusinessClientContextParameters>;

using QBusinessDefaultEpProviderBase =
    BDDEndpointProvider<QBusinessClientConfiguration, QBusinessBuiltInParameters, QBusinessClientContextParameters>;

}  // namespace Endpoint
}  // namespace QBusiness

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QBUSINESS_EXTERN template class AWS_QBUSINESS_API
    Aws::Endpoint::EndpointProviderBase<QBusiness::Endpoint::QBusinessClientConfiguration, QBusiness::Endpoint::QBusinessBuiltInParameters,
                                        QBusiness::Endpoint::QBusinessClientContextParameters>;

AWS_QBUSINESS_EXTERN template class AWS_QBUSINESS_API
    Aws::Endpoint::BDDEndpointProvider<QBusiness::Endpoint::QBusinessClientConfiguration, QBusiness::Endpoint::QBusinessBuiltInParameters,
                                       QBusiness::Endpoint::QBusinessClientContextParameters>;
}  // namespace Endpoint

namespace QBusiness {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QBUSINESS_API QBusinessEndpointProvider : public QBusinessDefaultEpProviderBase {
 public:
  using QBusinessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QBusinessEndpointProvider();

  ~QBusinessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QBusiness
}  // namespace Aws
