/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/RedshiftClientConfiguration.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Endpoint {
using RedshiftClientConfiguration = Aws::Redshift::RedshiftClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RedshiftClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_REDSHIFT_API RedshiftBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RedshiftBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RedshiftClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RedshiftClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RedshiftClientConfiguration& config);
};

/**
 * The type for the Redshift Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RedshiftEndpointProviderBase =
    EndpointProviderBase<RedshiftClientConfiguration, RedshiftBuiltInParameters, RedshiftClientContextParameters>;

using RedshiftDefaultEpProviderBase =
    BDDEndpointProvider<RedshiftClientConfiguration, RedshiftBuiltInParameters, RedshiftClientContextParameters>;

}  // namespace Endpoint
}  // namespace Redshift

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_REDSHIFT_EXTERN template class AWS_REDSHIFT_API
    Aws::Endpoint::EndpointProviderBase<Redshift::Endpoint::RedshiftClientConfiguration, Redshift::Endpoint::RedshiftBuiltInParameters,
                                        Redshift::Endpoint::RedshiftClientContextParameters>;

AWS_REDSHIFT_EXTERN template class AWS_REDSHIFT_API
    Aws::Endpoint::BDDEndpointProvider<Redshift::Endpoint::RedshiftClientConfiguration, Redshift::Endpoint::RedshiftBuiltInParameters,
                                       Redshift::Endpoint::RedshiftClientContextParameters>;
}  // namespace Endpoint

namespace Redshift {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_REDSHIFT_API RedshiftEndpointProvider : public RedshiftDefaultEpProviderBase {
 public:
  using RedshiftResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RedshiftEndpointProvider();

  ~RedshiftEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Redshift
}  // namespace Aws
