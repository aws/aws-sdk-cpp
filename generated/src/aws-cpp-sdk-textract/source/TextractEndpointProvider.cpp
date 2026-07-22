/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/TextractEndpointProvider.h>
#include <aws/textract/internal/TextractEndpointRules.h>

namespace Aws {
namespace Textract {
namespace Endpoint {
TextractEndpointProvider::TextractEndpointProvider()
    : TextractDefaultEpProviderBase(Aws::Textract::TextractEndpointRules::GetRulesBlob(),
                                    Aws::Textract::TextractEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Textract
}  // namespace Aws
