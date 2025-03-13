/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/CampaignSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListCampaignsResult
  {
  public:
    AWS_PERSONALIZE_API ListCampaignsResult() = default;
    AWS_PERSONALIZE_API ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the campaigns.</p>
     */
    inline const Aws::Vector<CampaignSummary>& GetCampaigns() const { return m_campaigns; }
    template<typename CampaignsT = Aws::Vector<CampaignSummary>>
    void SetCampaigns(CampaignsT&& value) { m_campaignsHasBeenSet = true; m_campaigns = std::forward<CampaignsT>(value); }
    template<typename CampaignsT = Aws::Vector<CampaignSummary>>
    ListCampaignsResult& WithCampaigns(CampaignsT&& value) { SetCampaigns(std::forward<CampaignsT>(value)); return *this;}
    template<typename CampaignsT = CampaignSummary>
    ListCampaignsResult& AddCampaigns(CampaignsT&& value) { m_campaignsHasBeenSet = true; m_campaigns.emplace_back(std::forward<CampaignsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCampaignsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCampaignsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CampaignSummary> m_campaigns;
    bool m_campaignsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
