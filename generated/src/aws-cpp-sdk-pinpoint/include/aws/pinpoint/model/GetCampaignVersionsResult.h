/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignsResponse.h>
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
  class GetCampaignVersionsResult
  {
  public:
    AWS_PINPOINT_API GetCampaignVersionsResult();
    AWS_PINPOINT_API GetCampaignVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CampaignsResponse& GetCampaignsResponse() const{ return m_campaignsResponse; }

    
    inline void SetCampaignsResponse(const CampaignsResponse& value) { m_campaignsResponse = value; }

    
    inline void SetCampaignsResponse(CampaignsResponse&& value) { m_campaignsResponse = std::move(value); }

    
    inline GetCampaignVersionsResult& WithCampaignsResponse(const CampaignsResponse& value) { SetCampaignsResponse(value); return *this;}

    
    inline GetCampaignVersionsResult& WithCampaignsResponse(CampaignsResponse&& value) { SetCampaignsResponse(std::move(value)); return *this;}

  private:

    CampaignsResponse m_campaignsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
