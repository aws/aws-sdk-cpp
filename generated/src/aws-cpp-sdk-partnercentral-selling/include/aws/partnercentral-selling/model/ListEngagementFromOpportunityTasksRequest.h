/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ListTasksSortBase.h>
#include <aws/partnercentral-selling/model/TaskStatus.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListEngagementFromOpportunityTasksRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEngagementFromOpportunityTasks"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specifies the catalog related to the request. Valid values are: </p> <ul>
     * <li> <p> AWS: Retrieves the request from the production AWS environment. </p>
     * </li> <li> <p> Sandbox: Retrieves the request from a sandbox environment used
     * for testing or development purposes. </p> </li> </ul>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters tasks by the identifiers of the engagements they created or are
     * associated with. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::Vector<Aws::String>& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::Vector<Aws::String>&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithEngagementIdentifier(const Aws::Vector<Aws::String>& value) { SetEngagementIdentifier(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithEngagementIdentifier(Aws::Vector<Aws::String>&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& AddEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.push_back(value); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.push_back(std::move(value)); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the maximum number of results to return in a single page of the
     * response.Use this parameter to control the number of items returned in each
     * request, which can be useful for performance tuning and managing large result
     * sets. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEngagementFromOpportunityTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for requesting the next page of results. This value is obtained
     * from the NextToken field in the response of a previous call to this API. Use
     * this parameter for pagination when the result set spans multiple pages. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the original opportunity associated with this task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpportunityIdentifier() const{ return m_opportunityIdentifier; }
    inline bool OpportunityIdentifierHasBeenSet() const { return m_opportunityIdentifierHasBeenSet; }
    inline void SetOpportunityIdentifier(const Aws::Vector<Aws::String>& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier = value; }
    inline void SetOpportunityIdentifier(Aws::Vector<Aws::String>&& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier = std::move(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithOpportunityIdentifier(const Aws::Vector<Aws::String>& value) { SetOpportunityIdentifier(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithOpportunityIdentifier(Aws::Vector<Aws::String>&& value) { SetOpportunityIdentifier(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& AddOpportunityIdentifier(const Aws::String& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier.push_back(value); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddOpportunityIdentifier(Aws::String&& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier.push_back(std::move(value)); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddOpportunityIdentifier(const char* value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the sorting criteria for the returned results. This allows you to
     * order the tasks based on specific attributes. </p>
     */
    inline const ListTasksSortBase& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const ListTasksSortBase& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(ListTasksSortBase&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithSort(const ListTasksSortBase& value) { SetSort(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithSort(ListTasksSortBase&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters tasks by their unique identifiers. Use this when you want to
     * retrieve information about specific tasks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIdentifier() const{ return m_taskIdentifier; }
    inline bool TaskIdentifierHasBeenSet() const { return m_taskIdentifierHasBeenSet; }
    inline void SetTaskIdentifier(const Aws::Vector<Aws::String>& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier = value; }
    inline void SetTaskIdentifier(Aws::Vector<Aws::String>&& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier = std::move(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithTaskIdentifier(const Aws::Vector<Aws::String>& value) { SetTaskIdentifier(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithTaskIdentifier(Aws::Vector<Aws::String>&& value) { SetTaskIdentifier(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& AddTaskIdentifier(const Aws::String& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier.push_back(value); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddTaskIdentifier(Aws::String&& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier.push_back(std::move(value)); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddTaskIdentifier(const char* value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filters the tasks based on their current status. This allows you to focus on
     * tasks in specific states. </p>
     */
    inline const Aws::Vector<TaskStatus>& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const Aws::Vector<TaskStatus>& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(Aws::Vector<TaskStatus>&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline ListEngagementFromOpportunityTasksRequest& WithTaskStatus(const Aws::Vector<TaskStatus>& value) { SetTaskStatus(value); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& WithTaskStatus(Aws::Vector<TaskStatus>&& value) { SetTaskStatus(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& AddTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus.push_back(value); return *this; }
    inline ListEngagementFromOpportunityTasksRequest& AddTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_opportunityIdentifier;
    bool m_opportunityIdentifierHasBeenSet = false;

    ListTasksSortBase m_sort;
    bool m_sortHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskIdentifier;
    bool m_taskIdentifierHasBeenSet = false;

    Aws::Vector<TaskStatus> m_taskStatus;
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
