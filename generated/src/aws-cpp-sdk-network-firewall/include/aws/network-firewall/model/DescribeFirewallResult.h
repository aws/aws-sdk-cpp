/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/Firewall.h>
#include <aws/network-firewall/model/FirewallStatus.h>
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
  class DescribeFirewallResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeFirewallResult();
    AWS_NETWORKFIREWALL_API DescribeFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeFirewallResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

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
    inline DescribeFirewallResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

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
    inline DescribeFirewallResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline const Firewall& GetFirewall() const{ return m_firewall; }

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline void SetFirewall(const Firewall& value) { m_firewall = value; }

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline void SetFirewall(Firewall&& value) { m_firewall = std::move(value); }

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline DescribeFirewallResult& WithFirewall(const Firewall& value) { SetFirewall(value); return *this;}

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline DescribeFirewallResult& WithFirewall(Firewall&& value) { SetFirewall(std::move(value)); return *this;}


    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline const FirewallStatus& GetFirewallStatus() const{ return m_firewallStatus; }

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline void SetFirewallStatus(const FirewallStatus& value) { m_firewallStatus = value; }

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline void SetFirewallStatus(FirewallStatus&& value) { m_firewallStatus = std::move(value); }

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline DescribeFirewallResult& WithFirewallStatus(const FirewallStatus& value) { SetFirewallStatus(value); return *this;}

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline DescribeFirewallResult& WithFirewallStatus(FirewallStatus&& value) { SetFirewallStatus(std::move(value)); return *this;}

  private:

    Aws::String m_updateToken;

    Firewall m_firewall;

    FirewallStatus m_firewallStatus;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
