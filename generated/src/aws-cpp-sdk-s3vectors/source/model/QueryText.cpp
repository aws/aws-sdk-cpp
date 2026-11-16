/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/QueryText.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {

QueryText::QueryText(JsonView jsonValue) { *this = jsonValue; }

QueryText& QueryText::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadataKey")) {
    m_metadataKey = jsonValue.GetString("metadataKey");
    m_metadataKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryText::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_metadataKeyHasBeenSet) {
    payload.WithString("metadataKey", m_metadataKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
