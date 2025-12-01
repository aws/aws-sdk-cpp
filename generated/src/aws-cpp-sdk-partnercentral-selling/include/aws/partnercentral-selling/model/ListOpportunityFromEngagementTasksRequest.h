/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ListTasksSortBase.h>
#include <aws/partnercentral-selling/model/TaskStatus.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 */
class ListOpportunityFromEngagementTasksRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API ListOpportunityFromEngagementTasksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListOpportunityFromEngagementTasks"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the maximum number of results to return in a single page of the
   * response. Use this parameter to control the number of items returned in each
   * request, which can be useful for performance tuning and managing large result
   * sets.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListOpportunityFromEngagementTasksRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for requesting the next page of results. This value is obtained
   * from the NextToken field in the response of a previous call to this API. Use
   * this parameter for pagination when the result set spans multiple pages.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOpportunityFromEngagementTasksRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ListTasksSortBase& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = ListTasksSortBase>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = ListTasksSortBase>
  ListOpportunityFromEngagementTasksRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the catalog related to the request. Valid values are
   * <code>AWS</code> for production environments and <code>Sandbox</code> for
   * testing or development purposes. The catalog determines which environment the
   * task data is retrieved from.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListOpportunityFromEngagementTasksRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the tasks based on their current status. This allows you to focus on
   * tasks in specific states. Valid values are <code>COMPLETE</code> for tasks that
   * have finished successfully, <code>INPROGRESS</code> for tasks that are currently
   * running, and <code>FAILED</code> for tasks that have encountered an error and
   * failed to complete.</p>
   */
  inline const Aws::Vector<TaskStatus>& GetTaskStatus() const { return m_taskStatus; }
  inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
  template <typename TaskStatusT = Aws::Vector<TaskStatus>>
  void SetTaskStatus(TaskStatusT&& value) {
    m_taskStatusHasBeenSet = true;
    m_taskStatus = std::forward<TaskStatusT>(value);
  }
  template <typename TaskStatusT = Aws::Vector<TaskStatus>>
  ListOpportunityFromEngagementTasksRequest& WithTaskStatus(TaskStatusT&& value) {
    SetTaskStatus(std::forward<TaskStatusT>(value));
    return *this;
  }
  inline ListOpportunityFromEngagementTasksRequest& AddTaskStatus(TaskStatus value) {
    m_taskStatusHasBeenSet = true;
    m_taskStatus.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters tasks by their unique identifiers. Use this when you want to retrieve
   * information about specific tasks. Provide the task ID to get details about a
   * particular opportunity creation task.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTaskIdentifier() const { return m_taskIdentifier; }
  inline bool TaskIdentifierHasBeenSet() const { return m_taskIdentifierHasBeenSet; }
  template <typename TaskIdentifierT = Aws::Vector<Aws::String>>
  void SetTaskIdentifier(TaskIdentifierT&& value) {
    m_taskIdentifierHasBeenSet = true;
    m_taskIdentifier = std::forward<TaskIdentifierT>(value);
  }
  template <typename TaskIdentifierT = Aws::Vector<Aws::String>>
  ListOpportunityFromEngagementTasksRequest& WithTaskIdentifier(TaskIdentifierT&& value) {
    SetTaskIdentifier(std::forward<TaskIdentifierT>(value));
    return *this;
  }
  template <typename TaskIdentifierT = Aws::String>
  ListOpportunityFromEngagementTasksRequest& AddTaskIdentifier(TaskIdentifierT&& value) {
    m_taskIdentifierHasBeenSet = true;
    m_taskIdentifier.emplace_back(std::forward<TaskIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters tasks by the identifiers of the opportunities they created or are
   * associated with. Use this to find tasks related to specific opportunity creation
   * processes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOpportunityIdentifier() const { return m_opportunityIdentifier; }
  inline bool OpportunityIdentifierHasBeenSet() const { return m_opportunityIdentifierHasBeenSet; }
  template <typename OpportunityIdentifierT = Aws::Vector<Aws::String>>
  void SetOpportunityIdentifier(OpportunityIdentifierT&& value) {
    m_opportunityIdentifierHasBeenSet = true;
    m_opportunityIdentifier = std::forward<OpportunityIdentifierT>(value);
  }
  template <typename OpportunityIdentifierT = Aws::Vector<Aws::String>>
  ListOpportunityFromEngagementTasksRequest& WithOpportunityIdentifier(OpportunityIdentifierT&& value) {
    SetOpportunityIdentifier(std::forward<OpportunityIdentifierT>(value));
    return *this;
  }
  template <typename OpportunityIdentifierT = Aws::String>
  ListOpportunityFromEngagementTasksRequest& AddOpportunityIdentifier(OpportunityIdentifierT&& value) {
    m_opportunityIdentifierHasBeenSet = true;
    m_opportunityIdentifier.emplace_back(std::forward<OpportunityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters tasks by the identifiers of the engagements from which opportunities
   * are being created. Use this to find all opportunity creation tasks associated
   * with a specific engagement.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const { return m_engagementIdentifier; }
  inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
  template <typename EngagementIdentifierT = Aws::Vector<Aws::String>>
  void SetEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier = std::forward<EngagementIdentifierT>(value);
  }
  template <typename EngagementIdentifierT = Aws::Vector<Aws::String>>
  ListOpportunityFromEngagementTasksRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) {
    SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  template <typename EngagementIdentifierT = Aws::String>
  ListOpportunityFromEngagementTasksRequest& AddEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier.emplace_back(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters tasks by the identifiers of the engagement contexts associated with
   * the opportunity creation. Use this to find tasks related to specific contextual
   * information within engagements that are being converted to opportunities.</p>
   */
  inline const Aws::Vector<Aws::String>& GetContextIdentifier() const { return m_contextIdentifier; }
  inline bool ContextIdentifierHasBeenSet() const { return m_contextIdentifierHasBeenSet; }
  template <typename ContextIdentifierT = Aws::Vector<Aws::String>>
  void SetContextIdentifier(ContextIdentifierT&& value) {
    m_contextIdentifierHasBeenSet = true;
    m_contextIdentifier = std::forward<ContextIdentifierT>(value);
  }
  template <typename ContextIdentifierT = Aws::Vector<Aws::String>>
  ListOpportunityFromEngagementTasksRequest& WithContextIdentifier(ContextIdentifierT&& value) {
    SetContextIdentifier(std::forward<ContextIdentifierT>(value));
    return *this;
  }
  template <typename ContextIdentifierT = Aws::String>
  ListOpportunityFromEngagementTasksRequest& AddContextIdentifier(ContextIdentifierT&& value) {
    m_contextIdentifierHasBeenSet = true;
    m_contextIdentifier.emplace_back(std::forward<ContextIdentifierT>(value));
    return *this;
  }
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

  Aws::Vector<Aws::String> m_contextIdentifier;
  bool m_contextIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
