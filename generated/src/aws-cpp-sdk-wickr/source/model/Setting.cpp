/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/Setting.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

Setting::Setting(JsonView jsonValue) { *this = jsonValue; }

Setting& Setting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("optionName")) {
    m_optionName = jsonValue.GetString("optionName");
    m_optionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Setting::Jsonize() const {
  JsonValue payload;

  if (m_optionNameHasBeenSet) {
    payload.WithString("optionName", m_optionName);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
