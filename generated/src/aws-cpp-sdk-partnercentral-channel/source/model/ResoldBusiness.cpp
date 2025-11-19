/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ResoldBusiness.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ResoldBusiness::ResoldBusiness(JsonView jsonValue) { *this = jsonValue; }

ResoldBusiness& ResoldBusiness::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coverage")) {
    m_coverage = CoverageMapper::GetCoverageForName(jsonValue.GetString("coverage"));
    m_coverageHasBeenSet = true;
  }
  return *this;
}

JsonValue ResoldBusiness::Jsonize() const {
  JsonValue payload;

  if (m_coverageHasBeenSet) {
    payload.WithString("coverage", CoverageMapper::GetNameForCoverage(m_coverage));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
