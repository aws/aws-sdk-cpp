﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentType.h>
#include <aws/sagemaker/model/InferenceExperimentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortInferenceExperimentsBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListInferenceExperimentsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListInferenceExperimentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceExperiments"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Selects inference experiments whose names contain this name.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListInferenceExperimentsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListInferenceExperimentsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListInferenceExperimentsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Selects inference experiments of this type. For the possible types of
     * inference experiments, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateInferenceExperiment.html">CreateInferenceExperiment</a>.
     * </p>
     */
    inline const InferenceExperimentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InferenceExperimentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InferenceExperimentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListInferenceExperimentsRequest& WithType(const InferenceExperimentType& value) { SetType(value); return *this;}
    inline ListInferenceExperimentsRequest& WithType(InferenceExperimentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Selects inference experiments which are in this status. For the possible
     * statuses, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeInferenceExperiment.html">DescribeInferenceExperiment</a>.
     * </p>
     */
    inline const InferenceExperimentStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const InferenceExperimentStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(InferenceExperimentStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListInferenceExperimentsRequest& WithStatusEquals(const InferenceExperimentStatus& value) { SetStatusEquals(value); return *this;}
    inline ListInferenceExperimentsRequest& WithStatusEquals(InferenceExperimentStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects inference experiments which were created after this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListInferenceExperimentsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListInferenceExperimentsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects inference experiments which were created before this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListInferenceExperimentsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListInferenceExperimentsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects inference experiments which were last modified after this
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }
    inline ListInferenceExperimentsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}
    inline ListInferenceExperimentsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects inference experiments which were last modified before this
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }
    inline ListInferenceExperimentsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}
    inline ListInferenceExperimentsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column by which to sort the listed inference experiments.</p>
     */
    inline const SortInferenceExperimentsBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortInferenceExperimentsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortInferenceExperimentsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListInferenceExperimentsRequest& WithSortBy(const SortInferenceExperimentsBy& value) { SetSortBy(value); return *this;}
    inline ListInferenceExperimentsRequest& WithSortBy(SortInferenceExperimentsBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of sorting (ascending or descending).</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListInferenceExperimentsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListInferenceExperimentsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The response from the last list when returning a list large enough to need
     * tokening. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInferenceExperimentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceExperimentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceExperimentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to select.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceExperimentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    InferenceExperimentType m_type;
    bool m_typeHasBeenSet = false;

    InferenceExperimentStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    SortInferenceExperimentsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
