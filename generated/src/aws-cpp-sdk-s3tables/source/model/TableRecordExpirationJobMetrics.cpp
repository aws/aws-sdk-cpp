/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/TableRecordExpirationJobMetrics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

TableRecordExpirationJobMetrics::TableRecordExpirationJobMetrics(JsonView jsonValue) { *this = jsonValue; }

TableRecordExpirationJobMetrics& TableRecordExpirationJobMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deletedDataFiles")) {
    m_deletedDataFiles = jsonValue.GetInt64("deletedDataFiles");
    m_deletedDataFilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletedRecords")) {
    m_deletedRecords = jsonValue.GetInt64("deletedRecords");
    m_deletedRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("removedFilesSize")) {
    m_removedFilesSize = jsonValue.GetInt64("removedFilesSize");
    m_removedFilesSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue TableRecordExpirationJobMetrics::Jsonize() const {
  JsonValue payload;

  if (m_deletedDataFilesHasBeenSet) {
    payload.WithInt64("deletedDataFiles", m_deletedDataFiles);
  }

  if (m_deletedRecordsHasBeenSet) {
    payload.WithInt64("deletedRecords", m_deletedRecords);
  }

  if (m_removedFilesSizeHasBeenSet) {
    payload.WithInt64("removedFilesSize", m_removedFilesSize);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
