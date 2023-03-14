/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DomainDeliverabilityCampaign.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>An object that contains all the deliverability data for a specific campaign.
   * This data is available for a campaign only if the campaign sent email by using a
   * domain that the Deliverability dashboard is enabled for.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaignResponse">AWS
   * API Reference</a></p>
   */
  class GetDomainDeliverabilityCampaignResult
  {
  public:
    AWS_SESV2_API GetDomainDeliverabilityCampaignResult();
    AWS_SESV2_API GetDomainDeliverabilityCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDomainDeliverabilityCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline const DomainDeliverabilityCampaign& GetDomainDeliverabilityCampaign() const{ return m_domainDeliverabilityCampaign; }

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline void SetDomainDeliverabilityCampaign(const DomainDeliverabilityCampaign& value) { m_domainDeliverabilityCampaign = value; }

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline void SetDomainDeliverabilityCampaign(DomainDeliverabilityCampaign&& value) { m_domainDeliverabilityCampaign = std::move(value); }

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(const DomainDeliverabilityCampaign& value) { SetDomainDeliverabilityCampaign(value); return *this;}

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(DomainDeliverabilityCampaign&& value) { SetDomainDeliverabilityCampaign(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDomainDeliverabilityCampaignResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDomainDeliverabilityCampaignResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDomainDeliverabilityCampaignResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainDeliverabilityCampaign m_domainDeliverabilityCampaign;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
