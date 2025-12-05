/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>High-level information about a rule group, returned by <a>ListRuleGroups</a>.
 * You can use the information provided in the metadata to retrieve and manage a
 * rule group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleGroupMetadata">AWS
 * API Reference</a></p>
 */
class RuleGroupMetadata {
 public:
  AWS_NETWORKFIREWALL_API RuleGroupMetadata() = default;
  AWS_NETWORKFIREWALL_API RuleGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API RuleGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The descriptive name of the rule group. You can't change the name of a rule
   * group after you create it.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RuleGroupMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the rule group.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RuleGroupMetadata& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Web Services Marketplace seller that provides this
   * rule group.</p>
   */
  inline const Aws::String& GetVendorName() const { return m_vendorName; }
  inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
  template <typename VendorNameT = Aws::String>
  void SetVendorName(VendorNameT&& value) {
    m_vendorNameHasBeenSet = true;
    m_vendorName = std::forward<VendorNameT>(value);
  }
  template <typename VendorNameT = Aws::String>
  RuleGroupMetadata& WithVendorName(VendorNameT&& value) {
    SetVendorName(std::forward<VendorNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_vendorName;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_vendorNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
