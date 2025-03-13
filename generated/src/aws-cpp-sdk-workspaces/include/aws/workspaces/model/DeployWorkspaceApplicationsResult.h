/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkSpaceApplicationDeployment.h>
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
  class DeployWorkspaceApplicationsResult
  {
  public:
    AWS_WORKSPACES_API DeployWorkspaceApplicationsResult() = default;
    AWS_WORKSPACES_API DeployWorkspaceApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DeployWorkspaceApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of deployed associations and information about them.</p>
     */
    inline const WorkSpaceApplicationDeployment& GetDeployment() const { return m_deployment; }
    template<typename DeploymentT = WorkSpaceApplicationDeployment>
    void SetDeployment(DeploymentT&& value) { m_deploymentHasBeenSet = true; m_deployment = std::forward<DeploymentT>(value); }
    template<typename DeploymentT = WorkSpaceApplicationDeployment>
    DeployWorkspaceApplicationsResult& WithDeployment(DeploymentT&& value) { SetDeployment(std::forward<DeploymentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeployWorkspaceApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkSpaceApplicationDeployment m_deployment;
    bool m_deploymentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
