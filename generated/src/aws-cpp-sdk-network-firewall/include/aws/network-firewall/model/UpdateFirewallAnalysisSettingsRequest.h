/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/EnabledAnalysisType.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class UpdateFirewallAnalysisSettingsRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateFirewallAnalysisSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallAnalysisSettings"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An optional setting indicating the specific traffic analysis types to enable
     * on the firewall. </p>
     */
    inline const Aws::Vector<EnabledAnalysisType>& GetEnabledAnalysisTypes() const{ return m_enabledAnalysisTypes; }
    inline bool EnabledAnalysisTypesHasBeenSet() const { return m_enabledAnalysisTypesHasBeenSet; }
    inline void SetEnabledAnalysisTypes(const Aws::Vector<EnabledAnalysisType>& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes = value; }
    inline void SetEnabledAnalysisTypes(Aws::Vector<EnabledAnalysisType>&& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes = std::move(value); }
    inline UpdateFirewallAnalysisSettingsRequest& WithEnabledAnalysisTypes(const Aws::Vector<EnabledAnalysisType>& value) { SetEnabledAnalysisTypes(value); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithEnabledAnalysisTypes(Aws::Vector<EnabledAnalysisType>&& value) { SetEnabledAnalysisTypes(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& AddEnabledAnalysisTypes(const EnabledAnalysisType& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes.push_back(value); return *this; }
    inline UpdateFirewallAnalysisSettingsRequest& AddEnabledAnalysisTypes(EnabledAnalysisType&& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArnHasBeenSet = true; m_firewallArn = value; }
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::move(value); }
    inline void SetFirewallArn(const char* value) { m_firewallArnHasBeenSet = true; m_firewallArn.assign(value); }
    inline UpdateFirewallAnalysisSettingsRequest& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p> <p>You must specify the ARN or the name, and you can
     * specify both. </p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
    inline void SetFirewallName(const Aws::String& value) { m_firewallNameHasBeenSet = true; m_firewallName = value; }
    inline void SetFirewallName(Aws::String&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::move(value); }
    inline void SetFirewallName(const char* value) { m_firewallNameHasBeenSet = true; m_firewallName.assign(value); }
    inline UpdateFirewallAnalysisSettingsRequest& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
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
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }
    inline UpdateFirewallAnalysisSettingsRequest& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline UpdateFirewallAnalysisSettingsRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<EnabledAnalysisType> m_enabledAnalysisTypes;
    bool m_enabledAnalysisTypesHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
