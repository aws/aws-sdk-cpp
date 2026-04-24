/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/OutputColumnNameOverride.h>

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
 * <p>Properties that control how columns are handled for a join operand, including
 * column name overrides.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/JoinOperandProperties">AWS
 * API Reference</a></p>
 */
class JoinOperandProperties {
 public:
  AWS_QUICKSIGHT_API JoinOperandProperties() = default;
  AWS_QUICKSIGHT_API JoinOperandProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API JoinOperandProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of column name overrides to apply to the join operand's output
   * columns.</p>
   */
  inline const Aws::Vector<OutputColumnNameOverride>& GetOutputColumnNameOverrides() const { return m_outputColumnNameOverrides; }
  inline bool OutputColumnNameOverridesHasBeenSet() const { return m_outputColumnNameOverridesHasBeenSet; }
  template <typename OutputColumnNameOverridesT = Aws::Vector<OutputColumnNameOverride>>
  void SetOutputColumnNameOverrides(OutputColumnNameOverridesT&& value) {
    m_outputColumnNameOverridesHasBeenSet = true;
    m_outputColumnNameOverrides = std::forward<OutputColumnNameOverridesT>(value);
  }
  template <typename OutputColumnNameOverridesT = Aws::Vector<OutputColumnNameOverride>>
  JoinOperandProperties& WithOutputColumnNameOverrides(OutputColumnNameOverridesT&& value) {
    SetOutputColumnNameOverrides(std::forward<OutputColumnNameOverridesT>(value));
    return *this;
  }
  template <typename OutputColumnNameOverridesT = OutputColumnNameOverride>
  JoinOperandProperties& AddOutputColumnNameOverrides(OutputColumnNameOverridesT&& value) {
    m_outputColumnNameOverridesHasBeenSet = true;
    m_outputColumnNameOverrides.emplace_back(std::forward<OutputColumnNameOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OutputColumnNameOverride> m_outputColumnNameOverrides;
  bool m_outputColumnNameOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
