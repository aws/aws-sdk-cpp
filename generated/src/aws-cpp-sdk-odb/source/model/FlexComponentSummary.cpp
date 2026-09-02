/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/FlexComponentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

FlexComponentSummary::FlexComponentSummary(JsonView jsonValue) { *this = jsonValue; }

FlexComponentSummary& FlexComponentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availableCoreCount")) {
    m_availableCoreCount = jsonValue.GetInteger("availableCoreCount");
    m_availableCoreCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableDbStorageInGBs")) {
    m_availableDbStorageInGBs = jsonValue.GetInteger("availableDbStorageInGBs");
    m_availableDbStorageInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableLocalStorageInGBs")) {
    m_availableLocalStorageInGBs = jsonValue.GetInteger("availableLocalStorageInGBs");
    m_availableLocalStorageInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableMemoryInGBs")) {
    m_availableMemoryInGBs = jsonValue.GetInteger("availableMemoryInGBs");
    m_availableMemoryInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeModel")) {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("descriptionSummary")) {
    m_descriptionSummary = jsonValue.GetString("descriptionSummary");
    m_descriptionSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hardwareType")) {
    m_hardwareType = HardwareTypeMapper::GetHardwareTypeForName(jsonValue.GetString("hardwareType"));
    m_hardwareTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumCoreCount")) {
    m_minimumCoreCount = jsonValue.GetInteger("minimumCoreCount");
    m_minimumCoreCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtimeMinimumCoreCount")) {
    m_runtimeMinimumCoreCount = jsonValue.GetInteger("runtimeMinimumCoreCount");
    m_runtimeMinimumCoreCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shape")) {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  return *this;
}

JsonValue FlexComponentSummary::Jsonize() const {
  JsonValue payload;

  if (m_availableCoreCountHasBeenSet) {
    payload.WithInteger("availableCoreCount", m_availableCoreCount);
  }

  if (m_availableDbStorageInGBsHasBeenSet) {
    payload.WithInteger("availableDbStorageInGBs", m_availableDbStorageInGBs);
  }

  if (m_availableLocalStorageInGBsHasBeenSet) {
    payload.WithInteger("availableLocalStorageInGBs", m_availableLocalStorageInGBs);
  }

  if (m_availableMemoryInGBsHasBeenSet) {
    payload.WithInteger("availableMemoryInGBs", m_availableMemoryInGBs);
  }

  if (m_computeModelHasBeenSet) {
    payload.WithString("computeModel", ComputeModelMapper::GetNameForComputeModel(m_computeModel));
  }

  if (m_descriptionSummaryHasBeenSet) {
    payload.WithString("descriptionSummary", m_descriptionSummary);
  }

  if (m_hardwareTypeHasBeenSet) {
    payload.WithString("hardwareType", HardwareTypeMapper::GetNameForHardwareType(m_hardwareType));
  }

  if (m_minimumCoreCountHasBeenSet) {
    payload.WithInteger("minimumCoreCount", m_minimumCoreCount);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_runtimeMinimumCoreCountHasBeenSet) {
    payload.WithInteger("runtimeMinimumCoreCount", m_runtimeMinimumCoreCount);
  }

  if (m_shapeHasBeenSet) {
    payload.WithString("shape", m_shape);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
