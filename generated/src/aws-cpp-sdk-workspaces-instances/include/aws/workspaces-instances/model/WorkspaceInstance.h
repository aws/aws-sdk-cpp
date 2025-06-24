/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/ProvisionStateEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/EC2ManagedInstance.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Represents a single WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/WorkspaceInstance">AWS
   * API Reference</a></p>
   */
  class WorkspaceInstance
  {
  public:
    AWS_WORKSPACESINSTANCES_API WorkspaceInstance() = default;
    AWS_WORKSPACESINSTANCES_API WorkspaceInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API WorkspaceInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Current provisioning state of the WorkSpace Instance.</p>
     */
    inline ProvisionStateEnum GetProvisionState() const { return m_provisionState; }
    inline bool ProvisionStateHasBeenSet() const { return m_provisionStateHasBeenSet; }
    inline void SetProvisionState(ProvisionStateEnum value) { m_provisionStateHasBeenSet = true; m_provisionState = value; }
    inline WorkspaceInstance& WithProvisionState(ProvisionStateEnum value) { SetProvisionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the WorkSpace Instance.</p>
     */
    inline const Aws::String& GetWorkspaceInstanceId() const { return m_workspaceInstanceId; }
    inline bool WorkspaceInstanceIdHasBeenSet() const { return m_workspaceInstanceIdHasBeenSet; }
    template<typename WorkspaceInstanceIdT = Aws::String>
    void SetWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { m_workspaceInstanceIdHasBeenSet = true; m_workspaceInstanceId = std::forward<WorkspaceInstanceIdT>(value); }
    template<typename WorkspaceInstanceIdT = Aws::String>
    WorkspaceInstance& WithWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { SetWorkspaceInstanceId(std::forward<WorkspaceInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the associated EC2 managed instance.</p>
     */
    inline const EC2ManagedInstance& GetEC2ManagedInstance() const { return m_eC2ManagedInstance; }
    inline bool EC2ManagedInstanceHasBeenSet() const { return m_eC2ManagedInstanceHasBeenSet; }
    template<typename EC2ManagedInstanceT = EC2ManagedInstance>
    void SetEC2ManagedInstance(EC2ManagedInstanceT&& value) { m_eC2ManagedInstanceHasBeenSet = true; m_eC2ManagedInstance = std::forward<EC2ManagedInstanceT>(value); }
    template<typename EC2ManagedInstanceT = EC2ManagedInstance>
    WorkspaceInstance& WithEC2ManagedInstance(EC2ManagedInstanceT&& value) { SetEC2ManagedInstance(std::forward<EC2ManagedInstanceT>(value)); return *this;}
    ///@}
  private:

    ProvisionStateEnum m_provisionState{ProvisionStateEnum::NOT_SET};
    bool m_provisionStateHasBeenSet = false;

    Aws::String m_workspaceInstanceId;
    bool m_workspaceInstanceIdHasBeenSet = false;

    EC2ManagedInstance m_eC2ManagedInstance;
    bool m_eC2ManagedInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
