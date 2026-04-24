/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergPartitionSpec.h>
#include <aws/s3tables/model/IcebergSchema.h>
#include <aws/s3tables/model/IcebergSchemaV2.h>
#include <aws/s3tables/model/IcebergSortOrder.h>

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
 * <p>Contains details about the metadata for an Iceberg table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergMetadata">AWS
 * API Reference</a></p>
 */
class IcebergMetadata {
 public:
  AWS_S3TABLES_API IcebergMetadata() = default;
  AWS_S3TABLES_API IcebergMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The schema for an Iceberg table. Use this property to define table schemas
   * with primitive types only. For schemas that include nested or complex types such
   * as <code>struct</code>, <code>list</code>, or <code>map</code>, use
   * <code>schemaV2</code> instead.</p>
   */
  inline const IcebergSchema& GetSchema() const { return m_schema; }
  inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
  template <typename SchemaT = IcebergSchema>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = IcebergSchema>
  IcebergMetadata& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema for an Iceberg table using the V2 format. Use this property to
   * define table schemas that include nested or complex data types such as
   * <code>struct</code>, <code>list</code>, or <code>map</code>, in addition to
   * primitive types. For schemas with only primitive types, you can use either
   * <code>schema</code> or <code>schemaV2</code>.</p>
   */
  inline const IcebergSchemaV2& GetSchemaV2() const { return m_schemaV2; }
  inline bool SchemaV2HasBeenSet() const { return m_schemaV2HasBeenSet; }
  template <typename SchemaV2T = IcebergSchemaV2>
  void SetSchemaV2(SchemaV2T&& value) {
    m_schemaV2HasBeenSet = true;
    m_schemaV2 = std::forward<SchemaV2T>(value);
  }
  template <typename SchemaV2T = IcebergSchemaV2>
  IcebergMetadata& WithSchemaV2(SchemaV2T&& value) {
    SetSchemaV2(std::forward<SchemaV2T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partition specification for the Iceberg table. Partitioning organizes
   * data into separate files based on the values of one or more fields, which can
   * improve query performance by reducing the amount of data scanned. Each partition
   * field applies a transform (such as identity, year, month, or bucket) to a single
   * field.</p>
   */
  inline const IcebergPartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
  inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
  template <typename PartitionSpecT = IcebergPartitionSpec>
  void SetPartitionSpec(PartitionSpecT&& value) {
    m_partitionSpecHasBeenSet = true;
    m_partitionSpec = std::forward<PartitionSpecT>(value);
  }
  template <typename PartitionSpecT = IcebergPartitionSpec>
  IcebergMetadata& WithPartitionSpec(PartitionSpecT&& value) {
    SetPartitionSpec(std::forward<PartitionSpecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for the Iceberg table. Sort order defines how data is sorted
   * within data files, which can improve query performance by enabling more
   * efficient data skipping and filtering.</p>
   */
  inline const IcebergSortOrder& GetWriteOrder() const { return m_writeOrder; }
  inline bool WriteOrderHasBeenSet() const { return m_writeOrderHasBeenSet; }
  template <typename WriteOrderT = IcebergSortOrder>
  void SetWriteOrder(WriteOrderT&& value) {
    m_writeOrderHasBeenSet = true;
    m_writeOrder = std::forward<WriteOrderT>(value);
  }
  template <typename WriteOrderT = IcebergSortOrder>
  IcebergMetadata& WithWriteOrder(WriteOrderT&& value) {
    SetWriteOrder(std::forward<WriteOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of custom configuration properties for the Iceberg table.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  IcebergMetadata& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  IcebergMetadata& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}
 private:
  IcebergSchema m_schema;

  IcebergSchemaV2 m_schemaV2;

  IcebergPartitionSpec m_partitionSpec;

  IcebergSortOrder m_writeOrder;

  Aws::Map<Aws::String, Aws::String> m_properties;
  bool m_schemaHasBeenSet = false;
  bool m_schemaV2HasBeenSet = false;
  bool m_partitionSpecHasBeenSet = false;
  bool m_writeOrderHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
