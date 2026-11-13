/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/TranslateClientConfiguration.h>
#include <aws/translate/Translate_EXPORTS.h>

namespace Aws {
namespace Translate {
namespace Endpoint {
using TranslateClientConfiguration = Aws::Translate::TranslateClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TranslateClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TRANSLATE_API TranslateBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TranslateBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TranslateClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TranslateClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TranslateClientConfiguration& config);
};

/**
 * The type for the Translate Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TranslateEndpointProviderBase =
    EndpointProviderBase<TranslateClientConfiguration, TranslateBuiltInParameters, TranslateClientContextParameters>;

using TranslateDefaultEpProviderBase =
    BDDEndpointProvider<TranslateClientConfiguration, TranslateBuiltInParameters, TranslateClientContextParameters>;

}  // namespace Endpoint
}  // namespace Translate

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TRANSLATE_EXTERN template class AWS_TRANSLATE_API
    Aws::Endpoint::EndpointProviderBase<Translate::Endpoint::TranslateClientConfiguration, Translate::Endpoint::TranslateBuiltInParameters,
                                        Translate::Endpoint::TranslateClientContextParameters>;

AWS_TRANSLATE_EXTERN template class AWS_TRANSLATE_API
    Aws::Endpoint::BDDEndpointProvider<Translate::Endpoint::TranslateClientConfiguration, Translate::Endpoint::TranslateBuiltInParameters,
                                       Translate::Endpoint::TranslateClientContextParameters>;
}  // namespace Endpoint

namespace Translate {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSLATE_API TranslateEndpointProvider : public TranslateDefaultEpProviderBase {
 public:
  using TranslateResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TranslateEndpointProvider();

  ~TranslateEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Translate
}  // namespace Aws
