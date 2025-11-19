/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/PartnerLedSupport.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

PartnerLedSupport::PartnerLedSupport(JsonView jsonValue) { *this = jsonValue; }

PartnerLedSupport& PartnerLedSupport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coverage")) {
    m_coverage = CoverageMapper::GetCoverageForName(jsonValue.GetString("coverage"));
    m_coverageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = ProviderMapper::GetProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tamLocation")) {
    m_tamLocation = jsonValue.GetString("tamLocation");
    m_tamLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerLedSupport::Jsonize() const {
  JsonValue payload;

  if (m_coverageHasBeenSet) {
    payload.WithString("coverage", CoverageMapper::GetNameForCoverage(m_coverage));
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_tamLocationHasBeenSet) {
    payload.WithString("tamLocation", m_tamLocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
