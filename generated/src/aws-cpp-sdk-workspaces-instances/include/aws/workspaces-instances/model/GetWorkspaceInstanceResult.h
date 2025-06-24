/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/ProvisionStateEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/EC2ManagedInstance.h>
#include <aws/workspaces-instances/model/WorkspaceInstanceError.h>
#include <aws/workspaces-instances/model/EC2InstanceError.h>
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
namespace WorkspacesInstances
{
namespace Model
{
  /**
   * <p>Provides comprehensive details about the requested WorkSpaces
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/GetWorkspaceInstanceResponse">AWS
   * API Reference</a></p>
   */
  class GetWorkspaceInstanceResult
  {
  public:
    AWS_WORKSPACESINSTANCES_API GetWorkspaceInstanceResult() = default;
    AWS_WORKSPACESINSTANCES_API GetWorkspaceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESINSTANCES_API GetWorkspaceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Captures any errors specific to the WorkSpace Instance lifecycle.</p>
     */
    inline const Aws::Vector<WorkspaceInstanceError>& GetWorkspaceInstanceErrors() const { return m_workspaceInstanceErrors; }
    template<typename WorkspaceInstanceErrorsT = Aws::Vector<WorkspaceInstanceError>>
    void SetWorkspaceInstanceErrors(WorkspaceInstanceErrorsT&& value) { m_workspaceInstanceErrorsHasBeenSet = true; m_workspaceInstanceErrors = std::forward<WorkspaceInstanceErrorsT>(value); }
    template<typename WorkspaceInstanceErrorsT = Aws::Vector<WorkspaceInstanceError>>
    GetWorkspaceInstanceResult& WithWorkspaceInstanceErrors(WorkspaceInstanceErrorsT&& value) { SetWorkspaceInstanceErrors(std::forward<WorkspaceInstanceErrorsT>(value)); return *this;}
    template<typename WorkspaceInstanceErrorsT = WorkspaceInstanceError>
    GetWorkspaceInstanceResult& AddWorkspaceInstanceErrors(WorkspaceInstanceErrorsT&& value) { m_workspaceInstanceErrorsHasBeenSet = true; m_workspaceInstanceErrors.emplace_back(std::forward<WorkspaceInstanceErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Includes any underlying EC2 instance errors encountered.</p>
     */
    inline const Aws::Vector<EC2InstanceError>& GetEC2InstanceErrors() const { return m_eC2InstanceErrors; }
    template<typename EC2InstanceErrorsT = Aws::Vector<EC2InstanceError>>
    void SetEC2InstanceErrors(EC2InstanceErrorsT&& value) { m_eC2InstanceErrorsHasBeenSet = true; m_eC2InstanceErrors = std::forward<EC2InstanceErrorsT>(value); }
    template<typename EC2InstanceErrorsT = Aws::Vector<EC2InstanceError>>
    GetWorkspaceInstanceResult& WithEC2InstanceErrors(EC2InstanceErrorsT&& value) { SetEC2InstanceErrors(std::forward<EC2InstanceErrorsT>(value)); return *this;}
    template<typename EC2InstanceErrorsT = EC2InstanceError>
    GetWorkspaceInstanceResult& AddEC2InstanceErrors(EC2InstanceErrorsT&& value) { m_eC2InstanceErrorsHasBeenSet = true; m_eC2InstanceErrors.emplace_back(std::forward<EC2InstanceErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Current provisioning state of the WorkSpaces Instance.</p>
     */
    inline ProvisionStateEnum GetProvisionState() const { return m_provisionState; }
    inline void SetProvisionState(ProvisionStateEnum value) { m_provisionStateHasBeenSet = true; m_provisionState = value; }
    inline GetWorkspaceInstanceResult& WithProvisionState(ProvisionStateEnum value) { SetProvisionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the retrieved WorkSpaces Instance.</p>
     */
    inline const Aws::String& GetWorkspaceInstanceId() const { return m_workspaceInstanceId; }
    template<typename WorkspaceInstanceIdT = Aws::String>
    void SetWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { m_workspaceInstanceIdHasBeenSet = true; m_workspaceInstanceId = std::forward<WorkspaceInstanceIdT>(value); }
    template<typename WorkspaceInstanceIdT = Aws::String>
    GetWorkspaceInstanceResult& WithWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { SetWorkspaceInstanceId(std::forward<WorkspaceInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the associated EC2 managed instance.</p>
     */
    inline const EC2ManagedInstance& GetEC2ManagedInstance() const { return m_eC2ManagedInstance; }
    template<typename EC2ManagedInstanceT = EC2ManagedInstance>
    void SetEC2ManagedInstance(EC2ManagedInstanceT&& value) { m_eC2ManagedInstanceHasBeenSet = true; m_eC2ManagedInstance = std::forward<EC2ManagedInstanceT>(value); }
    template<typename EC2ManagedInstanceT = EC2ManagedInstance>
    GetWorkspaceInstanceResult& WithEC2ManagedInstance(EC2ManagedInstanceT&& value) { SetEC2ManagedInstance(std::forward<EC2ManagedInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkspaceInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceInstanceError> m_workspaceInstanceErrors;
    bool m_workspaceInstanceErrorsHasBeenSet = false;

    Aws::Vector<EC2InstanceError> m_eC2InstanceErrors;
    bool m_eC2InstanceErrorsHasBeenSet = false;

    ProvisionStateEnum m_provisionState{ProvisionStateEnum::NOT_SET};
    bool m_provisionStateHasBeenSet = false;

    Aws::String m_workspaceInstanceId;
    bool m_workspaceInstanceIdHasBeenSet = false;

    EC2ManagedInstance m_eC2ManagedInstance;
    bool m_eC2ManagedInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
