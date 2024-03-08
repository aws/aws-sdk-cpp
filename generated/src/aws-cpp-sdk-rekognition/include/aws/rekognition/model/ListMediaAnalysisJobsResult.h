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
    AWS_REKOGNITION_API ListMediaAnalysisJobsResult();
    AWS_REKOGNITION_API ListMediaAnalysisJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListMediaAnalysisJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline ListMediaAnalysisJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline ListMediaAnalysisJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token, if the previous response was incomplete.</p>
     */
    inline ListMediaAnalysisJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline const Aws::Vector<MediaAnalysisJobDescription>& GetMediaAnalysisJobs() const{ return m_mediaAnalysisJobs; }

    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline void SetMediaAnalysisJobs(const Aws::Vector<MediaAnalysisJobDescription>& value) { m_mediaAnalysisJobs = value; }

    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline void SetMediaAnalysisJobs(Aws::Vector<MediaAnalysisJobDescription>&& value) { m_mediaAnalysisJobs = std::move(value); }

    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline ListMediaAnalysisJobsResult& WithMediaAnalysisJobs(const Aws::Vector<MediaAnalysisJobDescription>& value) { SetMediaAnalysisJobs(value); return *this;}

    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline ListMediaAnalysisJobsResult& WithMediaAnalysisJobs(Aws::Vector<MediaAnalysisJobDescription>&& value) { SetMediaAnalysisJobs(std::move(value)); return *this;}

    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline ListMediaAnalysisJobsResult& AddMediaAnalysisJobs(const MediaAnalysisJobDescription& value) { m_mediaAnalysisJobs.push_back(value); return *this; }

    /**
     * <p>Contains a list of all media analysis jobs.</p>
     */
    inline ListMediaAnalysisJobsResult& AddMediaAnalysisJobs(MediaAnalysisJobDescription&& value) { m_mediaAnalysisJobs.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMediaAnalysisJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMediaAnalysisJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMediaAnalysisJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MediaAnalysisJobDescription> m_mediaAnalysisJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
