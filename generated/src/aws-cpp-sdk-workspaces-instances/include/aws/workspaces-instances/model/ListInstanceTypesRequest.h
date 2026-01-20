/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/InstanceConfigurationFilter.h>

#include <utility>

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Defines input parameters for retrieving supported WorkSpaces Instances
 * instance types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListInstanceTypesRequest">AWS
 * API Reference</a></p>
 */
class ListInstanceTypesRequest : public WorkspacesInstancesRequest {
 public:
  AWS_WORKSPACESINSTANCES_API ListInstanceTypesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInstanceTypes"; }

  AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

  AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Maximum number of instance types to return in a single API call. Enables
   * pagination of instance type results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInstanceTypesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for retrieving subsequent pages of instance type
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInstanceTypesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to narrow instance type results based on configuration
   * requirements. Only returns instance types that support the specified combination
   * of tenancy, platform type, and billing mode.</p>
   */
  inline const InstanceConfigurationFilter& GetInstanceConfigurationFilter() const { return m_instanceConfigurationFilter; }
  inline bool InstanceConfigurationFilterHasBeenSet() const { return m_instanceConfigurationFilterHasBeenSet; }
  template <typename InstanceConfigurationFilterT = InstanceConfigurationFilter>
  void SetInstanceConfigurationFilter(InstanceConfigurationFilterT&& value) {
    m_instanceConfigurationFilterHasBeenSet = true;
    m_instanceConfigurationFilter = std::forward<InstanceConfigurationFilterT>(value);
  }
  template <typename InstanceConfigurationFilterT = InstanceConfigurationFilter>
  ListInstanceTypesRequest& WithInstanceConfigurationFilter(InstanceConfigurationFilterT&& value) {
    SetInstanceConfigurationFilter(std::forward<InstanceConfigurationFilterT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  InstanceConfigurationFilter m_instanceConfigurationFilter;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_instanceConfigurationFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
