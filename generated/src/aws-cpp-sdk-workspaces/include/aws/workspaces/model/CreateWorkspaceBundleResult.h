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
    AWS_WORKSPACES_API CreateWorkspaceBundleResult();
    AWS_WORKSPACES_API CreateWorkspaceBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateWorkspaceBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const WorkspaceBundle& GetWorkspaceBundle() const{ return m_workspaceBundle; }

    
    inline void SetWorkspaceBundle(const WorkspaceBundle& value) { m_workspaceBundle = value; }

    
    inline void SetWorkspaceBundle(WorkspaceBundle&& value) { m_workspaceBundle = std::move(value); }

    
    inline CreateWorkspaceBundleResult& WithWorkspaceBundle(const WorkspaceBundle& value) { SetWorkspaceBundle(value); return *this;}

    
    inline CreateWorkspaceBundleResult& WithWorkspaceBundle(WorkspaceBundle&& value) { SetWorkspaceBundle(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateWorkspaceBundleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateWorkspaceBundleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateWorkspaceBundleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WorkspaceBundle m_workspaceBundle;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
