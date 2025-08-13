/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ListTasksSortBase.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEngagementFromOpportunityTasks"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specifies the maximum number of results to return in a single page of the
     * response.Use this parameter to control the number of items returned in each
     * request, which can be useful for performance tuning and managing large result
     * sets. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementFromOpportunityTasksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the sorting criteria for the returned results. This allows you to
     * order the tasks based on specific attributes. </p>
     */
    inline const ListTasksSortBase& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = ListTasksSortBase>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = ListTasksSortBase>
    ListEngagementFromOpportunityTasksRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the catalog related to the request. Valid values are: </p> <ul>
     * <li> <p> AWS: Retrieves the request from the production AWS environment. </p>
     * </li> <li> <p> Sandbox: Retrieves the request from a sandbox environment used
     * for testing or development purposes. </p> </li> </ul>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    ListEngagementFromOpportunityTasksRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters the tasks based on their current status. This allows you to focus on
     * tasks in specific states. </p>
     */
    inline const Aws::Vector<TaskStatus>& GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    template<typename TaskStatusT = Aws::Vector<TaskStatus>>
    void SetTaskStatus(TaskStatusT&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::forward<TaskStatusT>(value); }
    template<typename TaskStatusT = Aws::Vector<TaskStatus>>
    ListEngagementFromOpportunityTasksRequest& WithTaskStatus(TaskStatusT&& value) { SetTaskStatus(std::forward<TaskStatusT>(value)); return *this;}
    inline ListEngagementFromOpportunityTasksRequest& AddTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filters tasks by their unique identifiers. Use this when you want to
     * retrieve information about specific tasks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIdentifier() const { return m_taskIdentifier; }
    inline bool TaskIdentifierHasBeenSet() const { return m_taskIdentifierHasBeenSet; }
    template<typename TaskIdentifierT = Aws::Vector<Aws::String>>
    void SetTaskIdentifier(TaskIdentifierT&& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier = std::forward<TaskIdentifierT>(value); }
    template<typename TaskIdentifierT = Aws::Vector<Aws::String>>
    ListEngagementFromOpportunityTasksRequest& WithTaskIdentifier(TaskIdentifierT&& value) { SetTaskIdentifier(std::forward<TaskIdentifierT>(value)); return *this;}
    template<typename TaskIdentifierT = Aws::String>
    ListEngagementFromOpportunityTasksRequest& AddTaskIdentifier(TaskIdentifierT&& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier.emplace_back(std::forward<TaskIdentifierT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The identifier of the original opportunity associated with this task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpportunityIdentifier() const { return m_opportunityIdentifier; }
    inline bool OpportunityIdentifierHasBeenSet() const { return m_opportunityIdentifierHasBeenSet; }
    template<typename OpportunityIdentifierT = Aws::Vector<Aws::String>>
    void SetOpportunityIdentifier(OpportunityIdentifierT&& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier = std::forward<OpportunityIdentifierT>(value); }
    template<typename OpportunityIdentifierT = Aws::Vector<Aws::String>>
    ListEngagementFromOpportunityTasksRequest& WithOpportunityIdentifier(OpportunityIdentifierT&& value) { SetOpportunityIdentifier(std::forward<OpportunityIdentifierT>(value)); return *this;}
    template<typename OpportunityIdentifierT = Aws::String>
    ListEngagementFromOpportunityTasksRequest& AddOpportunityIdentifier(OpportunityIdentifierT&& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier.emplace_back(std::forward<OpportunityIdentifierT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filters tasks by the identifiers of the engagements they created or are
     * associated with. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const { return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    template<typename EngagementIdentifierT = Aws::Vector<Aws::String>>
    void SetEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::forward<EngagementIdentifierT>(value); }
    template<typename EngagementIdentifierT = Aws::Vector<Aws::String>>
    ListEngagementFromOpportunityTasksRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) { SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value)); return *this;}
    template<typename EngagementIdentifierT = Aws::String>
    ListEngagementFromOpportunityTasksRequest& AddEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.emplace_back(std::forward<EngagementIdentifierT>(value)); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListTasksSortBase m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<TaskStatus> m_taskStatus;
    bool m_taskStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskIdentifier;
    bool m_taskIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_opportunityIdentifier;
    bool m_opportunityIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
