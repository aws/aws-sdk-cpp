/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallPolicyResponse.h>
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
  class DeleteFirewallPolicyResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteFirewallPolicyResult();
    AWS_NETWORKFIREWALL_API DeleteFirewallPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteFirewallPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The object containing the definition of the <a>FirewallPolicyResponse</a>
     * that you asked to delete. </p>
     */
    inline const FirewallPolicyResponse& GetFirewallPolicyResponse() const{ return m_firewallPolicyResponse; }

    /**
     * <p>The object containing the definition of the <a>FirewallPolicyResponse</a>
     * that you asked to delete. </p>
     */
    inline void SetFirewallPolicyResponse(const FirewallPolicyResponse& value) { m_firewallPolicyResponse = value; }

    /**
     * <p>The object containing the definition of the <a>FirewallPolicyResponse</a>
     * that you asked to delete. </p>
     */
    inline void SetFirewallPolicyResponse(FirewallPolicyResponse&& value) { m_firewallPolicyResponse = std::move(value); }

    /**
     * <p>The object containing the definition of the <a>FirewallPolicyResponse</a>
     * that you asked to delete. </p>
     */
    inline DeleteFirewallPolicyResult& WithFirewallPolicyResponse(const FirewallPolicyResponse& value) { SetFirewallPolicyResponse(value); return *this;}

    /**
     * <p>The object containing the definition of the <a>FirewallPolicyResponse</a>
     * that you asked to delete. </p>
     */
    inline DeleteFirewallPolicyResult& WithFirewallPolicyResponse(FirewallPolicyResponse&& value) { SetFirewallPolicyResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteFirewallPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteFirewallPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteFirewallPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FirewallPolicyResponse m_firewallPolicyResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
