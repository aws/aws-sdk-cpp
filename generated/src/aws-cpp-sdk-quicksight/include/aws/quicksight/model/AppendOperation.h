/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AppendedColumn.h>
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
 * <p>A transform operation that combines rows from two data sources by stacking
 * them vertically (union operation).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AppendOperation">AWS
 * API Reference</a></p>
 */
class AppendOperation {
 public:
  AWS_QUICKSIGHT_API AppendOperation() = default;
  AWS_QUICKSIGHT_API AppendOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AppendOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AppendOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first data source to be included in the append operation.</p>
   */
  inline const TransformOperationSource& GetFirstSource() const { return m_firstSource; }
  inline bool FirstSourceHasBeenSet() const { return m_firstSourceHasBeenSet; }
  template <typename FirstSourceT = TransformOperationSource>
  void SetFirstSource(FirstSourceT&& value) {
    m_firstSourceHasBeenSet = true;
    m_firstSource = std::forward<FirstSourceT>(value);
  }
  template <typename FirstSourceT = TransformOperationSource>
  AppendOperation& WithFirstSource(FirstSourceT&& value) {
    SetFirstSource(std::forward<FirstSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The second data source to be appended to the first source.</p>
   */
  inline const TransformOperationSource& GetSecondSource() const { return m_secondSource; }
  inline bool SecondSourceHasBeenSet() const { return m_secondSourceHasBeenSet; }
  template <typename SecondSourceT = TransformOperationSource>
  void SetSecondSource(SecondSourceT&& value) {
    m_secondSourceHasBeenSet = true;
    m_secondSource = std::forward<SecondSourceT>(value);
  }
  template <typename SecondSourceT = TransformOperationSource>
  AppendOperation& WithSecondSource(SecondSourceT&& value) {
    SetSecondSource(std::forward<SecondSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of columns to include in the appended result, mapping columns from
   * both sources.</p>
   */
  inline const Aws::Vector<AppendedColumn>& GetAppendedColumns() const { return m_appendedColumns; }
  inline bool AppendedColumnsHasBeenSet() const { return m_appendedColumnsHasBeenSet; }
  template <typename AppendedColumnsT = Aws::Vector<AppendedColumn>>
  void SetAppendedColumns(AppendedColumnsT&& value) {
    m_appendedColumnsHasBeenSet = true;
    m_appendedColumns = std::forward<AppendedColumnsT>(value);
  }
  template <typename AppendedColumnsT = Aws::Vector<AppendedColumn>>
  AppendOperation& WithAppendedColumns(AppendedColumnsT&& value) {
    SetAppendedColumns(std::forward<AppendedColumnsT>(value));
    return *this;
  }
  template <typename AppendedColumnsT = AppendedColumn>
  AppendOperation& AddAppendedColumns(AppendedColumnsT&& value) {
    m_appendedColumnsHasBeenSet = true;
    m_appendedColumns.emplace_back(std::forward<AppendedColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  TransformOperationSource m_firstSource;

  TransformOperationSource m_secondSource;

  Aws::Vector<AppendedColumn> m_appendedColumns;
  bool m_aliasHasBeenSet = false;
  bool m_firstSourceHasBeenSet = false;
  bool m_secondSourceHasBeenSet = false;
  bool m_appendedColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
