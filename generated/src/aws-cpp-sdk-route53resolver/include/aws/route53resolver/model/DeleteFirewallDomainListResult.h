/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallDomainList.h>
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
  class DeleteFirewallDomainListResult
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteFirewallDomainListResult() = default;
    AWS_ROUTE53RESOLVER_API DeleteFirewallDomainListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DeleteFirewallDomainListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The domain list that you just deleted. </p>
     */
    inline const FirewallDomainList& GetFirewallDomainList() const { return m_firewallDomainList; }
    template<typename FirewallDomainListT = FirewallDomainList>
    void SetFirewallDomainList(FirewallDomainListT&& value) { m_firewallDomainListHasBeenSet = true; m_firewallDomainList = std::forward<FirewallDomainListT>(value); }
    template<typename FirewallDomainListT = FirewallDomainList>
    DeleteFirewallDomainListResult& WithFirewallDomainList(FirewallDomainListT&& value) { SetFirewallDomainList(std::forward<FirewallDomainListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFirewallDomainListResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FirewallDomainList m_firewallDomainList;
    bool m_firewallDomainListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
