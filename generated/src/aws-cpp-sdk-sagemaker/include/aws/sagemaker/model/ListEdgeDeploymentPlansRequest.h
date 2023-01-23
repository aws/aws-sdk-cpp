/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansSortBy.h>
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
  class ListEdgeDeploymentPlansRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListEdgeDeploymentPlansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEdgeDeploymentPlans"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to select (50 by default).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to select (50 by default).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to select (50 by default).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to select (50 by default).</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Selects edge deployment plans created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Selects edge deployment plans created after this time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Selects edge deployment plans created after this time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Selects edge deployment plans created after this time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Selects edge deployment plans created after this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Selects edge deployment plans created after this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Selects edge deployment plans created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Selects edge deployment plans created before this time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Selects edge deployment plans created before this time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Selects edge deployment plans created before this time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Selects edge deployment plans created before this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Selects edge deployment plans created before this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Selects edge deployment plans that were last updated after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>Selects edge deployment plans that were last updated after this time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>Selects edge deployment plans that were last updated after this time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>Selects edge deployment plans that were last updated after this time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>Selects edge deployment plans that were last updated after this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>Selects edge deployment plans that were last updated after this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Selects edge deployment plans that were last updated before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>Selects edge deployment plans that were last updated before this time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>Selects edge deployment plans that were last updated before this time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>Selects edge deployment plans that were last updated before this time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>Selects edge deployment plans that were last updated before this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>Selects edge deployment plans that were last updated before this time.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Selects edge deployment plans with names containing this name.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline const Aws::String& GetDeviceFleetNameContains() const{ return m_deviceFleetNameContains; }

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline bool DeviceFleetNameContainsHasBeenSet() const { return m_deviceFleetNameContainsHasBeenSet; }

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline void SetDeviceFleetNameContains(const Aws::String& value) { m_deviceFleetNameContainsHasBeenSet = true; m_deviceFleetNameContains = value; }

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline void SetDeviceFleetNameContains(Aws::String&& value) { m_deviceFleetNameContainsHasBeenSet = true; m_deviceFleetNameContains = std::move(value); }

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline void SetDeviceFleetNameContains(const char* value) { m_deviceFleetNameContainsHasBeenSet = true; m_deviceFleetNameContains.assign(value); }

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithDeviceFleetNameContains(const Aws::String& value) { SetDeviceFleetNameContains(value); return *this;}

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithDeviceFleetNameContains(Aws::String&& value) { SetDeviceFleetNameContains(std::move(value)); return *this;}

    /**
     * <p>Selects edge deployment plans with a device fleet name containing this
     * name.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithDeviceFleetNameContains(const char* value) { SetDeviceFleetNameContains(value); return *this;}


    /**
     * <p>The column by which to sort the edge deployment plans. Can be one of
     * <code>NAME</code>, <code>DEVICEFLEETNAME</code>, <code>CREATIONTIME</code>,
     * <code>LASTMODIFIEDTIME</code>.</p>
     */
    inline const ListEdgeDeploymentPlansSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The column by which to sort the edge deployment plans. Can be one of
     * <code>NAME</code>, <code>DEVICEFLEETNAME</code>, <code>CREATIONTIME</code>,
     * <code>LASTMODIFIEDTIME</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The column by which to sort the edge deployment plans. Can be one of
     * <code>NAME</code>, <code>DEVICEFLEETNAME</code>, <code>CREATIONTIME</code>,
     * <code>LASTMODIFIEDTIME</code>.</p>
     */
    inline void SetSortBy(const ListEdgeDeploymentPlansSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The column by which to sort the edge deployment plans. Can be one of
     * <code>NAME</code>, <code>DEVICEFLEETNAME</code>, <code>CREATIONTIME</code>,
     * <code>LASTMODIFIEDTIME</code>.</p>
     */
    inline void SetSortBy(ListEdgeDeploymentPlansSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The column by which to sort the edge deployment plans. Can be one of
     * <code>NAME</code>, <code>DEVICEFLEETNAME</code>, <code>CREATIONTIME</code>,
     * <code>LASTMODIFIEDTIME</code>.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithSortBy(const ListEdgeDeploymentPlansSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The column by which to sort the edge deployment plans. Can be one of
     * <code>NAME</code>, <code>DEVICEFLEETNAME</code>, <code>CREATIONTIME</code>,
     * <code>LASTMODIFIEDTIME</code>.</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithSortBy(ListEdgeDeploymentPlansSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The direction of the sorting (ascending or descending).</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The direction of the sorting (ascending or descending).</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The direction of the sorting (ascending or descending).</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The direction of the sorting (ascending or descending).</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The direction of the sorting (ascending or descending).</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The direction of the sorting (ascending or descending).</p>
     */
    inline ListEdgeDeploymentPlansRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_deviceFleetNameContains;
    bool m_deviceFleetNameContainsHasBeenSet = false;

    ListEdgeDeploymentPlansSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
