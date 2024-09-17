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
  class CreateWorkspacesPoolResult
  {
  public:
    AWS_WORKSPACES_API CreateWorkspacesPoolResult();
    AWS_WORKSPACES_API CreateWorkspacesPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateWorkspacesPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates the pool to create.</p>
     */
    inline const WorkspacesPool& GetWorkspacesPool() const{ return m_workspacesPool; }
    inline void SetWorkspacesPool(const WorkspacesPool& value) { m_workspacesPool = value; }
    inline void SetWorkspacesPool(WorkspacesPool&& value) { m_workspacesPool = std::move(value); }
    inline CreateWorkspacesPoolResult& WithWorkspacesPool(const WorkspacesPool& value) { SetWorkspacesPool(value); return *this;}
    inline CreateWorkspacesPoolResult& WithWorkspacesPool(WorkspacesPool&& value) { SetWorkspacesPool(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkspacesPoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkspacesPoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkspacesPoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WorkspacesPool m_workspacesPool;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
