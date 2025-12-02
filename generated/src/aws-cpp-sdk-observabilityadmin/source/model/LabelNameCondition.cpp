/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/LabelNameCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

LabelNameCondition::LabelNameCondition(JsonView jsonValue) { *this = jsonValue; }

LabelNameCondition& LabelNameCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LabelName")) {
    m_labelName = jsonValue.GetString("LabelName");
    m_labelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue LabelNameCondition::Jsonize() const {
  JsonValue payload;

  if (m_labelNameHasBeenSet) {
    payload.WithString("LabelName", m_labelName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
