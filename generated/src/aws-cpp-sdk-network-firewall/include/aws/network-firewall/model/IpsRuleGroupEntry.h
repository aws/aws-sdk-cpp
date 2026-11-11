/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/IpsRuleGroup.h>
#include <aws/network-firewall/model/IpsRuleGroupOverride.h>

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
 * <p>A single entry in the IPS section of a Next Generation policy. An entry
 * either references an existing IPS engine rule group by ARN or embeds a rule
 * group directly in the policy. IPS section entries don't use a
 * priority.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IpsRuleGroupEntry">AWS
 * API Reference</a></p>
 */
class IpsRuleGroupEntry {
 public:
  AWS_NETWORKFIREWALL_API IpsRuleGroupEntry() = default;
  AWS_NETWORKFIREWALL_API IpsRuleGroupEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API IpsRuleGroupEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an existing IPS engine rule group to
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
  IpsRuleGroupEntry& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An IPS engine rule group defined directly in the policy, instead of
   * referenced by ARN. Provide either <code>InlineRuleGroup</code> to embed a rule
   * group or <code>ResourceArn</code> to reference an existing rule group.</p>
   */
  inline const IpsRuleGroup& GetInlineRuleGroup() const { return m_inlineRuleGroup; }
  inline bool InlineRuleGroupHasBeenSet() const { return m_inlineRuleGroupHasBeenSet; }
  template <typename InlineRuleGroupT = IpsRuleGroup>
  void SetInlineRuleGroup(InlineRuleGroupT&& value) {
    m_inlineRuleGroupHasBeenSet = true;
    m_inlineRuleGroup = std::forward<InlineRuleGroupT>(value);
  }
  template <typename InlineRuleGroupT = IpsRuleGroup>
  IpsRuleGroupEntry& WithInlineRuleGroup(InlineRuleGroupT&& value) {
    SetInlineRuleGroup(std::forward<InlineRuleGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The setting that allows the policy owner to change the behavior of the IPS
   * engine rule group within this policy, such as changing a managed rule group's
   * action from <code>DROP</code> to <code>ALERT</code>.</p>
   */
  inline const IpsRuleGroupOverride& GetOverride() const { return m_override; }
  inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }
  template <typename OverrideT = IpsRuleGroupOverride>
  void SetOverride(OverrideT&& value) {
    m_overrideHasBeenSet = true;
    m_override = std::forward<OverrideT>(value);
  }
  template <typename OverrideT = IpsRuleGroupOverride>
  IpsRuleGroupEntry& WithOverride(OverrideT&& value) {
    SetOverride(std::forward<OverrideT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  IpsRuleGroup m_inlineRuleGroup;

  IpsRuleGroupOverride m_override;
  bool m_resourceArnHasBeenSet = false;
  bool m_inlineRuleGroupHasBeenSet = false;
  bool m_overrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
