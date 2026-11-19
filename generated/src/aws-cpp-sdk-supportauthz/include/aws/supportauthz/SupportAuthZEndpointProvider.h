/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZClientConfiguration.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

namespace Aws {
namespace SupportAuthZ {
namespace Endpoint {
using SupportAuthZClientConfiguration = Aws::SupportAuthZ::SupportAuthZClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SupportAuthZClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SUPPORTAUTHZ_API SupportAuthZBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SupportAuthZBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SupportAuthZClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SupportAuthZClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SupportAuthZClientConfiguration& config);
};

/**
 * The type for the SupportAuthZ Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupportAuthZEndpointProviderBase =
    EndpointProviderBase<SupportAuthZClientConfiguration, SupportAuthZBuiltInParameters, SupportAuthZClientContextParameters>;

using SupportAuthZDefaultEpProviderBase =
    BDDEndpointProvider<SupportAuthZClientConfiguration, SupportAuthZBuiltInParameters, SupportAuthZClientContextParameters>;

}  // namespace Endpoint
}  // namespace SupportAuthZ

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SUPPORTAUTHZ_EXTERN template class AWS_SUPPORTAUTHZ_API Aws::Endpoint::EndpointProviderBase<
    SupportAuthZ::Endpoint::SupportAuthZClientConfiguration, SupportAuthZ::Endpoint::SupportAuthZBuiltInParameters,
    SupportAuthZ::Endpoint::SupportAuthZClientContextParameters>;

AWS_SUPPORTAUTHZ_EXTERN template class AWS_SUPPORTAUTHZ_API Aws::Endpoint::BDDEndpointProvider<
    SupportAuthZ::Endpoint::SupportAuthZClientConfiguration, SupportAuthZ::Endpoint::SupportAuthZBuiltInParameters,
    SupportAuthZ::Endpoint::SupportAuthZClientContextParameters>;
}  // namespace Endpoint

namespace SupportAuthZ {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPORTAUTHZ_API SupportAuthZEndpointProvider : public SupportAuthZDefaultEpProviderBase {
 public:
  using SupportAuthZResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SupportAuthZEndpointProvider();

  ~SupportAuthZEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SupportAuthZ
}  // namespace Aws
