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
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsRequest() = default;

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
    inline const Aws::String& GetFirewallName() const { return m_firewallName; }
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
    template<typename FirewallNameT = Aws::String>
    void SetFirewallName(FirewallNameT&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::forward<FirewallNameT>(value); }
    template<typename FirewallNameT = Aws::String>
    GetAnalysisReportResultsRequest& WithFirewallName(FirewallNameT&& value) { SetFirewallName(std::forward<FirewallNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the query that ran when you requested an analysis report.
     * </p>
     */
    inline const Aws::String& GetAnalysisReportId() const { return m_analysisReportId; }
    inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }
    template<typename AnalysisReportIdT = Aws::String>
    void SetAnalysisReportId(AnalysisReportIdT&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::forward<AnalysisReportIdT>(value); }
    template<typename AnalysisReportIdT = Aws::String>
    GetAnalysisReportResultsRequest& WithAnalysisReportId(AnalysisReportIdT&& value) { SetAnalysisReportId(std::forward<AnalysisReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    GetAnalysisReportResultsRequest& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAnalysisReportResultsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
