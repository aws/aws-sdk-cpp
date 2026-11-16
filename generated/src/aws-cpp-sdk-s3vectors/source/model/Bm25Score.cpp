/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/Bm25Score.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {

Bm25Score::Bm25Score(JsonView jsonValue) { *this = jsonValue; }

Bm25Score& Bm25Score::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataKey")) {
    m_metadataKey = jsonValue.GetString("metadataKey");
    m_metadataKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("score")) {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue Bm25Score::Jsonize() const {
  JsonValue payload;

  if (m_metadataKeyHasBeenSet) {
    payload.WithString("metadataKey", m_metadataKey);
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("score", m_score);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
