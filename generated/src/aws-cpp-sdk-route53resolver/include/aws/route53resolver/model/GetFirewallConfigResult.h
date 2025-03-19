/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetFirewallConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetFirewallConfigResult() = default;
    AWS_ROUTE53RESOLVER_API GetFirewallConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetFirewallConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
     * VPC from AmazonVPC. </p>
     */
    inline const FirewallConfig& GetFirewallConfig() const { return m_firewallConfig; }
    template<typename FirewallConfigT = FirewallConfig>
    void SetFirewallConfig(FirewallConfigT&& value) { m_firewallConfigHasBeenSet = true; m_firewallConfig = std::forward<FirewallConfigT>(value); }
    template<typename FirewallConfigT = FirewallConfig>
    GetFirewallConfigResult& WithFirewallConfig(FirewallConfigT&& value) { SetFirewallConfig(std::forward<FirewallConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFirewallConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FirewallConfig m_firewallConfig;
    bool m_firewallConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
