/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateEnvironmentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that allows Proton to
     * provision infrastructure using CodeBuild-based provisioning on your behalf.</p>
     * <p>To use CodeBuild-based provisioning for the environment or for any service
     * instance running in the environment, specify either the
     * <code>environmentAccountConnectionId</code> or <code>codebuildRoleArn</code>
     * parameter.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const { return m_codebuildRoleArn; }
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }
    template<typename CodebuildRoleArnT = Aws::String>
    void SetCodebuildRoleArn(CodebuildRoleArnT&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::forward<CodebuildRoleArnT>(value); }
    template<typename CodebuildRoleArnT = Aws::String>
    CreateEnvironmentRequest& WithCodebuildRoleArn(CodebuildRoleArnT&& value) { SetCodebuildRoleArn(std::forward<CodebuildRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>You must specify
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with this environment.</p> <p>For more information about components,
     * see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const { return m_componentRoleArn; }
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }
    template<typename ComponentRoleArnT = Aws::String>
    void SetComponentRoleArn(ComponentRoleArnT&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::forward<ComponentRoleArnT>(value); }
    template<typename ComponentRoleArnT = Aws::String>
    CreateEnvironmentRequest& WithComponentRoleArn(ComponentRoleArnT&& value) { SetComponentRoleArn(std::forward<ComponentRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEnvironmentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection that you provide if you're
     * provisioning your environment infrastructure resources to an environment
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-env-account-connections.html">Environment
     * account connections</a> in the <i>Proton User guide</i>.</p> <p>To use Amazon
     * Web Services-managed provisioning for the environment, specify either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and omit the <code>provisioningRepository</code> parameter.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const { return m_environmentAccountConnectionId; }
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }
    template<typename EnvironmentAccountConnectionIdT = Aws::String>
    void SetEnvironmentAccountConnectionId(EnvironmentAccountConnectionIdT&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::forward<EnvironmentAccountConnectionIdT>(value); }
    template<typename EnvironmentAccountConnectionIdT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(EnvironmentAccountConnectionIdT&& value) { SetEnvironmentAccountConnectionId(std::forward<EnvironmentAccountConnectionIdT>(value)); return *this;}
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
    CreateEnvironmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p> <p>To use Amazon Web
     * Services-managed provisioning for the environment, specify either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and omit the <code>provisioningRepository</code> parameter.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const { return m_protonServiceRoleArn; }
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }
    template<typename ProtonServiceRoleArnT = Aws::String>
    void SetProtonServiceRoleArn(ProtonServiceRoleArnT&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::forward<ProtonServiceRoleArnT>(value); }
    template<typename ProtonServiceRoleArnT = Aws::String>
    CreateEnvironmentRequest& WithProtonServiceRoleArn(ProtonServiceRoleArnT&& value) { SetProtonServiceRoleArn(std::forward<ProtonServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The linked repository that you use to host your rendered infrastructure
     * templates for self-managed provisioning. A linked repository is a repository
     * that has been registered with Proton. For more information, see
     * <a>CreateRepository</a>.</p> <p>To use self-managed provisioning for the
     * environment, specify this parameter and omit the
     * <code>environmentAccountConnectionId</code> and
     * <code>protonServiceRoleArn</code> parameters.</p>
     */
    inline const RepositoryBranchInput& GetProvisioningRepository() const { return m_provisioningRepository; }
    inline bool ProvisioningRepositoryHasBeenSet() const { return m_provisioningRepositoryHasBeenSet; }
    template<typename ProvisioningRepositoryT = RepositoryBranchInput>
    void SetProvisioningRepository(ProvisioningRepositoryT&& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = std::forward<ProvisioningRepositoryT>(value); }
    template<typename ProvisioningRepositoryT = RepositoryBranchInput>
    CreateEnvironmentRequest& WithProvisioningRepository(ProvisioningRepositoryT&& value) { SetProvisioningRepository(std::forward<ProvisioningRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A YAML formatted string that provides inputs as defined in the environment
     * template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-environments.html">Environments</a>
     * in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = Aws::String>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = Aws::String>
    CreateEnvironmentRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateEnvironmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateEnvironmentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateEnvironmentRequest& WithTemplateMajorVersion(TemplateMajorVersionT&& value) { SetTemplateMajorVersion(std::forward<TemplateMajorVersionT>(value)); return *this;}
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
    CreateEnvironmentRequest& WithTemplateMinorVersion(TemplateMinorVersionT&& value) { SetTemplateMinorVersion(std::forward<TemplateMinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CreateEnvironmentRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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
