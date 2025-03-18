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
    AWS_PINPOINT_API GetCampaignActivitiesResult() = default;
    AWS_PINPOINT_API GetCampaignActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ActivitiesResponse& GetActivitiesResponse() const { return m_activitiesResponse; }
    template<typename ActivitiesResponseT = ActivitiesResponse>
    void SetActivitiesResponse(ActivitiesResponseT&& value) { m_activitiesResponseHasBeenSet = true; m_activitiesResponse = std::forward<ActivitiesResponseT>(value); }
    template<typename ActivitiesResponseT = ActivitiesResponse>
    GetCampaignActivitiesResult& WithActivitiesResponse(ActivitiesResponseT&& value) { SetActivitiesResponse(std::forward<ActivitiesResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCampaignActivitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ActivitiesResponse m_activitiesResponse;
    bool m_activitiesResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
