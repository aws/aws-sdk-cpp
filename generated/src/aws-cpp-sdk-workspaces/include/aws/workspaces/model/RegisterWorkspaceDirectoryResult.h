/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceDirectoryState.h>
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
  class RegisterWorkspaceDirectoryResult
  {
  public:
    AWS_WORKSPACES_API RegisterWorkspaceDirectoryResult();
    AWS_WORKSPACES_API RegisterWorkspaceDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API RegisterWorkspaceDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline RegisterWorkspaceDirectoryResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline RegisterWorkspaceDirectoryResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration status of the WorkSpace directory.</p>
     */
    inline const WorkspaceDirectoryState& GetState() const{ return m_state; }
    inline void SetState(const WorkspaceDirectoryState& value) { m_state = value; }
    inline void SetState(WorkspaceDirectoryState&& value) { m_state = std::move(value); }
    inline RegisterWorkspaceDirectoryResult& WithState(const WorkspaceDirectoryState& value) { SetState(value); return *this;}
    inline RegisterWorkspaceDirectoryResult& WithState(WorkspaceDirectoryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterWorkspaceDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterWorkspaceDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    WorkspaceDirectoryState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
