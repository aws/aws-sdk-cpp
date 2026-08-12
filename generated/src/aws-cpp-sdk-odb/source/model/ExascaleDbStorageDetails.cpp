/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ExascaleDbStorageDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ExascaleDbStorageDetails::ExascaleDbStorageDetails(JsonView jsonValue) { *this = jsonValue; }

ExascaleDbStorageDetails& ExascaleDbStorageDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availableSizeInGBs")) {
    m_availableSizeInGBs = jsonValue.GetInteger("availableSizeInGBs");
    m_availableSizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSizeInGBs")) {
    m_totalSizeInGBs = jsonValue.GetInteger("totalSizeInGBs");
    m_totalSizeInGBsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExascaleDbStorageDetails::Jsonize() const {
  JsonValue payload;

  if (m_availableSizeInGBsHasBeenSet) {
    payload.WithInteger("availableSizeInGBs", m_availableSizeInGBs);
  }

  if (m_totalSizeInGBsHasBeenSet) {
    payload.WithInteger("totalSizeInGBs", m_totalSizeInGBs);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
