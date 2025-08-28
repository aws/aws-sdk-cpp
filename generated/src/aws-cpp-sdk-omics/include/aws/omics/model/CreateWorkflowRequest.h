/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowEngine.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/omics/model/StorageType.h>
#include <aws/omics/model/ContainerRegistryMap.h>
#include <aws/omics/model/DefinitionRepository.h>
#include <aws/omics/model/WorkflowParameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name (optional but highly recommended) for the workflow to locate relevant
     * information in the CloudWatch logs and Amazon Web Services HealthOmics console.
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkflowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkflowRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow engine for the workflow. This is only required if you have
     * workflow definition files from more than one engine in your zip file. Otherwise,
     * the service can detect the engine automatically from your workflow
     * definition.</p>
     */
    inline WorkflowEngine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(WorkflowEngine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline CreateWorkflowRequest& WithEngine(WorkflowEngine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ZIP archive containing the main workflow definition file and dependencies
     * that it imports for the workflow. You can use a file with a ://fileb prefix
     * instead of the Base64 string. For more information, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-defn-requirements.html">Workflow
     * definition requirements</a> in the <i>Amazon Web Services HealthOmics User
     * Guide</i>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetDefinitionZip() const { return m_definitionZip; }
    inline bool DefinitionZipHasBeenSet() const { return m_definitionZipHasBeenSet; }
    template<typename DefinitionZipT = Aws::Utils::ByteBuffer>
    void SetDefinitionZip(DefinitionZipT&& value) { m_definitionZipHasBeenSet = true; m_definitionZip = std::forward<DefinitionZipT>(value); }
    template<typename DefinitionZipT = Aws::Utils::ByteBuffer>
    CreateWorkflowRequest& WithDefinitionZip(DefinitionZipT&& value) { SetDefinitionZip(std::forward<DefinitionZipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of a definition for the workflow. The S3 bucket must be in the
     * same region as the workflow.</p>
     */
    inline const Aws::String& GetDefinitionUri() const { return m_definitionUri; }
    inline bool DefinitionUriHasBeenSet() const { return m_definitionUriHasBeenSet; }
    template<typename DefinitionUriT = Aws::String>
    void SetDefinitionUri(DefinitionUriT&& value) { m_definitionUriHasBeenSet = true; m_definitionUri = std::forward<DefinitionUriT>(value); }
    template<typename DefinitionUriT = Aws::String>
    CreateWorkflowRequest& WithDefinitionUri(DefinitionUriT&& value) { SetDefinitionUri(std::forward<DefinitionUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the main definition file for the workflow. This parameter is not
     * required if the ZIP archive contains only one workflow definition file, or if
     * the main definition file is named “main”. An example path is:
     * <code>workflow-definition/main-file.wdl</code>. </p>
     */
    inline const Aws::String& GetMain() const { return m_main; }
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }
    template<typename MainT = Aws::String>
    void SetMain(MainT&& value) { m_mainHasBeenSet = true; m_main = std::forward<MainT>(value); }
    template<typename MainT = Aws::String>
    CreateWorkflowRequest& WithMain(MainT&& value) { SetMain(std::forward<MainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter template for the workflow. If this field is blank, Amazon Web
     * Services HealthOmics will automatically parse the parameter template values from
     * your workflow definition file. To override these service generated default
     * values, provide a parameter template. To view an example of a parameter
     * template, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/parameter-templates.html">Parameter
     * template files</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, WorkflowParameter>& GetParameterTemplate() const { return m_parameterTemplate; }
    inline bool ParameterTemplateHasBeenSet() const { return m_parameterTemplateHasBeenSet; }
    template<typename ParameterTemplateT = Aws::Map<Aws::String, WorkflowParameter>>
    void SetParameterTemplate(ParameterTemplateT&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate = std::forward<ParameterTemplateT>(value); }
    template<typename ParameterTemplateT = Aws::Map<Aws::String, WorkflowParameter>>
    CreateWorkflowRequest& WithParameterTemplate(ParameterTemplateT&& value) { SetParameterTemplate(std::forward<ParameterTemplateT>(value)); return *this;}
    template<typename ParameterTemplateKeyT = Aws::String, typename ParameterTemplateValueT = WorkflowParameter>
    CreateWorkflowRequest& AddParameterTemplate(ParameterTemplateKeyT&& key, ParameterTemplateValueT&& value) {
      m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(std::forward<ParameterTemplateKeyT>(key), std::forward<ParameterTemplateValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The default static storage capacity (in gibibytes) for runs that use this
     * workflow or workflow version. The <code>storageCapacity</code> can be
     * overwritten at run time. The storage capacity is not required for runs with a
     * <code>DYNAMIC</code> storage type.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateWorkflowRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the workflow. You can define up to 50 tags for the workflow. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/add-a-tag.html">Adding a
     * tag</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorkflowRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorkflowRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An idempotency token to ensure that duplicate workflows are not created when
     * Amazon Web Services HealthOmics submits retry requests.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkflowRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computational accelerator specified to run the workflow.</p>
     */
    inline Accelerators GetAccelerators() const { return m_accelerators; }
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }
    inline void SetAccelerators(Accelerators value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }
    inline CreateWorkflowRequest& WithAccelerators(Accelerators value) { SetAccelerators(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage type for runs that use this workflow. The
     * <code>storageType</code> can be overridden at run time. <code>DYNAMIC</code>
     * storage dynamically scales the storage up or down, based on file system
     * utilization. <code>STATIC</code> storage allocates a fixed amount of storage.
     * For more information about dynamic and static storage types, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-run-types.html">Run
     * storage types</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline CreateWorkflowRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Use a container registry map to specify mappings between the ECR
     * private repository and one or more upstream registries. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-ecr.html">Container
     * images</a> in the <i>Amazon Web Services HealthOmics User Guide</i>. </p>
     */
    inline const ContainerRegistryMap& GetContainerRegistryMap() const { return m_containerRegistryMap; }
    inline bool ContainerRegistryMapHasBeenSet() const { return m_containerRegistryMapHasBeenSet; }
    template<typename ContainerRegistryMapT = ContainerRegistryMap>
    void SetContainerRegistryMap(ContainerRegistryMapT&& value) { m_containerRegistryMapHasBeenSet = true; m_containerRegistryMap = std::forward<ContainerRegistryMapT>(value); }
    template<typename ContainerRegistryMapT = ContainerRegistryMap>
    CreateWorkflowRequest& WithContainerRegistryMap(ContainerRegistryMapT&& value) { SetContainerRegistryMap(std::forward<ContainerRegistryMapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) URI of the S3 location for the registry mapping file.</p>
     */
    inline const Aws::String& GetContainerRegistryMapUri() const { return m_containerRegistryMapUri; }
    inline bool ContainerRegistryMapUriHasBeenSet() const { return m_containerRegistryMapUriHasBeenSet; }
    template<typename ContainerRegistryMapUriT = Aws::String>
    void SetContainerRegistryMapUri(ContainerRegistryMapUriT&& value) { m_containerRegistryMapUriHasBeenSet = true; m_containerRegistryMapUri = std::forward<ContainerRegistryMapUriT>(value); }
    template<typename ContainerRegistryMapUriT = Aws::String>
    CreateWorkflowRequest& WithContainerRegistryMapUri(ContainerRegistryMapUriT&& value) { SetContainerRegistryMapUri(std::forward<ContainerRegistryMapUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The markdown content for the workflow's README file. This provides
     * documentation and usage information for users of the workflow.</p>
     */
    inline const Aws::String& GetReadmeMarkdown() const { return m_readmeMarkdown; }
    inline bool ReadmeMarkdownHasBeenSet() const { return m_readmeMarkdownHasBeenSet; }
    template<typename ReadmeMarkdownT = Aws::String>
    void SetReadmeMarkdown(ReadmeMarkdownT&& value) { m_readmeMarkdownHasBeenSet = true; m_readmeMarkdown = std::forward<ReadmeMarkdownT>(value); }
    template<typename ReadmeMarkdownT = Aws::String>
    CreateWorkflowRequest& WithReadmeMarkdown(ReadmeMarkdownT&& value) { SetReadmeMarkdown(std::forward<ReadmeMarkdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the workflow parameter template JSON file within the repository.
     * This file defines the input parameters for runs that use this workflow. If not
     * specified, the workflow will be created without a parameter template.</p>
     */
    inline const Aws::String& GetParameterTemplatePath() const { return m_parameterTemplatePath; }
    inline bool ParameterTemplatePathHasBeenSet() const { return m_parameterTemplatePathHasBeenSet; }
    template<typename ParameterTemplatePathT = Aws::String>
    void SetParameterTemplatePath(ParameterTemplatePathT&& value) { m_parameterTemplatePathHasBeenSet = true; m_parameterTemplatePath = std::forward<ParameterTemplatePathT>(value); }
    template<typename ParameterTemplatePathT = Aws::String>
    CreateWorkflowRequest& WithParameterTemplatePath(ParameterTemplatePathT&& value) { SetParameterTemplatePath(std::forward<ParameterTemplatePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the workflow README markdown file within the repository. This
     * file provides documentation and usage information for the workflow. If not
     * specified, the <code>README.md</code> file from the root directory of the
     * repository will be used.</p>
     */
    inline const Aws::String& GetReadmePath() const { return m_readmePath; }
    inline bool ReadmePathHasBeenSet() const { return m_readmePathHasBeenSet; }
    template<typename ReadmePathT = Aws::String>
    void SetReadmePath(ReadmePathT&& value) { m_readmePathHasBeenSet = true; m_readmePath = std::forward<ReadmePathT>(value); }
    template<typename ReadmePathT = Aws::String>
    CreateWorkflowRequest& WithReadmePath(ReadmePathT&& value) { SetReadmePath(std::forward<ReadmePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository information for the workflow definition. This allows you to
     * source your workflow definition directly from a code repository.</p>
     */
    inline const DefinitionRepository& GetDefinitionRepository() const { return m_definitionRepository; }
    inline bool DefinitionRepositoryHasBeenSet() const { return m_definitionRepositoryHasBeenSet; }
    template<typename DefinitionRepositoryT = DefinitionRepository>
    void SetDefinitionRepository(DefinitionRepositoryT&& value) { m_definitionRepositoryHasBeenSet = true; m_definitionRepository = std::forward<DefinitionRepositoryT>(value); }
    template<typename DefinitionRepositoryT = DefinitionRepository>
    CreateWorkflowRequest& WithDefinitionRepository(DefinitionRepositoryT&& value) { SetDefinitionRepository(std::forward<DefinitionRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the expected owner of the S3 bucket
     * that contains the workflow definition. If not specified, the service skips the
     * validation.</p>
     */
    inline const Aws::String& GetWorkflowBucketOwnerId() const { return m_workflowBucketOwnerId; }
    inline bool WorkflowBucketOwnerIdHasBeenSet() const { return m_workflowBucketOwnerIdHasBeenSet; }
    template<typename WorkflowBucketOwnerIdT = Aws::String>
    void SetWorkflowBucketOwnerId(WorkflowBucketOwnerIdT&& value) { m_workflowBucketOwnerIdHasBeenSet = true; m_workflowBucketOwnerId = std::forward<WorkflowBucketOwnerIdT>(value); }
    template<typename WorkflowBucketOwnerIdT = Aws::String>
    CreateWorkflowRequest& WithWorkflowBucketOwnerId(WorkflowBucketOwnerIdT&& value) { SetWorkflowBucketOwnerId(std::forward<WorkflowBucketOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the README file for the workflow. This file provides
     * documentation and usage information for the workflow. Requirements include:</p>
     * <ul> <li> <p>The S3 URI must begin with <code>s3://USER-OWNED-BUCKET/</code>
     * </p> </li> <li> <p>The requester must have access to the S3 bucket and
     * object.</p> </li> <li> <p>The max README content length is 500 KiB.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetReadmeUri() const { return m_readmeUri; }
    inline bool ReadmeUriHasBeenSet() const { return m_readmeUriHasBeenSet; }
    template<typename ReadmeUriT = Aws::String>
    void SetReadmeUri(ReadmeUriT&& value) { m_readmeUriHasBeenSet = true; m_readmeUri = std::forward<ReadmeUriT>(value); }
    template<typename ReadmeUriT = Aws::String>
    CreateWorkflowRequest& WithReadmeUri(ReadmeUriT&& value) { SetReadmeUri(std::forward<ReadmeUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkflowEngine m_engine{WorkflowEngine::NOT_SET};
    bool m_engineHasBeenSet = false;

    Aws::Utils::ByteBuffer m_definitionZip{};
    bool m_definitionZipHasBeenSet = false;

    Aws::String m_definitionUri;
    bool m_definitionUriHasBeenSet = false;

    Aws::String m_main;
    bool m_mainHasBeenSet = false;

    Aws::Map<Aws::String, WorkflowParameter> m_parameterTemplate;
    bool m_parameterTemplateHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;

    Accelerators m_accelerators{Accelerators::NOT_SET};
    bool m_acceleratorsHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    ContainerRegistryMap m_containerRegistryMap;
    bool m_containerRegistryMapHasBeenSet = false;

    Aws::String m_containerRegistryMapUri;
    bool m_containerRegistryMapUriHasBeenSet = false;

    Aws::String m_readmeMarkdown;
    bool m_readmeMarkdownHasBeenSet = false;

    Aws::String m_parameterTemplatePath;
    bool m_parameterTemplatePathHasBeenSet = false;

    Aws::String m_readmePath;
    bool m_readmePathHasBeenSet = false;

    DefinitionRepository m_definitionRepository;
    bool m_definitionRepositoryHasBeenSet = false;

    Aws::String m_workflowBucketOwnerId;
    bool m_workflowBucketOwnerIdHasBeenSet = false;

    Aws::String m_readmeUri;
    bool m_readmeUriHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
