/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/VerifiedPermissionsClientConfiguration.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>

namespace Aws {
namespace VerifiedPermissions {
namespace Endpoint {
using VerifiedPermissionsClientConfiguration = Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using VerifiedPermissionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_VERIFIEDPERMISSIONS_API VerifiedPermissionsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~VerifiedPermissionsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const VerifiedPermissionsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const VerifiedPermissionsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const VerifiedPermissionsClientConfiguration& config);
};

/**
 * The type for the VerifiedPermissions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using VerifiedPermissionsEndpointProviderBase =
    EndpointProviderBase<VerifiedPermissionsClientConfiguration, VerifiedPermissionsBuiltInParameters,
                         VerifiedPermissionsClientContextParameters>;

using VerifiedPermissionsDefaultEpProviderBase =
    BDDEndpointProvider<VerifiedPermissionsClientConfiguration, VerifiedPermissionsBuiltInParameters,
                        VerifiedPermissionsClientContextParameters>;

}  // namespace Endpoint
}  // namespace VerifiedPermissions

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_VERIFIEDPERMISSIONS_EXTERN template class AWS_VERIFIEDPERMISSIONS_API
    Aws::Endpoint::EndpointProviderBase<VerifiedPermissions::Endpoint::VerifiedPermissionsClientConfiguration,
                                        VerifiedPermissions::Endpoint::VerifiedPermissionsBuiltInParameters,
                                        VerifiedPermissions::Endpoint::VerifiedPermissionsClientContextParameters>;

AWS_VERIFIEDPERMISSIONS_EXTERN template class AWS_VERIFIEDPERMISSIONS_API
    Aws::Endpoint::BDDEndpointProvider<VerifiedPermissions::Endpoint::VerifiedPermissionsClientConfiguration,
                                       VerifiedPermissions::Endpoint::VerifiedPermissionsBuiltInParameters,
                                       VerifiedPermissions::Endpoint::VerifiedPermissionsClientContextParameters>;
}  // namespace Endpoint

namespace VerifiedPermissions {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_VERIFIEDPERMISSIONS_API VerifiedPermissionsEndpointProvider : public VerifiedPermissionsDefaultEpProviderBase {
 public:
  using VerifiedPermissionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  VerifiedPermissionsEndpointProvider();

  ~VerifiedPermissionsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace VerifiedPermissions
}  // namespace Aws
