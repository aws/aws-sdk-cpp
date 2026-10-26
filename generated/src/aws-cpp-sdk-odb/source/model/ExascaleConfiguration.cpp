/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ExascaleConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ExascaleConfiguration::ExascaleConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExascaleConfiguration& ExascaleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalStorageSizeInGBs")) {
    m_totalStorageSizeInGBs = jsonValue.GetInteger("totalStorageSizeInGBs");
    m_totalStorageSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableStorageSizeInGBs")) {
    m_availableStorageSizeInGBs = jsonValue.GetInteger("availableStorageSizeInGBs");
    m_availableStorageSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalVmStorageSizeInGBs")) {
    m_totalVmStorageSizeInGBs = jsonValue.GetInteger("totalVmStorageSizeInGBs");
    m_totalVmStorageSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableVmStorageSizeInGBs")) {
    m_availableVmStorageSizeInGBs = jsonValue.GetInteger("availableVmStorageSizeInGBs");
    m_availableVmStorageSizeInGBsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExascaleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_totalStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("totalStorageSizeInGBs", m_totalStorageSizeInGBs);
  }

  if (m_availableStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("availableStorageSizeInGBs", m_availableStorageSizeInGBs);
  }

  if (m_totalVmStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("totalVmStorageSizeInGBs", m_totalVmStorageSizeInGBs);
  }

  if (m_availableVmStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("availableVmStorageSizeInGBs", m_availableVmStorageSizeInGBs);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
