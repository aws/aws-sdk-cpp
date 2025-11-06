/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CastColumnTypeOperation.h>
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
 * <p>A transform operation that changes the data types of one or more columns in
 * the dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CastColumnTypesOperation">AWS
 * API Reference</a></p>
 */
class CastColumnTypesOperation {
 public:
  AWS_QUICKSIGHT_API CastColumnTypesOperation() = default;
  AWS_QUICKSIGHT_API CastColumnTypesOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CastColumnTypesOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CastColumnTypesOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for the type
   * casting.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  CastColumnTypesOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of column type casting operations to perform.</p>
   */
  inline const Aws::Vector<CastColumnTypeOperation>& GetCastColumnTypeOperations() const { return m_castColumnTypeOperations; }
  inline bool CastColumnTypeOperationsHasBeenSet() const { return m_castColumnTypeOperationsHasBeenSet; }
  template <typename CastColumnTypeOperationsT = Aws::Vector<CastColumnTypeOperation>>
  void SetCastColumnTypeOperations(CastColumnTypeOperationsT&& value) {
    m_castColumnTypeOperationsHasBeenSet = true;
    m_castColumnTypeOperations = std::forward<CastColumnTypeOperationsT>(value);
  }
  template <typename CastColumnTypeOperationsT = Aws::Vector<CastColumnTypeOperation>>
  CastColumnTypesOperation& WithCastColumnTypeOperations(CastColumnTypeOperationsT&& value) {
    SetCastColumnTypeOperations(std::forward<CastColumnTypeOperationsT>(value));
    return *this;
  }
  template <typename CastColumnTypeOperationsT = CastColumnTypeOperation>
  CastColumnTypesOperation& AddCastColumnTypeOperations(CastColumnTypeOperationsT&& value) {
    m_castColumnTypeOperationsHasBeenSet = true;
    m_castColumnTypeOperations.emplace_back(std::forward<CastColumnTypeOperationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;
  bool m_aliasHasBeenSet = false;

  TransformOperationSource m_source;
  bool m_sourceHasBeenSet = false;

  Aws::Vector<CastColumnTypeOperation> m_castColumnTypeOperations;
  bool m_castColumnTypeOperationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
