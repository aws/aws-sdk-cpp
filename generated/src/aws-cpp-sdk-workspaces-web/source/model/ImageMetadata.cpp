/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/ImageMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

ImageMetadata::ImageMetadata(JsonView jsonValue) { *this = jsonValue; }

ImageMetadata& ImageMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mimeType")) {
    m_mimeType = MimeTypeMapper::GetMimeTypeForName(jsonValue.GetString("mimeType"));
    m_mimeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileExtension")) {
    m_fileExtension = jsonValue.GetString("fileExtension");
    m_fileExtensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUploadTimestamp")) {
    m_lastUploadTimestamp = jsonValue.GetDouble("lastUploadTimestamp");
    m_lastUploadTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageMetadata::Jsonize() const {
  JsonValue payload;

  if (m_mimeTypeHasBeenSet) {
    payload.WithString("mimeType", MimeTypeMapper::GetNameForMimeType(m_mimeType));
  }

  if (m_fileExtensionHasBeenSet) {
    payload.WithString("fileExtension", m_fileExtension);
  }

  if (m_lastUploadTimestampHasBeenSet) {
    payload.WithDouble("lastUploadTimestamp", m_lastUploadTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
