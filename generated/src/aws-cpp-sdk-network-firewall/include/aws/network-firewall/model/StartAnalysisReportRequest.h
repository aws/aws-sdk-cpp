/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
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
  class StartAnalysisReportRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API StartAnalysisReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAnalysisReport"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline StartAnalysisReportRequest& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline StartAnalysisReportRequest& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline StartAnalysisReportRequest& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
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
    inline StartAnalysisReportRequest& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline StartAnalysisReportRequest& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline StartAnalysisReportRequest& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic that will be used to generate a report. </p>
     */
    inline const EnabledAnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(const EnabledAnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline void SetAnalysisType(EnabledAnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }
    inline StartAnalysisReportRequest& WithAnalysisType(const EnabledAnalysisType& value) { SetAnalysisType(value); return *this;}
    inline StartAnalysisReportRequest& WithAnalysisType(EnabledAnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    EnabledAnalysisType m_analysisType;
    bool m_analysisTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
