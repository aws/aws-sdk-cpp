/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/ServicePipeline.h>
#include <aws/proton/model/ServiceStatus.h>
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
   * <p>Detailed data of an Proton service resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Service">AWS API
   * Reference</a></p>
   */
  class Service
  {
  public:
    AWS_PROTON_API Service();
    AWS_PROTON_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline Service& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline Service& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline Service& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline Service& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline Service& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the code repository branch that holds the code that's deployed in
     * Proton.</p>
     */
    inline Service& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>The time when the service was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the service was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the service was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the service was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the service was created.</p>
     */
    inline Service& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the service was created.</p>
     */
    inline Service& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the service.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the service.</p>
     */
    inline Service& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the service.</p>
     */
    inline Service& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the service.</p>
     */
    inline Service& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time when the service was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the service was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the service was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the service was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the service was last modified.</p>
     */
    inline Service& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the service was last modified.</p>
     */
    inline Service& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline Service& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline Service& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline Service& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The service pipeline detail data.</p>
     */
    inline const ServicePipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The service pipeline detail data.</p>
     */
    inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }

    /**
     * <p>The service pipeline detail data.</p>
     */
    inline void SetPipeline(const ServicePipeline& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }

    /**
     * <p>The service pipeline detail data.</p>
     */
    inline void SetPipeline(ServicePipeline&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::move(value); }

    /**
     * <p>The service pipeline detail data.</p>
     */
    inline Service& WithPipeline(const ServicePipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>The service pipeline detail data.</p>
     */
    inline Service& WithPipeline(ServicePipeline&& value) { SetPipeline(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetRepositoryConnectionArn() const{ return m_repositoryConnectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool RepositoryConnectionArnHasBeenSet() const { return m_repositoryConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetRepositoryConnectionArn(const Aws::String& value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetRepositoryConnectionArn(Aws::String&& value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetRepositoryConnectionArn(const char* value) { m_repositoryConnectionArnHasBeenSet = true; m_repositoryConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline Service& WithRepositoryConnectionArn(const Aws::String& value) { SetRepositoryConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline Service& WithRepositoryConnectionArn(Aws::String&& value) { SetRepositoryConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the repository connection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html#setting-up-vcontrol">Setting
     * up an AWS CodeStar connection</a> in the <i>Proton User Guide</i>.</p>
     */
    inline Service& WithRepositoryConnectionArn(const char* value) { SetRepositoryConnectionArn(value); return *this;}


    /**
     * <p>The ID of the source code repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline Service& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline Service& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source code repository.</p>
     */
    inline Service& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}


    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline Service& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline Service& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>The formatted specification that defines the service.</p>
     */
    inline Service& WithSpec(const char* value) { SetSpec(value); return *this;}


    /**
     * <p>The status of the service.</p>
     */
    inline const ServiceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service.</p>
     */
    inline void SetStatus(const ServiceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service.</p>
     */
    inline void SetStatus(ServiceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service.</p>
     */
    inline Service& WithStatus(const ServiceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service.</p>
     */
    inline Service& WithStatus(ServiceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A service status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A service status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A service status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A service status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A service status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A service status message.</p>
     */
    inline Service& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A service status message.</p>
     */
    inline Service& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A service status message.</p>
     */
    inline Service& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the service template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline Service& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline Service& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline Service& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServicePipeline m_pipeline;
    bool m_pipelineHasBeenSet = false;

    Aws::String m_repositoryConnectionArn;
    bool m_repositoryConnectionArnHasBeenSet = false;

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

    ServiceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
