/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/PercentageRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

PercentageRange::PercentageRange(JsonView jsonValue) { *this = jsonValue; }

PercentageRange& PercentageRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minValue")) {
    m_minValue = jsonValue.GetString("minValue");
    m_minValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxValue")) {
    m_maxValue = jsonValue.GetString("maxValue");
    m_maxValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultValue")) {
    m_defaultValue = jsonValue.GetString("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  return *this;
}

JsonValue PercentageRange::Jsonize() const {
  JsonValue payload;

  if (m_minValueHasBeenSet) {
    payload.WithString("minValue", m_minValue);
  }

  if (m_maxValueHasBeenSet) {
    payload.WithString("maxValue", m_maxValue);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("defaultValue", m_defaultValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
