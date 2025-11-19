/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ResoldEnterprise.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ResoldEnterprise::ResoldEnterprise(JsonView jsonValue) { *this = jsonValue; }

ResoldEnterprise& ResoldEnterprise::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coverage")) {
    m_coverage = CoverageMapper::GetCoverageForName(jsonValue.GetString("coverage"));
    m_coverageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tamLocation")) {
    m_tamLocation = jsonValue.GetString("tamLocation");
    m_tamLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeAccountId")) {
    m_chargeAccountId = jsonValue.GetString("chargeAccountId");
    m_chargeAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ResoldEnterprise::Jsonize() const {
  JsonValue payload;

  if (m_coverageHasBeenSet) {
    payload.WithString("coverage", CoverageMapper::GetNameForCoverage(m_coverage));
  }

  if (m_tamLocationHasBeenSet) {
    payload.WithString("tamLocation", m_tamLocation);
  }

  if (m_chargeAccountIdHasBeenSet) {
    payload.WithString("chargeAccountId", m_chargeAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
