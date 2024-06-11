﻿/**
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
    AWS_WORKSPACES_API ModifyWorkspacePropertiesRequest();

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
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::move(value); }
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the data replication status.</p>
     */
    inline const DataReplication& GetDataReplication() const{ return m_dataReplication; }
    inline bool DataReplicationHasBeenSet() const { return m_dataReplicationHasBeenSet; }
    inline void SetDataReplication(const DataReplication& value) { m_dataReplicationHasBeenSet = true; m_dataReplication = value; }
    inline void SetDataReplication(DataReplication&& value) { m_dataReplicationHasBeenSet = true; m_dataReplication = std::move(value); }
    inline ModifyWorkspacePropertiesRequest& WithDataReplication(const DataReplication& value) { SetDataReplication(value); return *this;}
    inline ModifyWorkspacePropertiesRequest& WithDataReplication(DataReplication&& value) { SetDataReplication(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet = false;

    DataReplication m_dataReplication;
    bool m_dataReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
