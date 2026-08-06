/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>A reference to a child function within a <code>SEQUENTIAL_EXECUTOR</code>
 * function.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/FunctionRef">AWS
 * API Reference</a></p>
 */
class FunctionRef {
 public:
  AWS_MEDIATAILOR_API FunctionRef() = default;
  AWS_MEDIATAILOR_API FunctionRef(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API FunctionRef& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An optional expression that evaluates to a boolean. MediaTailor evaluates
   * this expression immediately before running the step, using the accumulated state
   * at that point in the sequence. If the expression evaluates to
   * <code>false</code>, MediaTailor skips the step and moves to the next one. If
   * omitted, the step always runs.</p>
   */
  inline const Aws::String& GetRunCondition() const { return m_runCondition; }
  inline bool RunConditionHasBeenSet() const { return m_runConditionHasBeenSet; }
  template <typename RunConditionT = Aws::String>
  void SetRunCondition(RunConditionT&& value) {
    m_runConditionHasBeenSet = true;
    m_runCondition = std::forward<RunConditionT>(value);
  }
  template <typename RunConditionT = Aws::String>
  FunctionRef& WithRunCondition(RunConditionT&& value) {
    SetRunCondition(std::forward<RunConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the child function to execute in this step.</p>
   */
  inline const Aws::String& GetFunctionId() const { return m_functionId; }
  inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
  template <typename FunctionIdT = Aws::String>
  void SetFunctionId(FunctionIdT&& value) {
    m_functionIdHasBeenSet = true;
    m_functionId = std::forward<FunctionIdT>(value);
  }
  template <typename FunctionIdT = Aws::String>
  FunctionRef& WithFunctionId(FunctionIdT&& value) {
    SetFunctionId(std::forward<FunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional alternate name for the function within the executor. If omitted,
   * MediaTailor uses the function identifier.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  FunctionRef& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runCondition;

  Aws::String m_functionId;

  Aws::String m_alias;
  bool m_runConditionHasBeenSet = false;
  bool m_functionIdHasBeenSet = false;
  bool m_aliasHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
