/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/LabelDetectionSortBy.h>
#include <aws/rekognition/model/LabelDetectionAggregateBy.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class GetLabelDetectionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API GetLabelDetectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLabelDetection"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Job identifier for the label detection operation for which you want results
     * returned. You get the job identifer from an initial call to
     * <code>StartlabelDetection</code>.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetLabelDetectionRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return per paginated call. The largest value you
     * can specify is 1000. If you specify a value greater than 1000, a maximum of 1000
     * results is returned. The default value is 1000.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetLabelDetectionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of labels. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLabelDetectionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort to use for elements in the <code>Labels</code> array. Use
     * <code>TIMESTAMP</code> to sort array elements by the time labels are detected.
     * Use <code>NAME</code> to alphabetically group elements for a label together.
     * Within each label group, the array element are sorted by detection confidence.
     * The default sort is by <code>TIMESTAMP</code>.</p>
     */
    inline LabelDetectionSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(LabelDetectionSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline GetLabelDetectionRequest& WithSortBy(LabelDetectionSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how to aggregate the returned results. Results can be aggregated by
     * timestamps or segments.</p>
     */
    inline LabelDetectionAggregateBy GetAggregateBy() const { return m_aggregateBy; }
    inline bool AggregateByHasBeenSet() const { return m_aggregateByHasBeenSet; }
    inline void SetAggregateBy(LabelDetectionAggregateBy value) { m_aggregateByHasBeenSet = true; m_aggregateBy = value; }
    inline GetLabelDetectionRequest& WithAggregateBy(LabelDetectionAggregateBy value) { SetAggregateBy(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    LabelDetectionSortBy m_sortBy{LabelDetectionSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    LabelDetectionAggregateBy m_aggregateBy{LabelDetectionAggregateBy::NOT_SET};
    bool m_aggregateByHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
