/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DatabaseTool.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

DatabaseTool::DatabaseTool(JsonView jsonValue) { *this = jsonValue; }

DatabaseTool& DatabaseTool::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isEnabled")) {
    m_isEnabled = jsonValue.GetBool("isEnabled");
    m_isEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeCount")) {
    m_computeCount = jsonValue.GetDouble("computeCount");
    m_computeCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxIdleTimeInMinutes")) {
    m_maxIdleTimeInMinutes = jsonValue.GetInteger("maxIdleTimeInMinutes");
    m_maxIdleTimeInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseTool::Jsonize() const {
  JsonValue payload;

  if (m_isEnabledHasBeenSet) {
    payload.WithBool("isEnabled", m_isEnabled);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_computeCountHasBeenSet) {
    payload.WithDouble("computeCount", m_computeCount);
  }

  if (m_maxIdleTimeInMinutesHasBeenSet) {
    payload.WithInteger("maxIdleTimeInMinutes", m_maxIdleTimeInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
