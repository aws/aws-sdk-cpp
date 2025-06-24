/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/ProvisionStateEnum.h>
#include <utility>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines filters and pagination parameters for retrieving WorkSpaces
   * Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListWorkspaceInstancesRequest">AWS
   * API Reference</a></p>
   */
  class ListWorkspaceInstancesRequest : public WorkspacesInstancesRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API ListWorkspaceInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkspaceInstances"; }

    AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filter WorkSpaces Instances by their current provisioning states.</p>
     */
    inline const Aws::Vector<ProvisionStateEnum>& GetProvisionStates() const { return m_provisionStates; }
    inline bool ProvisionStatesHasBeenSet() const { return m_provisionStatesHasBeenSet; }
    template<typename ProvisionStatesT = Aws::Vector<ProvisionStateEnum>>
    void SetProvisionStates(ProvisionStatesT&& value) { m_provisionStatesHasBeenSet = true; m_provisionStates = std::forward<ProvisionStatesT>(value); }
    template<typename ProvisionStatesT = Aws::Vector<ProvisionStateEnum>>
    ListWorkspaceInstancesRequest& WithProvisionStates(ProvisionStatesT&& value) { SetProvisionStates(std::forward<ProvisionStatesT>(value)); return *this;}
    inline ListWorkspaceInstancesRequest& AddProvisionStates(ProvisionStateEnum value) { m_provisionStatesHasBeenSet = true; m_provisionStates.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of WorkSpaces Instances to return in a single response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkspaceInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token for retrieving subsequent pages of WorkSpaces Instances.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkspaceInstancesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionStateEnum> m_provisionStates;
    bool m_provisionStatesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
