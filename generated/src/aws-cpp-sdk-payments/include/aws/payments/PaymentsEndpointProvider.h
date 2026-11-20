/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PaymentsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PaymentsClientConfiguration = Aws::Client::GenericClientConfiguration;
using PaymentsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Payments Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PaymentsEndpointProviderBase =
    EndpointProviderBase<PaymentsClientConfiguration, PaymentsBuiltInParameters, PaymentsClientContextParameters>;

using PaymentsDefaultEpProviderBase =
    BDDEndpointProvider<PaymentsClientConfiguration, PaymentsBuiltInParameters, PaymentsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PAYMENTS_API PaymentsEndpointProvider : public PaymentsDefaultEpProviderBase {
 public:
  using PaymentsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PaymentsEndpointProvider();

  ~PaymentsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Payments
}  // namespace Aws
