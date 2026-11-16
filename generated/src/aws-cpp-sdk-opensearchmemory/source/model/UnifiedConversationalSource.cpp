/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/UnifiedConversationalSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

UnifiedConversationalSource::UnifiedConversationalSource(JsonView jsonValue) { *this = jsonValue; }

UnifiedConversationalSource& UnifiedConversationalSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("object")) {
    m_object = jsonValue.GetObject("object");
    m_objectHasBeenSet = true;
  }
  return *this;
}

JsonValue UnifiedConversationalSource::Jsonize() const {
  JsonValue payload;

  if (m_objectHasBeenSet) {
    payload.WithObject("object", m_object.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
