/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkspaceBundle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpaces
{
namespace Model
{
  class CreateWorkspaceBundleResult
  {
  public:
    AWS_WORKSPACES_API CreateWorkspaceBundleResult() = default;
    AWS_WORKSPACES_API CreateWorkspaceBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateWorkspaceBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const WorkspaceBundle& GetWorkspaceBundle() const { return m_workspaceBundle; }
    template<typename WorkspaceBundleT = WorkspaceBundle>
    void SetWorkspaceBundle(WorkspaceBundleT&& value) { m_workspaceBundleHasBeenSet = true; m_workspaceBundle = std::forward<WorkspaceBundleT>(value); }
    template<typename WorkspaceBundleT = WorkspaceBundle>
    CreateWorkspaceBundleResult& WithWorkspaceBundle(WorkspaceBundleT&& value) { SetWorkspaceBundle(std::forward<WorkspaceBundleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkspaceBundleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkspaceBundle m_workspaceBundle;
    bool m_workspaceBundleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
