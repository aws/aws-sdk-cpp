/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/BlobPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

BlobPayload::BlobPayload(JsonView jsonValue) { *this = jsonValue; }

BlobPayload& BlobPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentType")) {
    m_contentType = BlobContentTypeMapper::GetBlobContentTypeForName(jsonValue.GetString("contentType"));
    m_contentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue BlobPayload::Jsonize() const {
  JsonValue payload;

  if (m_contentTypeHasBeenSet) {
    payload.WithString("contentType", BlobContentTypeMapper::GetNameForBlobContentType(m_contentType));
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
