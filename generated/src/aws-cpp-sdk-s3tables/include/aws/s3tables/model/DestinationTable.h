/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/EncryptionConfiguration.h>
#include <aws/s3tables/model/IcebergSchemaV2.h>
#include <aws/s3tables/model/IcebergSortOrder.h>
#include <aws/s3tables/model/MigrationTableProperties.h>
#include <aws/s3tables/model/StorageClassConfiguration.h>

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
 * <p>The table that a migration creates in a table bucket and migrates the source
 * into.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DestinationTable">AWS
 * API Reference</a></p>
 */
class DestinationTable {
 public:
  AWS_S3TABLES_API DestinationTable() = default;
  AWS_S3TABLES_API DestinationTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API DestinationTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table bucket to create the table
   * in.</p>
   */
  inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
  inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
  template <typename TableBucketARNT = Aws::String>
  void SetTableBucketARN(TableBucketARNT&& value) {
    m_tableBucketARNHasBeenSet = true;
    m_tableBucketARN = std::forward<TableBucketARNT>(value);
  }
  template <typename TableBucketARNT = Aws::String>
  DestinationTable& WithTableBucketARN(TableBucketARNT&& value) {
    SetTableBucketARN(std::forward<TableBucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace to create the table in.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  DestinationTable& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the table to create.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DestinationTable& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the table. If you don't specify one, the
   * table uses the default encryption configuration of its table bucket. If you
   * specify an encryption configuration, the migration role must have the
   * <code>s3tables:PutTableEncryption</code> permission. If you choose SSE-KMS, the
   * migration role must have the <code>kms:DescribeKey</code>,
   * <code>kms:GenerateDataKey</code> and <code>kms:Decrypt</code> permissions on the
   * KMS key, and the S3 Tables maintenance principal must have access to it. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-kms-permissions.html">Permissions
   * requirements for S3 Tables SSE-KMS encryption</a>.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  DestinationTable& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage class configuration for the table. If you don't specify one, the
   * table inherits the storage class configuration of its table bucket. If you
   * specify a storage class configuration, the migration role must have the
   * <code>s3tables:PutTableStorageClass</code> permission.</p>
   */
  inline const StorageClassConfiguration& GetStorageClassConfiguration() const { return m_storageClassConfiguration; }
  inline bool StorageClassConfigurationHasBeenSet() const { return m_storageClassConfigurationHasBeenSet; }
  template <typename StorageClassConfigurationT = StorageClassConfiguration>
  void SetStorageClassConfiguration(StorageClassConfigurationT&& value) {
    m_storageClassConfigurationHasBeenSet = true;
    m_storageClassConfiguration = std::forward<StorageClassConfigurationT>(value);
  }
  template <typename StorageClassConfigurationT = StorageClassConfiguration>
  DestinationTable& WithStorageClassConfiguration(StorageClassConfigurationT&& value) {
    SetStorageClassConfiguration(std::forward<StorageClassConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the table. A tag is a key-value pair that you apply to
   * your resources. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html">Tagging
   * for cost allocation or attribute-based access control (ABAC)</a>. If you specify
   * tags, the migration role must have the <code>s3tables:TagResource</code>
   * permission.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DestinationTable& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DestinationTable& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties of the destination table, such as its Iceberg format version
   * and the format of its data files.</p>
   */
  inline const MigrationTableProperties& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = MigrationTableProperties>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = MigrationTableProperties>
  DestinationTable& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema of the table to create. If you don't specify a schema, the
   * migration infers it from the source table, with every column optional. A schema
   * that you specify must include every partition column of the source table. It can
   * leave out other columns only if <code>unmatchedSourceFieldsPolicy</code> is
   * <code>drop</code>. A struct column must have the same fields as the source
   * column. Column default values aren't supported. If you mark a column as
   * required, every source object must have a value for it: an object with a null
   * value in a required column fails to migrate. The destination table is
   * partitioned in the same way as the source table. To specify fields in
   * <code>icebergSortOrder</code>, you must specify a schema.</p>
   */
  inline const IcebergSchemaV2& GetSchema() const { return m_schema; }
  inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
  template <typename SchemaT = IcebergSchemaV2>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = IcebergSchemaV2>
  DestinationTable& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order of the rows within each data file that the migration writes. A
   * sort order can have up to five fields, each naming a column of the schema that
   * you specify by its field ID, so to use a sort order you must specify a schema.
   * <code>StartTableMigration</code> rejects a field that names no column of the
   * schema, or whose transform doesn't fit the column's type.</p>
   */
  inline const IcebergSortOrder& GetIcebergSortOrder() const { return m_icebergSortOrder; }
  inline bool IcebergSortOrderHasBeenSet() const { return m_icebergSortOrderHasBeenSet; }
  template <typename IcebergSortOrderT = IcebergSortOrder>
  void SetIcebergSortOrder(IcebergSortOrderT&& value) {
    m_icebergSortOrderHasBeenSet = true;
    m_icebergSortOrder = std::forward<IcebergSortOrderT>(value);
  }
  template <typename IcebergSortOrderT = IcebergSortOrder>
  DestinationTable& WithIcebergSortOrder(IcebergSortOrderT&& value) {
    SetIcebergSortOrder(std::forward<IcebergSortOrderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableBucketARN;

  Aws::String m_namespace;

  Aws::String m_name;

  EncryptionConfiguration m_encryptionConfiguration;

  StorageClassConfiguration m_storageClassConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  MigrationTableProperties m_properties;

  IcebergSchemaV2 m_schema;

  IcebergSortOrder m_icebergSortOrder;
  bool m_tableBucketARNHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_storageClassConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
  bool m_schemaHasBeenSet = false;
  bool m_icebergSortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
