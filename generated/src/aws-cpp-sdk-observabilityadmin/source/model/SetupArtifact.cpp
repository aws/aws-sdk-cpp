/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/SetupArtifact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

SetupArtifact::SetupArtifact(JsonView jsonValue) { *this = jsonValue; }

SetupArtifact& SetupArtifact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FileName")) {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Content")) {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Format")) {
    m_format = SetupFormatMapper::GetSetupFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContentType")) {
    m_contentType = jsonValue.GetString("ContentType");
    m_contentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SetupArtifact::Jsonize() const {
  JsonValue payload;

  if (m_fileNameHasBeenSet) {
    payload.WithString("FileName", m_fileName);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("Content", m_content);
  }

  if (m_formatHasBeenSet) {
    payload.WithString("Format", SetupFormatMapper::GetNameForSetupFormat(m_format));
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("ContentType", m_contentType);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
