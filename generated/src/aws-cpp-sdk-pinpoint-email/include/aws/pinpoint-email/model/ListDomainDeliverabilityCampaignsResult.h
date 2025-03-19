/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DomainDeliverabilityCampaign.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An array of objects that provide deliverability data for all the campaigns
   * that used a specific domain to send email during a specified time range. This
   * data is available for a domain only if you enabled the Deliverability dashboard
   * (<code>PutDeliverabilityDashboardOption</code> operation) for the
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDomainDeliverabilityCampaignsResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainDeliverabilityCampaignsResult
  {
  public:
    AWS_PINPOINTEMAIL_API ListDomainDeliverabilityCampaignsResult() = default;
    AWS_PINPOINTEMAIL_API ListDomainDeliverabilityCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API ListDomainDeliverabilityCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityCampaign>& GetDomainDeliverabilityCampaigns() const { return m_domainDeliverabilityCampaigns; }
    template<typename DomainDeliverabilityCampaignsT = Aws::Vector<DomainDeliverabilityCampaign>>
    void SetDomainDeliverabilityCampaigns(DomainDeliverabilityCampaignsT&& value) { m_domainDeliverabilityCampaignsHasBeenSet = true; m_domainDeliverabilityCampaigns = std::forward<DomainDeliverabilityCampaignsT>(value); }
    template<typename DomainDeliverabilityCampaignsT = Aws::Vector<DomainDeliverabilityCampaign>>
    ListDomainDeliverabilityCampaignsResult& WithDomainDeliverabilityCampaigns(DomainDeliverabilityCampaignsT&& value) { SetDomainDeliverabilityCampaigns(std::forward<DomainDeliverabilityCampaignsT>(value)); return *this;}
    template<typename DomainDeliverabilityCampaignsT = DomainDeliverabilityCampaign>
    ListDomainDeliverabilityCampaignsResult& AddDomainDeliverabilityCampaigns(DomainDeliverabilityCampaignsT&& value) { m_domainDeliverabilityCampaignsHasBeenSet = true; m_domainDeliverabilityCampaigns.emplace_back(std::forward<DomainDeliverabilityCampaignsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainDeliverabilityCampaignsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainDeliverabilityCampaignsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainDeliverabilityCampaign> m_domainDeliverabilityCampaigns;
    bool m_domainDeliverabilityCampaignsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
