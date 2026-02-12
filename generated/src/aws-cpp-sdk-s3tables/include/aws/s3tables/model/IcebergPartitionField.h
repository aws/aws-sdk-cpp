/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Defines a single partition field in an Iceberg partition
 * specification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergPartitionField">AWS
 * API Reference</a></p>
 */
class IcebergPartitionField {
 public:
  AWS_S3TABLES_API IcebergPartitionField() = default;
  AWS_S3TABLES_API IcebergPartitionField(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergPartitionField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the source schema field to partition by. This must reference a
   * valid field ID from the table schema.</p>
   */
  inline int GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  inline void SetSourceId(int value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = value;
  }
  inline IcebergPartitionField& WithSourceId(int value) {
    SetSourceId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partition transform to apply to the source field. Supported transforms
   * include <code>identity</code>, <code>year</code>, <code>month</code>,
   * <code>day</code>, <code>hour</code>, <code>bucket</code>, and
   * <code>truncate</code>. For more information, see the <a
   * href="https://iceberg.apache.org/spec/#partition-transforms">Apache Iceberg
   * partition transforms documentation</a>.</p>
   */
  inline const Aws::String& GetTransform() const { return m_transform; }
  inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }
  template <typename TransformT = Aws::String>
  void SetTransform(TransformT&& value) {
    m_transformHasBeenSet = true;
    m_transform = std::forward<TransformT>(value);
  }
  template <typename TransformT = Aws::String>
  IcebergPartitionField& WithTransform(TransformT&& value) {
    SetTransform(std::forward<TransformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for this partition field. This name is used in the partitioned file
   * paths.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  IcebergPartitionField& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional unique identifier for this partition field. If not specified, S3
   * Tables automatically assigns a field ID.</p>
   */
  inline int GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  inline void SetFieldId(int value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = value;
  }
  inline IcebergPartitionField& WithFieldId(int value) {
    SetFieldId(value);
    return *this;
  }
  ///@}
 private:
  int m_sourceId{0};

  Aws::String m_transform;

  Aws::String m_name;

  int m_fieldId{0};
  bool m_sourceIdHasBeenSet = false;
  bool m_transformHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_fieldIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
