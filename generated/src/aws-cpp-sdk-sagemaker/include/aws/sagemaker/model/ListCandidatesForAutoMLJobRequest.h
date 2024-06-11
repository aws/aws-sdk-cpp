/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CandidateStatus.h>
#include <aws/sagemaker/model/AutoMLSortOrder.h>
#include <aws/sagemaker/model/CandidateSortBy.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListCandidatesForAutoMLJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCandidatesForAutoMLJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>List the candidates created for the job by providing the job's name.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = value; }
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::move(value); }
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName.assign(value); }
    inline ListCandidatesForAutoMLJobRequest& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List the candidates for the job and filter by status.</p>
     */
    inline const CandidateStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const CandidateStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(CandidateStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListCandidatesForAutoMLJobRequest& WithStatusEquals(const CandidateStatus& value) { SetStatusEquals(value); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithStatusEquals(CandidateStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List the candidates for the job and filter by candidate name.</p>
     */
    inline const Aws::String& GetCandidateNameEquals() const{ return m_candidateNameEquals; }
    inline bool CandidateNameEqualsHasBeenSet() const { return m_candidateNameEqualsHasBeenSet; }
    inline void SetCandidateNameEquals(const Aws::String& value) { m_candidateNameEqualsHasBeenSet = true; m_candidateNameEquals = value; }
    inline void SetCandidateNameEquals(Aws::String&& value) { m_candidateNameEqualsHasBeenSet = true; m_candidateNameEquals = std::move(value); }
    inline void SetCandidateNameEquals(const char* value) { m_candidateNameEqualsHasBeenSet = true; m_candidateNameEquals.assign(value); }
    inline ListCandidatesForAutoMLJobRequest& WithCandidateNameEquals(const Aws::String& value) { SetCandidateNameEquals(value); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithCandidateNameEquals(Aws::String&& value) { SetCandidateNameEquals(std::move(value)); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithCandidateNameEquals(const char* value) { SetCandidateNameEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline const AutoMLSortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const AutoMLSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(AutoMLSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListCandidatesForAutoMLJobRequest& WithSortOrder(const AutoMLSortOrder& value) { SetSortOrder(value); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithSortOrder(AutoMLSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Descending</code>.</p>
     */
    inline const CandidateSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const CandidateSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(CandidateSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListCandidatesForAutoMLJobRequest& WithSortBy(const CandidateSortBy& value) { SetSortBy(value); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithSortBy(CandidateSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List the job's candidates up to a specified limit.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCandidatesForAutoMLJobRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCandidatesForAutoMLJobRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCandidatesForAutoMLJobRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    CandidateStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_candidateNameEquals;
    bool m_candidateNameEqualsHasBeenSet = false;

    AutoMLSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    CandidateSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
