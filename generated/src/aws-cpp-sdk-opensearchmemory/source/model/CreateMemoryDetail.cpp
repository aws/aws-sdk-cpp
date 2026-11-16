/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/CreateMemoryDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

CreateMemoryDetail::CreateMemoryDetail(JsonView jsonValue) { *this = jsonValue; }

CreateMemoryDetail& CreateMemoryDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memoryId")) {
    m_memoryId = jsonValue.GetString("memoryId");
    m_memoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorId")) {
    m_actorId = jsonValue.GetString("actorId");
    m_actorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateMemoryDetail::Jsonize() const {
  JsonValue payload;

  if (m_memoryIdHasBeenSet) {
    payload.WithString("memoryId", m_memoryId);
  }

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
