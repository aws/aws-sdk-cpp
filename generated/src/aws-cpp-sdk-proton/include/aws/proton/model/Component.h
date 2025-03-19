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
   * <p>Detailed data of an Proton component resource.</p> <p>For more information
   * about components, see <a
   * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
   * components</a> in the <i>Proton User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Component">AWS
   * API Reference</a></p>
   */
  class Component
  {
  public:
    AWS_PROTON_API Component() = default;
    AWS_PROTON_API Component(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Component& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Component& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    Component& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component deployment status.</p>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline Component& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
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
    Component& WithDeploymentStatusMessage(DeploymentStatusMessageT&& value) { SetDeploymentStatusMessage(std::forward<DeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the component.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Component& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    Component& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
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
    Component& WithLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { SetLastAttemptedDeploymentId(std::forward<LastAttemptedDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last token the client requested.</p>
     */
    inline const Aws::String& GetLastClientRequestToken() const { return m_lastClientRequestToken; }
    inline bool LastClientRequestTokenHasBeenSet() const { return m_lastClientRequestTokenHasBeenSet; }
    template<typename LastClientRequestTokenT = Aws::String>
    void SetLastClientRequestToken(LastClientRequestTokenT&& value) { m_lastClientRequestTokenHasBeenSet = true; m_lastClientRequestToken = std::forward<LastClientRequestTokenT>(value); }
    template<typename LastClientRequestTokenT = Aws::String>
    Component& WithLastClientRequestToken(LastClientRequestTokenT&& value) { SetLastClientRequestToken(std::forward<LastClientRequestTokenT>(value)); return *this;}
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
    Component& WithLastDeploymentAttemptedAt(LastDeploymentAttemptedAtT&& value) { SetLastDeploymentAttemptedAt(std::forward<LastDeploymentAttemptedAtT>(value)); return *this;}
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
    Component& WithLastDeploymentSucceededAt(LastDeploymentSucceededAtT&& value) { SetLastDeploymentSucceededAt(std::forward<LastDeploymentSucceededAtT>(value)); return *this;}
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
    Component& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
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
    Component& WithLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { SetLastSucceededDeploymentId(std::forward<LastSucceededDeploymentIdT>(value)); return *this;}
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
    Component& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    Component& WithServiceInstanceName(ServiceInstanceNameT&& value) { SetServiceInstanceName(std::forward<ServiceInstanceNameT>(value)); return *this;}
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
    Component& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that the component uses to access service inputs. Provided
     * when a component is attached to a service instance.</p>
     */
    inline const Aws::String& GetServiceSpec() const { return m_serviceSpec; }
    inline bool ServiceSpecHasBeenSet() const { return m_serviceSpecHasBeenSet; }
    template<typename ServiceSpecT = Aws::String>
    void SetServiceSpec(ServiceSpecT&& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = std::forward<ServiceSpecT>(value); }
    template<typename ServiceSpecT = Aws::String>
    Component& WithServiceSpec(ServiceSpecT&& value) { SetServiceSpec(std::forward<ServiceSpecT>(value)); return *this;}
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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_lastAttemptedDeploymentId;
    bool m_lastAttemptedDeploymentIdHasBeenSet = false;

    Aws::String m_lastClientRequestToken;
    bool m_lastClientRequestTokenHasBeenSet = false;

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

    Aws::String m_serviceSpec;
    bool m_serviceSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
