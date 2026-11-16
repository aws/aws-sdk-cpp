/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/Message.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

Message::Message(JsonView jsonValue) { *this = jsonValue; }

Message& Message::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = MessageRoleMapper::GetMessageRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue Message::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", MessageRoleMapper::GetNameForMessageRole(m_role));
  }

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
