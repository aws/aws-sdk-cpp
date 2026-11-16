/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/QueryField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

QueryField::QueryField(JsonView jsonValue) { *this = jsonValue; }

QueryField& QueryField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryField::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
