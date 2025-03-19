/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class ListFirewallConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallConfigsResult() = default;
    AWS_ROUTE53RESOLVER_API ListFirewallConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFirewallConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for the firewall behavior provided by DNS Firewall for
     * VPCs from Amazon Virtual Private Cloud (Amazon VPC). </p>
     */
    inline const Aws::Vector<FirewallConfig>& GetFirewallConfigs() const { return m_firewallConfigs; }
    template<typename FirewallConfigsT = Aws::Vector<FirewallConfig>>
    void SetFirewallConfigs(FirewallConfigsT&& value) { m_firewallConfigsHasBeenSet = true; m_firewallConfigs = std::forward<FirewallConfigsT>(value); }
    template<typename FirewallConfigsT = Aws::Vector<FirewallConfig>>
    ListFirewallConfigsResult& WithFirewallConfigs(FirewallConfigsT&& value) { SetFirewallConfigs(std::forward<FirewallConfigsT>(value)); return *this;}
    template<typename FirewallConfigsT = FirewallConfig>
    ListFirewallConfigsResult& AddFirewallConfigs(FirewallConfigsT&& value) { m_firewallConfigsHasBeenSet = true; m_firewallConfigs.emplace_back(std::forward<FirewallConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFirewallConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FirewallConfig> m_firewallConfigs;
    bool m_firewallConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
