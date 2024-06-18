/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrackingServerSummary.h>
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
  class ListMlflowTrackingServersResult
  {
  public:
    AWS_SAGEMAKER_API ListMlflowTrackingServersResult();
    AWS_SAGEMAKER_API ListMlflowTrackingServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMlflowTrackingServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tracking servers according to chosen filters.</p>
     */
    inline const Aws::Vector<TrackingServerSummary>& GetTrackingServerSummaries() const{ return m_trackingServerSummaries; }
    inline void SetTrackingServerSummaries(const Aws::Vector<TrackingServerSummary>& value) { m_trackingServerSummaries = value; }
    inline void SetTrackingServerSummaries(Aws::Vector<TrackingServerSummary>&& value) { m_trackingServerSummaries = std::move(value); }
    inline ListMlflowTrackingServersResult& WithTrackingServerSummaries(const Aws::Vector<TrackingServerSummary>& value) { SetTrackingServerSummaries(value); return *this;}
    inline ListMlflowTrackingServersResult& WithTrackingServerSummaries(Aws::Vector<TrackingServerSummary>&& value) { SetTrackingServerSummaries(std::move(value)); return *this;}
    inline ListMlflowTrackingServersResult& AddTrackingServerSummaries(const TrackingServerSummary& value) { m_trackingServerSummaries.push_back(value); return *this; }
    inline ListMlflowTrackingServersResult& AddTrackingServerSummaries(TrackingServerSummary&& value) { m_trackingServerSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMlflowTrackingServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMlflowTrackingServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMlflowTrackingServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMlflowTrackingServersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMlflowTrackingServersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMlflowTrackingServersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrackingServerSummary> m_trackingServerSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
