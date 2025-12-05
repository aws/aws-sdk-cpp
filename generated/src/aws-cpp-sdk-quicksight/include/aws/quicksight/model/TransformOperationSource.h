/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetColumnIdMapping.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Specifies the source of data for a transform operation, including the source
 * operation and column mappings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TransformOperationSource">AWS
 * API Reference</a></p>
 */
class TransformOperationSource {
 public:
  AWS_QUICKSIGHT_API TransformOperationSource() = default;
  AWS_QUICKSIGHT_API TransformOperationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TransformOperationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the transform operation that provides input data.</p>
   */
  inline const Aws::String& GetTransformOperationId() const { return m_transformOperationId; }
  inline bool TransformOperationIdHasBeenSet() const { return m_transformOperationIdHasBeenSet; }
  template <typename TransformOperationIdT = Aws::String>
  void SetTransformOperationId(TransformOperationIdT&& value) {
    m_transformOperationIdHasBeenSet = true;
    m_transformOperationId = std::forward<TransformOperationIdT>(value);
  }
  template <typename TransformOperationIdT = Aws::String>
  TransformOperationSource& WithTransformOperationId(TransformOperationIdT&& value) {
    SetTransformOperationId(std::forward<TransformOperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mappings between source column identifiers and target column identifiers
   * for this transformation.</p>
   */
  inline const Aws::Vector<DataSetColumnIdMapping>& GetColumnIdMappings() const { return m_columnIdMappings; }
  inline bool ColumnIdMappingsHasBeenSet() const { return m_columnIdMappingsHasBeenSet; }
  template <typename ColumnIdMappingsT = Aws::Vector<DataSetColumnIdMapping>>
  void SetColumnIdMappings(ColumnIdMappingsT&& value) {
    m_columnIdMappingsHasBeenSet = true;
    m_columnIdMappings = std::forward<ColumnIdMappingsT>(value);
  }
  template <typename ColumnIdMappingsT = Aws::Vector<DataSetColumnIdMapping>>
  TransformOperationSource& WithColumnIdMappings(ColumnIdMappingsT&& value) {
    SetColumnIdMappings(std::forward<ColumnIdMappingsT>(value));
    return *this;
  }
  template <typename ColumnIdMappingsT = DataSetColumnIdMapping>
  TransformOperationSource& AddColumnIdMappings(ColumnIdMappingsT&& value) {
    m_columnIdMappingsHasBeenSet = true;
    m_columnIdMappings.emplace_back(std::forward<ColumnIdMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transformOperationId;

  Aws::Vector<DataSetColumnIdMapping> m_columnIdMappings;
  bool m_transformOperationIdHasBeenSet = false;
  bool m_columnIdMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
