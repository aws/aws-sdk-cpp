/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableBucketReplicationConfiguration.h>

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
class GetTableBucketReplicationResult {
 public:
  AWS_S3TABLES_API GetTableBucketReplicationResult() = default;
  AWS_S3TABLES_API GetTableBucketReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableBucketReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A version token that represents the current state of the replication
   * configuration. Use this token when updating the configuration to ensure
   * consistency.</p>
   */
  inline const Aws::String& GetVersionToken() const { return m_versionToken; }
  template <typename VersionTokenT = Aws::String>
  void SetVersionToken(VersionTokenT&& value) {
    m_versionTokenHasBeenSet = true;
    m_versionToken = std::forward<VersionTokenT>(value);
  }
  template <typename VersionTokenT = Aws::String>
  GetTableBucketReplicationResult& WithVersionToken(VersionTokenT&& value) {
    SetVersionToken(std::forward<VersionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replication configuration for the table bucket, including the IAM role
   * and replication rules.</p>
   */
  inline const TableBucketReplicationConfiguration& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = TableBucketReplicationConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = TableBucketReplicationConfiguration>
  GetTableBucketReplicationResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
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
  GetTableBucketReplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_versionToken;
  bool m_versionTokenHasBeenSet = false;

  TableBucketReplicationConfiguration m_configuration;
  bool m_configurationHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
