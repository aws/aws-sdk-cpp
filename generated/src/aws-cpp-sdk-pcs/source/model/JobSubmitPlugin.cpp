/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/JobSubmitPlugin.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

JobSubmitPlugin::JobSubmitPlugin(JsonView jsonValue) { *this = jsonValue; }

JobSubmitPlugin& JobSubmitPlugin::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = JobSubmitPluginTypeMapper::GetJobSubmitPluginTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scriptSource")) {
    m_scriptSource = jsonValue.GetObject("scriptSource");
    m_scriptSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue JobSubmitPlugin::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", JobSubmitPluginTypeMapper::GetNameForJobSubmitPluginType(m_type));
  }

  if (m_scriptSourceHasBeenSet) {
    payload.WithObject("scriptSource", m_scriptSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
