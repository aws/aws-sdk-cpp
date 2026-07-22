/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/ScriptSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

ScriptSource::ScriptSource(JsonView jsonValue) { *this = jsonValue; }

ScriptSource& ScriptSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scriptLocation")) {
    m_scriptLocation = jsonValue.GetString("scriptLocation");
    m_scriptLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3VersionId")) {
    m_s3VersionId = jsonValue.GetString("s3VersionId");
    m_s3VersionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checksum")) {
    m_checksum = jsonValue.GetString("checksum");
    m_checksumHasBeenSet = true;
  }
  return *this;
}

JsonValue ScriptSource::Jsonize() const {
  JsonValue payload;

  if (m_scriptLocationHasBeenSet) {
    payload.WithString("scriptLocation", m_scriptLocation);
  }

  if (m_s3VersionIdHasBeenSet) {
    payload.WithString("s3VersionId", m_s3VersionId);
  }

  if (m_checksumHasBeenSet) {
    payload.WithString("checksum", m_checksum);
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
