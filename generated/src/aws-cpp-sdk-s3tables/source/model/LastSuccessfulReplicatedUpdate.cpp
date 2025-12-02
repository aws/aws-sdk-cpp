/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/LastSuccessfulReplicatedUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

LastSuccessfulReplicatedUpdate::LastSuccessfulReplicatedUpdate(JsonView jsonValue) { *this = jsonValue; }

LastSuccessfulReplicatedUpdate& LastSuccessfulReplicatedUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataLocation")) {
    m_metadataLocation = jsonValue.GetString("metadataLocation");
    m_metadataLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue LastSuccessfulReplicatedUpdate::Jsonize() const {
  JsonValue payload;

  if (m_metadataLocationHasBeenSet) {
    payload.WithString("metadataLocation", m_metadataLocation);
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
