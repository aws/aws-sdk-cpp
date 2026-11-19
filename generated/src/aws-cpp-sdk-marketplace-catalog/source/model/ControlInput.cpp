/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ControlInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ControlInput::ControlInput(JsonView jsonValue) { *this = jsonValue; }

ControlInput& ControlInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ControlId")) {
    m_controlId = jsonValue.GetString("ControlId");
    m_controlIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Input")) {
    m_input = jsonValue.GetObject("Input");
    m_inputHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlInput::Jsonize() const {
  JsonValue payload;

  if (m_controlIdHasBeenSet) {
    payload.WithString("ControlId", m_controlId);
  }

  if (m_inputHasBeenSet) {
    if (!m_input.View().IsNull()) {
      payload.WithObject("Input", JsonValue(m_input.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
