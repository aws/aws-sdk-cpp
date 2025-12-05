/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RowLevelPermissionDataSet.h>
#include <aws/quicksight/model/RowLevelPermissionTagConfiguration.h>

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
 * <p>Configuration for row level security.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionConfiguration">AWS
 * API Reference</a></p>
 */
class RowLevelPermissionConfiguration {
 public:
  AWS_QUICKSIGHT_API RowLevelPermissionConfiguration() = default;
  AWS_QUICKSIGHT_API RowLevelPermissionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API RowLevelPermissionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const RowLevelPermissionTagConfiguration& GetTagConfiguration() const { return m_tagConfiguration; }
  inline bool TagConfigurationHasBeenSet() const { return m_tagConfigurationHasBeenSet; }
  template <typename TagConfigurationT = RowLevelPermissionTagConfiguration>
  void SetTagConfiguration(TagConfigurationT&& value) {
    m_tagConfigurationHasBeenSet = true;
    m_tagConfiguration = std::forward<TagConfigurationT>(value);
  }
  template <typename TagConfigurationT = RowLevelPermissionTagConfiguration>
  RowLevelPermissionConfiguration& WithTagConfiguration(TagConfigurationT&& value) {
    SetTagConfiguration(std::forward<TagConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const { return m_rowLevelPermissionDataSet; }
  inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
  template <typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
  void SetRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) {
    m_rowLevelPermissionDataSetHasBeenSet = true;
    m_rowLevelPermissionDataSet = std::forward<RowLevelPermissionDataSetT>(value);
  }
  template <typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
  RowLevelPermissionConfiguration& WithRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) {
    SetRowLevelPermissionDataSet(std::forward<RowLevelPermissionDataSetT>(value));
    return *this;
  }
  ///@}
 private:
  RowLevelPermissionTagConfiguration m_tagConfiguration;

  RowLevelPermissionDataSet m_rowLevelPermissionDataSet;
  bool m_tagConfigurationHasBeenSet = false;
  bool m_rowLevelPermissionDataSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
