/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ImportTask.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ImportTask::ImportTask(JsonView jsonValue) { *this = jsonValue; }

ImportTask& ImportTask::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("importID")) {
    m_importID = jsonValue.GetString("importID");
    m_importIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketSource")) {
    m_s3BucketSource = jsonValue.GetObject("s3BucketSource");
    m_s3BucketSourceHasBeenSet = true;
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
    m_status = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("status"));
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

JsonValue ImportTask::Jsonize() const {
  JsonValue payload;

  if (m_importIDHasBeenSet) {
    payload.WithString("importID", m_importID);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_s3BucketSourceHasBeenSet) {
    payload.WithObject("s3BucketSource", m_s3BucketSource.Jsonize());
  }

  if (m_creationDateTimeHasBeenSet) {
    payload.WithString("creationDateTime", m_creationDateTime);
  }

  if (m_endDateTimeHasBeenSet) {
    payload.WithString("endDateTime", m_endDateTime);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ImportStatusMapper::GetNameForImportStatus(m_status));
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
