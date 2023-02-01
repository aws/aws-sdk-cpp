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
    AWS_PROTON_API CreateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline CreateServiceRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline CreateServiceRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton. <i>Don't</i> include this parameter if your service template
     * <i>doesn't</i> include a service pipeline.</p>
     */
    inline CreateServiceRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>A description of the Proton service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the Proton service.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the Proton service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the Proton service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the Proton service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the Proton service.</p>
     */
    inline CreateServiceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the Proton service.</p>
     */
    inline CreateServiceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the Proton service.</p>
     */
    inline CreateServiceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The service name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The service name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The service name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The service name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The service name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The service name.</p>
     */
    inline CreateServiceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The service name.</p>
     */
    inline CreateServiceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The service name.</p>
     */
    inline CreateServiceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline const Aws::String& GetRepositoryConnectionArn() const{ return m_repositoryConnectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline bool RepositoryConnectionArnHasBeenSet() const { return m_repositoryConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline void SetRepositoryConnectionArn(const Aws::String& value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline void SetRepositoryConnectionArn(Aws::String&& value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline void SetRepositoryConnectionArn(const char* value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline CreateServiceRequest& WithRepositoryConnectionArn(const Aws::String& value) { SetRepositoryConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline CreateServiceRequest& WithRepositoryConnectionArn(Aws::String&& value) { SetRepositoryConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>. <i>Don't</i>
     * include this parameter if your service template <i>doesn't</i> include a service
     * pipeline.</p>
     */
    inline CreateServiceRequest& WithRepositoryConnectionArn(const char* value) { SetRepositoryConnectionArn(value); return *this;}


    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline CreateServiceRequest& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline CreateServiceRequest& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the code repository. <i>Don't</i> include this parameter if your
     * service template <i>doesn't</i> include a service pipeline.</p>
     */
    inline CreateServiceRequest& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}


    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>A link to a spec file that provides inputs as defined in the service template
     * bundle schema file. The spec file is in YAML format. <i>Don’t</i> include
     * pipeline inputs in the spec if your service template <i>doesn’t</i> include a
     * service pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-create-svc.html">Create
     * a service</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithSpec(const char* value) { SetSpec(value); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline CreateServiceRequest& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline CreateServiceRequest& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The major version of the service template that was used to create the
     * service.</p>
     */
    inline CreateServiceRequest& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}


    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline CreateServiceRequest& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline CreateServiceRequest& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of the service template that was used to create the
     * service.</p>
     */
    inline CreateServiceRequest& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}


    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline CreateServiceRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline CreateServiceRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template that's used to create the service.</p>
     */
    inline CreateServiceRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

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
