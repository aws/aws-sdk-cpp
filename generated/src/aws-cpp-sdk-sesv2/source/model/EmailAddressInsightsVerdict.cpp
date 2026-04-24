/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/EmailAddressInsightsVerdict.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

EmailAddressInsightsVerdict::EmailAddressInsightsVerdict(JsonView jsonValue) { *this = jsonValue; }

EmailAddressInsightsVerdict& EmailAddressInsightsVerdict::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConfidenceVerdict")) {
    m_confidenceVerdict = EmailAddressInsightsConfidenceVerdictMapper::GetEmailAddressInsightsConfidenceVerdictForName(
        jsonValue.GetString("ConfidenceVerdict"));
    m_confidenceVerdictHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailAddressInsightsVerdict::Jsonize() const {
  JsonValue payload;

  if (m_confidenceVerdictHasBeenSet) {
    payload.WithString("ConfidenceVerdict",
                       EmailAddressInsightsConfidenceVerdictMapper::GetNameForEmailAddressInsightsConfidenceVerdict(m_confidenceVerdict));
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
