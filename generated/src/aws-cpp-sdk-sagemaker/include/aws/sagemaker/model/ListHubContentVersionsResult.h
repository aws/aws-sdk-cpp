﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentInfo.h>
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
namespace SageMaker
{
namespace Model
{
  class ListHubContentVersionsResult
  {
  public:
    AWS_SAGEMAKER_API ListHubContentVersionsResult();
    AWS_SAGEMAKER_API ListHubContentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListHubContentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline const Aws::Vector<HubContentInfo>& GetHubContentSummaries() const{ return m_hubContentSummaries; }

    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline void SetHubContentSummaries(const Aws::Vector<HubContentInfo>& value) { m_hubContentSummaries = value; }

    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline void SetHubContentSummaries(Aws::Vector<HubContentInfo>&& value) { m_hubContentSummaries = std::move(value); }

    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline ListHubContentVersionsResult& WithHubContentSummaries(const Aws::Vector<HubContentInfo>& value) { SetHubContentSummaries(value); return *this;}

    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline ListHubContentVersionsResult& WithHubContentSummaries(Aws::Vector<HubContentInfo>&& value) { SetHubContentSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline ListHubContentVersionsResult& AddHubContentSummaries(const HubContentInfo& value) { m_hubContentSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries of the listed hub content versions.</p>
     */
    inline ListHubContentVersionsResult& AddHubContentSummaries(HubContentInfo&& value) { m_hubContentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline ListHubContentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline ListHubContentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hub content versions, use it in the subsequent request.</p>
     */
    inline ListHubContentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListHubContentVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListHubContentVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListHubContentVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<HubContentInfo> m_hubContentSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
