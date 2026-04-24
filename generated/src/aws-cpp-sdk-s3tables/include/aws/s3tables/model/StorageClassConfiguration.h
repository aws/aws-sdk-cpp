/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/StorageClass.h>

#include <utility>

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
 * <p>The configuration details for the storage class of tables or table buckets.
 * This allows you to optimize storage costs by selecting the appropriate storage
 * class based on your access patterns and performance requirements.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/StorageClassConfiguration">AWS
 * API Reference</a></p>
 */
class StorageClassConfiguration {
 public:
  AWS_S3TABLES_API StorageClassConfiguration() = default;
  AWS_S3TABLES_API StorageClassConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API StorageClassConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The storage class for the table or table bucket. Valid values include storage
   * classes optimized for different access patterns and cost profiles.</p>
   */
  inline StorageClass GetStorageClass() const { return m_storageClass; }
  inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
  inline void SetStorageClass(StorageClass value) {
    m_storageClassHasBeenSet = true;
    m_storageClass = value;
  }
  inline StorageClassConfiguration& WithStorageClass(StorageClass value) {
    SetStorageClass(value);
    return *this;
  }
  ///@}
 private:
  StorageClass m_storageClass{StorageClass::NOT_SET};
  bool m_storageClassHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
