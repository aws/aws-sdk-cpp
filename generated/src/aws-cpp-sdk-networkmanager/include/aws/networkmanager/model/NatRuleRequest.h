/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

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
 * <p>Describes a NAT rule to configure on an attachment. Source addresses in the
 * source CIDR block of traffic from the attachment are translated to the same host
 * addresses in the NAT CIDR block. Traffic to an address in the NAT CIDR block is
 * translated back to the matching address in the source CIDR block.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NatRuleRequest">AWS
 * API Reference</a></p>
 */
class NatRuleRequest {
 public:
  AWS_NETWORKMANAGER_API NatRuleRequest() = default;
  AWS_NETWORKMANAGER_API NatRuleRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API NatRuleRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rule number, from 1 to 32766. Each rule number must be unique for the
   * attachment.</p>
   */
  inline int GetRuleNumber() const { return m_ruleNumber; }
  inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
  inline void SetRuleNumber(int value) {
    m_ruleNumberHasBeenSet = true;
    m_ruleNumber = value;
  }
  inline NatRuleRequest& WithRuleNumber(int value) {
    SetRuleNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block to match against the source address of traffic from the
   * attachment. The CIDR block can't overlap with the multicast range
   * (224.0.0.0/4).</p>
   */
  inline const Aws::String& GetMatchSourceCidr() const { return m_matchSourceCidr; }
  inline bool MatchSourceCidrHasBeenSet() const { return m_matchSourceCidrHasBeenSet; }
  template <typename MatchSourceCidrT = Aws::String>
  void SetMatchSourceCidr(MatchSourceCidrT&& value) {
    m_matchSourceCidrHasBeenSet = true;
    m_matchSourceCidr = std::forward<MatchSourceCidrT>(value);
  }
  template <typename MatchSourceCidrT = Aws::String>
  NatRuleRequest& WithMatchSourceCidr(MatchSourceCidrT&& value) {
    SetMatchSourceCidr(std::forward<MatchSourceCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block to translate matching source addresses to. The prefix
   * length must be the same as the prefix length of <code>MatchSourceCidr</code>.
   * The CIDR block must be within a private (RFC 1918) or shared address space (RFC
   * 6598) range. The CIDR blocks of the NAT rules of an attachment can't overlap
   * with each other.</p>
   */
  inline const Aws::String& GetNatCidr() const { return m_natCidr; }
  inline bool NatCidrHasBeenSet() const { return m_natCidrHasBeenSet; }
  template <typename NatCidrT = Aws::String>
  void SetNatCidr(NatCidrT&& value) {
    m_natCidrHasBeenSet = true;
    m_natCidr = std::forward<NatCidrT>(value);
  }
  template <typename NatCidrT = Aws::String>
  NatRuleRequest& WithNatCidr(NatCidrT&& value) {
    SetNatCidr(std::forward<NatCidrT>(value));
    return *this;
  }
  ///@}
 private:
  int m_ruleNumber{0};

  Aws::String m_matchSourceCidr;

  Aws::String m_natCidr;
  bool m_ruleNumberHasBeenSet = false;
  bool m_matchSourceCidrHasBeenSet = false;
  bool m_natCidrHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
