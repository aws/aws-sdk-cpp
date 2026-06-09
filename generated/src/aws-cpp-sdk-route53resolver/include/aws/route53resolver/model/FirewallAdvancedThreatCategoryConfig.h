/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>The configuration for a threat category-based filtering rule. This specifies
 * which threat category to use for DNS query evaluation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallAdvancedThreatCategoryConfig">AWS
 * API Reference</a></p>
 */
class FirewallAdvancedThreatCategoryConfig {
 public:
  AWS_ROUTE53RESOLVER_API FirewallAdvancedThreatCategoryConfig() = default;
  AWS_ROUTE53RESOLVER_API FirewallAdvancedThreatCategoryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API FirewallAdvancedThreatCategoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The threat category identifier. To retrieve the list of available threat
   * categories, call <a>ListFirewallRuleTypes</a> with <code>RuleType</code> set to
   * <code>FirewallAdvancedThreatCategory</code>.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  FirewallAdvancedThreatCategoryConfig& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_category;
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
