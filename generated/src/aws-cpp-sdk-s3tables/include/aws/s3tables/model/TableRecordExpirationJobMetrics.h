/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>Provides metrics for the record expiration job that most recently ran for a
 * table. The metrics provide insight into the amount of data that was removed when
 * the job ran.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableRecordExpirationJobMetrics">AWS
 * API Reference</a></p>
 */
class TableRecordExpirationJobMetrics {
 public:
  AWS_S3TABLES_API TableRecordExpirationJobMetrics() = default;
  AWS_S3TABLES_API TableRecordExpirationJobMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TableRecordExpirationJobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of data files that were removed when the job ran.</p>
   */
  inline long long GetDeletedDataFiles() const { return m_deletedDataFiles; }
  inline bool DeletedDataFilesHasBeenSet() const { return m_deletedDataFilesHasBeenSet; }
  inline void SetDeletedDataFiles(long long value) {
    m_deletedDataFilesHasBeenSet = true;
    m_deletedDataFiles = value;
  }
  inline TableRecordExpirationJobMetrics& WithDeletedDataFiles(long long value) {
    SetDeletedDataFiles(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of records that were removed when the job ran.</p>
   */
  inline long long GetDeletedRecords() const { return m_deletedRecords; }
  inline bool DeletedRecordsHasBeenSet() const { return m_deletedRecordsHasBeenSet; }
  inline void SetDeletedRecords(long long value) {
    m_deletedRecordsHasBeenSet = true;
    m_deletedRecords = value;
  }
  inline TableRecordExpirationJobMetrics& WithDeletedRecords(long long value) {
    SetDeletedRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total size (in bytes) of the data files that were removed when the job
   * ran.</p>
   */
  inline long long GetRemovedFilesSize() const { return m_removedFilesSize; }
  inline bool RemovedFilesSizeHasBeenSet() const { return m_removedFilesSizeHasBeenSet; }
  inline void SetRemovedFilesSize(long long value) {
    m_removedFilesSizeHasBeenSet = true;
    m_removedFilesSize = value;
  }
  inline TableRecordExpirationJobMetrics& WithRemovedFilesSize(long long value) {
    SetRemovedFilesSize(value);
    return *this;
  }
  ///@}
 private:
  long long m_deletedDataFiles{0};

  long long m_deletedRecords{0};

  long long m_removedFilesSize{0};
  bool m_deletedDataFilesHasBeenSet = false;
  bool m_deletedRecordsHasBeenSet = false;
  bool m_removedFilesSizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
