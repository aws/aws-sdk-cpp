/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/EventPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

EventPayload::EventPayload(JsonView jsonValue) { *this = jsonValue; }

EventPayload& EventPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("conversational")) {
    m_conversational = jsonValue.GetObject("conversational");
    m_conversationalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("structuredData")) {
    m_structuredData = jsonValue.GetObject("structuredData");
    m_structuredDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blob")) {
    m_blob = jsonValue.GetObject("blob");
    m_blobHasBeenSet = true;
  }
  return *this;
}

JsonValue EventPayload::Jsonize() const {
  JsonValue payload;

  if (m_conversationalHasBeenSet) {
    payload.WithObject("conversational", m_conversational.Jsonize());
  }

  if (m_structuredDataHasBeenSet) {
    payload.WithObject("structuredData", m_structuredData.Jsonize());
  }

  if (m_blobHasBeenSet) {
    payload.WithObject("blob", m_blob.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
