/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class GetSegmentDetectionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API GetSegmentDetectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentDetection"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Job identifier for the text detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Maximum number of results to return per paginated call. The largest value you
     * can specify is 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return per paginated call. The largest value you
     * can specify is 1000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return per paginated call. The largest value you
     * can specify is 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return per paginated call. The largest value you
     * can specify is 1000.</p>
     */
    inline GetSegmentDetectionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline GetSegmentDetectionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline GetSegmentDetectionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of text.</p>
     */
    inline GetSegmentDetectionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
