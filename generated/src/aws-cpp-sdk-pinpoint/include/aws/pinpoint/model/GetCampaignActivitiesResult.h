/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ActivitiesResponse.h>
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
  class GetCampaignActivitiesResult
  {
  public:
    AWS_PINPOINT_API GetCampaignActivitiesResult();
    AWS_PINPOINT_API GetCampaignActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ActivitiesResponse& GetActivitiesResponse() const{ return m_activitiesResponse; }

    
    inline void SetActivitiesResponse(const ActivitiesResponse& value) { m_activitiesResponse = value; }

    
    inline void SetActivitiesResponse(ActivitiesResponse&& value) { m_activitiesResponse = std::move(value); }

    
    inline GetCampaignActivitiesResult& WithActivitiesResponse(const ActivitiesResponse& value) { SetActivitiesResponse(value); return *this;}

    
    inline GetCampaignActivitiesResult& WithActivitiesResponse(ActivitiesResponse&& value) { SetActivitiesResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCampaignActivitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCampaignActivitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCampaignActivitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ActivitiesResponse m_activitiesResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
