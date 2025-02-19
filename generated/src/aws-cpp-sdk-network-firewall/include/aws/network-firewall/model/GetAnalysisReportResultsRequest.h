/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class GetAnalysisReportResultsRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnalysisReportResults"; }

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
    inline GetAnalysisReportResultsRequest& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline GetAnalysisReportResultsRequest& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline GetAnalysisReportResultsRequest& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the query that ran when you requested an analysis report.
     * </p>
     */
    inline const Aws::String& GetAnalysisReportId() const{ return m_analysisReportId; }
    inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }
    inline void SetAnalysisReportId(const Aws::String& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = value; }
    inline void SetAnalysisReportId(Aws::String&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::move(value); }
    inline void SetAnalysisReportId(const char* value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId.assign(value); }
    inline GetAnalysisReportResultsRequest& WithAnalysisReportId(const Aws::String& value) { SetAnalysisReportId(value); return *this;}
    inline GetAnalysisReportResultsRequest& WithAnalysisReportId(Aws::String&& value) { SetAnalysisReportId(std::move(value)); return *this;}
    inline GetAnalysisReportResultsRequest& WithAnalysisReportId(const char* value) { SetAnalysisReportId(value); return *this;}
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
    inline GetAnalysisReportResultsRequest& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline GetAnalysisReportResultsRequest& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline GetAnalysisReportResultsRequest& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetAnalysisReportResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAnalysisReportResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAnalysisReportResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAnalysisReportResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
