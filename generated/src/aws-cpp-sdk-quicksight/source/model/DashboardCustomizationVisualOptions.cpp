/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DashboardCustomizationVisualOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DashboardCustomizationVisualOptions::DashboardCustomizationVisualOptions(JsonView jsonValue) { *this = jsonValue; }

DashboardCustomizationVisualOptions& DashboardCustomizationVisualOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldsConfiguration")) {
    m_fieldsConfiguration = jsonValue.GetObject("FieldsConfiguration");
    m_fieldsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DashboardCustomizationVisualOptions::Jsonize() const {
  JsonValue payload;

  if (m_fieldsConfigurationHasBeenSet) {
    payload.WithObject("FieldsConfiguration", m_fieldsConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
