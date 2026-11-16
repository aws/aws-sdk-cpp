/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/ConversationalPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

ConversationalPayload::ConversationalPayload(JsonView jsonValue) { *this = jsonValue; }

ConversationalPayload& ConversationalPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("unified")) {
    m_unified = jsonValue.GetObject("unified");
    m_unifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationalPayload::Jsonize() const {
  JsonValue payload;

  if (m_unifiedHasBeenSet) {
    payload.WithObject("unified", m_unified.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
