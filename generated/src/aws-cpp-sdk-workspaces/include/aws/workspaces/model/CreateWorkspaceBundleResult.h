/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkspaceBundle.h>
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
    AWS_WORKSPACES_API CreateWorkspaceBundleResult();
    AWS_WORKSPACES_API CreateWorkspaceBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateWorkspaceBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const WorkspaceBundle& GetWorkspaceBundle() const{ return m_workspaceBundle; }

    
    inline void SetWorkspaceBundle(const WorkspaceBundle& value) { m_workspaceBundle = value; }

    
    inline void SetWorkspaceBundle(WorkspaceBundle&& value) { m_workspaceBundle = std::move(value); }

    
    inline CreateWorkspaceBundleResult& WithWorkspaceBundle(const WorkspaceBundle& value) { SetWorkspaceBundle(value); return *this;}

    
    inline CreateWorkspaceBundleResult& WithWorkspaceBundle(WorkspaceBundle&& value) { SetWorkspaceBundle(std::move(value)); return *this;}

  private:

    WorkspaceBundle m_workspaceBundle;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
