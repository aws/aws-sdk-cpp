/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/DeploymentStatus.h>
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
   * <p>Summary data of an Proton component resource.</p> <p>For more information
   * about components, see <a
   * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
   * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ComponentSummary">AWS
   * API Reference</a></p>
   */
  class ComponentSummary
  {
  public:
    AWS_PROTON_API ComponentSummary() = default;
    AWS_PROTON_API ComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ComponentSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ComponentSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component deployment status.</p>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline ComponentSummary& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the component deployment status.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const { return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    template<typename DeploymentStatusMessageT = Aws::String>
    void SetDeploymentStatusMessage(DeploymentStatusMessageT&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::forward<DeploymentStatusMessageT>(value); }
    template<typename DeploymentStatusMessageT = Aws::String>
    ComponentSummary& WithDeploymentStatusMessage(DeploymentStatusMessageT&& value) { SetDeploymentStatusMessage(std::forward<DeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Proton environment that this component is associated
     * with.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    ComponentSummary& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last attempted deployment of this component.</p>
     */
    inline const Aws::String& GetLastAttemptedDeploymentId() const { return m_lastAttemptedDeploymentId; }
    inline bool LastAttemptedDeploymentIdHasBeenSet() const { return m_lastAttemptedDeploymentIdHasBeenSet; }
    template<typename LastAttemptedDeploymentIdT = Aws::String>
    void SetLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = std::forward<LastAttemptedDeploymentIdT>(value); }
    template<typename LastAttemptedDeploymentIdT = Aws::String>
    ComponentSummary& WithLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { SetLastAttemptedDeploymentId(std::forward<LastAttemptedDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a deployment of the component was last attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentAttemptedAt() const { return m_lastDeploymentAttemptedAt; }
    inline bool LastDeploymentAttemptedAtHasBeenSet() const { return m_lastDeploymentAttemptedAtHasBeenSet; }
    template<typename LastDeploymentAttemptedAtT = Aws::Utils::DateTime>
    void SetLastDeploymentAttemptedAt(LastDeploymentAttemptedAtT&& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = std::forward<LastDeploymentAttemptedAtT>(value); }
    template<typename LastDeploymentAttemptedAtT = Aws::Utils::DateTime>
    ComponentSummary& WithLastDeploymentAttemptedAt(LastDeploymentAttemptedAtT&& value) { SetLastDeploymentAttemptedAt(std::forward<LastDeploymentAttemptedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the component was last deployed successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentSucceededAt() const { return m_lastDeploymentSucceededAt; }
    inline bool LastDeploymentSucceededAtHasBeenSet() const { return m_lastDeploymentSucceededAtHasBeenSet; }
    template<typename LastDeploymentSucceededAtT = Aws::Utils::DateTime>
    void SetLastDeploymentSucceededAt(LastDeploymentSucceededAtT&& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = std::forward<LastDeploymentSucceededAtT>(value); }
    template<typename LastDeploymentSucceededAtT = Aws::Utils::DateTime>
    ComponentSummary& WithLastDeploymentSucceededAt(LastDeploymentSucceededAtT&& value) { SetLastDeploymentSucceededAt(std::forward<LastDeploymentSucceededAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the component was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    ComponentSummary& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last successful deployment of this component.</p>
     */
    inline const Aws::String& GetLastSucceededDeploymentId() const { return m_lastSucceededDeploymentId; }
    inline bool LastSucceededDeploymentIdHasBeenSet() const { return m_lastSucceededDeploymentIdHasBeenSet; }
    template<typename LastSucceededDeploymentIdT = Aws::String>
    void SetLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = std::forward<LastSucceededDeploymentIdT>(value); }
    template<typename LastSucceededDeploymentIdT = Aws::String>
    ComponentSummary& WithLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { SetLastSucceededDeploymentId(std::forward<LastSucceededDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ComponentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service instance that this component is attached to. Provided
     * when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const { return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    template<typename ServiceInstanceNameT = Aws::String>
    void SetServiceInstanceName(ServiceInstanceNameT&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::forward<ServiceInstanceNameT>(value); }
    template<typename ServiceInstanceNameT = Aws::String>
    ComponentSummary& WithServiceInstanceName(ServiceInstanceNameT&& value) { SetServiceInstanceName(std::forward<ServiceInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. Provided when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ComponentSummary& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_lastAttemptedDeploymentId;
    bool m_lastAttemptedDeploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentAttemptedAt{};
    bool m_lastDeploymentAttemptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentSucceededAt{};
    bool m_lastDeploymentSucceededAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_lastSucceededDeploymentId;
    bool m_lastSucceededDeploymentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
