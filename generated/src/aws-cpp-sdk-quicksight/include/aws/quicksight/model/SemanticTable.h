/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RowLevelPermissionConfiguration.h>

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
 * <p>A semantic table that represents the final analytical structure of the
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SemanticTable">AWS
 * API Reference</a></p>
 */
class SemanticTable {
 public:
  AWS_QUICKSIGHT_API SemanticTable() = default;
  AWS_QUICKSIGHT_API SemanticTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SemanticTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Alias for the semantic table.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  SemanticTable& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the destination table from data preparation that provides
   * data to this semantic table.</p>
   */
  inline const Aws::String& GetDestinationTableId() const { return m_destinationTableId; }
  inline bool DestinationTableIdHasBeenSet() const { return m_destinationTableIdHasBeenSet; }
  template <typename DestinationTableIdT = Aws::String>
  void SetDestinationTableId(DestinationTableIdT&& value) {
    m_destinationTableIdHasBeenSet = true;
    m_destinationTableId = std::forward<DestinationTableIdT>(value);
  }
  template <typename DestinationTableIdT = Aws::String>
  SemanticTable& WithDestinationTableId(DestinationTableIdT&& value) {
    SetDestinationTableId(std::forward<DestinationTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for row level security that control data access for this
   * semantic table.</p>
   */
  inline const RowLevelPermissionConfiguration& GetRowLevelPermissionConfiguration() const { return m_rowLevelPermissionConfiguration; }
  inline bool RowLevelPermissionConfigurationHasBeenSet() const { return m_rowLevelPermissionConfigurationHasBeenSet; }
  template <typename RowLevelPermissionConfigurationT = RowLevelPermissionConfiguration>
  void SetRowLevelPermissionConfiguration(RowLevelPermissionConfigurationT&& value) {
    m_rowLevelPermissionConfigurationHasBeenSet = true;
    m_rowLevelPermissionConfiguration = std::forward<RowLevelPermissionConfigurationT>(value);
  }
  template <typename RowLevelPermissionConfigurationT = RowLevelPermissionConfiguration>
  SemanticTable& WithRowLevelPermissionConfiguration(RowLevelPermissionConfigurationT&& value) {
    SetRowLevelPermissionConfiguration(std::forward<RowLevelPermissionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;
  bool m_aliasHasBeenSet = false;

  Aws::String m_destinationTableId;
  bool m_destinationTableIdHasBeenSet = false;

  RowLevelPermissionConfiguration m_rowLevelPermissionConfiguration;
  bool m_rowLevelPermissionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
