/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/SavingsPlansClientConfiguration.h>
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>

namespace Aws {
namespace SavingsPlans {
namespace Endpoint {
using SavingsPlansClientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SavingsPlansClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAVINGSPLANS_API SavingsPlansBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SavingsPlansBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SavingsPlansClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SavingsPlansClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SavingsPlansClientConfiguration& config);
};

/**
 * The type for the SavingsPlans Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SavingsPlansEndpointProviderBase =
    EndpointProviderBase<SavingsPlansClientConfiguration, SavingsPlansBuiltInParameters, SavingsPlansClientContextParameters>;

using SavingsPlansDefaultEpProviderBase =
    BDDEndpointProvider<SavingsPlansClientConfiguration, SavingsPlansBuiltInParameters, SavingsPlansClientContextParameters>;

}  // namespace Endpoint
}  // namespace SavingsPlans

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAVINGSPLANS_EXTERN template class AWS_SAVINGSPLANS_API Aws::Endpoint::EndpointProviderBase<
    SavingsPlans::Endpoint::SavingsPlansClientConfiguration, SavingsPlans::Endpoint::SavingsPlansBuiltInParameters,
    SavingsPlans::Endpoint::SavingsPlansClientContextParameters>;

AWS_SAVINGSPLANS_EXTERN template class AWS_SAVINGSPLANS_API Aws::Endpoint::BDDEndpointProvider<
    SavingsPlans::Endpoint::SavingsPlansClientConfiguration, SavingsPlans::Endpoint::SavingsPlansBuiltInParameters,
    SavingsPlans::Endpoint::SavingsPlansClientContextParameters>;
}  // namespace Endpoint

namespace SavingsPlans {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAVINGSPLANS_API SavingsPlansEndpointProvider : public SavingsPlansDefaultEpProviderBase {
 public:
  using SavingsPlansResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SavingsPlansEndpointProvider();

  ~SavingsPlansEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SavingsPlans
}  // namespace Aws
