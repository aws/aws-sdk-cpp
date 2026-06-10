/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>Summary of a permission statement</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/PermissionStatementSummary">AWS
 * API Reference</a></p>
 */
class PermissionStatementSummary {
 public:
  AWS_SIGNIN_API PermissionStatementSummary() = default;
  AWS_SIGNIN_API PermissionStatementSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API PermissionStatementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier for the permission statement</p>
   */
  inline const Aws::String& GetSid() const { return m_sid; }
  inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
  template <typename SidT = Aws::String>
  void SetSid(SidT&& value) {
    m_sidHasBeenSet = true;
    m_sid = std::forward<SidT>(value);
  }
  template <typename SidT = Aws::String>
  PermissionStatementSummary& WithSid(SidT&& value) {
    SetSid(std::forward<SidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Condition block for the permission statement</p>
   */
  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
  PermissionStatementSummary& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  template <typename ConditionKeyT = Aws::String, typename ConditionValueT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  PermissionStatementSummary& AddCondition(ConditionKeyT&& key, ConditionValueT&& value) {
    m_conditionHasBeenSet = true;
    m_condition.emplace(std::forward<ConditionKeyT>(key), std::forward<ConditionValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sid;

  Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_condition;
  bool m_sidHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
