/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/CreateProxyRule.h>

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
 * type is used specifically for the <a>CreateProxyRules</a> API.</p> <p>Pre-DNS -
 * before domain resolution.</p> <p>Pre-Request - after DNS, before request.</p>
 * <p>Post-Response - after receiving response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateProxyRulesByRequestPhase">AWS
 * API Reference</a></p>
 */
class CreateProxyRulesByRequestPhase {
 public:
  AWS_NETWORKFIREWALL_API CreateProxyRulesByRequestPhase() = default;
  AWS_NETWORKFIREWALL_API CreateProxyRulesByRequestPhase(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API CreateProxyRulesByRequestPhase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Before domain resolution. </p>
   */
  inline const Aws::Vector<CreateProxyRule>& GetPreDNS() const { return m_preDNS; }
  inline bool PreDNSHasBeenSet() const { return m_preDNSHasBeenSet; }
  template <typename PreDNST = Aws::Vector<CreateProxyRule>>
  void SetPreDNS(PreDNST&& value) {
    m_preDNSHasBeenSet = true;
    m_preDNS = std::forward<PreDNST>(value);
  }
  template <typename PreDNST = Aws::Vector<CreateProxyRule>>
  CreateProxyRulesByRequestPhase& WithPreDNS(PreDNST&& value) {
    SetPreDNS(std::forward<PreDNST>(value));
    return *this;
  }
  template <typename PreDNST = CreateProxyRule>
  CreateProxyRulesByRequestPhase& AddPreDNS(PreDNST&& value) {
    m_preDNSHasBeenSet = true;
    m_preDNS.emplace_back(std::forward<PreDNST>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>After DNS, before request.</p>
   */
  inline const Aws::Vector<CreateProxyRule>& GetPreREQUEST() const { return m_preREQUEST; }
  inline bool PreREQUESTHasBeenSet() const { return m_preREQUESTHasBeenSet; }
  template <typename PreREQUESTT = Aws::Vector<CreateProxyRule>>
  void SetPreREQUEST(PreREQUESTT&& value) {
    m_preREQUESTHasBeenSet = true;
    m_preREQUEST = std::forward<PreREQUESTT>(value);
  }
  template <typename PreREQUESTT = Aws::Vector<CreateProxyRule>>
  CreateProxyRulesByRequestPhase& WithPreREQUEST(PreREQUESTT&& value) {
    SetPreREQUEST(std::forward<PreREQUESTT>(value));
    return *this;
  }
  template <typename PreREQUESTT = CreateProxyRule>
  CreateProxyRulesByRequestPhase& AddPreREQUEST(PreREQUESTT&& value) {
    m_preREQUESTHasBeenSet = true;
    m_preREQUEST.emplace_back(std::forward<PreREQUESTT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>After receiving response.</p>
   */
  inline const Aws::Vector<CreateProxyRule>& GetPostRESPONSE() const { return m_postRESPONSE; }
  inline bool PostRESPONSEHasBeenSet() const { return m_postRESPONSEHasBeenSet; }
  template <typename PostRESPONSET = Aws::Vector<CreateProxyRule>>
  void SetPostRESPONSE(PostRESPONSET&& value) {
    m_postRESPONSEHasBeenSet = true;
    m_postRESPONSE = std::forward<PostRESPONSET>(value);
  }
  template <typename PostRESPONSET = Aws::Vector<CreateProxyRule>>
  CreateProxyRulesByRequestPhase& WithPostRESPONSE(PostRESPONSET&& value) {
    SetPostRESPONSE(std::forward<PostRESPONSET>(value));
    return *this;
  }
  template <typename PostRESPONSET = CreateProxyRule>
  CreateProxyRulesByRequestPhase& AddPostRESPONSE(PostRESPONSET&& value) {
    m_postRESPONSEHasBeenSet = true;
    m_postRESPONSE.emplace_back(std::forward<PostRESPONSET>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CreateProxyRule> m_preDNS;
  bool m_preDNSHasBeenSet = false;

  Aws::Vector<CreateProxyRule> m_preREQUEST;
  bool m_preREQUESTHasBeenSet = false;

  Aws::Vector<CreateProxyRule> m_postRESPONSE;
  bool m_postRESPONSEHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
