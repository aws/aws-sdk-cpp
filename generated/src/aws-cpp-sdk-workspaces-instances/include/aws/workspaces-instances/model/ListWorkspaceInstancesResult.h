/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/WorkspaceInstance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkspacesInstances
{
namespace Model
{
  /**
   * <p>Contains the list of WorkSpaces Instances matching the specified
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListWorkspaceInstancesResponse">AWS
   * API Reference</a></p>
   */
  class ListWorkspaceInstancesResult
  {
  public:
    AWS_WORKSPACESINSTANCES_API ListWorkspaceInstancesResult() = default;
    AWS_WORKSPACESINSTANCES_API ListWorkspaceInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESINSTANCES_API ListWorkspaceInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Collection of WorkSpaces Instances returned by the query.</p>
     */
    inline const Aws::Vector<WorkspaceInstance>& GetWorkspaceInstances() const { return m_workspaceInstances; }
    template<typename WorkspaceInstancesT = Aws::Vector<WorkspaceInstance>>
    void SetWorkspaceInstances(WorkspaceInstancesT&& value) { m_workspaceInstancesHasBeenSet = true; m_workspaceInstances = std::forward<WorkspaceInstancesT>(value); }
    template<typename WorkspaceInstancesT = Aws::Vector<WorkspaceInstance>>
    ListWorkspaceInstancesResult& WithWorkspaceInstances(WorkspaceInstancesT&& value) { SetWorkspaceInstances(std::forward<WorkspaceInstancesT>(value)); return *this;}
    template<typename WorkspaceInstancesT = WorkspaceInstance>
    ListWorkspaceInstancesResult& AddWorkspaceInstances(WorkspaceInstancesT&& value) { m_workspaceInstancesHasBeenSet = true; m_workspaceInstances.emplace_back(std::forward<WorkspaceInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for retrieving additional WorkSpaces Instances if the result set is
     * paginated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkspaceInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkspaceInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceInstance> m_workspaceInstances;
    bool m_workspaceInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
