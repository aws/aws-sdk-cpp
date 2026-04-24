/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergPartitionField.h>

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
 * <p>Defines how data in an Iceberg table is partitioned. Partitioning helps
 * optimize query performance by organizing data into separate files based on field
 * values. Each partition field specifies a transform to apply to a source
 * field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergPartitionSpec">AWS
 * API Reference</a></p>
 */
class IcebergPartitionSpec {
 public:
  AWS_S3TABLES_API IcebergPartitionSpec() = default;
  AWS_S3TABLES_API IcebergPartitionSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergPartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of partition fields that define how the table data is partitioned.
   * Each field specifies a source field and a transform to apply. This field is
   * required if <code>partitionSpec</code> is provided.</p>
   */
  inline const Aws::Vector<IcebergPartitionField>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<IcebergPartitionField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<IcebergPartitionField>>
  IcebergPartitionSpec& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = IcebergPartitionField>
  IcebergPartitionSpec& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this partition specification. If not specified,
   * defaults to <code>0</code>.</p>
   */
  inline int GetSpecId() const { return m_specId; }
  inline bool SpecIdHasBeenSet() const { return m_specIdHasBeenSet; }
  inline void SetSpecId(int value) {
    m_specIdHasBeenSet = true;
    m_specId = value;
  }
  inline IcebergPartitionSpec& WithSpecId(int value) {
    SetSpecId(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IcebergPartitionField> m_fields;

  int m_specId{0};
  bool m_fieldsHasBeenSet = false;
  bool m_specIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
