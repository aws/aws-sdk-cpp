/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ActivitiesResponse.h>
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

  private:

    ActivitiesResponse m_activitiesResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
