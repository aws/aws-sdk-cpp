/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalReportState.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace WellArchitected {
namespace Model {

/**
 */
class ListAgentOrganizationalReportsRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API ListAgentOrganizationalReportsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAgentOrganizationalReports"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Maximum number of items to return in a single page. Defaults to 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAgentOrganizationalReportsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous ListAgentOrganizationalReports response.
   * Absent on the first page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgentOrganizationalReportsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter restricting the response to reports in a single lifecycle
   * state.</p>
   */
  inline OrganizationalReportState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(OrganizationalReportState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListAgentOrganizationalReportsRequest& WithState(OrganizationalReportState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  OrganizationalReportState m_state{OrganizationalReportState::NOT_SET};
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
