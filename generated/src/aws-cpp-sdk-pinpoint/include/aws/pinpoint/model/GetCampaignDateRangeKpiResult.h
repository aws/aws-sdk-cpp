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
    AWS_PINPOINT_API GetCampaignDateRangeKpiResult() = default;
    AWS_PINPOINT_API GetCampaignDateRangeKpiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignDateRangeKpiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const CampaignDateRangeKpiResponse& GetCampaignDateRangeKpiResponse() const { return m_campaignDateRangeKpiResponse; }
    template<typename CampaignDateRangeKpiResponseT = CampaignDateRangeKpiResponse>
    void SetCampaignDateRangeKpiResponse(CampaignDateRangeKpiResponseT&& value) { m_campaignDateRangeKpiResponseHasBeenSet = true; m_campaignDateRangeKpiResponse = std::forward<CampaignDateRangeKpiResponseT>(value); }
    template<typename CampaignDateRangeKpiResponseT = CampaignDateRangeKpiResponse>
    GetCampaignDateRangeKpiResult& WithCampaignDateRangeKpiResponse(CampaignDateRangeKpiResponseT&& value) { SetCampaignDateRangeKpiResponse(std::forward<CampaignDateRangeKpiResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCampaignDateRangeKpiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CampaignDateRangeKpiResponse m_campaignDateRangeKpiResponse;
    bool m_campaignDateRangeKpiResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
