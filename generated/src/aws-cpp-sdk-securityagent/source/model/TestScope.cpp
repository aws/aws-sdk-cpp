/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/TestScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

TestScope::TestScope(JsonView jsonValue) { *this = jsonValue; }

TestScope& TestScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = TestScopeTypeMapper::GetTestScopeTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue TestScope::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", TestScopeTypeMapper::GetNameForTestScopeType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
