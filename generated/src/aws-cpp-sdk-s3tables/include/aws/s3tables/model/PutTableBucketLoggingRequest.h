/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableBucketLoggingStatus.h>

#include <utility>

namespace Aws {
namespace S3Tables {
namespace Model {

/**
 */
class PutTableBucketLoggingRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API PutTableBucketLoggingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutTableBucketLogging"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table bucket.</p>
   */
  inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
  inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
  template <typename TableBucketARNT = Aws::String>
  void SetTableBucketARN(TableBucketARNT&& value) {
    m_tableBucketARNHasBeenSet = true;
    m_tableBucketARN = std::forward<TableBucketARNT>(value);
  }
  template <typename TableBucketARNT = Aws::String>
  PutTableBucketLoggingRequest& WithTableBucketARN(TableBucketARNT&& value) {
    SetTableBucketARN(std::forward<TableBucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging status to apply to the table bucket. To disable logging, specify
   * an empty <code>tableBucketLoggingStatus</code>.</p>
   */
  inline const TableBucketLoggingStatus& GetTableBucketLoggingStatus() const { return m_tableBucketLoggingStatus; }
  inline bool TableBucketLoggingStatusHasBeenSet() const { return m_tableBucketLoggingStatusHasBeenSet; }
  template <typename TableBucketLoggingStatusT = TableBucketLoggingStatus>
  void SetTableBucketLoggingStatus(TableBucketLoggingStatusT&& value) {
    m_tableBucketLoggingStatusHasBeenSet = true;
    m_tableBucketLoggingStatus = std::forward<TableBucketLoggingStatusT>(value);
  }
  template <typename TableBucketLoggingStatusT = TableBucketLoggingStatus>
  PutTableBucketLoggingRequest& WithTableBucketLoggingStatus(TableBucketLoggingStatusT&& value) {
    SetTableBucketLoggingStatus(std::forward<TableBucketLoggingStatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableBucketARN;

  TableBucketLoggingStatus m_tableBucketLoggingStatus;
  bool m_tableBucketARNHasBeenSet = false;
  bool m_tableBucketLoggingStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
