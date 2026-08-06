/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/FunctionRef.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

FunctionRef::FunctionRef(JsonView jsonValue) { *this = jsonValue; }

FunctionRef& FunctionRef::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RunCondition")) {
    m_runCondition = jsonValue.GetString("RunCondition");
    m_runConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionId")) {
    m_functionId = jsonValue.GetString("FunctionId");
    m_functionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionRef::Jsonize() const {
  JsonValue payload;

  if (m_runConditionHasBeenSet) {
    payload.WithString("RunCondition", m_runCondition);
  }

  if (m_functionIdHasBeenSet) {
    payload.WithString("FunctionId", m_functionId);
  }

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
