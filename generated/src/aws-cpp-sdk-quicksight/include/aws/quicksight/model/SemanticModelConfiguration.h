/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SemanticTable.h>

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
 * <p>Configuration for the semantic model that defines how prepared data is
 * structured for analysis and reporting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SemanticModelConfiguration">AWS
 * API Reference</a></p>
 */
class SemanticModelConfiguration {
 public:
  AWS_QUICKSIGHT_API SemanticModelConfiguration() = default;
  AWS_QUICKSIGHT_API SemanticModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SemanticModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of semantic tables that define the analytical structure.</p>
   */
  inline const Aws::Map<Aws::String, SemanticTable>& GetTableMap() const { return m_tableMap; }
  inline bool TableMapHasBeenSet() const { return m_tableMapHasBeenSet; }
  template <typename TableMapT = Aws::Map<Aws::String, SemanticTable>>
  void SetTableMap(TableMapT&& value) {
    m_tableMapHasBeenSet = true;
    m_tableMap = std::forward<TableMapT>(value);
  }
  template <typename TableMapT = Aws::Map<Aws::String, SemanticTable>>
  SemanticModelConfiguration& WithTableMap(TableMapT&& value) {
    SetTableMap(std::forward<TableMapT>(value));
    return *this;
  }
  template <typename TableMapKeyT = Aws::String, typename TableMapValueT = SemanticTable>
  SemanticModelConfiguration& AddTableMap(TableMapKeyT&& key, TableMapValueT&& value) {
    m_tableMapHasBeenSet = true;
    m_tableMap.emplace(std::forward<TableMapKeyT>(key), std::forward<TableMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, SemanticTable> m_tableMap;
  bool m_tableMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
