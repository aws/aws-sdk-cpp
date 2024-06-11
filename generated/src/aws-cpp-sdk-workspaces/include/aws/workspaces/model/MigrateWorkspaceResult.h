﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
  class MigrateWorkspaceResult
  {
  public:
    AWS_WORKSPACES_API MigrateWorkspaceResult();
    AWS_WORKSPACES_API MigrateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API MigrateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The original identifier of the WorkSpace that is being migrated.</p>
     */
    inline const Aws::String& GetSourceWorkspaceId() const{ return m_sourceWorkspaceId; }
    inline void SetSourceWorkspaceId(const Aws::String& value) { m_sourceWorkspaceId = value; }
    inline void SetSourceWorkspaceId(Aws::String&& value) { m_sourceWorkspaceId = std::move(value); }
    inline void SetSourceWorkspaceId(const char* value) { m_sourceWorkspaceId.assign(value); }
    inline MigrateWorkspaceResult& WithSourceWorkspaceId(const Aws::String& value) { SetSourceWorkspaceId(value); return *this;}
    inline MigrateWorkspaceResult& WithSourceWorkspaceId(Aws::String&& value) { SetSourceWorkspaceId(std::move(value)); return *this;}
    inline MigrateWorkspaceResult& WithSourceWorkspaceId(const char* value) { SetSourceWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier of the WorkSpace that is being migrated. If the migration
     * does not succeed, the target WorkSpace ID will not be used, and the WorkSpace
     * will still have the original WorkSpace ID.</p>
     */
    inline const Aws::String& GetTargetWorkspaceId() const{ return m_targetWorkspaceId; }
    inline void SetTargetWorkspaceId(const Aws::String& value) { m_targetWorkspaceId = value; }
    inline void SetTargetWorkspaceId(Aws::String&& value) { m_targetWorkspaceId = std::move(value); }
    inline void SetTargetWorkspaceId(const char* value) { m_targetWorkspaceId.assign(value); }
    inline MigrateWorkspaceResult& WithTargetWorkspaceId(const Aws::String& value) { SetTargetWorkspaceId(value); return *this;}
    inline MigrateWorkspaceResult& WithTargetWorkspaceId(Aws::String&& value) { SetTargetWorkspaceId(std::move(value)); return *this;}
    inline MigrateWorkspaceResult& WithTargetWorkspaceId(const char* value) { SetTargetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline MigrateWorkspaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline MigrateWorkspaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline MigrateWorkspaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceWorkspaceId;

    Aws::String m_targetWorkspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
