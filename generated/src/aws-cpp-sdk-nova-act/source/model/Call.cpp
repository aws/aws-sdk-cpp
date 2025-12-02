/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/Call.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

Call::Call(JsonView jsonValue) { *this = jsonValue; }

Call& Call::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("callId")) {
    m_callId = jsonValue.GetString("callId");
    m_callIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue Call::Jsonize() const {
  JsonValue payload;

  if (m_callIdHasBeenSet) {
    payload.WithString("callId", m_callId);
  }

  if (m_inputHasBeenSet) {
    if (!m_input.View().IsNull()) {
      payload.WithObject("input", JsonValue(m_input.View()));
    }
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
