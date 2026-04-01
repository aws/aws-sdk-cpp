/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/SchemaV2Field.h>
#include <aws/s3tables/model/SchemaV2FieldType.h>

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
 * <p>Contains details about the schema for an Iceberg table using the V2 format.
 * This schema format supports nested and complex data types such as
 * <code>struct</code>, <code>list</code>, and <code>map</code>, in addition to
 * primitive types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergSchemaV2">AWS
 * API Reference</a></p>
 */
class IcebergSchemaV2 {
 public:
  AWS_S3TABLES_API IcebergSchemaV2() = default;
  AWS_S3TABLES_API IcebergSchemaV2(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergSchemaV2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the top-level schema, which is always a <code>struct</code> type
   * as defined in the <a
   * href="https://iceberg.apache.org/spec/#schemas-and-data-types">Apache Iceberg
   * specification</a>. This value must be <code>struct</code>.</p>
   */
  inline SchemaV2FieldType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SchemaV2FieldType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline IcebergSchemaV2& WithType(SchemaV2FieldType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema fields for the table. Each field defines a column in the table,
   * including its name, type, and whether it is required.</p>
   */
  inline const Aws::Vector<SchemaV2Field>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<SchemaV2Field>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<SchemaV2Field>>
  IcebergSchemaV2& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = SchemaV2Field>
  IcebergSchemaV2& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional unique identifier for the schema. Schema IDs are used by Apache
   * Iceberg to track schema evolution.</p>
   */
  inline int GetSchemaId() const { return m_schemaId; }
  inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
  inline void SetSchemaId(int value) {
    m_schemaIdHasBeenSet = true;
    m_schemaId = value;
  }
  inline IcebergSchemaV2& WithSchemaId(int value) {
    SetSchemaId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of field IDs that are used as the identifier fields for the table.
   * Identifier fields uniquely identify a row in the table.</p>
   */
  inline const Aws::Vector<int>& GetIdentifierFieldIds() const { return m_identifierFieldIds; }
  inline bool IdentifierFieldIdsHasBeenSet() const { return m_identifierFieldIdsHasBeenSet; }
  template <typename IdentifierFieldIdsT = Aws::Vector<int>>
  void SetIdentifierFieldIds(IdentifierFieldIdsT&& value) {
    m_identifierFieldIdsHasBeenSet = true;
    m_identifierFieldIds = std::forward<IdentifierFieldIdsT>(value);
  }
  template <typename IdentifierFieldIdsT = Aws::Vector<int>>
  IcebergSchemaV2& WithIdentifierFieldIds(IdentifierFieldIdsT&& value) {
    SetIdentifierFieldIds(std::forward<IdentifierFieldIdsT>(value));
    return *this;
  }
  inline IcebergSchemaV2& AddIdentifierFieldIds(int value) {
    m_identifierFieldIdsHasBeenSet = true;
    m_identifierFieldIds.push_back(value);
    return *this;
  }
  ///@}
 private:
  SchemaV2FieldType m_type{SchemaV2FieldType::NOT_SET};

  Aws::Vector<SchemaV2Field> m_fields;

  int m_schemaId{0};

  Aws::Vector<int> m_identifierFieldIds;
  bool m_typeHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_schemaIdHasBeenSet = false;
  bool m_identifierFieldIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
