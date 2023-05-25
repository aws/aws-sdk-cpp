/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeCommandsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeCommandsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCommands"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline DescribeCommandsRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline DescribeCommandsRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline DescribeCommandsRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline DescribeCommandsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline DescribeCommandsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline DescribeCommandsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommandIds() const{ return m_commandIds; }

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline bool CommandIdsHasBeenSet() const { return m_commandIdsHasBeenSet; }

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline void SetCommandIds(const Aws::Vector<Aws::String>& value) { m_commandIdsHasBeenSet = true; m_commandIds = value; }

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline void SetCommandIds(Aws::Vector<Aws::String>&& value) { m_commandIdsHasBeenSet = true; m_commandIds = std::move(value); }

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline DescribeCommandsRequest& WithCommandIds(const Aws::Vector<Aws::String>& value) { SetCommandIds(value); return *this;}

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline DescribeCommandsRequest& WithCommandIds(Aws::Vector<Aws::String>&& value) { SetCommandIds(std::move(value)); return *this;}

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline DescribeCommandsRequest& AddCommandIds(const Aws::String& value) { m_commandIdsHasBeenSet = true; m_commandIds.push_back(value); return *this; }

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline DescribeCommandsRequest& AddCommandIds(Aws::String&& value) { m_commandIdsHasBeenSet = true; m_commandIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline DescribeCommandsRequest& AddCommandIds(const char* value) { m_commandIdsHasBeenSet = true; m_commandIds.push_back(value); return *this; }

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_commandIds;
    bool m_commandIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
