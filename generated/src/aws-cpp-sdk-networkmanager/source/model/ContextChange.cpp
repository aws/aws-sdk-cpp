/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/ContextChange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

ContextChange::ContextChange(JsonView jsonValue) { *this = jsonValue; }

ContextChange& ContextChange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChangeType")) {
    m_changeType = ContextChangeTypeMapper::GetContextChangeTypeForName(jsonValue.GetString("ChangeType"));
    m_changeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Context")) {
    m_context = jsonValue.GetObject("Context");
    m_contextHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextChange::Jsonize() const {
  JsonValue payload;

  if (m_changeTypeHasBeenSet) {
    payload.WithString("ChangeType", ContextChangeTypeMapper::GetNameForContextChangeType(m_changeType));
  }

  if (m_contextHasBeenSet) {
    payload.WithObject("Context", m_context.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
