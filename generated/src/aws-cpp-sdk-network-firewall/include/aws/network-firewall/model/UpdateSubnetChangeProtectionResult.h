﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class UpdateSubnetChangeProtectionResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateSubnetChangeProtectionResult();
    AWS_NETWORKFIREWALL_API UpdateSubnetChangeProtectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateSubnetChangeProtectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token that you can use for optimistic locking. Network Firewall
     * returns a token to your requests that access the firewall. The token marks the
     * state of the firewall resource at the time of the request. </p> <p>To make an
     * unconditional change to the firewall, omit the token in your update request.
     * Without the token, Network Firewall performs your updates regardless of whether
     * the firewall has changed since you last retrieved it.</p> <p>To make a
     * conditional change to the firewall, provide the token in your update request.
     * Network Firewall uses the token to ensure that the firewall hasn't changed since
     * you last retrieved it. If it has changed, the operation fails with an
     * <code>InvalidTokenException</code>. If this happens, retrieve the firewall again
     * to get a current copy of it with a new token. Reapply your changes as needed,
     * then try the operation again using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }
    inline UpdateSubnetChangeProtectionResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArn = value; }
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArn = std::move(value); }
    inline void SetFirewallArn(const char* value) { m_firewallArn.assign(value); }
    inline UpdateSubnetChangeProtectionResult& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }
    inline void SetFirewallName(const Aws::String& value) { m_firewallName = value; }
    inline void SetFirewallName(Aws::String&& value) { m_firewallName = std::move(value); }
    inline void SetFirewallName(const char* value) { m_firewallName.assign(value); }
    inline UpdateSubnetChangeProtectionResult& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting indicating whether the firewall is protected against changes to the
     * subnet associations. Use this setting to protect against accidentally modifying
     * the subnet associations for a firewall that is in use. When you create a
     * firewall, the operation initializes this setting to <code>TRUE</code>.</p>
     */
    inline bool GetSubnetChangeProtection() const{ return m_subnetChangeProtection; }
    inline void SetSubnetChangeProtection(bool value) { m_subnetChangeProtection = value; }
    inline UpdateSubnetChangeProtectionResult& WithSubnetChangeProtection(bool value) { SetSubnetChangeProtection(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSubnetChangeProtectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSubnetChangeProtectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;

    Aws::String m_firewallArn;

    Aws::String m_firewallName;

    bool m_subnetChangeProtection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
