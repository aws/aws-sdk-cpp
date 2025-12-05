/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
class PutTableBucketReplicationResult {
 public:
  AWS_S3TABLES_API PutTableBucketReplicationResult() = default;
  AWS_S3TABLES_API PutTableBucketReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API PutTableBucketReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A new version token representing the updated replication configuration.</p>
   */
  inline const Aws::String& GetVersionToken() const { return m_versionToken; }
  template <typename VersionTokenT = Aws::String>
  void SetVersionToken(VersionTokenT&& value) {
    m_versionTokenHasBeenSet = true;
    m_versionToken = std::forward<VersionTokenT>(value);
  }
  template <typename VersionTokenT = Aws::String>
  PutTableBucketReplicationResult& WithVersionToken(VersionTokenT&& value) {
    SetVersionToken(std::forward<VersionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the replication configuration operation.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  PutTableBucketReplicationResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
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
  PutTableBucketReplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_versionToken;

  Aws::String m_status;

  Aws::String m_requestId;
  bool m_versionTokenHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
