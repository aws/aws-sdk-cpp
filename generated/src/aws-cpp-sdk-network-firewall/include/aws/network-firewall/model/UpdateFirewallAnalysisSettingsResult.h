/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/EnabledAnalysisType.h>
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
  class UpdateFirewallAnalysisSettingsResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateFirewallAnalysisSettingsResult();
    AWS_NETWORKFIREWALL_API UpdateFirewallAnalysisSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateFirewallAnalysisSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional setting indicating the specific traffic analysis types to enable
     * on the firewall. </p>
     */
    inline const Aws::Vector<EnabledAnalysisType>& GetEnabledAnalysisTypes() const{ return m_enabledAnalysisTypes; }
    inline void SetEnabledAnalysisTypes(const Aws::Vector<EnabledAnalysisType>& value) { m_enabledAnalysisTypes = value; }
    inline void SetEnabledAnalysisTypes(Aws::Vector<EnabledAnalysisType>&& value) { m_enabledAnalysisTypes = std::move(value); }
    inline UpdateFirewallAnalysisSettingsResult& WithEnabledAnalysisTypes(const Aws::Vector<EnabledAnalysisType>& value) { SetEnabledAnalysisTypes(value); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithEnabledAnalysisTypes(Aws::Vector<EnabledAnalysisType>&& value) { SetEnabledAnalysisTypes(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& AddEnabledAnalysisTypes(const EnabledAnalysisType& value) { m_enabledAnalysisTypes.push_back(value); return *this; }
    inline UpdateFirewallAnalysisSettingsResult& AddEnabledAnalysisTypes(EnabledAnalysisType&& value) { m_enabledAnalysisTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArn = value; }
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArn = std::move(value); }
    inline void SetFirewallArn(const char* value) { m_firewallArn.assign(value); }
    inline UpdateFirewallAnalysisSettingsResult& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p> <p>You must specify the ARN or the name, and you can
     * specify both. </p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }
    inline void SetFirewallName(const Aws::String& value) { m_firewallName = value; }
    inline void SetFirewallName(Aws::String&& value) { m_firewallName = std::move(value); }
    inline void SetFirewallName(const char* value) { m_firewallName.assign(value); }
    inline UpdateFirewallAnalysisSettingsResult& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

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
    inline UpdateFirewallAnalysisSettingsResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFirewallAnalysisSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EnabledAnalysisType> m_enabledAnalysisTypes;

    Aws::String m_firewallArn;

    Aws::String m_firewallName;

    Aws::String m_updateToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
