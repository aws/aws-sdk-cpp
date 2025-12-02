/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/EncryptionConfiguration.h>
#include <aws/s3tables/model/StorageClassConfiguration.h>

#include <utility>

namespace Aws {
namespace S3Tables {
namespace Model {

/**
 */
class CreateTableBucketRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API CreateTableBucketRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTableBucket"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name for the table bucket.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateTableBucketRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration to use for the table bucket. This configuration
   * specifies the default encryption settings that will be applied to all tables
   * created in this bucket unless overridden at the table level. The configuration
   * includes the encryption algorithm and, if using SSE-KMS, the KMS key to use.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateTableBucketRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default storage class configuration for the table bucket. This
   * configuration will be applied to all new tables created in this bucket unless
   * overridden at the table level. If not specified, the service default storage
   * class will be used.</p>
   */
  inline const StorageClassConfiguration& GetStorageClassConfiguration() const { return m_storageClassConfiguration; }
  inline bool StorageClassConfigurationHasBeenSet() const { return m_storageClassConfigurationHasBeenSet; }
  template <typename StorageClassConfigurationT = StorageClassConfiguration>
  void SetStorageClassConfiguration(StorageClassConfigurationT&& value) {
    m_storageClassConfigurationHasBeenSet = true;
    m_storageClassConfiguration = std::forward<StorageClassConfigurationT>(value);
  }
  template <typename StorageClassConfigurationT = StorageClassConfiguration>
  CreateTableBucketRequest& WithStorageClassConfiguration(StorageClassConfigurationT&& value) {
    SetStorageClassConfiguration(std::forward<StorageClassConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of user-defined tags that you would like to apply to the table bucket
   * that you are creating. A tag is a key-value pair that you apply to your
   * resources. Tags can help you organize and control access to resources. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html">Tagging
   * for cost allocation or attribute-based access control (ABAC)</a>.</p>
   * <p>You must have the <code>s3tables:TagResource</code> permission in addition to
   * <code>s3tables:CreateTableBucket</code> permisson to create a table bucket with
   * tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateTableBucketRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateTableBucketRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  EncryptionConfiguration m_encryptionConfiguration;
  bool m_encryptionConfigurationHasBeenSet = false;

  StorageClassConfiguration m_storageClassConfiguration;
  bool m_storageClassConfigurationHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
