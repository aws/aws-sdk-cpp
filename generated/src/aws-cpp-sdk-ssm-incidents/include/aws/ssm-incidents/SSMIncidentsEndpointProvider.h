/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/SSMIncidentsClientConfiguration.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>

namespace Aws {
namespace SSMIncidents {
namespace Endpoint {
using SSMIncidentsClientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSMIncidentsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSMINCIDENTS_API SSMIncidentsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSMIncidentsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSMIncidentsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSMIncidentsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSMIncidentsClientConfiguration& config);
};

/**
 * The type for the SSMIncidents Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMIncidentsEndpointProviderBase =
    EndpointProviderBase<SSMIncidentsClientConfiguration, SSMIncidentsBuiltInParameters, SSMIncidentsClientContextParameters>;

using SSMIncidentsDefaultEpProviderBase =
    BDDEndpointProvider<SSMIncidentsClientConfiguration, SSMIncidentsBuiltInParameters, SSMIncidentsClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSMIncidents

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSMINCIDENTS_EXTERN template class AWS_SSMINCIDENTS_API Aws::Endpoint::EndpointProviderBase<
    SSMIncidents::Endpoint::SSMIncidentsClientConfiguration, SSMIncidents::Endpoint::SSMIncidentsBuiltInParameters,
    SSMIncidents::Endpoint::SSMIncidentsClientContextParameters>;

AWS_SSMINCIDENTS_EXTERN template class AWS_SSMINCIDENTS_API Aws::Endpoint::BDDEndpointProvider<
    SSMIncidents::Endpoint::SSMIncidentsClientConfiguration, SSMIncidents::Endpoint::SSMIncidentsBuiltInParameters,
    SSMIncidents::Endpoint::SSMIncidentsClientContextParameters>;
}  // namespace Endpoint

namespace SSMIncidents {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSMINCIDENTS_API SSMIncidentsEndpointProvider : public SSMIncidentsDefaultEpProviderBase {
 public:
  using SSMIncidentsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSMIncidentsEndpointProvider();

  ~SSMIncidentsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSMIncidents
}  // namespace Aws
