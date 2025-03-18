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
    AWS_OPSWORKS_API DescribeCommandsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCommands"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The deployment ID. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the commands associated
     * with the specified deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    DescribeCommandsRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID. If you include this parameter, <code>DescribeCommands</code>
     * returns a description of the commands associated with the specified
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeCommandsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of command IDs. If you include this parameter,
     * <code>DescribeCommands</code> returns a description of the specified commands.
     * Otherwise, it returns a description of every command.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommandIds() const { return m_commandIds; }
    inline bool CommandIdsHasBeenSet() const { return m_commandIdsHasBeenSet; }
    template<typename CommandIdsT = Aws::Vector<Aws::String>>
    void SetCommandIds(CommandIdsT&& value) { m_commandIdsHasBeenSet = true; m_commandIds = std::forward<CommandIdsT>(value); }
    template<typename CommandIdsT = Aws::Vector<Aws::String>>
    DescribeCommandsRequest& WithCommandIds(CommandIdsT&& value) { SetCommandIds(std::forward<CommandIdsT>(value)); return *this;}
    template<typename CommandIdsT = Aws::String>
    DescribeCommandsRequest& AddCommandIds(CommandIdsT&& value) { m_commandIdsHasBeenSet = true; m_commandIds.emplace_back(std::forward<CommandIdsT>(value)); return *this; }
    ///@}
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
