/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignDateRangeKpiResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetCampaignDateRangeKpiResult
  {
  public:
    AWS_PINPOINT_API GetCampaignDateRangeKpiResult();
    AWS_PINPOINT_API GetCampaignDateRangeKpiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignDateRangeKpiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CampaignDateRangeKpiResponse& GetCampaignDateRangeKpiResponse() const{ return m_campaignDateRangeKpiResponse; }

    
    inline void SetCampaignDateRangeKpiResponse(const CampaignDateRangeKpiResponse& value) { m_campaignDateRangeKpiResponse = value; }

    
    inline void SetCampaignDateRangeKpiResponse(CampaignDateRangeKpiResponse&& value) { m_campaignDateRangeKpiResponse = std::move(value); }

    
    inline GetCampaignDateRangeKpiResult& WithCampaignDateRangeKpiResponse(const CampaignDateRangeKpiResponse& value) { SetCampaignDateRangeKpiResponse(value); return *this;}

    
    inline GetCampaignDateRangeKpiResult& WithCampaignDateRangeKpiResponse(CampaignDateRangeKpiResponse&& value) { SetCampaignDateRangeKpiResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCampaignDateRangeKpiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCampaignDateRangeKpiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCampaignDateRangeKpiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CampaignDateRangeKpiResponse m_campaignDateRangeKpiResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
