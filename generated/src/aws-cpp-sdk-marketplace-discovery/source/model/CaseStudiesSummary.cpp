/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/CaseStudiesSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

CaseStudiesSummary::CaseStudiesSummary(JsonView jsonValue) { *this = jsonValue; }

CaseStudiesSummary& CaseStudiesSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseStudyCount")) {
    m_caseStudyCount = jsonValue.GetInt64("caseStudyCount");
    m_caseStudyCountHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseStudiesSummary::Jsonize() const {
  JsonValue payload;

  if (m_caseStudyCountHasBeenSet) {
    payload.WithInt64("caseStudyCount", m_caseStudyCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
