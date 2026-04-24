/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CalculatedColumn.h>
#include <aws/quicksight/model/TransformOperationSource.h>

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
 * <p>A transform operation that creates calculated columns. Columns created in one
 * such operation form a lexical closure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateColumnsOperation">AWS
 * API Reference</a></p>
 */
class CreateColumnsOperation {
 public:
  AWS_QUICKSIGHT_API CreateColumnsOperation() = default;
  AWS_QUICKSIGHT_API CreateColumnsOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CreateColumnsOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Alias for this operation.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  CreateColumnsOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for creating new
   * calculated columns.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  CreateColumnsOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Calculated columns to create.</p>
   */
  inline const Aws::Vector<CalculatedColumn>& GetColumns() const { return m_columns; }
  inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
  template <typename ColumnsT = Aws::Vector<CalculatedColumn>>
  void SetColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns = std::forward<ColumnsT>(value);
  }
  template <typename ColumnsT = Aws::Vector<CalculatedColumn>>
  CreateColumnsOperation& WithColumns(ColumnsT&& value) {
    SetColumns(std::forward<ColumnsT>(value));
    return *this;
  }
  template <typename ColumnsT = CalculatedColumn>
  CreateColumnsOperation& AddColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns.emplace_back(std::forward<ColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  TransformOperationSource m_source;

  Aws::Vector<CalculatedColumn> m_columns;
  bool m_aliasHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_columnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
