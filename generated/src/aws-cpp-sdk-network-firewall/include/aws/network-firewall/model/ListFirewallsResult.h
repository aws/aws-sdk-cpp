﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/FirewallMetadata.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class ListFirewallsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListFirewallsResult();
    AWS_NETWORKFIREWALL_API ListFirewallsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListFirewallsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFirewallsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFirewallsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFirewallsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firewall metadata objects for the VPCs that you specified. Depending on
     * your setting for max results and the number of firewalls you have, a single call
     * might not be the full list. </p>
     */
    inline const Aws::Vector<FirewallMetadata>& GetFirewalls() const{ return m_firewalls; }
    inline void SetFirewalls(const Aws::Vector<FirewallMetadata>& value) { m_firewalls = value; }
    inline void SetFirewalls(Aws::Vector<FirewallMetadata>&& value) { m_firewalls = std::move(value); }
    inline ListFirewallsResult& WithFirewalls(const Aws::Vector<FirewallMetadata>& value) { SetFirewalls(value); return *this;}
    inline ListFirewallsResult& WithFirewalls(Aws::Vector<FirewallMetadata>&& value) { SetFirewalls(std::move(value)); return *this;}
    inline ListFirewallsResult& AddFirewalls(const FirewallMetadata& value) { m_firewalls.push_back(value); return *this; }
    inline ListFirewallsResult& AddFirewalls(FirewallMetadata&& value) { m_firewalls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFirewallsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFirewallsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFirewallsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallMetadata> m_firewalls;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
