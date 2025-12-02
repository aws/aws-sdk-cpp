/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/ToolSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

ToolSpec::ToolSpec(JsonView jsonValue) { *this = jsonValue; }

ToolSpec& ToolSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputSchema")) {
    m_inputSchema = jsonValue.GetObject("inputSchema");
    m_inputSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolSpec::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_inputSchemaHasBeenSet) {
    payload.WithObject("inputSchema", m_inputSchema.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
