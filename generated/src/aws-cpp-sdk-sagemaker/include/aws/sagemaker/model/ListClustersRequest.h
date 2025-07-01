/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterSortBy.h>
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
  class ListClustersRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusters"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Set a start time for the time range during which you want to list SageMaker
     * HyperPod clusters. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListClustersRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set an end time for the time range during which you want to list SageMaker
     * HyperPod clusters. A filter that returns nodes in a SageMaker HyperPod cluster
     * created before the specified time. The acceptable formats are the same as the
     * timestamp formats for <code>CreationTimeAfter</code>. For more information about
     * the timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListClustersRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of clusters to evaluate for the operation (not
     * necessarily the number of matching items). After SageMaker processes the number
     * of clusters up to <code>MaxResults</code>, it stops the operation and returns
     * the matching clusters up to that point. If all the matching clusters are
     * desired, SageMaker will go through all the clusters until <code>NextToken</code>
     * is empty.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the maximum number of instances to print in the list.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListClustersRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the next token to retrieve the list of SageMaker HyperPod clusters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClustersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline ClusterSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ClusterSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListClustersRequest& WithSortBy(ClusterSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListClustersRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan to filter clusters by.
     * For more information about reserving GPU capacity for your SageMaker HyperPod
     * clusters using Amazon SageMaker Training Plan, see <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
     * </code>.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    ListClustersRequest& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ClusterSortBy m_sortBy{ClusterSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
