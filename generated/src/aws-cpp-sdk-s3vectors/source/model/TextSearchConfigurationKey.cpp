/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/TextSearchConfigurationKey.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {

TextSearchConfigurationKey::TextSearchConfigurationKey(JsonView jsonValue) { *this = jsonValue; }

TextSearchConfigurationKey& TextSearchConfigurationKey::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataKey")) {
    m_metadataKey = jsonValue.GetString("metadataKey");
    m_metadataKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue TextSearchConfigurationKey::Jsonize() const {
  JsonValue payload;

  if (m_metadataKeyHasBeenSet) {
    payload.WithString("metadataKey", m_metadataKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
