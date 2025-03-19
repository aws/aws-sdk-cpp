/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkspacesPool.h>
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
  class UpdateWorkspacesPoolResult
  {
  public:
    AWS_WORKSPACES_API UpdateWorkspacesPoolResult() = default;
    AWS_WORKSPACES_API UpdateWorkspacesPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API UpdateWorkspacesPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the specified pool.</p>
     */
    inline const WorkspacesPool& GetWorkspacesPool() const { return m_workspacesPool; }
    template<typename WorkspacesPoolT = WorkspacesPool>
    void SetWorkspacesPool(WorkspacesPoolT&& value) { m_workspacesPoolHasBeenSet = true; m_workspacesPool = std::forward<WorkspacesPoolT>(value); }
    template<typename WorkspacesPoolT = WorkspacesPool>
    UpdateWorkspacesPoolResult& WithWorkspacesPool(WorkspacesPoolT&& value) { SetWorkspacesPool(std::forward<WorkspacesPoolT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateWorkspacesPoolResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkspacesPool m_workspacesPool;
    bool m_workspacesPoolHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
