/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubInfo.h>
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
  class ListHubsResult
  {
  public:
    AWS_SAGEMAKER_API ListHubsResult();
    AWS_SAGEMAKER_API ListHubsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListHubsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline const Aws::Vector<HubInfo>& GetHubSummaries() const{ return m_hubSummaries; }

    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline void SetHubSummaries(const Aws::Vector<HubInfo>& value) { m_hubSummaries = value; }

    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline void SetHubSummaries(Aws::Vector<HubInfo>&& value) { m_hubSummaries = std::move(value); }

    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline ListHubsResult& WithHubSummaries(const Aws::Vector<HubInfo>& value) { SetHubSummaries(value); return *this;}

    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline ListHubsResult& WithHubSummaries(Aws::Vector<HubInfo>&& value) { SetHubSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline ListHubsResult& AddHubSummaries(const HubInfo& value) { m_hubSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries of the listed hubs.</p>
     */
    inline ListHubsResult& AddHubSummaries(HubInfo&& value) { m_hubSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline ListHubsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline ListHubsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of hubs, use it in the subsequent request.</p>
     */
    inline ListHubsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<HubInfo> m_hubSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
