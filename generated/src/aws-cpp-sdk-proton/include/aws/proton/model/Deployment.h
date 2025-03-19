/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/DeploymentStatus.h>
#include <aws/proton/model/DeploymentState.h>
#include <aws/proton/model/DeploymentTargetResourceType.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>The detailed information about a deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_PROTON_API Deployment() = default;
    AWS_PROTON_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deployment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Deployment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deployment was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    Deployment& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component associated with this deployment.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    Deployment& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Deployment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline Deployment& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const { return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    template<typename DeploymentStatusMessageT = Aws::String>
    void SetDeploymentStatusMessage(DeploymentStatusMessageT&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::forward<DeploymentStatusMessageT>(value); }
    template<typename DeploymentStatusMessageT = Aws::String>
    Deployment& WithDeploymentStatusMessage(DeploymentStatusMessageT&& value) { SetDeploymentStatusMessage(std::forward<DeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment associated with this deployment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    Deployment& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Deployment& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial state of the target resource at the time of the deployment.</p>
     */
    inline const DeploymentState& GetInitialState() const { return m_initialState; }
    inline bool InitialStateHasBeenSet() const { return m_initialStateHasBeenSet; }
    template<typename InitialStateT = DeploymentState>
    void SetInitialState(InitialStateT&& value) { m_initialStateHasBeenSet = true; m_initialState = std::forward<InitialStateT>(value); }
    template<typename InitialStateT = DeploymentState>
    Deployment& WithInitialState(InitialStateT&& value) { SetInitialState(std::forward<InitialStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last attempted deployment.</p>
     */
    inline const Aws::String& GetLastAttemptedDeploymentId() const { return m_lastAttemptedDeploymentId; }
    inline bool LastAttemptedDeploymentIdHasBeenSet() const { return m_lastAttemptedDeploymentIdHasBeenSet; }
    template<typename LastAttemptedDeploymentIdT = Aws::String>
    void SetLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = std::forward<LastAttemptedDeploymentIdT>(value); }
    template<typename LastAttemptedDeploymentIdT = Aws::String>
    Deployment& WithLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { SetLastAttemptedDeploymentId(std::forward<LastAttemptedDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deployment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    Deployment& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last successful deployment.</p>
     */
    inline const Aws::String& GetLastSucceededDeploymentId() const { return m_lastSucceededDeploymentId; }
    inline bool LastSucceededDeploymentIdHasBeenSet() const { return m_lastSucceededDeploymentIdHasBeenSet; }
    template<typename LastSucceededDeploymentIdT = Aws::String>
    void SetLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = std::forward<LastSucceededDeploymentIdT>(value); }
    template<typename LastSucceededDeploymentIdT = Aws::String>
    Deployment& WithLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { SetLastSucceededDeploymentId(std::forward<LastSucceededDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment's service instance.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const { return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    template<typename ServiceInstanceNameT = Aws::String>
    void SetServiceInstanceName(ServiceInstanceNameT&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::forward<ServiceInstanceNameT>(value); }
    template<typename ServiceInstanceNameT = Aws::String>
    Deployment& WithServiceInstanceName(ServiceInstanceNameT&& value) { SetServiceInstanceName(std::forward<ServiceInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service in this deployment.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    Deployment& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target of the deployment.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    Deployment& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the depoyment target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTargetResourceCreatedAt() const { return m_targetResourceCreatedAt; }
    inline bool TargetResourceCreatedAtHasBeenSet() const { return m_targetResourceCreatedAtHasBeenSet; }
    template<typename TargetResourceCreatedAtT = Aws::Utils::DateTime>
    void SetTargetResourceCreatedAt(TargetResourceCreatedAtT&& value) { m_targetResourceCreatedAtHasBeenSet = true; m_targetResourceCreatedAt = std::forward<TargetResourceCreatedAtT>(value); }
    template<typename TargetResourceCreatedAtT = Aws::Utils::DateTime>
    Deployment& WithTargetResourceCreatedAt(TargetResourceCreatedAtT&& value) { SetTargetResourceCreatedAt(std::forward<TargetResourceCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the deployment target. It can be an environment,
     * service, service instance, or component.</p>
     */
    inline DeploymentTargetResourceType GetTargetResourceType() const { return m_targetResourceType; }
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }
    inline void SetTargetResourceType(DeploymentTargetResourceType value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }
    inline Deployment& WithTargetResourceType(DeploymentTargetResourceType value) { SetTargetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target state of the target resource at the time of the deployment.</p>
     */
    inline const DeploymentState& GetTargetState() const { return m_targetState; }
    inline bool TargetStateHasBeenSet() const { return m_targetStateHasBeenSet; }
    template<typename TargetStateT = DeploymentState>
    void SetTargetState(TargetStateT&& value) { m_targetStateHasBeenSet = true; m_targetState = std::forward<TargetStateT>(value); }
    template<typename TargetStateT = DeploymentState>
    Deployment& WithTargetState(TargetStateT&& value) { SetTargetState(std::forward<TargetStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DeploymentState m_initialState;
    bool m_initialStateHasBeenSet = false;

    Aws::String m_lastAttemptedDeploymentId;
    bool m_lastAttemptedDeploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_lastSucceededDeploymentId;
    bool m_lastSucceededDeploymentIdHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::Utils::DateTime m_targetResourceCreatedAt{};
    bool m_targetResourceCreatedAtHasBeenSet = false;

    DeploymentTargetResourceType m_targetResourceType{DeploymentTargetResourceType::NOT_SET};
    bool m_targetResourceTypeHasBeenSet = false;

    DeploymentState m_targetState;
    bool m_targetStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
