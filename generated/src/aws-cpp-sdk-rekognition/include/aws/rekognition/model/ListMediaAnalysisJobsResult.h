/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/MediaAnalysisJobDescription.h>
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
namespace Rekognition
{
namespace Model
{
  class ListMediaAnalysisJobsResult
  {
  public:
    AWS_REKOGNITION_API ListMediaAnalysisJobsResult() = default;
    AWS_REKOGNITION_API ListMediaAnalysisJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListMediaAnalysisJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMediaAnalysisJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline const Aws::Vector<MediaAnalysisJobDescription>& GetMediaAnalysisJobs() const { return m_mediaAnalysisJobs; }
    template<typename MediaAnalysisJobsT = Aws::Vector<MediaAnalysisJobDescription>>
    void SetMediaAnalysisJobs(MediaAnalysisJobsT&& value) { m_mediaAnalysisJobsHasBeenSet = true; m_mediaAnalysisJobs = std::forward<MediaAnalysisJobsT>(value); }
    template<typename MediaAnalysisJobsT = Aws::Vector<MediaAnalysisJobDescription>>
    ListMediaAnalysisJobsResult& WithMediaAnalysisJobs(MediaAnalysisJobsT&& value) { SetMediaAnalysisJobs(std::forward<MediaAnalysisJobsT>(value)); return *this;}
    template<typename MediaAnalysisJobsT = MediaAnalysisJobDescription>
    ListMediaAnalysisJobsResult& AddMediaAnalysisJobs(MediaAnalysisJobsT&& value) { m_mediaAnalysisJobsHasBeenSet = true; m_mediaAnalysisJobs.emplace_back(std::forward<MediaAnalysisJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMediaAnalysisJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MediaAnalysisJobDescription> m_mediaAnalysisJobs;
    bool m_mediaAnalysisJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
