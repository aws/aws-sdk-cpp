/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDSClientConfiguration.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Endpoint {
using RDSClientConfiguration = Aws::RDS::RDSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RDSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RDS_API RDSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RDSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RDSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RDSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RDSClientConfiguration& config);
};

/**
 * The type for the RDS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RDSEndpointProviderBase = EndpointProviderBase<RDSClientConfiguration, RDSBuiltInParameters, RDSClientContextParameters>;

using RDSDefaultEpProviderBase = BDDEndpointProvider<RDSClientConfiguration, RDSBuiltInParameters, RDSClientContextParameters>;

}  // namespace Endpoint
}  // namespace RDS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RDS_EXTERN template class AWS_RDS_API Aws::Endpoint::EndpointProviderBase<
    RDS::Endpoint::RDSClientConfiguration, RDS::Endpoint::RDSBuiltInParameters, RDS::Endpoint::RDSClientContextParameters>;

AWS_RDS_EXTERN template class AWS_RDS_API Aws::Endpoint::BDDEndpointProvider<
    RDS::Endpoint::RDSClientConfiguration, RDS::Endpoint::RDSBuiltInParameters, RDS::Endpoint::RDSClientContextParameters>;
}  // namespace Endpoint

namespace RDS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RDS_API RDSEndpointProvider : public RDSDefaultEpProviderBase {
 public:
  using RDSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RDSEndpointProvider();

  ~RDSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RDS
}  // namespace Aws
