/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/EffectivePolicyValues.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

EffectivePolicyValues::EffectivePolicyValues(JsonView jsonValue) { *this = jsonValue; }

EffectivePolicyValues& EffectivePolicyValues::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilitySlo")) {
    m_availabilitySlo = jsonValue.GetObject("availabilitySlo");
    m_availabilitySloHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiAzRto")) {
    m_multiAzRto = jsonValue.GetObject("multiAzRto");
    m_multiAzRtoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiAzRpo")) {
    m_multiAzRpo = jsonValue.GetObject("multiAzRpo");
    m_multiAzRpoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiAzDrApproach")) {
    m_multiAzDrApproach = jsonValue.GetObject("multiAzDrApproach");
    m_multiAzDrApproachHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegionRto")) {
    m_multiRegionRto = jsonValue.GetObject("multiRegionRto");
    m_multiRegionRtoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegionRpo")) {
    m_multiRegionRpo = jsonValue.GetObject("multiRegionRpo");
    m_multiRegionRpoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegionDrApproach")) {
    m_multiRegionDrApproach = jsonValue.GetObject("multiRegionDrApproach");
    m_multiRegionDrApproachHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataRecoveryTimeBetweenBackups")) {
    m_dataRecoveryTimeBetweenBackups = jsonValue.GetObject("dataRecoveryTimeBetweenBackups");
    m_dataRecoveryTimeBetweenBackupsHasBeenSet = true;
  }
  return *this;
}

JsonValue EffectivePolicyValues::Jsonize() const {
  JsonValue payload;

  if (m_availabilitySloHasBeenSet) {
    payload.WithObject("availabilitySlo", m_availabilitySlo.Jsonize());
  }

  if (m_multiAzRtoHasBeenSet) {
    payload.WithObject("multiAzRto", m_multiAzRto.Jsonize());
  }

  if (m_multiAzRpoHasBeenSet) {
    payload.WithObject("multiAzRpo", m_multiAzRpo.Jsonize());
  }

  if (m_multiAzDrApproachHasBeenSet) {
    payload.WithObject("multiAzDrApproach", m_multiAzDrApproach.Jsonize());
  }

  if (m_multiRegionRtoHasBeenSet) {
    payload.WithObject("multiRegionRto", m_multiRegionRto.Jsonize());
  }

  if (m_multiRegionRpoHasBeenSet) {
    payload.WithObject("multiRegionRpo", m_multiRegionRpo.Jsonize());
  }

  if (m_multiRegionDrApproachHasBeenSet) {
    payload.WithObject("multiRegionDrApproach", m_multiRegionDrApproach.Jsonize());
  }

  if (m_dataRecoveryTimeBetweenBackupsHasBeenSet) {
    payload.WithObject("dataRecoveryTimeBetweenBackups", m_dataRecoveryTimeBetweenBackups.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
