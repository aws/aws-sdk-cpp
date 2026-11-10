/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/TextractClientConfiguration.h>
#include <aws/textract/Textract_EXPORTS.h>

namespace Aws {
namespace Textract {
namespace Endpoint {
using TextractClientConfiguration = Aws::Textract::TextractClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TextractClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TEXTRACT_API TextractBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TextractBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TextractClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TextractClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TextractClientConfiguration& config);
};

/**
 * The type for the Textract Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TextractEndpointProviderBase =
    EndpointProviderBase<TextractClientConfiguration, TextractBuiltInParameters, TextractClientContextParameters>;

using TextractDefaultEpProviderBase =
    BDDEndpointProvider<TextractClientConfiguration, TextractBuiltInParameters, TextractClientContextParameters>;

}  // namespace Endpoint
}  // namespace Textract

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TEXTRACT_EXTERN template class AWS_TEXTRACT_API
    Aws::Endpoint::EndpointProviderBase<Textract::Endpoint::TextractClientConfiguration, Textract::Endpoint::TextractBuiltInParameters,
                                        Textract::Endpoint::TextractClientContextParameters>;

AWS_TEXTRACT_EXTERN template class AWS_TEXTRACT_API
    Aws::Endpoint::BDDEndpointProvider<Textract::Endpoint::TextractClientConfiguration, Textract::Endpoint::TextractBuiltInParameters,
                                       Textract::Endpoint::TextractClientContextParameters>;
}  // namespace Endpoint

namespace Textract {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TEXTRACT_API TextractEndpointProvider : public TextractDefaultEpProviderBase {
 public:
  using TextractResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TextractEndpointProvider();

  ~TextractEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Textract
}  // namespace Aws
