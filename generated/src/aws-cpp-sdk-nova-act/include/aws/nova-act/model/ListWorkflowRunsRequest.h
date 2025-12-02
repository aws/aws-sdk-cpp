/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NovaAct {
namespace Model {

/**
 */
class ListWorkflowRunsRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API ListWorkflowRunsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListWorkflowRuns"; }

  AWS_NOVAACT_API Aws::String SerializePayload() const override;

  AWS_NOVAACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the workflow definition to list workflow runs for.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionName() const { return m_workflowDefinitionName; }
  inline bool WorkflowDefinitionNameHasBeenSet() const { return m_workflowDefinitionNameHasBeenSet; }
  template <typename WorkflowDefinitionNameT = Aws::String>
  void SetWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    m_workflowDefinitionNameHasBeenSet = true;
    m_workflowDefinitionName = std::forward<WorkflowDefinitionNameT>(value);
  }
  template <typename WorkflowDefinitionNameT = Aws::String>
  ListWorkflowRunsRequest& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    SetWorkflowDefinitionName(std::forward<WorkflowDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of workflow runs to return in a single response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListWorkflowRunsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWorkflowRunsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for the returned workflow runs (ascending or descending).</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListWorkflowRunsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionName;
  bool m_workflowDefinitionNameHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
