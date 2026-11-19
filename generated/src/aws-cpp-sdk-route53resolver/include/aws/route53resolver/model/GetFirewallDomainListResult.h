/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallDomainList.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {
class GetFirewallDomainListResult {
 public:
  AWS_ROUTE53RESOLVER_API GetFirewallDomainListResult() = default;
  AWS_ROUTE53RESOLVER_API GetFirewallDomainListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53RESOLVER_API GetFirewallDomainListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The domain list that you requested. </p>
   */
  inline const FirewallDomainList& GetFirewallDomainList() const { return m_firewallDomainList; }
  template <typename FirewallDomainListT = FirewallDomainList>
  void SetFirewallDomainList(FirewallDomainListT&& value) {
    m_firewallDomainListHasBeenSet = true;
    m_firewallDomainList = std::forward<FirewallDomainListT>(value);
  }
  template <typename FirewallDomainListT = FirewallDomainList>
  GetFirewallDomainListResult& WithFirewallDomainList(FirewallDomainListT&& value) {
    SetFirewallDomainList(std::forward<FirewallDomainListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an AutoAllowlist domain list, the ID of the firewall rule group that
   * contains the AutoAllowlist rule that owns this domain list. Present only when
   * <code>ManagedListType</code> is <code>AUTOALLOWLIST</code>.</p>
   */
  inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
  template <typename FirewallRuleGroupIdT = Aws::String>
  void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    m_firewallRuleGroupIdHasBeenSet = true;
    m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value);
  }
  template <typename FirewallRuleGroupIdT = Aws::String>
  GetFirewallDomainListResult& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an AutoAllowlist domain list, the threat protection ID of the
   * auto-allowlist rule that owns this domain list. Provide it to
   * <a>ListFirewallRuleDomains</a> to review the observed, allowed, and denied
   * domains. Present only when <code>ManagedListType</code> is
   * <code>AUTOALLOWLIST</code>.</p>
   */
  inline const Aws::String& GetFirewallThreatProtectionId() const { return m_firewallThreatProtectionId; }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  void SetFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    m_firewallThreatProtectionIdHasBeenSet = true;
    m_firewallThreatProtectionId = std::forward<FirewallThreatProtectionIdT>(value);
  }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  GetFirewallDomainListResult& WithFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    SetFirewallThreatProtectionId(std::forward<FirewallThreatProtectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetFirewallDomainListResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  FirewallDomainList m_firewallDomainList;

  Aws::String m_firewallRuleGroupId;

  Aws::String m_firewallThreatProtectionId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_firewallDomainListHasBeenSet = false;
  bool m_firewallRuleGroupIdHasBeenSet = false;
  bool m_firewallThreatProtectionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
