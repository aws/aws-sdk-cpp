/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterOperation.h>
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
 * <p>A transform operation that applies one or more filter
 * conditions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FiltersOperation">AWS
 * API Reference</a></p>
 */
class FiltersOperation {
 public:
  AWS_QUICKSIGHT_API FiltersOperation() = default;
  AWS_QUICKSIGHT_API FiltersOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FiltersOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  FiltersOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source transform operation that provides input data for filtering.</p>
   */
  inline const TransformOperationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransformOperationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransformOperationSource>
  FiltersOperation& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of filter operations to apply.</p>
   */
  inline const Aws::Vector<FilterOperation>& GetFilterOperations() const { return m_filterOperations; }
  inline bool FilterOperationsHasBeenSet() const { return m_filterOperationsHasBeenSet; }
  template <typename FilterOperationsT = Aws::Vector<FilterOperation>>
  void SetFilterOperations(FilterOperationsT&& value) {
    m_filterOperationsHasBeenSet = true;
    m_filterOperations = std::forward<FilterOperationsT>(value);
  }
  template <typename FilterOperationsT = Aws::Vector<FilterOperation>>
  FiltersOperation& WithFilterOperations(FilterOperationsT&& value) {
    SetFilterOperations(std::forward<FilterOperationsT>(value));
    return *this;
  }
  template <typename FilterOperationsT = FilterOperation>
  FiltersOperation& AddFilterOperations(FilterOperationsT&& value) {
    m_filterOperationsHasBeenSet = true;
    m_filterOperations.emplace_back(std::forward<FilterOperationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  TransformOperationSource m_source;

  Aws::Vector<FilterOperation> m_filterOperations;
  bool m_aliasHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_filterOperationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
