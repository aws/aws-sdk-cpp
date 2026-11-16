/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/MessageContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

MessageContent::MessageContent(JsonView jsonValue) { *this = jsonValue; }

MessageContent& MessageContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageContent::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
