/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/EnrichmentContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

EnrichmentContext::EnrichmentContext(JsonView jsonValue) { *this = jsonValue; }

EnrichmentContext& EnrichmentContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProspectingResultAws")) {
    m_prospectingResultAws = jsonValue.GetObject("ProspectingResultAws");
    m_prospectingResultAwsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LeadInsights")) {
    m_leadInsights = jsonValue.GetObject("LeadInsights");
    m_leadInsightsHasBeenSet = true;
  }
  return *this;
}

JsonValue EnrichmentContext::Jsonize() const {
  JsonValue payload;

  if (m_prospectingResultAwsHasBeenSet) {
    payload.WithObject("ProspectingResultAws", m_prospectingResultAws.Jsonize());
  }

  if (m_leadInsightsHasBeenSet) {
    payload.WithObject("LeadInsights", m_leadInsights.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
