﻿/**
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
    AWS_PERSONALIZE_API ListCampaignsResult();
    AWS_PERSONALIZE_API ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the campaigns.</p>
     */
    inline const Aws::Vector<CampaignSummary>& GetCampaigns() const{ return m_campaigns; }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline void SetCampaigns(const Aws::Vector<CampaignSummary>& value) { m_campaigns = value; }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline void SetCampaigns(Aws::Vector<CampaignSummary>&& value) { m_campaigns = std::move(value); }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& WithCampaigns(const Aws::Vector<CampaignSummary>& value) { SetCampaigns(value); return *this;}

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& WithCampaigns(Aws::Vector<CampaignSummary>&& value) { SetCampaigns(std::move(value)); return *this;}

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& AddCampaigns(const CampaignSummary& value) { m_campaigns.push_back(value); return *this; }

    /**
     * <p>A list of the campaigns.</p>
     */
    inline ListCampaignsResult& AddCampaigns(CampaignSummary&& value) { m_campaigns.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCampaignsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCampaignsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCampaignsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CampaignSummary> m_campaigns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
