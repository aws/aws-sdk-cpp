/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/IngestionStreamS3Source.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

IngestionStreamS3Source::IngestionStreamS3Source(JsonView jsonValue) { *this = jsonValue; }

IngestionStreamS3Source& IngestionStreamS3Source::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sqsArn")) {
    m_sqsArn = jsonValue.GetString("sqsArn");
    m_sqsArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buckets")) {
    Aws::Utils::Array<JsonView> bucketsJsonList = jsonValue.GetArray("buckets");
    for (unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex) {
      m_buckets.push_back(bucketsJsonList[bucketsIndex].AsObject());
    }
    m_bucketsHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestionStreamS3Source::Jsonize() const {
  JsonValue payload;

  if (m_sqsArnHasBeenSet) {
    payload.WithString("sqsArn", m_sqsArn);
  }

  if (m_bucketsHasBeenSet) {
    Aws::Utils::Array<JsonValue> bucketsJsonList(m_buckets.size());
    for (unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex) {
      bucketsJsonList[bucketsIndex].AsObject(m_buckets[bucketsIndex].Jsonize());
    }
    payload.WithArray("buckets", std::move(bucketsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
