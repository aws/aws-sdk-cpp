/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/SupportPlan.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

SupportPlan::SupportPlan(JsonView jsonValue) { *this = jsonValue; }

SupportPlan& SupportPlan::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resoldEnterprise")) {
    m_resoldEnterprise = jsonValue.GetObject("resoldEnterprise");
    m_resoldEnterpriseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partnerLedSupport")) {
    m_partnerLedSupport = jsonValue.GetObject("partnerLedSupport");
    m_partnerLedSupportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resoldUnifiedOperations")) {
    m_resoldUnifiedOperations = jsonValue.GetObject("resoldUnifiedOperations");
    m_resoldUnifiedOperationsHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportPlan::Jsonize() const {
  JsonValue payload;

  if (m_resoldEnterpriseHasBeenSet) {
    payload.WithObject("resoldEnterprise", m_resoldEnterprise.Jsonize());
  }

  if (m_partnerLedSupportHasBeenSet) {
    payload.WithObject("partnerLedSupport", m_partnerLedSupport.Jsonize());
  }

  if (m_resoldUnifiedOperationsHasBeenSet) {
    payload.WithObject("resoldUnifiedOperations", m_resoldUnifiedOperations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
