/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/ValidationFindingScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

ValidationFindingScope::ValidationFindingScope(JsonView jsonValue) { *this = jsonValue; }

ValidationFindingScope& ValidationFindingScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = ValidationFindingScopeTypeMapper::GetValidationFindingScopeTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationFindingScope::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ValidationFindingScopeTypeMapper::GetNameForValidationFindingScopeType(m_type));
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
