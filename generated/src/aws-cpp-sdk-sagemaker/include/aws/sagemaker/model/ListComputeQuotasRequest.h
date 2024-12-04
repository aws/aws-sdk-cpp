/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <aws/sagemaker/model/SortQuotaBy.h>
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
  class ListComputeQuotasRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListComputeQuotasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComputeQuotas"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filter for after this creation time. The input for this parameter is a Unix
     * timestamp. To convert a date and time into a Unix timestamp, see <a
     * href="https://www.epochconverter.com/">EpochConverter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline ListComputeQuotasRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline ListComputeQuotasRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for before this creation time. The input for this parameter is a Unix
     * timestamp. To convert a date and time into a Unix timestamp, see <a
     * href="https://www.epochconverter.com/">EpochConverter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline ListComputeQuotasRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline ListComputeQuotasRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for name containing this string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListComputeQuotasRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListComputeQuotasRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListComputeQuotasRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for status.</p>
     */
    inline const SchedulerResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SchedulerResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SchedulerResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListComputeQuotasRequest& WithStatus(const SchedulerResourceStatus& value) { SetStatus(value); return *this;}
    inline ListComputeQuotasRequest& WithStatus(SchedulerResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ListComputeQuotasRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ListComputeQuotasRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ListComputeQuotasRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for sorting the list by a given value. For example, sort by name,
     * creation time, or status.</p>
     */
    inline const SortQuotaBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortQuotaBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortQuotaBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListComputeQuotasRequest& WithSortBy(const SortQuotaBy& value) { SetSortBy(value); return *this;}
    inline ListComputeQuotasRequest& WithSortBy(SortQuotaBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order of the list. By default, listed in <code>Descending</code> order
     * according to by <code>SortBy</code>. To change the list order, you can specify
     * <code>SortOrder</code> to be <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListComputeQuotasRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListComputeQuotasRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListComputeQuotasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComputeQuotasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComputeQuotasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of compute allocation definitions to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListComputeQuotasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    SchedulerResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    SortQuotaBy m_sortBy;
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
