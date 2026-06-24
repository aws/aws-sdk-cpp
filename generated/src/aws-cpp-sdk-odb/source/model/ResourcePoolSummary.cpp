/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ResourcePoolSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ResourcePoolSummary::ResourcePoolSummary(JsonView jsonValue) { *this = jsonValue; }

ResourcePoolSummary& ResourcePoolSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isDisabled")) {
    m_isDisabled = jsonValue.GetBool("isDisabled");
    m_isDisabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("poolSize")) {
    m_poolSize = jsonValue.GetInteger("poolSize");
    m_poolSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("poolStorageSizeInTBs")) {
    m_poolStorageSizeInTBs = jsonValue.GetInteger("poolStorageSizeInTBs");
    m_poolStorageSizeInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableStorageCapacityInTBs")) {
    m_availableStorageCapacityInTBs = jsonValue.GetDouble("availableStorageCapacityInTBs");
    m_availableStorageCapacityInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalComputeCapacity")) {
    m_totalComputeCapacity = jsonValue.GetInteger("totalComputeCapacity");
    m_totalComputeCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableComputeCapacity")) {
    m_availableComputeCapacity = jsonValue.GetInteger("availableComputeCapacity");
    m_availableComputeCapacityHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcePoolSummary::Jsonize() const {
  JsonValue payload;

  if (m_isDisabledHasBeenSet) {
    payload.WithBool("isDisabled", m_isDisabled);
  }

  if (m_poolSizeHasBeenSet) {
    payload.WithInteger("poolSize", m_poolSize);
  }

  if (m_poolStorageSizeInTBsHasBeenSet) {
    payload.WithInteger("poolStorageSizeInTBs", m_poolStorageSizeInTBs);
  }

  if (m_availableStorageCapacityInTBsHasBeenSet) {
    payload.WithDouble("availableStorageCapacityInTBs", m_availableStorageCapacityInTBs);
  }

  if (m_totalComputeCapacityHasBeenSet) {
    payload.WithInteger("totalComputeCapacity", m_totalComputeCapacity);
  }

  if (m_availableComputeCapacityHasBeenSet) {
    payload.WithInteger("availableComputeCapacity", m_availableComputeCapacity);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
