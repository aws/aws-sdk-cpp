/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/OSISClientConfiguration.h>
#include <aws/osis/OSIS_EXPORTS.h>

namespace Aws {
namespace OSIS {
namespace Endpoint {
using OSISClientConfiguration = Aws::OSIS::OSISClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OSISClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OSIS_API OSISBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OSISBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OSISClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OSISClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OSISClientConfiguration& config);
};

/**
 * The type for the OSIS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OSISEndpointProviderBase = EndpointProviderBase<OSISClientConfiguration, OSISBuiltInParameters, OSISClientContextParameters>;

using OSISDefaultEpProviderBase = BDDEndpointProvider<OSISClientConfiguration, OSISBuiltInParameters, OSISClientContextParameters>;

}  // namespace Endpoint
}  // namespace OSIS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OSIS_EXTERN template class AWS_OSIS_API Aws::Endpoint::EndpointProviderBase<
    OSIS::Endpoint::OSISClientConfiguration, OSIS::Endpoint::OSISBuiltInParameters, OSIS::Endpoint::OSISClientContextParameters>;

AWS_OSIS_EXTERN template class AWS_OSIS_API Aws::Endpoint::BDDEndpointProvider<
    OSIS::Endpoint::OSISClientConfiguration, OSIS::Endpoint::OSISBuiltInParameters, OSIS::Endpoint::OSISClientContextParameters>;
}  // namespace Endpoint

namespace OSIS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OSIS_API OSISEndpointProvider : public OSISDefaultEpProviderBase {
 public:
  using OSISResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OSISEndpointProvider();

  ~OSISEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace OSIS
}  // namespace Aws
