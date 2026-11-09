/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/NatRuleState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Describes a NAT rule of an attachment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NatRule">AWS
 * API Reference</a></p>
 */
class NatRule {
 public:
  AWS_NETWORKMANAGER_API NatRule() = default;
  AWS_NETWORKMANAGER_API NatRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API NatRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rule number. Rule numbers identify the rules of an attachment and don't
   * set the order in which rules are evaluated.</p>
   */
  inline int GetRuleNumber() const { return m_ruleNumber; }
  inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
  inline void SetRuleNumber(int value) {
    m_ruleNumberHasBeenSet = true;
    m_ruleNumber = value;
  }
  inline NatRule& WithRuleNumber(int value) {
    SetRuleNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source CIDR block that the rule matches for traffic from the
   * attachment.</p>
   */
  inline const Aws::String& GetMatchSourceCidr() const { return m_matchSourceCidr; }
  inline bool MatchSourceCidrHasBeenSet() const { return m_matchSourceCidrHasBeenSet; }
  template <typename MatchSourceCidrT = Aws::String>
  void SetMatchSourceCidr(MatchSourceCidrT&& value) {
    m_matchSourceCidrHasBeenSet = true;
    m_matchSourceCidr = std::forward<MatchSourceCidrT>(value);
  }
  template <typename MatchSourceCidrT = Aws::String>
  NatRule& WithMatchSourceCidr(MatchSourceCidrT&& value) {
    SetMatchSourceCidr(std::forward<MatchSourceCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDR block that matching source addresses are translated to.</p>
   */
  inline const Aws::String& GetNatCidr() const { return m_natCidr; }
  inline bool NatCidrHasBeenSet() const { return m_natCidrHasBeenSet; }
  template <typename NatCidrT = Aws::String>
  void SetNatCidr(NatCidrT&& value) {
    m_natCidrHasBeenSet = true;
    m_natCidr = std::forward<NatCidrT>(value);
  }
  template <typename NatCidrT = Aws::String>
  NatRule& WithNatCidr(NatCidrT&& value) {
    SetNatCidr(std::forward<NatCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the NAT rule. The possible values are the following:</p> <ul>
   * <li> <p> <code>CREATING</code>: The rule is being created.</p> </li> <li> <p>
   * <code>MODIFYING</code>: The rule is being modified.</p> </li> <li> <p>
   * <code>DELETING</code>: The rule is being deleted.</p> </li> <li> <p>
   * <code>ACTIVATING</code>: NAT gateway support is being enabled, and the rule is
   * being applied.</p> </li> <li> <p> <code>ACTIVATED</code>: NAT gateway support is
   * enabled, and the rule is applied.</p> </li> <li> <p> <code>DEACTIVATING</code>:
   * NAT gateway support is being disabled, and the rule is being removed from
   * use.</p> </li> <li> <p> <code>DEACTIVATED</code>: NAT gateway support is
   * disabled, and the rule isn't applied.</p> </li> <li> <p> <code>FAILED</code>:
   * The attachment failed to be created, and the rule isn't applied.</p> </li> <li>
   * <p> <code>PENDING_ATTACHMENT_ACCEPTANCE</code>: The attachment is pending
   * acceptance. The rule is applied after the attachment is accepted.</p> </li>
   * </ul>
   */
  inline NatRuleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(NatRuleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline NatRule& WithState(NatRuleState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  int m_ruleNumber{0};

  Aws::String m_matchSourceCidr;

  Aws::String m_natCidr;

  NatRuleState m_state{NatRuleState::NOT_SET};
  bool m_ruleNumberHasBeenSet = false;
  bool m_matchSourceCidrHasBeenSet = false;
  bool m_natCidrHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
