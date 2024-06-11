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
#include <aws/proton/model/RepositoryBranch.h>
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
   * <p>Detailed data of an Proton environment resource. An Proton environment is a
   * set of resources shared across Proton services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_PROTON_API Environment();
    AWS_PROTON_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const{ return m_codebuildRoleArn; }
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }
    inline void SetCodebuildRoleArn(const Aws::String& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = value; }
    inline void SetCodebuildRoleArn(Aws::String&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::move(value); }
    inline void SetCodebuildRoleArn(const char* value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn.assign(value); }
    inline Environment& WithCodebuildRoleArn(const Aws::String& value) { SetCodebuildRoleArn(value); return *this;}
    inline Environment& WithCodebuildRoleArn(Aws::String&& value) { SetCodebuildRoleArn(std::move(value)); return *this;}
    inline Environment& WithCodebuildRoleArn(const char* value) { SetCodebuildRoleArn(value); return *this;}
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
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }
    inline Environment& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}
    inline Environment& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}
    inline Environment& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Environment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Environment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment deployment status.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline Environment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline Environment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An environment deployment status message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = value; }
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::move(value); }
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage.assign(value); }
    inline Environment& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}
    inline Environment& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}
    inline Environment& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection that's used to provision
     * infrastructure resources in an environment account.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const{ return m_environmentAccountConnectionId; }
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }
    inline void SetEnvironmentAccountConnectionId(const Aws::String& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = value; }
    inline void SetEnvironmentAccountConnectionId(Aws::String&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::move(value); }
    inline void SetEnvironmentAccountConnectionId(const char* value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId.assign(value); }
    inline Environment& WithEnvironmentAccountConnectionId(const Aws::String& value) { SetEnvironmentAccountConnectionId(value); return *this;}
    inline Environment& WithEnvironmentAccountConnectionId(Aws::String&& value) { SetEnvironmentAccountConnectionId(std::move(value)); return *this;}
    inline Environment& WithEnvironmentAccountConnectionId(const char* value) { SetEnvironmentAccountConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline const Aws::String& GetEnvironmentAccountId() const{ return m_environmentAccountId; }
    inline bool EnvironmentAccountIdHasBeenSet() const { return m_environmentAccountIdHasBeenSet; }
    inline void SetEnvironmentAccountId(const Aws::String& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = value; }
    inline void SetEnvironmentAccountId(Aws::String&& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = std::move(value); }
    inline void SetEnvironmentAccountId(const char* value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId.assign(value); }
    inline Environment& WithEnvironmentAccountId(const Aws::String& value) { SetEnvironmentAccountId(value); return *this;}
    inline Environment& WithEnvironmentAccountId(Aws::String&& value) { SetEnvironmentAccountId(std::move(value)); return *this;}
    inline Environment& WithEnvironmentAccountId(const char* value) { SetEnvironmentAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last attempted deployment of this environment.</p>
     */
    inline const Aws::String& GetLastAttemptedDeploymentId() const{ return m_lastAttemptedDeploymentId; }
    inline bool LastAttemptedDeploymentIdHasBeenSet() const { return m_lastAttemptedDeploymentIdHasBeenSet; }
    inline void SetLastAttemptedDeploymentId(const Aws::String& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = value; }
    inline void SetLastAttemptedDeploymentId(Aws::String&& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = std::move(value); }
    inline void SetLastAttemptedDeploymentId(const char* value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId.assign(value); }
    inline Environment& WithLastAttemptedDeploymentId(const Aws::String& value) { SetLastAttemptedDeploymentId(value); return *this;}
    inline Environment& WithLastAttemptedDeploymentId(Aws::String&& value) { SetLastAttemptedDeploymentId(std::move(value)); return *this;}
    inline Environment& WithLastAttemptedDeploymentId(const char* value) { SetLastAttemptedDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentAttemptedAt() const{ return m_lastDeploymentAttemptedAt; }
    inline bool LastDeploymentAttemptedAtHasBeenSet() const { return m_lastDeploymentAttemptedAtHasBeenSet; }
    inline void SetLastDeploymentAttemptedAt(const Aws::Utils::DateTime& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = value; }
    inline void SetLastDeploymentAttemptedAt(Aws::Utils::DateTime&& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = std::move(value); }
    inline Environment& WithLastDeploymentAttemptedAt(const Aws::Utils::DateTime& value) { SetLastDeploymentAttemptedAt(value); return *this;}
    inline Environment& WithLastDeploymentAttemptedAt(Aws::Utils::DateTime&& value) { SetLastDeploymentAttemptedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentSucceededAt() const{ return m_lastDeploymentSucceededAt; }
    inline bool LastDeploymentSucceededAtHasBeenSet() const { return m_lastDeploymentSucceededAtHasBeenSet; }
    inline void SetLastDeploymentSucceededAt(const Aws::Utils::DateTime& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = value; }
    inline void SetLastDeploymentSucceededAt(Aws::Utils::DateTime&& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = std::move(value); }
    inline Environment& WithLastDeploymentSucceededAt(const Aws::Utils::DateTime& value) { SetLastDeploymentSucceededAt(value); return *this;}
    inline Environment& WithLastDeploymentSucceededAt(Aws::Utils::DateTime&& value) { SetLastDeploymentSucceededAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last successful deployment of this environment.</p>
     */
    inline const Aws::String& GetLastSucceededDeploymentId() const{ return m_lastSucceededDeploymentId; }
    inline bool LastSucceededDeploymentIdHasBeenSet() const { return m_lastSucceededDeploymentIdHasBeenSet; }
    inline void SetLastSucceededDeploymentId(const Aws::String& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = value; }
    inline void SetLastSucceededDeploymentId(Aws::String&& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = std::move(value); }
    inline void SetLastSucceededDeploymentId(const char* value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId.assign(value); }
    inline Environment& WithLastSucceededDeploymentId(const Aws::String& value) { SetLastSucceededDeploymentId(value); return *this;}
    inline Environment& WithLastSucceededDeploymentId(Aws::String&& value) { SetLastSucceededDeploymentId(std::move(value)); return *this;}
    inline Environment& WithLastSucceededDeploymentId(const char* value) { SetLastSucceededDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Environment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const{ return m_protonServiceRoleArn; }
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }
    inline void SetProtonServiceRoleArn(const Aws::String& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = value; }
    inline void SetProtonServiceRoleArn(Aws::String&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::move(value); }
    inline void SetProtonServiceRoleArn(const char* value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn.assign(value); }
    inline Environment& WithProtonServiceRoleArn(const Aws::String& value) { SetProtonServiceRoleArn(value); return *this;}
    inline Environment& WithProtonServiceRoleArn(Aws::String&& value) { SetProtonServiceRoleArn(std::move(value)); return *this;}
    inline Environment& WithProtonServiceRoleArn(const char* value) { SetProtonServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline const Provisioning& GetProvisioning() const{ return m_provisioning; }
    inline bool ProvisioningHasBeenSet() const { return m_provisioningHasBeenSet; }
    inline void SetProvisioning(const Provisioning& value) { m_provisioningHasBeenSet = true; m_provisioning = value; }
    inline void SetProvisioning(Provisioning&& value) { m_provisioningHasBeenSet = true; m_provisioning = std::move(value); }
    inline Environment& WithProvisioning(const Provisioning& value) { SetProvisioning(value); return *this;}
    inline Environment& WithProvisioning(Provisioning&& value) { SetProvisioning(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/APIReference/API_CreateRepository.html">CreateRepository</a>.</p>
     */
    inline const RepositoryBranch& GetProvisioningRepository() const{ return m_provisioningRepository; }
    inline bool ProvisioningRepositoryHasBeenSet() const { return m_provisioningRepositoryHasBeenSet; }
    inline void SetProvisioningRepository(const RepositoryBranch& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = value; }
    inline void SetProvisioningRepository(RepositoryBranch&& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = std::move(value); }
    inline Environment& WithProvisioningRepository(const RepositoryBranch& value) { SetProvisioningRepository(value); return *this;}
    inline Environment& WithProvisioningRepository(RepositoryBranch&& value) { SetProvisioningRepository(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment spec.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }
    inline Environment& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}
    inline Environment& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}
    inline Environment& WithSpec(const char* value) { SetSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }
    inline Environment& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}
    inline Environment& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}
    inline Environment& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }
    inline Environment& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}
    inline Environment& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}
    inline Environment& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline Environment& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline Environment& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline Environment& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
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

    Aws::Utils::DateTime m_lastDeploymentAttemptedAt;
    bool m_lastDeploymentAttemptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentSucceededAt;
    bool m_lastDeploymentSucceededAtHasBeenSet = false;

    Aws::String m_lastSucceededDeploymentId;
    bool m_lastSucceededDeploymentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protonServiceRoleArn;
    bool m_protonServiceRoleArnHasBeenSet = false;

    Provisioning m_provisioning;
    bool m_provisioningHasBeenSet = false;

    RepositoryBranch m_provisioningRepository;
    bool m_provisioningRepositoryHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

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
