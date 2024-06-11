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
    AWS_PROTON_API CreateEnvironmentRequest();

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
    inline const Aws::String& GetCodebuildRoleArn() const{ return m_codebuildRoleArn; }
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }
    inline void SetCodebuildRoleArn(const Aws::String& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = value; }
    inline void SetCodebuildRoleArn(Aws::String&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::move(value); }
    inline void SetCodebuildRoleArn(const char* value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn.assign(value); }
    inline CreateEnvironmentRequest& WithCodebuildRoleArn(const Aws::String& value) { SetCodebuildRoleArn(value); return *this;}
    inline CreateEnvironmentRequest& WithCodebuildRoleArn(Aws::String&& value) { SetCodebuildRoleArn(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithCodebuildRoleArn(const char* value) { SetCodebuildRoleArn(value); return *this;}
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
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }
    inline CreateEnvironmentRequest& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}
    inline CreateEnvironmentRequest& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment that's being created and deployed.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline const Aws::String& GetEnvironmentAccountConnectionId() const{ return m_environmentAccountConnectionId; }
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }
    inline void SetEnvironmentAccountConnectionId(const Aws::String& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = value; }
    inline void SetEnvironmentAccountConnectionId(Aws::String&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::move(value); }
    inline void SetEnvironmentAccountConnectionId(const char* value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId.assign(value); }
    inline CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(const Aws::String& value) { SetEnvironmentAccountConnectionId(value); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(Aws::String&& value) { SetEnvironmentAccountConnectionId(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentAccountConnectionId(const char* value) { SetEnvironmentAccountConnectionId(value); return *this;}
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
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p> <p>To use Amazon Web
     * Services-managed provisioning for the environment, specify either the
     * <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code>
     * parameter and omit the <code>provisioningRepository</code> parameter.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const{ return m_protonServiceRoleArn; }
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }
    inline void SetProtonServiceRoleArn(const Aws::String& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = value; }
    inline void SetProtonServiceRoleArn(Aws::String&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::move(value); }
    inline void SetProtonServiceRoleArn(const char* value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn.assign(value); }
    inline CreateEnvironmentRequest& WithProtonServiceRoleArn(const Aws::String& value) { SetProtonServiceRoleArn(value); return *this;}
    inline CreateEnvironmentRequest& WithProtonServiceRoleArn(Aws::String&& value) { SetProtonServiceRoleArn(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithProtonServiceRoleArn(const char* value) { SetProtonServiceRoleArn(value); return *this;}
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
    inline const RepositoryBranchInput& GetProvisioningRepository() const{ return m_provisioningRepository; }
    inline bool ProvisioningRepositoryHasBeenSet() const { return m_provisioningRepositoryHasBeenSet; }
    inline void SetProvisioningRepository(const RepositoryBranchInput& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = value; }
    inline void SetProvisioningRepository(RepositoryBranchInput&& value) { m_provisioningRepositoryHasBeenSet = true; m_provisioningRepository = std::move(value); }
    inline CreateEnvironmentRequest& WithProvisioningRepository(const RepositoryBranchInput& value) { SetProvisioningRepository(value); return *this;}
    inline CreateEnvironmentRequest& WithProvisioningRepository(RepositoryBranchInput&& value) { SetProvisioningRepository(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A YAML formatted string that provides inputs as defined in the environment
     * template bundle schema file. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-environments.html">Environments</a>
     * in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }
    inline CreateEnvironmentRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}
    inline CreateEnvironmentRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithSpec(const char* value) { SetSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateEnvironmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateEnvironmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateEnvironmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateEnvironmentRequest& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}
    inline CreateEnvironmentRequest& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}
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
    inline CreateEnvironmentRequest& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}
    inline CreateEnvironmentRequest& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment template. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-templates.html">Environment
     * Templates</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CreateEnvironmentRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateEnvironmentRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
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
