/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRulePhaseAction.h>

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
 * <p>Evaluation points in the traffic flow where rules are applied. There are
 * three phases in a traffic where the rule match is applied. </p> <p>This data
 * type is used specifically for the <a>CreateProxyConfiguration</a> and
 * <a>UpdateProxyConfiguration</a> APIs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyConfigDefaultRulePhaseActionsRequest">AWS
 * API Reference</a></p>
 */
class ProxyConfigDefaultRulePhaseActionsRequest {
 public:
  AWS_NETWORKFIREWALL_API ProxyConfigDefaultRulePhaseActionsRequest() = default;
  AWS_NETWORKFIREWALL_API ProxyConfigDefaultRulePhaseActionsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyConfigDefaultRulePhaseActionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Before domain resolution. </p>
   */
  inline ProxyRulePhaseAction GetPreDNS() const { return m_preDNS; }
  inline bool PreDNSHasBeenSet() const { return m_preDNSHasBeenSet; }
  inline void SetPreDNS(ProxyRulePhaseAction value) {
    m_preDNSHasBeenSet = true;
    m_preDNS = value;
  }
  inline ProxyConfigDefaultRulePhaseActionsRequest& WithPreDNS(ProxyRulePhaseAction value) {
    SetPreDNS(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>After DNS, before request.</p>
   */
  inline ProxyRulePhaseAction GetPreREQUEST() const { return m_preREQUEST; }
  inline bool PreREQUESTHasBeenSet() const { return m_preREQUESTHasBeenSet; }
  inline void SetPreREQUEST(ProxyRulePhaseAction value) {
    m_preREQUESTHasBeenSet = true;
    m_preREQUEST = value;
  }
  inline ProxyConfigDefaultRulePhaseActionsRequest& WithPreREQUEST(ProxyRulePhaseAction value) {
    SetPreREQUEST(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>After receiving response.</p>
   */
  inline ProxyRulePhaseAction GetPostRESPONSE() const { return m_postRESPONSE; }
  inline bool PostRESPONSEHasBeenSet() const { return m_postRESPONSEHasBeenSet; }
  inline void SetPostRESPONSE(ProxyRulePhaseAction value) {
    m_postRESPONSEHasBeenSet = true;
    m_postRESPONSE = value;
  }
  inline ProxyConfigDefaultRulePhaseActionsRequest& WithPostRESPONSE(ProxyRulePhaseAction value) {
    SetPostRESPONSE(value);
    return *this;
  }
  ///@}
 private:
  ProxyRulePhaseAction m_preDNS{ProxyRulePhaseAction::NOT_SET};

  ProxyRulePhaseAction m_preREQUEST{ProxyRulePhaseAction::NOT_SET};

  ProxyRulePhaseAction m_postRESPONSE{ProxyRulePhaseAction::NOT_SET};
  bool m_preDNSHasBeenSet = false;
  bool m_preREQUESTHasBeenSet = false;
  bool m_postRESPONSEHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
