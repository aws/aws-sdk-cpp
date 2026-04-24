/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/ModelLifecycle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

ModelLifecycle::ModelLifecycle(JsonView jsonValue) { *this = jsonValue; }

ModelLifecycle& ModelLifecycle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelLifecycle::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
