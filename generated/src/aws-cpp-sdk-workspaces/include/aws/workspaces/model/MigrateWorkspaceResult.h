/**
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
    AWS_WORKSPACES_API MigrateWorkspaceResult() = default;
    AWS_WORKSPACES_API MigrateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API MigrateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The original identifier of the WorkSpace that is being migrated.</p>
     */
    inline const Aws::String& GetSourceWorkspaceId() const { return m_sourceWorkspaceId; }
    template<typename SourceWorkspaceIdT = Aws::String>
    void SetSourceWorkspaceId(SourceWorkspaceIdT&& value) { m_sourceWorkspaceIdHasBeenSet = true; m_sourceWorkspaceId = std::forward<SourceWorkspaceIdT>(value); }
    template<typename SourceWorkspaceIdT = Aws::String>
    MigrateWorkspaceResult& WithSourceWorkspaceId(SourceWorkspaceIdT&& value) { SetSourceWorkspaceId(std::forward<SourceWorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier of the WorkSpace that is being migrated. If the migration
     * does not succeed, the target WorkSpace ID will not be used, and the WorkSpace
     * will still have the original WorkSpace ID.</p>
     */
    inline const Aws::String& GetTargetWorkspaceId() const { return m_targetWorkspaceId; }
    template<typename TargetWorkspaceIdT = Aws::String>
    void SetTargetWorkspaceId(TargetWorkspaceIdT&& value) { m_targetWorkspaceIdHasBeenSet = true; m_targetWorkspaceId = std::forward<TargetWorkspaceIdT>(value); }
    template<typename TargetWorkspaceIdT = Aws::String>
    MigrateWorkspaceResult& WithTargetWorkspaceId(TargetWorkspaceIdT&& value) { SetTargetWorkspaceId(std::forward<TargetWorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    MigrateWorkspaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceWorkspaceId;
    bool m_sourceWorkspaceIdHasBeenSet = false;

    Aws::String m_targetWorkspaceId;
    bool m_targetWorkspaceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
