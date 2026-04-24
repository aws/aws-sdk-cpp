/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/model/MockInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SFN {
namespace Model {

MockInput::MockInput(JsonView jsonValue) { *this = jsonValue; }

MockInput& MockInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("result")) {
    m_result = jsonValue.GetString("result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorOutput")) {
    m_errorOutput = jsonValue.GetObject("errorOutput");
    m_errorOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fieldValidationMode")) {
    m_fieldValidationMode =
        MockResponseValidationModeMapper::GetMockResponseValidationModeForName(jsonValue.GetString("fieldValidationMode"));
    m_fieldValidationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue MockInput::Jsonize() const {
  JsonValue payload;

  if (m_resultHasBeenSet) {
    payload.WithString("result", m_result);
  }

  if (m_errorOutputHasBeenSet) {
    payload.WithObject("errorOutput", m_errorOutput.Jsonize());
  }

  if (m_fieldValidationModeHasBeenSet) {
    payload.WithString("fieldValidationMode",
                       MockResponseValidationModeMapper::GetNameForMockResponseValidationMode(m_fieldValidationMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
