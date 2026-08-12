/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ApplicableToType.h>

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
 * <p>The scoping configuration that determines which principals an approval policy
 * applies to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ApplicableTo">AWS
 * API Reference</a></p>
 */
class ApplicableTo {
 public:
  AWS_QUICKSIGHT_API ApplicableTo() = default;
  AWS_QUICKSIGHT_API ApplicableTo(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ApplicableTo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of scoping that determines which principals the approval policy
   * applies to. Valid values are defined as follows:</p> <ul> <li> <p>
   * <code>GROUP</code>: The policy applies only to principals in the groups
   * specified by <code>GroupArns</code>. When you use <code>GROUP</code>, you must
   * also provide a value for <code>GroupArns</code>.</p> </li> </ul>
   */
  inline ApplicableToType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ApplicableToType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ApplicableTo& WithType(ApplicableToType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of group ARNs that the policy applies to. Required when type is
   * GROUP.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupArns() const { return m_groupArns; }
  inline bool GroupArnsHasBeenSet() const { return m_groupArnsHasBeenSet; }
  template <typename GroupArnsT = Aws::Vector<Aws::String>>
  void SetGroupArns(GroupArnsT&& value) {
    m_groupArnsHasBeenSet = true;
    m_groupArns = std::forward<GroupArnsT>(value);
  }
  template <typename GroupArnsT = Aws::Vector<Aws::String>>
  ApplicableTo& WithGroupArns(GroupArnsT&& value) {
    SetGroupArns(std::forward<GroupArnsT>(value));
    return *this;
  }
  template <typename GroupArnsT = Aws::String>
  ApplicableTo& AddGroupArns(GroupArnsT&& value) {
    m_groupArnsHasBeenSet = true;
    m_groupArns.emplace_back(std::forward<GroupArnsT>(value));
    return *this;
  }
  ///@}
 private:
  ApplicableToType m_type{ApplicableToType::NOT_SET};

  Aws::Vector<Aws::String> m_groupArns;
  bool m_typeHasBeenSet = false;
  bool m_groupArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
