/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FirewallPolicyResponse.h>
#include <aws/network-firewall/model/FirewallPolicy.h>
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
  class DescribeFirewallPolicyResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeFirewallPolicyResult();
    AWS_NETWORKFIREWALL_API DescribeFirewallPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeFirewallPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline DescribeFirewallPolicyResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline DescribeFirewallPolicyResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline DescribeFirewallPolicyResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline const FirewallPolicyResponse& GetFirewallPolicyResponse() const{ return m_firewallPolicyResponse; }

    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline void SetFirewallPolicyResponse(const FirewallPolicyResponse& value) { m_firewallPolicyResponse = value; }

    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline void SetFirewallPolicyResponse(FirewallPolicyResponse&& value) { m_firewallPolicyResponse = std::move(value); }

    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline DescribeFirewallPolicyResult& WithFirewallPolicyResponse(const FirewallPolicyResponse& value) { SetFirewallPolicyResponse(value); return *this;}

    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline DescribeFirewallPolicyResult& WithFirewallPolicyResponse(FirewallPolicyResponse&& value) { SetFirewallPolicyResponse(std::move(value)); return *this;}


    /**
     * <p>The policy for the specified firewall policy. </p>
     */
    inline const FirewallPolicy& GetFirewallPolicy() const{ return m_firewallPolicy; }

    /**
     * <p>The policy for the specified firewall policy. </p>
     */
    inline void SetFirewallPolicy(const FirewallPolicy& value) { m_firewallPolicy = value; }

    /**
     * <p>The policy for the specified firewall policy. </p>
     */
    inline void SetFirewallPolicy(FirewallPolicy&& value) { m_firewallPolicy = std::move(value); }

    /**
     * <p>The policy for the specified firewall policy. </p>
     */
    inline DescribeFirewallPolicyResult& WithFirewallPolicy(const FirewallPolicy& value) { SetFirewallPolicy(value); return *this;}

    /**
     * <p>The policy for the specified firewall policy. </p>
     */
    inline DescribeFirewallPolicyResult& WithFirewallPolicy(FirewallPolicy&& value) { SetFirewallPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_updateToken;

    FirewallPolicyResponse m_firewallPolicyResponse;

    FirewallPolicy m_firewallPolicy;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
