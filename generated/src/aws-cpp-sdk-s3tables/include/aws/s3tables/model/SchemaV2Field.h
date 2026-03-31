/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
 * <p>Contains details about a schema field in the V2 format. This field format
 * supports nested and complex data types such as <code>struct</code>,
 * <code>list</code>, and <code>map</code>, in addition to primitive
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/SchemaV2Field">AWS
 * API Reference</a></p>
 */
class SchemaV2Field {
 public:
  AWS_S3TABLES_API SchemaV2Field() = default;
  AWS_S3TABLES_API SchemaV2Field(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API SchemaV2Field& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the schema field. Field IDs are used by Apache
   * Iceberg to track schema evolution and maintain compatibility across schema
   * changes.</p>
   */
  inline int GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  inline void SetId(int value) {
    m_idHasBeenSet = true;
    m_id = value;
  }
  inline SchemaV2Field& WithId(int value) {
    SetId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the field.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SchemaV2Field& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the field. This can be a primitive type string such as
   * <code>boolean</code>, <code>int</code>, <code>long</code>, <code>float</code>,
   * <code>double</code>, <code>string</code>, <code>binary</code>,
   * <code>date</code>, <code>timestamp</code>, or <code>timestamptz</code>, or a
   * complex type represented as a JSON object for nested types such as
   * <code>struct</code>, <code>list</code>, or <code>map</code>. For more
   * information, see the <a
   * href="https://iceberg.apache.org/spec/#schemas-and-data-types">Apache Iceberg
   * schemas and data types documentation</a>.</p>
   */
  inline Aws::Utils::DocumentView GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::Utils::Document>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::Utils::Document>
  SchemaV2Field& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that specifies whether values are required for each row in
   * this field. If this is <code>true</code>, the field does not allow null
   * values.</p>
   */
  inline bool GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  inline void SetRequired(bool value) {
    m_requiredHasBeenSet = true;
    m_required = value;
  }
  inline SchemaV2Field& WithRequired(bool value) {
    SetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the field.</p>
   */
  inline const Aws::String& GetDoc() const { return m_doc; }
  inline bool DocHasBeenSet() const { return m_docHasBeenSet; }
  template <typename DocT = Aws::String>
  void SetDoc(DocT&& value) {
    m_docHasBeenSet = true;
    m_doc = std::forward<DocT>(value);
  }
  template <typename DocT = Aws::String>
  SchemaV2Field& WithDoc(DocT&& value) {
    SetDoc(std::forward<DocT>(value));
    return *this;
  }
  ///@}
 private:
  int m_id{0};

  Aws::String m_name;

  Aws::Utils::Document m_type;

  bool m_required{false};

  Aws::String m_doc;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_requiredHasBeenSet = false;
  bool m_docHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
