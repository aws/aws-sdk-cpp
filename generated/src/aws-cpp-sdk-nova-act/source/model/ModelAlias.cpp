/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/ModelAlias.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

ModelAlias::ModelAlias(JsonView jsonValue) { *this = jsonValue; }

ModelAlias& ModelAlias::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aliasName")) {
    m_aliasName = jsonValue.GetString("aliasName");
    m_aliasNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestModelId")) {
    m_latestModelId = jsonValue.GetString("latestModelId");
    m_latestModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolvedModelId")) {
    m_resolvedModelId = jsonValue.GetString("resolvedModelId");
    m_resolvedModelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelAlias::Jsonize() const {
  JsonValue payload;

  if (m_aliasNameHasBeenSet) {
    payload.WithString("aliasName", m_aliasName);
  }

  if (m_latestModelIdHasBeenSet) {
    payload.WithString("latestModelId", m_latestModelId);
  }

  if (m_resolvedModelIdHasBeenSet) {
    payload.WithString("resolvedModelId", m_resolvedModelId);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
