/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/StopCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

StopCondition::StopCondition(JsonView jsonValue) { *this = jsonValue; }

StopCondition& StopCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = StopConditionSourceMapper::GetStopConditionSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue StopCondition::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("source", StopConditionSourceMapper::GetNameForStopConditionSource(m_source));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
