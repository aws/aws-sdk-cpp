/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/workspaces/model/DataReplication.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyWorkspacePropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyWorkspacePropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyWorkspaceProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    ModifyWorkspacePropertiesRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const { return m_workspaceProperties; }
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }
    template<typename WorkspacePropertiesT = WorkspaceProperties>
    void SetWorkspaceProperties(WorkspacePropertiesT&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::forward<WorkspacePropertiesT>(value); }
    template<typename WorkspacePropertiesT = WorkspaceProperties>
    ModifyWorkspacePropertiesRequest& WithWorkspaceProperties(WorkspacePropertiesT&& value) { SetWorkspaceProperties(std::forward<WorkspacePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the data replication status.</p>
     */
    inline DataReplication GetDataReplication() const { return m_dataReplication; }
    inline bool DataReplicationHasBeenSet() const { return m_dataReplicationHasBeenSet; }
    inline void SetDataReplication(DataReplication value) { m_dataReplicationHasBeenSet = true; m_dataReplication = value; }
    inline ModifyWorkspacePropertiesRequest& WithDataReplication(DataReplication value) { SetDataReplication(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet = false;

    DataReplication m_dataReplication{DataReplication::NOT_SET};
    bool m_dataReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
