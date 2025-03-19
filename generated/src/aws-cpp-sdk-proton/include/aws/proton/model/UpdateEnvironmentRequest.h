/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/DeploymentUpdateType.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const { return m_codebuildRoleArn; }
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }
    template<typename CodebuildRoleArnT = Aws::String>
    void SetCodebuildRoleArn(CodebuildRoleArnT&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::forward<CodebuildRoleArnT>(value); }
    template<typename CodebuildRoleArnT = Aws::String>
    UpdateEnvironmentRequest& WithCodebuildRoleArn(CodebuildRoleArnT&& value) { SetCodebuildRoleArn(std::forward<CodebuildRoleArnT>(value)); return *this;}
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
    UpdateEnvironmentRequest& WithComponentRoleArn(ComponentRoleArnT&& value) { SetComponentRoleArn(std::forward<ComponentRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There are four modes for updating an environment. The
     * <code>deploymentType</code> field defines the mode.</p> <dl> <dt/> <dd> <p>
     * <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i> occur. Only
     * the requested metadata parameters are updated.</p> </dd> <dt/> <dd> <p>
     * <code>CURRENT_VERSION</code> </p> <p>In this mode, the environment is deployed
     * and updated with the new spec that you provide. Only requested parameters are
     * updated. <i>Don’t</i> include major or minor version parameters when you use
     * this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) minor version of the current
     * major version in use, by default. You can also specify a different minor version
     * of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the environment is deployed and
     * updated with the published, recommended (latest) major and minor version of the
     * current template, by default. You can also specify a different major version
     * that is higher than the major version in use and a minor version (optional).</p>
     * </dd> </dl>
     */
    inline DeploymentUpdateType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(DeploymentUpdateType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline UpdateEnvironmentRequest& WithDeploymentType(DeploymentUpdateType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEnvironmentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection.</p> <p>You can only update to a
     * new environment account connection if it was created in the same environment
     * account that the current environment account connection was created in and is
     * associated with the current environment.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const { return m_environmentAccountConnectionId; }
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }
    template<typename EnvironmentAccountConnectionIdT = Aws::String>
    void SetEnvironmentAccountConnectionId(EnvironmentAccountConnectionIdT&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::forward<EnvironmentAccountConnectionIdT>(value); }
    template<typename EnvironmentAccountConnectionIdT = Aws::String>
    UpdateEnvironmentRequest& WithEnvironmentAccountConnectionId(EnvironmentAccountConnectionIdT&& value) { SetEnvironmentAccountConnectionId(std::forward<EnvironmentAccountConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEnvironmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make API calls to other services your behalf.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const { return m_protonServiceRoleArn; }
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }
    template<typename ProtonServiceRoleArnT = Aws::String>
    void SetProtonServiceRoleArn(ProtonServiceRoleArnT&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::forward<ProtonServiceRoleArnT>(value); }
    template<typename ProtonServiceRoleArnT = Aws::String>
    UpdateEnvironmentRequest& WithProtonServiceRoleArn(ProtonServiceRoleArnT&& value) { SetProtonServiceRoleArn(std::forward<ProtonServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p>
     */
    inline const RepositoryBranchInput& GetProvisioningRepository() const { return m_provisioningRepository; }
    inline bool ProvisioningRepositoryHasBeenSet() const { return m_provisioningRepositoryHasBeenSet; }
    template<typename ProvisioningRepositoryT = RepositoryBranchInput>
    void SetProvisioningRepository(ProvisioningRepositoryT&& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = std::forward<ProvisioningRepositoryT>(value); }
    template<typename ProvisioningRepositoryT = RepositoryBranchInput>
    UpdateEnvironmentRequest& WithProvisioningRepository(ProvisioningRepositoryT&& value) { SetProvisioningRepository(std::forward<ProvisioningRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The formatted specification that defines the update.</p>
     */
    inline const Aws::String& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = Aws::String>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = Aws::String>
    UpdateEnvironmentRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the environment to update.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const { return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    template<typename TemplateMajorVersionT = Aws::String>
    void SetTemplateMajorVersion(TemplateMajorVersionT&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::forward<TemplateMajorVersionT>(value); }
    template<typename TemplateMajorVersionT = Aws::String>
    UpdateEnvironmentRequest& WithTemplateMajorVersion(TemplateMajorVersionT&& value) { SetTemplateMajorVersion(std::forward<TemplateMajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the environment to update.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const { return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    template<typename TemplateMinorVersionT = Aws::String>
    void SetTemplateMinorVersion(TemplateMinorVersionT&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::forward<TemplateMinorVersionT>(value); }
    template<typename TemplateMinorVersionT = Aws::String>
    UpdateEnvironmentRequest& WithTemplateMinorVersion(TemplateMinorVersionT&& value) { SetTemplateMinorVersion(std::forward<TemplateMinorVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    DeploymentUpdateType m_deploymentType{DeploymentUpdateType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentAccountConnectionId;
    bool m_environmentAccountConnectionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protonServiceRoleArn;
    bool m_protonServiceRoleArnHasBeenSet = false;

    RepositoryBranchInput m_provisioningRepository;
    bool m_provisioningRepositoryHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
