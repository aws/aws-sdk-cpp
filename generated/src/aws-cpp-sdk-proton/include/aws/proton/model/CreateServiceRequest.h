/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateServiceRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    CreateServiceRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the Proton service.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServiceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateServiceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline const Aws::String& GetRepositoryConnectionArn() const { return m_repositoryConnectionArn; }
    inline bool RepositoryConnectionArnHasBeenSet() const { return m_repositoryConnectionArnHasBeenSet; }
    template<typename RepositoryConnectionArnT = Aws::String>
    void SetRepositoryConnectionArn(RepositoryConnectionArnT&& value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn = std::forward<RepositoryConnectionArnT>(value); }
    template<typename RepositoryConnectionArnT = Aws::String>
    CreateServiceRequest& WithRepositoryConnectionArn(RepositoryConnectionArnT&& value) { SetRepositoryConnectionArn(std::forward<RepositoryConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline const Aws::String& GetRepositoryId() const { return m_repositoryId; }
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }
    template<typename RepositoryIdT = Aws::String>
    void SetRepositoryId(RepositoryIdT&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::forward<RepositoryIdT>(value); }
    template<typename RepositoryIdT = Aws::String>
    CreateServiceRequest& WithRepositoryId(RepositoryIdT&& value) { SetRepositoryId(std::forward<RepositoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = Aws::String>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = Aws::String>
    CreateServiceRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const { return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    template<typename TemplateMajorVersionT = Aws::String>
    void SetTemplateMajorVersion(TemplateMajorVersionT&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::forward<TemplateMajorVersionT>(value); }
    template<typename TemplateMajorVersionT = Aws::String>
    CreateServiceRequest& WithTemplateMajorVersion(TemplateMajorVersionT&& value) { SetTemplateMajorVersion(std::forward<TemplateMajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const { return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    template<typename TemplateMinorVersionT = Aws::String>
    void SetTemplateMinorVersion(TemplateMinorVersionT&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::forward<TemplateMinorVersionT>(value); }
    template<typename TemplateMinorVersionT = Aws::String>
    CreateServiceRequest& WithTemplateMinorVersion(TemplateMinorVersionT&& value) { SetTemplateMinorVersion(std::forward<TemplateMinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CreateServiceRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_repositoryConnectionArn;
    bool m_repositoryConnectionArnHasBeenSet = false;

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet = false;

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
