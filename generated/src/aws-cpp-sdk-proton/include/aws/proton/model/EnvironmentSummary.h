/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/DeploymentStatus.h>
#include <aws/proton/model/Provisioning.h>
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
   * <p>Summary data of an Proton environment resource. An Proton environment is a
   * set of resources shared across Proton services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_PROTON_API EnvironmentSummary() = default;
    AWS_PROTON_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EnvironmentSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const { return m_componentRoleArn; }
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }
    template<typename ComponentRoleArnT = Aws::String>
    void SetComponentRoleArn(ComponentRoleArnT&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::forward<ComponentRoleArnT>(value); }
    template<typename ComponentRoleArnT = Aws::String>
    EnvironmentSummary& WithComponentRoleArn(ComponentRoleArnT&& value) { SetComponentRoleArn(std::forward<ComponentRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    EnvironmentSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment deployment status.</p>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline EnvironmentSummary& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An environment deployment status message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const { return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    template<typename DeploymentStatusMessageT = Aws::String>
    void SetDeploymentStatusMessage(DeploymentStatusMessageT&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::forward<DeploymentStatusMessageT>(value); }
    template<typename DeploymentStatusMessageT = Aws::String>
    EnvironmentSummary& WithDeploymentStatusMessage(DeploymentStatusMessageT&& value) { SetDeploymentStatusMessage(std::forward<DeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EnvironmentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const { return m_environmentAccountConnectionId; }
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }
    template<typename EnvironmentAccountConnectionIdT = Aws::String>
    void SetEnvironmentAccountConnectionId(EnvironmentAccountConnectionIdT&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::forward<EnvironmentAccountConnectionIdT>(value); }
    template<typename EnvironmentAccountConnectionIdT = Aws::String>
    EnvironmentSummary& WithEnvironmentAccountConnectionId(EnvironmentAccountConnectionIdT&& value) { SetEnvironmentAccountConnectionId(std::forward<EnvironmentAccountConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline const Aws::String& GetEnvironmentAccountId() const { return m_environmentAccountId; }
    inline bool EnvironmentAccountIdHasBeenSet() const { return m_environmentAccountIdHasBeenSet; }
    template<typename EnvironmentAccountIdT = Aws::String>
    void SetEnvironmentAccountId(EnvironmentAccountIdT&& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = std::forward<EnvironmentAccountIdT>(value); }
    template<typename EnvironmentAccountIdT = Aws::String>
    EnvironmentSummary& WithEnvironmentAccountId(EnvironmentAccountIdT&& value) { SetEnvironmentAccountId(std::forward<EnvironmentAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last attempted deployment of this environment.</p>
     */
    inline const Aws::String& GetLastAttemptedDeploymentId() const { return m_lastAttemptedDeploymentId; }
    inline bool LastAttemptedDeploymentIdHasBeenSet() const { return m_lastAttemptedDeploymentIdHasBeenSet; }
    template<typename LastAttemptedDeploymentIdT = Aws::String>
    void SetLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = std::forward<LastAttemptedDeploymentIdT>(value); }
    template<typename LastAttemptedDeploymentIdT = Aws::String>
    EnvironmentSummary& WithLastAttemptedDeploymentId(LastAttemptedDeploymentIdT&& value) { SetLastAttemptedDeploymentId(std::forward<LastAttemptedDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentAttemptedAt() const { return m_lastDeploymentAttemptedAt; }
    inline bool LastDeploymentAttemptedAtHasBeenSet() const { return m_lastDeploymentAttemptedAtHasBeenSet; }
    template<typename LastDeploymentAttemptedAtT = Aws::Utils::DateTime>
    void SetLastDeploymentAttemptedAt(LastDeploymentAttemptedAtT&& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = std::forward<LastDeploymentAttemptedAtT>(value); }
    template<typename LastDeploymentAttemptedAtT = Aws::Utils::DateTime>
    EnvironmentSummary& WithLastDeploymentAttemptedAt(LastDeploymentAttemptedAtT&& value) { SetLastDeploymentAttemptedAt(std::forward<LastDeploymentAttemptedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentSucceededAt() const { return m_lastDeploymentSucceededAt; }
    inline bool LastDeploymentSucceededAtHasBeenSet() const { return m_lastDeploymentSucceededAtHasBeenSet; }
    template<typename LastDeploymentSucceededAtT = Aws::Utils::DateTime>
    void SetLastDeploymentSucceededAt(LastDeploymentSucceededAtT&& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = std::forward<LastDeploymentSucceededAtT>(value); }
    template<typename LastDeploymentSucceededAtT = Aws::Utils::DateTime>
    EnvironmentSummary& WithLastDeploymentSucceededAt(LastDeploymentSucceededAtT&& value) { SetLastDeploymentSucceededAt(std::forward<LastDeploymentSucceededAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last successful deployment of this environment.</p>
     */
    inline const Aws::String& GetLastSucceededDeploymentId() const { return m_lastSucceededDeploymentId; }
    inline bool LastSucceededDeploymentIdHasBeenSet() const { return m_lastSucceededDeploymentIdHasBeenSet; }
    template<typename LastSucceededDeploymentIdT = Aws::String>
    void SetLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = std::forward<LastSucceededDeploymentIdT>(value); }
    template<typename LastSucceededDeploymentIdT = Aws::String>
    EnvironmentSummary& WithLastSucceededDeploymentId(LastSucceededDeploymentIdT&& value) { SetLastSucceededDeploymentId(std::forward<LastSucceededDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EnvironmentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const { return m_protonServiceRoleArn; }
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }
    template<typename ProtonServiceRoleArnT = Aws::String>
    void SetProtonServiceRoleArn(ProtonServiceRoleArnT&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::forward<ProtonServiceRoleArnT>(value); }
    template<typename ProtonServiceRoleArnT = Aws::String>
    EnvironmentSummary& WithProtonServiceRoleArn(ProtonServiceRoleArnT&& value) { SetProtonServiceRoleArn(std::forward<ProtonServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline Provisioning GetProvisioning() const { return m_provisioning; }
    inline bool ProvisioningHasBeenSet() const { return m_provisioningHasBeenSet; }
    inline void SetProvisioning(Provisioning value) { m_provisioningHasBeenSet = true; m_provisioning = value; }
    inline EnvironmentSummary& WithProvisioning(Provisioning value) { SetProvisioning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const { return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    template<typename TemplateMajorVersionT = Aws::String>
    void SetTemplateMajorVersion(TemplateMajorVersionT&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::forward<TemplateMajorVersionT>(value); }
    template<typename TemplateMajorVersionT = Aws::String>
    EnvironmentSummary& WithTemplateMajorVersion(TemplateMajorVersionT&& value) { SetTemplateMajorVersion(std::forward<TemplateMajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const { return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    template<typename TemplateMinorVersionT = Aws::String>
    void SetTemplateMinorVersion(TemplateMinorVersionT&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::forward<TemplateMinorVersionT>(value); }
    template<typename TemplateMinorVersionT = Aws::String>
    EnvironmentSummary& WithTemplateMinorVersion(TemplateMinorVersionT&& value) { SetTemplateMinorVersion(std::forward<TemplateMinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    EnvironmentSummary& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentAccountConnectionId;
    bool m_environmentAccountConnectionIdHasBeenSet = false;

    Aws::String m_environmentAccountId;
    bool m_environmentAccountIdHasBeenSet = false;

    Aws::String m_lastAttemptedDeploymentId;
    bool m_lastAttemptedDeploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentAttemptedAt{};
    bool m_lastDeploymentAttemptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentSucceededAt{};
    bool m_lastDeploymentSucceededAtHasBeenSet = false;

    Aws::String m_lastSucceededDeploymentId;
    bool m_lastSucceededDeploymentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protonServiceRoleArn;
    bool m_protonServiceRoleArnHasBeenSet = false;

    Provisioning m_provisioning{Provisioning::NOT_SET};
    bool m_provisioningHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
