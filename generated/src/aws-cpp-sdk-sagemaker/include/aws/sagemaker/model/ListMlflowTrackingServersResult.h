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
    AWS_SAGEMAKER_API ListMlflowTrackingServersResult() = default;
    AWS_SAGEMAKER_API ListMlflowTrackingServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMlflowTrackingServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tracking servers according to chosen filters.</p>
     */
    inline const Aws::Vector<TrackingServerSummary>& GetTrackingServerSummaries() const { return m_trackingServerSummaries; }
    template<typename TrackingServerSummariesT = Aws::Vector<TrackingServerSummary>>
    void SetTrackingServerSummaries(TrackingServerSummariesT&& value) { m_trackingServerSummariesHasBeenSet = true; m_trackingServerSummaries = std::forward<TrackingServerSummariesT>(value); }
    template<typename TrackingServerSummariesT = Aws::Vector<TrackingServerSummary>>
    ListMlflowTrackingServersResult& WithTrackingServerSummaries(TrackingServerSummariesT&& value) { SetTrackingServerSummaries(std::forward<TrackingServerSummariesT>(value)); return *this;}
    template<typename TrackingServerSummariesT = TrackingServerSummary>
    ListMlflowTrackingServersResult& AddTrackingServerSummaries(TrackingServerSummariesT&& value) { m_trackingServerSummariesHasBeenSet = true; m_trackingServerSummaries.emplace_back(std::forward<TrackingServerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMlflowTrackingServersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMlflowTrackingServersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrackingServerSummary> m_trackingServerSummaries;
    bool m_trackingServerSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
