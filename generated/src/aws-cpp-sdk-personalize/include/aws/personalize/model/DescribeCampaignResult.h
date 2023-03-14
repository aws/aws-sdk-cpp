/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Campaign.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeCampaignResult
  {
  public:
    AWS_PERSONALIZE_API DescribeCampaignResult();
    AWS_PERSONALIZE_API DescribeCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the campaign.</p>
     */
    inline const Campaign& GetCampaign() const{ return m_campaign; }

    /**
     * <p>The properties of the campaign.</p>
     */
    inline void SetCampaign(const Campaign& value) { m_campaign = value; }

    /**
     * <p>The properties of the campaign.</p>
     */
    inline void SetCampaign(Campaign&& value) { m_campaign = std::move(value); }

    /**
     * <p>The properties of the campaign.</p>
     */
    inline DescribeCampaignResult& WithCampaign(const Campaign& value) { SetCampaign(value); return *this;}

    /**
     * <p>The properties of the campaign.</p>
     */
    inline DescribeCampaignResult& WithCampaign(Campaign&& value) { SetCampaign(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeCampaignResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeCampaignResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeCampaignResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Campaign m_campaign;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
