/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingFromEngagementTaskSort.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Represents the request structure for listing prospecting tasks. All filter
 * parameters are optional. Results are paginated — uses <code>NextToken</code>
 * from the response to retrieve subsequent pages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListProspectingFromEngagementTasksRequest">AWS
 * API Reference</a></p>
 */
class ListProspectingFromEngagementTasksRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API ListProspectingFromEngagementTasksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListProspectingFromEngagementTasks"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog to list tasks from. Specify <code>AWS</code> for
   * production environments and <code>Sandbox</code> for testing and development
   * purposes.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListProspectingFromEngagementTasksRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single page. If additional
   * results exist, the response includes a <code>NextToken</code> value for
   * retrieving the next page. If omitted, the API uses a service-defined default
   * page size.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListProspectingFromEngagementTasksRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from a previous call to this API. Include this value to
   * retrieve the next page of results. If omitted, the first page is returned.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProspectingFromEngagementTasksRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only the tasks with the specified identifiers.
   * Provide up to 10 task IDs to narrow the list to specific tasks. If omitted,
   * tasks are not filtered by identifier.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTaskIdentifier() const { return m_taskIdentifier; }
  inline bool TaskIdentifierHasBeenSet() const { return m_taskIdentifierHasBeenSet; }
  template <typename TaskIdentifierT = Aws::Vector<Aws::String>>
  void SetTaskIdentifier(TaskIdentifierT&& value) {
    m_taskIdentifierHasBeenSet = true;
    m_taskIdentifier = std::forward<TaskIdentifierT>(value);
  }
  template <typename TaskIdentifierT = Aws::Vector<Aws::String>>
  ListProspectingFromEngagementTasksRequest& WithTaskIdentifier(TaskIdentifierT&& value) {
    SetTaskIdentifier(std::forward<TaskIdentifierT>(value));
    return *this;
  }
  template <typename TaskIdentifierT = Aws::String>
  ListProspectingFromEngagementTasksRequest& AddTaskIdentifier(TaskIdentifierT&& value) {
    m_taskIdentifierHasBeenSet = true;
    m_taskIdentifier.emplace_back(std::forward<TaskIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only tasks with the specified names. Provide
   * up to 10 task names to narrow the list. If omitted, tasks are not filtered by
   * name.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::Vector<Aws::String>>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::Vector<Aws::String>>
  ListProspectingFromEngagementTasksRequest& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  template <typename TaskNameT = Aws::String>
  ListProspectingFromEngagementTasksRequest& AddTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName.emplace_back(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters tasks to include only those that started after the specified
   * timestamp. Use this with <code>StartBefore</code> to define a start-time range
   * for your query. The format follows ISO 8601 date-time notation.</p>
   */
  inline const Aws::Utils::DateTime& GetStartAfter() const { return m_startAfter; }
  inline bool StartAfterHasBeenSet() const { return m_startAfterHasBeenSet; }
  template <typename StartAfterT = Aws::Utils::DateTime>
  void SetStartAfter(StartAfterT&& value) {
    m_startAfterHasBeenSet = true;
    m_startAfter = std::forward<StartAfterT>(value);
  }
  template <typename StartAfterT = Aws::Utils::DateTime>
  ListProspectingFromEngagementTasksRequest& WithStartAfter(StartAfterT&& value) {
    SetStartAfter(std::forward<StartAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters tasks to include only those that started before the specified
   * timestamp. Use this with <code>StartAfter</code> to define a start-time range
   * for your query. The format follows ISO 8601 date-time notation.</p>
   */
  inline const Aws::Utils::DateTime& GetStartBefore() const { return m_startBefore; }
  inline bool StartBeforeHasBeenSet() const { return m_startBeforeHasBeenSet; }
  template <typename StartBeforeT = Aws::Utils::DateTime>
  void SetStartBefore(StartBeforeT&& value) {
    m_startBeforeHasBeenSet = true;
    m_startBefore = std::forward<StartBeforeT>(value);
  }
  template <typename StartBeforeT = Aws::Utils::DateTime>
  ListProspectingFromEngagementTasksRequest& WithStartBefore(StartBeforeT&& value) {
    SetStartBefore(std::forward<StartBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the field and order used to sort the returned tasks. If omitted,
   * tasks are returned in the default sort order.</p>
   */
  inline const ProspectingFromEngagementTaskSort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = ProspectingFromEngagementTaskSort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = ProspectingFromEngagementTaskSort>
  ListProspectingFromEngagementTasksRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<Aws::String> m_taskIdentifier;

  Aws::Vector<Aws::String> m_taskName;

  Aws::Utils::DateTime m_startAfter{};

  Aws::Utils::DateTime m_startBefore{};

  ProspectingFromEngagementTaskSort m_sort;
  bool m_catalogHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_taskIdentifierHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_startAfterHasBeenSet = false;
  bool m_startBeforeHasBeenSet = false;
  bool m_sortHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
