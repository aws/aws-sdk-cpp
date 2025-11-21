/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rum/model/JavaScriptSourceMaps.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchRUM {
namespace Model {

JavaScriptSourceMaps::JavaScriptSourceMaps(JsonView jsonValue) { *this = jsonValue; }

JavaScriptSourceMaps& JavaScriptSourceMaps::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = DeobfuscationStatusMapper::GetDeobfuscationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3Uri")) {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue JavaScriptSourceMaps::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DeobfuscationStatusMapper::GetNameForDeobfuscationStatus(m_status));
  }

  if (m_s3UriHasBeenSet) {
    payload.WithString("S3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchRUM
}  // namespace Aws
