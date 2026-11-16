/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/TextSearchConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {

TextSearchConfiguration::TextSearchConfiguration(JsonView jsonValue) { *this = jsonValue; }

TextSearchConfiguration& TextSearchConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataKey")) {
    m_metadataKey = jsonValue.GetString("metadataKey");
    m_metadataKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("language")) {
    m_language = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AnalyzerStatusMapper::GetAnalyzerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue TextSearchConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_metadataKeyHasBeenSet) {
    payload.WithString("metadataKey", m_metadataKey);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", LanguageCodeMapper::GetNameForLanguageCode(m_language));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AnalyzerStatusMapper::GetNameForAnalyzerStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
