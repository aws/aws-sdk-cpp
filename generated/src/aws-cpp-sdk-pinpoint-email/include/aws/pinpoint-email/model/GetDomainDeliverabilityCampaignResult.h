/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/DomainDeliverabilityCampaign.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An object that contains all the deliverability data for a specific campaign.
   * This data is available for a campaign only if the campaign sent email by using a
   * domain that the Deliverability dashboard is enabled for
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainDeliverabilityCampaignResponse">AWS
   * API Reference</a></p>
   */
  class GetDomainDeliverabilityCampaignResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult() = default;
    AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline const DomainDeliverabilityCampaign& GetDomainDeliverabilityCampaign() const { return m_domainDeliverabilityCampaign; }
    template<typename DomainDeliverabilityCampaignT = DomainDeliverabilityCampaign>
    void SetDomainDeliverabilityCampaign(DomainDeliverabilityCampaignT&& value) { m_domainDeliverabilityCampaignHasBeenSet = true; m_domainDeliverabilityCampaign = std::forward<DomainDeliverabilityCampaignT>(value); }
    template<typename DomainDeliverabilityCampaignT = DomainDeliverabilityCampaign>
    GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(DomainDeliverabilityCampaignT&& value) { SetDomainDeliverabilityCampaign(std::forward<DomainDeliverabilityCampaignT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainDeliverabilityCampaignResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainDeliverabilityCampaign m_domainDeliverabilityCampaign;
    bool m_domainDeliverabilityCampaignHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
