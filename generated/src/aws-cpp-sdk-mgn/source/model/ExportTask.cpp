/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ExportTask.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ExportTask::ExportTask(JsonView jsonValue) { *this = jsonValue; }

ExportTask& ExportTask::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exportID")) {
    m_exportID = jsonValue.GetString("exportID");
    m_exportIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Bucket")) {
    m_s3Bucket = jsonValue.GetString("s3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Key")) {
    m_s3Key = jsonValue.GetString("s3Key");
    m_s3KeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketOwner")) {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationDateTime")) {
    m_creationDateTime = jsonValue.GetString("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDateTime")) {
    m_endDateTime = jsonValue.GetString("endDateTime");
    m_endDateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("progressPercentage")) {
    m_progressPercentage = jsonValue.GetDouble("progressPercentage");
    m_progressPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetObject("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportTask::Jsonize() const {
  JsonValue payload;

  if (m_exportIDHasBeenSet) {
    payload.WithString("exportID", m_exportID);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_s3BucketHasBeenSet) {
    payload.WithString("s3Bucket", m_s3Bucket);
  }

  if (m_s3KeyHasBeenSet) {
    payload.WithString("s3Key", m_s3Key);
  }

  if (m_s3BucketOwnerHasBeenSet) {
    payload.WithString("s3BucketOwner", m_s3BucketOwner);
  }

  if (m_creationDateTimeHasBeenSet) {
    payload.WithString("creationDateTime", m_creationDateTime);
  }

  if (m_endDateTimeHasBeenSet) {
    payload.WithString("endDateTime", m_endDateTime);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ExportStatusMapper::GetNameForExportStatus(m_status));
  }

  if (m_progressPercentageHasBeenSet) {
    payload.WithDouble("progressPercentage", m_progressPercentage);
  }

  if (m_summaryHasBeenSet) {
    payload.WithObject("summary", m_summary.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
