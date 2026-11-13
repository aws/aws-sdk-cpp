/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/TaxSettingsClientConfiguration.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

namespace Aws {
namespace TaxSettings {
namespace Endpoint {
using TaxSettingsClientConfiguration = Aws::TaxSettings::TaxSettingsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TaxSettingsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TAXSETTINGS_API TaxSettingsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TaxSettingsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TaxSettingsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TaxSettingsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TaxSettingsClientConfiguration& config);
};

/**
 * The type for the TaxSettings Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TaxSettingsEndpointProviderBase =
    EndpointProviderBase<TaxSettingsClientConfiguration, TaxSettingsBuiltInParameters, TaxSettingsClientContextParameters>;

using TaxSettingsDefaultEpProviderBase =
    BDDEndpointProvider<TaxSettingsClientConfiguration, TaxSettingsBuiltInParameters, TaxSettingsClientContextParameters>;

}  // namespace Endpoint
}  // namespace TaxSettings

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TAXSETTINGS_EXTERN template class AWS_TAXSETTINGS_API Aws::Endpoint::EndpointProviderBase<
    TaxSettings::Endpoint::TaxSettingsClientConfiguration, TaxSettings::Endpoint::TaxSettingsBuiltInParameters,
    TaxSettings::Endpoint::TaxSettingsClientContextParameters>;

AWS_TAXSETTINGS_EXTERN template class AWS_TAXSETTINGS_API Aws::Endpoint::BDDEndpointProvider<
    TaxSettings::Endpoint::TaxSettingsClientConfiguration, TaxSettings::Endpoint::TaxSettingsBuiltInParameters,
    TaxSettings::Endpoint::TaxSettingsClientContextParameters>;
}  // namespace Endpoint

namespace TaxSettings {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TAXSETTINGS_API TaxSettingsEndpointProvider : public TaxSettingsDefaultEpProviderBase {
 public:
  using TaxSettingsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TaxSettingsEndpointProvider();

  ~TaxSettingsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace TaxSettings
}  // namespace Aws
