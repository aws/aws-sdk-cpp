/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergNullOrder.h>
#include <aws/s3tables/model/IcebergSortDirection.h>

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
 * <p>Defines a single sort field in an Iceberg sort order
 * specification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergSortField">AWS
 * API Reference</a></p>
 */
class IcebergSortField {
 public:
  AWS_S3TABLES_API IcebergSortField() = default;
  AWS_S3TABLES_API IcebergSortField(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergSortField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the source schema field to sort by. This must reference a valid
   * field ID from the table schema.</p>
   */
  inline int GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  inline void SetSourceId(int value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = value;
  }
  inline IcebergSortField& WithSourceId(int value) {
    SetSourceId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transform to apply to the source field before sorting. Use
   * <code>identity</code> to sort by the field value directly, or specify other
   * transforms as needed.</p>
   */
  inline const Aws::String& GetTransform() const { return m_transform; }
  inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }
  template <typename TransformT = Aws::String>
  void SetTransform(TransformT&& value) {
    m_transformHasBeenSet = true;
    m_transform = std::forward<TransformT>(value);
  }
  template <typename TransformT = Aws::String>
  IcebergSortField& WithTransform(TransformT&& value) {
    SetTransform(std::forward<TransformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort direction. Valid values are <code>asc</code> for ascending order or
   * <code>desc</code> for descending order.</p>
   */
  inline IcebergSortDirection GetDirection() const { return m_direction; }
  inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
  inline void SetDirection(IcebergSortDirection value) {
    m_directionHasBeenSet = true;
    m_direction = value;
  }
  inline IcebergSortField& WithDirection(IcebergSortDirection value) {
    SetDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how null values are ordered. Valid values are
   * <code>nulls-first</code> to place nulls before non-null values, or
   * <code>nulls-last</code> to place nulls after non-null values.</p>
   */
  inline IcebergNullOrder GetNullOrder() const { return m_nullOrder; }
  inline bool NullOrderHasBeenSet() const { return m_nullOrderHasBeenSet; }
  inline void SetNullOrder(IcebergNullOrder value) {
    m_nullOrderHasBeenSet = true;
    m_nullOrder = value;
  }
  inline IcebergSortField& WithNullOrder(IcebergNullOrder value) {
    SetNullOrder(value);
    return *this;
  }
  ///@}
 private:
  int m_sourceId{0};

  Aws::String m_transform;

  IcebergSortDirection m_direction{IcebergSortDirection::NOT_SET};

  IcebergNullOrder m_nullOrder{IcebergNullOrder::NOT_SET};
  bool m_sourceIdHasBeenSet = false;
  bool m_transformHasBeenSet = false;
  bool m_directionHasBeenSet = false;
  bool m_nullOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
