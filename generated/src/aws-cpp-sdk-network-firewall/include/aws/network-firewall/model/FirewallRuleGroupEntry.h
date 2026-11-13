/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallRuleGroup.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>A single entry in the firewall section of a Next Generation policy. An entry
 * either references an existing firewall engine rule group by ARN or embeds a rule
 * group directly in the policy, and it carries the priority that sets the rule
 * group's evaluation order within the firewall section.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallRuleGroupEntry">AWS
 * API Reference</a></p>
 */
class FirewallRuleGroupEntry {
 public:
  AWS_NETWORKFIREWALL_API FirewallRuleGroupEntry() = default;
  AWS_NETWORKFIREWALL_API FirewallRuleGroupEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API FirewallRuleGroupEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The priority of the rule group entry within the firewall section. Network
   * Firewall evaluates the firewall section's entries in order of increasing
   * priority value. Each entry in the firewall section must have a unique
   * priority.</p>
   */
  inline int64_t GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int64_t value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline FirewallRuleGroupEntry& WithPriority(int64_t value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an existing firewall engine rule group to
   * reference in this entry. Provide either <code>ResourceArn</code> to reference an
   * existing rule group or <code>InlineRuleGroup</code> to embed a rule group in the
   * policy.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  FirewallRuleGroupEntry& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A firewall engine rule group defined directly in the policy, instead of
   * referenced by ARN. Provide either <code>InlineRuleGroup</code> to embed a rule
   * group or <code>ResourceArn</code> to reference an existing rule group. An
   * embedded rule group can't use a domain list rules source; to filter on a domain
   * list, reference a standalone rule group by ARN instead.</p>
   */
  inline const FirewallRuleGroup& GetInlineRuleGroup() const { return m_inlineRuleGroup; }
  inline bool InlineRuleGroupHasBeenSet() const { return m_inlineRuleGroupHasBeenSet; }
  template <typename InlineRuleGroupT = FirewallRuleGroup>
  void SetInlineRuleGroup(InlineRuleGroupT&& value) {
    m_inlineRuleGroupHasBeenSet = true;
    m_inlineRuleGroup = std::forward<InlineRuleGroupT>(value);
  }
  template <typename InlineRuleGroupT = FirewallRuleGroup>
  FirewallRuleGroupEntry& WithInlineRuleGroup(InlineRuleGroupT&& value) {
    SetInlineRuleGroup(std::forward<InlineRuleGroupT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_priority{0};

  Aws::String m_resourceArn;

  FirewallRuleGroup m_inlineRuleGroup;
  bool m_priorityHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_inlineRuleGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
