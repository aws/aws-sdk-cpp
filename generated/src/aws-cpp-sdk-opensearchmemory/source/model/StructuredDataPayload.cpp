/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/StructuredDataPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

StructuredDataPayload::StructuredDataPayload(JsonView jsonValue) { *this = jsonValue; }

StructuredDataPayload& StructuredDataPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue StructuredDataPayload::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
