/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ResourceLogicalExpression.h>

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
 * <p>A set of resources defined by explicit ARNs, a logical expression, or
 * both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ResourceSet">AWS
 * API Reference</a></p>
 */
class ResourceSet {
 public:
  AWS_NETWORKSECURITYMANAGER_API ResourceSet() = default;
  AWS_NETWORKSECURITYMANAGER_API ResourceSet(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ResourceSet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An explicit list of resource ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExplicitArns() const { return m_explicitArns; }
  inline bool ExplicitArnsHasBeenSet() const { return m_explicitArnsHasBeenSet; }
  template <typename ExplicitArnsT = Aws::Vector<Aws::String>>
  void SetExplicitArns(ExplicitArnsT&& value) {
    m_explicitArnsHasBeenSet = true;
    m_explicitArns = std::forward<ExplicitArnsT>(value);
  }
  template <typename ExplicitArnsT = Aws::Vector<Aws::String>>
  ResourceSet& WithExplicitArns(ExplicitArnsT&& value) {
    SetExplicitArns(std::forward<ExplicitArnsT>(value));
    return *this;
  }
  template <typename ExplicitArnsT = Aws::String>
  ResourceSet& AddExplicitArns(ExplicitArnsT&& value) {
    m_explicitArnsHasBeenSet = true;
    m_explicitArns.emplace_back(std::forward<ExplicitArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A logical expression that selects resources by combining criteria with AND,
   * OR, and NOT operators.</p>
   */
  inline const ResourceLogicalExpression& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = ResourceLogicalExpression>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = ResourceLogicalExpression>
  ResourceSet& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_explicitArns;

  ResourceLogicalExpression m_expression;
  bool m_explicitArnsHasBeenSet = false;
  bool m_expressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
