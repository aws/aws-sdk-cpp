/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/PolicySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

PolicySummary::PolicySummary(JsonView jsonValue) { *this = jsonValue; }

PolicySummary& PolicySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilitySlo")) {
    m_availabilitySlo = jsonValue.GetObject("availabilitySlo");
    m_availabilitySloHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiAz")) {
    m_multiAz = jsonValue.GetObject("multiAz");
    m_multiAzHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegion")) {
    m_multiRegion = jsonValue.GetObject("multiRegion");
    m_multiRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataRecovery")) {
    m_dataRecovery = jsonValue.GetObject("dataRecovery");
    m_dataRecoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedServiceCount")) {
    m_associatedServiceCount = jsonValue.GetInteger("associatedServiceCount");
    m_associatedServiceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicySummary::Jsonize() const {
  JsonValue payload;

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_availabilitySloHasBeenSet) {
    payload.WithObject("availabilitySlo", m_availabilitySlo.Jsonize());
  }

  if (m_multiAzHasBeenSet) {
    payload.WithObject("multiAz", m_multiAz.Jsonize());
  }

  if (m_multiRegionHasBeenSet) {
    payload.WithObject("multiRegion", m_multiRegion.Jsonize());
  }

  if (m_dataRecoveryHasBeenSet) {
    payload.WithObject("dataRecovery", m_dataRecovery.Jsonize());
  }

  if (m_associatedServiceCountHasBeenSet) {
    payload.WithInteger("associatedServiceCount", m_associatedServiceCount);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
