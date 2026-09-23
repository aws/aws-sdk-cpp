/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ResourceCriteria.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>A logical expression that selects resources. Exactly one of
 * <code>criteria</code>, <code>and</code>, <code>or</code>, or <code>not</code> is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ResourceLogicalExpression">AWS
 * API Reference</a></p>
 */
class ResourceLogicalExpression {
 public:
  AWS_NETWORKSECURITYMANAGER_API ResourceLogicalExpression() = default;
  AWS_NETWORKSECURITYMANAGER_API ResourceLogicalExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ResourceLogicalExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A leaf condition that matches resources by tag or by resource-type-specific
   * configuration.</p>
   */
  inline const ResourceCriteria& GetCriteria() const { return m_criteria; }
  inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
  template <typename CriteriaT = ResourceCriteria>
  void SetCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria = std::forward<CriteriaT>(value);
  }
  template <typename CriteriaT = ResourceCriteria>
  ResourceLogicalExpression& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of subexpressions that must all match.</p>
   */
  inline const Aws::Vector<ResourceLogicalExpression>& GetAnd() const { return m_and; }
  inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
  template <typename AndT = Aws::Vector<ResourceLogicalExpression>>
  void SetAnd(AndT&& value) {
    m_andHasBeenSet = true;
    m_and = std::forward<AndT>(value);
  }
  template <typename AndT = Aws::Vector<ResourceLogicalExpression>>
  ResourceLogicalExpression& WithAnd(AndT&& value) {
    SetAnd(std::forward<AndT>(value));
    return *this;
  }
  template <typename AndT = ResourceLogicalExpression>
  ResourceLogicalExpression& AddAnd(AndT&& value) {
    m_andHasBeenSet = true;
    m_and.emplace_back(std::forward<AndT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of subexpressions of which at least one must match.</p>
   */
  inline const Aws::Vector<ResourceLogicalExpression>& GetOr() const { return m_or; }
  inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
  template <typename OrT = Aws::Vector<ResourceLogicalExpression>>
  void SetOr(OrT&& value) {
    m_orHasBeenSet = true;
    m_or = std::forward<OrT>(value);
  }
  template <typename OrT = Aws::Vector<ResourceLogicalExpression>>
  ResourceLogicalExpression& WithOr(OrT&& value) {
    SetOr(std::forward<OrT>(value));
    return *this;
  }
  template <typename OrT = ResourceLogicalExpression>
  ResourceLogicalExpression& AddOr(OrT&& value) {
    m_orHasBeenSet = true;
    m_or.emplace_back(std::forward<OrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A subexpression that must not match.</p>
   */
  inline const ResourceLogicalExpression& GetNot() const { return *m_not; }
  inline bool NotHasBeenSet() const { return m_notHasBeenSet; }
  template <typename NotT = ResourceLogicalExpression>
  void SetNot(NotT&& value) {
    m_notHasBeenSet = true;
    m_not = Aws::MakeShared<ResourceLogicalExpression>("ResourceLogicalExpression", std::forward<NotT>(value));
  }
  template <typename NotT = ResourceLogicalExpression>
  ResourceLogicalExpression& WithNot(NotT&& value) {
    SetNot(std::forward<NotT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceCriteria m_criteria;

  Aws::Vector<ResourceLogicalExpression> m_and;

  Aws::Vector<ResourceLogicalExpression> m_or;

  std::shared_ptr<ResourceLogicalExpression> m_not;
  bool m_criteriaHasBeenSet = false;
  bool m_andHasBeenSet = false;
  bool m_orHasBeenSet = false;
  bool m_notHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
