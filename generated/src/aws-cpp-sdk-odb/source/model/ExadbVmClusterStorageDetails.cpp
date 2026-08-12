/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ExadbVmClusterStorageDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ExadbVmClusterStorageDetails::ExadbVmClusterStorageDetails(JsonView jsonValue) { *this = jsonValue; }

ExadbVmClusterStorageDetails& ExadbVmClusterStorageDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalSizeInGBs")) {
    m_totalSizeInGBs = jsonValue.GetInteger("totalSizeInGBs");
    m_totalSizeInGBsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExadbVmClusterStorageDetails::Jsonize() const {
  JsonValue payload;

  if (m_totalSizeInGBsHasBeenSet) {
    payload.WithInteger("totalSizeInGBs", m_totalSizeInGBs);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
