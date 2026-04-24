/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/RowLevelPermissionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

RowLevelPermissionConfiguration::RowLevelPermissionConfiguration(JsonView jsonValue) { *this = jsonValue; }

RowLevelPermissionConfiguration& RowLevelPermissionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TagConfiguration")) {
    m_tagConfiguration = jsonValue.GetObject("TagConfiguration");
    m_tagConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RowLevelPermissionDataSet")) {
    m_rowLevelPermissionDataSet = jsonValue.GetObject("RowLevelPermissionDataSet");
    m_rowLevelPermissionDataSetHasBeenSet = true;
  }
  return *this;
}

JsonValue RowLevelPermissionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tagConfigurationHasBeenSet) {
    payload.WithObject("TagConfiguration", m_tagConfiguration.Jsonize());
  }

  if (m_rowLevelPermissionDataSetHasBeenSet) {
    payload.WithObject("RowLevelPermissionDataSet", m_rowLevelPermissionDataSet.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
