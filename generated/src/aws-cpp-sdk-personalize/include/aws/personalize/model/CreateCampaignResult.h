﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
  class CreateCampaignResult
  {
  public:
    AWS_PERSONALIZE_API CreateCampaignResult();
    AWS_PERSONALIZE_API CreateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CreateCampaignResult& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CreateCampaignResult& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CreateCampaignResult& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCampaignResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCampaignResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCampaignResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_campaignArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
