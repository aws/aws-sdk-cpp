/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/TextractEndpointProvider.h>
#include <aws/textract/internal/TextractEndpointRules.h>

namespace Aws {
#ifndef AWS_TEXTRACT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Textract::Endpoint::TextractClientConfiguration,
                                                   Textract::Endpoint::TextractBuiltInParameters,
                                                   Textract::Endpoint::TextractClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Textract::Endpoint::TextractClientConfiguration,
                                                  Textract::Endpoint::TextractBuiltInParameters,
                                                  Textract::Endpoint::TextractClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Textract {
namespace Endpoint {
TextractEndpointProvider::TextractEndpointProvider()
    : TextractDefaultEpProviderBase(Aws::Textract::TextractEndpointRules::GetRulesBlob(),
                                    Aws::Textract::TextractEndpointRules::RulesBlobSize) {}

void TextractBuiltInParameters::SetFromClientConfiguration(const TextractClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TextractClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TextractBuiltInParameters::SetFromClientConfiguration(const TextractClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TextractClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TextractBuiltInParameters::SetServiceSpecificParameters(const TextractClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Textract
}  // namespace Aws
