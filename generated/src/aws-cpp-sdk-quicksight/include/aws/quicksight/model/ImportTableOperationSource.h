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
 * <p>Specifies the source table and column mappings for an import table
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImportTableOperationSource">AWS
 * API Reference</a></p>
 */
class ImportTableOperationSource {
 public:
  AWS_QUICKSIGHT_API ImportTableOperationSource() = default;
  AWS_QUICKSIGHT_API ImportTableOperationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ImportTableOperationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the source table to import data from.</p>
   */
  inline const Aws::String& GetSourceTableId() const { return m_sourceTableId; }
  inline bool SourceTableIdHasBeenSet() const { return m_sourceTableIdHasBeenSet; }
  template <typename SourceTableIdT = Aws::String>
  void SetSourceTableId(SourceTableIdT&& value) {
    m_sourceTableIdHasBeenSet = true;
    m_sourceTableId = std::forward<SourceTableIdT>(value);
  }
  template <typename SourceTableIdT = Aws::String>
  ImportTableOperationSource& WithSourceTableId(SourceTableIdT&& value) {
    SetSourceTableId(std::forward<SourceTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mappings between source column identifiers and target column identifiers
   * during the import.</p>
   */
  inline const Aws::Vector<DataSetColumnIdMapping>& GetColumnIdMappings() const { return m_columnIdMappings; }
  inline bool ColumnIdMappingsHasBeenSet() const { return m_columnIdMappingsHasBeenSet; }
  template <typename ColumnIdMappingsT = Aws::Vector<DataSetColumnIdMapping>>
  void SetColumnIdMappings(ColumnIdMappingsT&& value) {
    m_columnIdMappingsHasBeenSet = true;
    m_columnIdMappings = std::forward<ColumnIdMappingsT>(value);
  }
  template <typename ColumnIdMappingsT = Aws::Vector<DataSetColumnIdMapping>>
  ImportTableOperationSource& WithColumnIdMappings(ColumnIdMappingsT&& value) {
    SetColumnIdMappings(std::forward<ColumnIdMappingsT>(value));
    return *this;
  }
  template <typename ColumnIdMappingsT = DataSetColumnIdMapping>
  ImportTableOperationSource& AddColumnIdMappings(ColumnIdMappingsT&& value) {
    m_columnIdMappingsHasBeenSet = true;
    m_columnIdMappings.emplace_back(std::forward<ColumnIdMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceTableId;
  bool m_sourceTableIdHasBeenSet = false;

  Aws::Vector<DataSetColumnIdMapping> m_columnIdMappings;
  bool m_columnIdMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
