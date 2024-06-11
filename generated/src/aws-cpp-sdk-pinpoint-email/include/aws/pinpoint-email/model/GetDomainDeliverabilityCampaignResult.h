﻿/**
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
    AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult();
    AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline const DomainDeliverabilityCampaign& GetDomainDeliverabilityCampaign() const{ return m_domainDeliverabilityCampaign; }
    inline void SetDomainDeliverabilityCampaign(const DomainDeliverabilityCampaign& value) { m_domainDeliverabilityCampaign = value; }
    inline void SetDomainDeliverabilityCampaign(DomainDeliverabilityCampaign&& value) { m_domainDeliverabilityCampaign = std::move(value); }
    inline GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(const DomainDeliverabilityCampaign& value) { SetDomainDeliverabilityCampaign(value); return *this;}
    inline GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(DomainDeliverabilityCampaign&& value) { SetDomainDeliverabilityCampaign(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDomainDeliverabilityCampaignResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDomainDeliverabilityCampaignResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDomainDeliverabilityCampaignResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DomainDeliverabilityCampaign m_domainDeliverabilityCampaign;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
