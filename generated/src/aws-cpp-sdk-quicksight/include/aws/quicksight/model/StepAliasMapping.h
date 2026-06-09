/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>A mapping between a step identifier and its alias in a flow.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StepAliasMapping">AWS
 * API Reference</a></p>
 */
class StepAliasMapping {
 public:
  AWS_QUICKSIGHT_API StepAliasMapping() = default;
  AWS_QUICKSIGHT_API StepAliasMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API StepAliasMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the step.</p>
   */
  inline const Aws::String& GetStepId() const { return m_stepId; }
  inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
  template <typename StepIdT = Aws::String>
  void SetStepId(StepIdT&& value) {
    m_stepIdHasBeenSet = true;
    m_stepId = std::forward<StepIdT>(value);
  }
  template <typename StepIdT = Aws::String>
  StepAliasMapping& WithStepId(StepIdT&& value) {
    SetStepId(std::forward<StepIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias for the step.</p>
   */
  inline const Aws::String& GetStepAlias() const { return m_stepAlias; }
  inline bool StepAliasHasBeenSet() const { return m_stepAliasHasBeenSet; }
  template <typename StepAliasT = Aws::String>
  void SetStepAlias(StepAliasT&& value) {
    m_stepAliasHasBeenSet = true;
    m_stepAlias = std::forward<StepAliasT>(value);
  }
  template <typename StepAliasT = Aws::String>
  StepAliasMapping& WithStepAlias(StepAliasT&& value) {
    SetStepAlias(std::forward<StepAliasT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stepId;

  Aws::String m_stepAlias;
  bool m_stepIdHasBeenSet = false;
  bool m_stepAliasHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
