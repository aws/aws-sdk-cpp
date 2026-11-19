/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/SchemasClientConfiguration.h>
#include <aws/schemas/Schemas_EXPORTS.h>

namespace Aws {
namespace Schemas {
namespace Endpoint {
using SchemasClientConfiguration = Aws::Schemas::SchemasClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SchemasClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SCHEMAS_API SchemasBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SchemasBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SchemasClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SchemasClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SchemasClientConfiguration& config);
};

/**
 * The type for the Schemas Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SchemasEndpointProviderBase =
    EndpointProviderBase<SchemasClientConfiguration, SchemasBuiltInParameters, SchemasClientContextParameters>;

using SchemasDefaultEpProviderBase =
    BDDEndpointProvider<SchemasClientConfiguration, SchemasBuiltInParameters, SchemasClientContextParameters>;

}  // namespace Endpoint
}  // namespace Schemas

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SCHEMAS_EXTERN template class AWS_SCHEMAS_API
    Aws::Endpoint::EndpointProviderBase<Schemas::Endpoint::SchemasClientConfiguration, Schemas::Endpoint::SchemasBuiltInParameters,
                                        Schemas::Endpoint::SchemasClientContextParameters>;

AWS_SCHEMAS_EXTERN template class AWS_SCHEMAS_API
    Aws::Endpoint::BDDEndpointProvider<Schemas::Endpoint::SchemasClientConfiguration, Schemas::Endpoint::SchemasBuiltInParameters,
                                       Schemas::Endpoint::SchemasClientContextParameters>;
}  // namespace Endpoint

namespace Schemas {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SCHEMAS_API SchemasEndpointProvider : public SchemasDefaultEpProviderBase {
 public:
  using SchemasResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SchemasEndpointProvider();

  ~SchemasEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Schemas
}  // namespace Aws
