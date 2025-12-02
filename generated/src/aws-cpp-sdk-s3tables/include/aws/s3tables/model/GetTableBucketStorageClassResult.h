/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/StorageClassConfiguration.h>

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
class GetTableBucketStorageClassResult {
 public:
  AWS_S3TABLES_API GetTableBucketStorageClassResult() = default;
  AWS_S3TABLES_API GetTableBucketStorageClassResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableBucketStorageClassResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The storage class configuration for the table bucket.</p>
   */
  inline const StorageClassConfiguration& GetStorageClassConfiguration() const { return m_storageClassConfiguration; }
  template <typename StorageClassConfigurationT = StorageClassConfiguration>
  void SetStorageClassConfiguration(StorageClassConfigurationT&& value) {
    m_storageClassConfigurationHasBeenSet = true;
    m_storageClassConfiguration = std::forward<StorageClassConfigurationT>(value);
  }
  template <typename StorageClassConfigurationT = StorageClassConfiguration>
  GetTableBucketStorageClassResult& WithStorageClassConfiguration(StorageClassConfigurationT&& value) {
    SetStorageClassConfiguration(std::forward<StorageClassConfigurationT>(value));
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
  GetTableBucketStorageClassResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  StorageClassConfiguration m_storageClassConfiguration;
  bool m_storageClassConfigurationHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
