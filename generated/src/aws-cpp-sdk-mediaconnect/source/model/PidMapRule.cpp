/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/PidMapRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

PidMapRule::PidMapRule(JsonView jsonValue) { *this = jsonValue; }

PidMapRule& PidMapRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("matchExpression")) {
    m_matchExpression = jsonValue.GetString("matchExpression");
    m_matchExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue PidMapRule::Jsonize() const {
  JsonValue payload;

  if (m_matchExpressionHasBeenSet) {
    payload.WithString("matchExpression", m_matchExpression);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", m_action);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
