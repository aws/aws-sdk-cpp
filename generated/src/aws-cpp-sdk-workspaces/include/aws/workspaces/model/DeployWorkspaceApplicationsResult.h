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
    AWS_WORKSPACES_API DeployWorkspaceApplicationsResult();
    AWS_WORKSPACES_API DeployWorkspaceApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DeployWorkspaceApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of deployed associations and information about them.</p>
     */
    inline const WorkSpaceApplicationDeployment& GetDeployment() const{ return m_deployment; }

    /**
     * <p>The list of deployed associations and information about them.</p>
     */
    inline void SetDeployment(const WorkSpaceApplicationDeployment& value) { m_deployment = value; }

    /**
     * <p>The list of deployed associations and information about them.</p>
     */
    inline void SetDeployment(WorkSpaceApplicationDeployment&& value) { m_deployment = std::move(value); }

    /**
     * <p>The list of deployed associations and information about them.</p>
     */
    inline DeployWorkspaceApplicationsResult& WithDeployment(const WorkSpaceApplicationDeployment& value) { SetDeployment(value); return *this;}

    /**
     * <p>The list of deployed associations and information about them.</p>
     */
    inline DeployWorkspaceApplicationsResult& WithDeployment(WorkSpaceApplicationDeployment&& value) { SetDeployment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeployWorkspaceApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeployWorkspaceApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeployWorkspaceApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WorkSpaceApplicationDeployment m_deployment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
