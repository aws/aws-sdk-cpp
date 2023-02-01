/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/SubnetMapping.h>
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
  class AssociateSubnetsResult
  {
  public:
    AWS_NETWORKFIREWALL_API AssociateSubnetsResult();
    AWS_NETWORKFIREWALL_API AssociateSubnetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API AssociateSubnetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(const char* value) { m_firewallArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline AssociateSubnetsResult& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline AssociateSubnetsResult& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline AssociateSubnetsResult& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}


    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(const Aws::String& value) { m_firewallName = value; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(Aws::String&& value) { m_firewallName = std::move(value); }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(const char* value) { m_firewallName.assign(value); }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline AssociateSubnetsResult& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline AssociateSubnetsResult& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline AssociateSubnetsResult& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}


    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const{ return m_subnetMappings; }

    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline void SetSubnetMappings(const Aws::Vector<SubnetMapping>& value) { m_subnetMappings = value; }

    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline void SetSubnetMappings(Aws::Vector<SubnetMapping>&& value) { m_subnetMappings = std::move(value); }

    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline AssociateSubnetsResult& WithSubnetMappings(const Aws::Vector<SubnetMapping>& value) { SetSubnetMappings(value); return *this;}

    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline AssociateSubnetsResult& WithSubnetMappings(Aws::Vector<SubnetMapping>&& value) { SetSubnetMappings(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline AssociateSubnetsResult& AddSubnetMappings(const SubnetMapping& value) { m_subnetMappings.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline AssociateSubnetsResult& AddSubnetMappings(SubnetMapping&& value) { m_subnetMappings.push_back(std::move(value)); return *this; }


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
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }

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
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }

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
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }

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
    inline AssociateSubnetsResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

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
    inline AssociateSubnetsResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

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
    inline AssociateSubnetsResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}

  private:

    Aws::String m_firewallArn;

    Aws::String m_firewallName;

    Aws::Vector<SubnetMapping> m_subnetMappings;

    Aws::String m_updateToken;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
