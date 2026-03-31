/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ImportFileEnrichment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ImportFileEnrichment::ImportFileEnrichment(JsonView jsonValue) { *this = jsonValue; }

ImportFileEnrichment& ImportFileEnrichment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobID")) {
    m_jobID = jsonValue.GetString("jobID");
    m_jobIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ImportFileEnrichmentStatusMapper::GetImportFileEnrichmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusDetails")) {
    m_statusDetails = jsonValue.GetString("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checksum")) {
    m_checksum = jsonValue.GetObject("checksum");
    m_checksumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketTarget")) {
    m_s3BucketTarget = jsonValue.GetObject("s3BucketTarget");
    m_s3BucketTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportFileEnrichment::Jsonize() const {
  JsonValue payload;

  if (m_jobIDHasBeenSet) {
    payload.WithString("jobID", m_jobID);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ImportFileEnrichmentStatusMapper::GetNameForImportFileEnrichmentStatus(m_status));
  }

  if (m_statusDetailsHasBeenSet) {
    payload.WithString("statusDetails", m_statusDetails);
  }

  if (m_checksumHasBeenSet) {
    payload.WithObject("checksum", m_checksum.Jsonize());
  }

  if (m_s3BucketTargetHasBeenSet) {
    payload.WithObject("s3BucketTarget", m_s3BucketTarget.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
