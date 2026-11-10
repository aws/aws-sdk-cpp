/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableBucketLoggingStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {
class GetTableBucketLoggingResult {
 public:
  AWS_S3TABLES_API GetTableBucketLoggingResult() = default;
  AWS_S3TABLES_API GetTableBucketLoggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableBucketLoggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The logging status of the table bucket. If logging is disabled,
   * <code>loggingEnabled</code> is absent.</p>
   */
  inline const TableBucketLoggingStatus& GetTableBucketLoggingStatus() const { return m_tableBucketLoggingStatus; }
  template <typename TableBucketLoggingStatusT = TableBucketLoggingStatus>
  void SetTableBucketLoggingStatus(TableBucketLoggingStatusT&& value) {
    m_tableBucketLoggingStatusHasBeenSet = true;
    m_tableBucketLoggingStatus = std::forward<TableBucketLoggingStatusT>(value);
  }
  template <typename TableBucketLoggingStatusT = TableBucketLoggingStatus>
  GetTableBucketLoggingResult& WithTableBucketLoggingStatus(TableBucketLoggingStatusT&& value) {
    SetTableBucketLoggingStatus(std::forward<TableBucketLoggingStatusT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTableBucketLoggingResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TableBucketLoggingStatus m_tableBucketLoggingStatus;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_tableBucketLoggingStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
