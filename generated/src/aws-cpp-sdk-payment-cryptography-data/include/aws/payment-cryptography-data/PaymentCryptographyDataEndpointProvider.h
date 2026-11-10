/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataClientConfiguration.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

namespace Aws {
namespace PaymentCryptographyData {
namespace Endpoint {
using PaymentCryptographyDataClientConfiguration = Aws::PaymentCryptographyData::PaymentCryptographyDataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PaymentCryptographyDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PAYMENTCRYPTOGRAPHYDATA_API PaymentCryptographyDataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PaymentCryptographyDataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PaymentCryptographyDataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PaymentCryptographyDataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PaymentCryptographyDataClientConfiguration& config);
};

/**
 * The type for the PaymentCryptographyData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PaymentCryptographyDataEndpointProviderBase =
    EndpointProviderBase<PaymentCryptographyDataClientConfiguration, PaymentCryptographyDataBuiltInParameters,
                         PaymentCryptographyDataClientContextParameters>;

using PaymentCryptographyDataDefaultEpProviderBase =
    BDDEndpointProvider<PaymentCryptographyDataClientConfiguration, PaymentCryptographyDataBuiltInParameters,
                        PaymentCryptographyDataClientContextParameters>;

}  // namespace Endpoint
}  // namespace PaymentCryptographyData

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PAYMENTCRYPTOGRAPHYDATA_EXTERN template class AWS_PAYMENTCRYPTOGRAPHYDATA_API
    Aws::Endpoint::EndpointProviderBase<PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientConfiguration,
                                        PaymentCryptographyData::Endpoint::PaymentCryptographyDataBuiltInParameters,
                                        PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientContextParameters>;

AWS_PAYMENTCRYPTOGRAPHYDATA_EXTERN template class AWS_PAYMENTCRYPTOGRAPHYDATA_API
    Aws::Endpoint::BDDEndpointProvider<PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientConfiguration,
                                       PaymentCryptographyData::Endpoint::PaymentCryptographyDataBuiltInParameters,
                                       PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientContextParameters>;
}  // namespace Endpoint

namespace PaymentCryptographyData {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PAYMENTCRYPTOGRAPHYDATA_API PaymentCryptographyDataEndpointProvider : public PaymentCryptographyDataDefaultEpProviderBase {
 public:
  using PaymentCryptographyDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PaymentCryptographyDataEndpointProvider();

  ~PaymentCryptographyDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PaymentCryptographyData
}  // namespace Aws
