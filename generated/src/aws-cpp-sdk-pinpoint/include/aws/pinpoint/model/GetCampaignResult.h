/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignResponse.h>
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
  class GetCampaignResult
  {
  public:
    AWS_PINPOINT_API GetCampaignResult();
    AWS_PINPOINT_API GetCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CampaignResponse& GetCampaignResponse() const{ return m_campaignResponse; }

    
    inline void SetCampaignResponse(const CampaignResponse& value) { m_campaignResponse = value; }

    
    inline void SetCampaignResponse(CampaignResponse&& value) { m_campaignResponse = std::move(value); }

    
    inline GetCampaignResult& WithCampaignResponse(const CampaignResponse& value) { SetCampaignResponse(value); return *this;}

    
    inline GetCampaignResult& WithCampaignResponse(CampaignResponse&& value) { SetCampaignResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCampaignResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCampaignResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCampaignResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CampaignResponse m_campaignResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
