/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergSortField.h>

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
 * <p>Defines the sort order for data within an Iceberg table. Sorting data can
 * improve query performance by enabling more efficient data
 * skipping.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergSortOrder">AWS
 * API Reference</a></p>
 */
class IcebergSortOrder {
 public:
  AWS_S3TABLES_API IcebergSortOrder() = default;
  AWS_S3TABLES_API IcebergSortOrder(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergSortOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this sort order. If not specified, defaults to
   * <code>1</code>. The order ID is used by Apache Iceberg to track sort order
   * evolution.</p>
   */
  inline int GetOrderId() const { return m_orderId; }
  inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }
  inline void SetOrderId(int value) {
    m_orderIdHasBeenSet = true;
    m_orderId = value;
  }
  inline IcebergSortOrder& WithOrderId(int value) {
    SetOrderId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of sort fields that define how data is sorted within files. Each
   * field specifies a source field, sort direction, and null ordering. This field is
   * required if <code>writeOrder</code> is provided.</p>
   */
  inline const Aws::Vector<IcebergSortField>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<IcebergSortField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<IcebergSortField>>
  IcebergSortOrder& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = IcebergSortField>
  IcebergSortOrder& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_orderId{0};

  Aws::Vector<IcebergSortField> m_fields;
  bool m_orderIdHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
