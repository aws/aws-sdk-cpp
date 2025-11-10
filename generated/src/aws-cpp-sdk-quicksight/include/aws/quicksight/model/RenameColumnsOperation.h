/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RenameColumnOperation.h>
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
 * <p>A transform operation that renames one or more columns in the
 * dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RenameColumnsOperation">AWS
 * API Reference</a></p>
 */
class RenameColumnsOperation {
 public:
  AWS_QUICKSIGHT_API RenameColumnsOperation() = default;
  AWS_QUICKSIGHT_API RenameColumnsOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API RenameColumnsOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RenameColumnsOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for column
   * renaming.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  RenameColumnsOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of column rename operations to perform, specifying old and new
   * column names.</p>
   */
  inline const Aws::Vector<RenameColumnOperation>& GetRenameColumnOperations() const { return m_renameColumnOperations; }
  inline bool RenameColumnOperationsHasBeenSet() const { return m_renameColumnOperationsHasBeenSet; }
  template <typename RenameColumnOperationsT = Aws::Vector<RenameColumnOperation>>
  void SetRenameColumnOperations(RenameColumnOperationsT&& value) {
    m_renameColumnOperationsHasBeenSet = true;
    m_renameColumnOperations = std::forward<RenameColumnOperationsT>(value);
  }
  template <typename RenameColumnOperationsT = Aws::Vector<RenameColumnOperation>>
  RenameColumnsOperation& WithRenameColumnOperations(RenameColumnOperationsT&& value) {
    SetRenameColumnOperations(std::forward<RenameColumnOperationsT>(value));
    return *this;
  }
  template <typename RenameColumnOperationsT = RenameColumnOperation>
  RenameColumnsOperation& AddRenameColumnOperations(RenameColumnOperationsT&& value) {
    m_renameColumnOperationsHasBeenSet = true;
    m_renameColumnOperations.emplace_back(std::forward<RenameColumnOperationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;
  bool m_aliasHasBeenSet = false;

  TransformOperationSource m_source;
  bool m_sourceHasBeenSet = false;

  Aws::Vector<RenameColumnOperation> m_renameColumnOperations;
  bool m_renameColumnOperationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
