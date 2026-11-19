/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/RecordingData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

RecordingData::RecordingData(JsonView jsonValue) { *this = jsonValue; }

RecordingData& RecordingData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3Url")) {
    m_s3Url = jsonValue.GetString("S3Url");
    m_s3UrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Bytes")) {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("Bytes"));
    m_bytesHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordingData::Jsonize() const {
  JsonValue payload;

  if (m_s3UrlHasBeenSet) {
    payload.WithString("S3Url", m_s3Url);
  }

  if (m_bytesHasBeenSet) {
    payload.WithString("Bytes", HashingUtils::Base64Encode(m_bytes));
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
