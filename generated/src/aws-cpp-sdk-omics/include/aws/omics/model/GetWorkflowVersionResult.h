/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/WorkflowEngine.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/WorkflowStatus.h>
#include <aws/omics/model/StorageType.h>
#include <aws/omics/model/WorkflowType.h>
#include <aws/omics/model/ContainerRegistryMap.h>
#include <aws/omics/model/DefinitionRepositoryDetails.h>
#include <aws/omics/model/WorkflowParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class GetWorkflowVersionResult
  {
  public:
    AWS_OMICS_API GetWorkflowVersionResult() = default;
    AWS_OMICS_API GetWorkflowVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetWorkflowVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the workflow version.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetWorkflowVersionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's ID.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    GetWorkflowVersionResult& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow version name.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    GetWorkflowVersionResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator for this workflow version.</p>
     */
    inline Accelerators GetAccelerators() const { return m_accelerators; }
    inline void SetAccelerators(Accelerators value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }
    inline GetWorkflowVersionResult& WithAccelerators(Accelerators value) { SetAccelerators(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the workflow version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetWorkflowVersionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the workflow version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetWorkflowVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Definition of the workflow version.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    GetWorkflowVersionResult& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow version's digest.</p>
     */
    inline const Aws::String& GetDigest() const { return m_digest; }
    template<typename DigestT = Aws::String>
    void SetDigest(DigestT&& value) { m_digestHasBeenSet = true; m_digest = std::forward<DigestT>(value); }
    template<typename DigestT = Aws::String>
    GetWorkflowVersionResult& WithDigest(DigestT&& value) { SetDigest(std::forward<DigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow engine for this workflow version.</p>
     */
    inline WorkflowEngine GetEngine() const { return m_engine; }
    inline void SetEngine(WorkflowEngine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline GetWorkflowVersionResult& WithEngine(WorkflowEngine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline const Aws::String& GetMain() const { return m_main; }
    template<typename MainT = Aws::String>
    void SetMain(MainT&& value) { m_mainHasBeenSet = true; m_main = std::forward<MainT>(value); }
    template<typename MainT = Aws::String>
    GetWorkflowVersionResult& WithMain(MainT&& value) { SetMain(std::forward<MainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the workflow version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    GetWorkflowVersionResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    GetWorkflowVersionResult& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The parameter template for the workflow version.</p>
     */
    inline const Aws::Map<Aws::String, WorkflowParameter>& GetParameterTemplate() const { return m_parameterTemplate; }
    template<typename ParameterTemplateT = Aws::Map<Aws::String, WorkflowParameter>>
    void SetParameterTemplate(ParameterTemplateT&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate = std::forward<ParameterTemplateT>(value); }
    template<typename ParameterTemplateT = Aws::Map<Aws::String, WorkflowParameter>>
    GetWorkflowVersionResult& WithParameterTemplate(ParameterTemplateT&& value) { SetParameterTemplate(std::forward<ParameterTemplateT>(value)); return *this;}
    template<typename ParameterTemplateKeyT = Aws::String, typename ParameterTemplateValueT = WorkflowParameter>
    GetWorkflowVersionResult& AddParameterTemplate(ParameterTemplateKeyT&& key, ParameterTemplateValueT&& value) {
      m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(std::forward<ParameterTemplateKeyT>(key), std::forward<ParameterTemplateValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The workflow version status</p>
     */
    inline WorkflowStatus GetStatus() const { return m_status; }
    inline void SetStatus(WorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowVersionResult& WithStatus(WorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow version status message</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetWorkflowVersionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage type for the run.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline GetWorkflowVersionResult& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default run storage capacity for static storage.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline GetWorkflowVersionResult& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow version type</p>
     */
    inline WorkflowType GetType() const { return m_type; }
    inline void SetType(WorkflowType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetWorkflowVersionResult& WithType(WorkflowType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow version tags</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetWorkflowVersionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetWorkflowVersionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier (UUID) value for this workflow version</p>
     */
    inline const Aws::String& GetUuid() const { return m_uuid; }
    template<typename UuidT = Aws::String>
    void SetUuid(UuidT&& value) { m_uuidHasBeenSet = true; m_uuid = std::forward<UuidT>(value); }
    template<typename UuidT = Aws::String>
    GetWorkflowVersionResult& WithUuid(UuidT&& value) { SetUuid(std::forward<UuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Id of the owner of the bucket.</p>
     */
    inline const Aws::String& GetWorkflowBucketOwnerId() const { return m_workflowBucketOwnerId; }
    template<typename WorkflowBucketOwnerIdT = Aws::String>
    void SetWorkflowBucketOwnerId(WorkflowBucketOwnerIdT&& value) { m_workflowBucketOwnerIdHasBeenSet = true; m_workflowBucketOwnerId = std::forward<WorkflowBucketOwnerIdT>(value); }
    template<typename WorkflowBucketOwnerIdT = Aws::String>
    GetWorkflowVersionResult& WithWorkflowBucketOwnerId(WorkflowBucketOwnerIdT&& value) { SetWorkflowBucketOwnerId(std::forward<WorkflowBucketOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry map that this workflow version uses.</p>
     */
    inline const ContainerRegistryMap& GetContainerRegistryMap() const { return m_containerRegistryMap; }
    template<typename ContainerRegistryMapT = ContainerRegistryMap>
    void SetContainerRegistryMap(ContainerRegistryMapT&& value) { m_containerRegistryMapHasBeenSet = true; m_containerRegistryMap = std::forward<ContainerRegistryMapT>(value); }
    template<typename ContainerRegistryMapT = ContainerRegistryMap>
    GetWorkflowVersionResult& WithContainerRegistryMap(ContainerRegistryMapT&& value) { SetContainerRegistryMap(std::forward<ContainerRegistryMapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The README content for the workflow version, providing documentation and
     * usage information specific to this version.</p>
     */
    inline const Aws::String& GetReadme() const { return m_readme; }
    template<typename ReadmeT = Aws::String>
    void SetReadme(ReadmeT&& value) { m_readmeHasBeenSet = true; m_readme = std::forward<ReadmeT>(value); }
    template<typename ReadmeT = Aws::String>
    GetWorkflowVersionResult& WithReadme(ReadmeT&& value) { SetReadme(std::forward<ReadmeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the source code repository that hosts the workflow version
     * definition files.</p>
     */
    inline const DefinitionRepositoryDetails& GetDefinitionRepositoryDetails() const { return m_definitionRepositoryDetails; }
    template<typename DefinitionRepositoryDetailsT = DefinitionRepositoryDetails>
    void SetDefinitionRepositoryDetails(DefinitionRepositoryDetailsT&& value) { m_definitionRepositoryDetailsHasBeenSet = true; m_definitionRepositoryDetails = std::forward<DefinitionRepositoryDetailsT>(value); }
    template<typename DefinitionRepositoryDetailsT = DefinitionRepositoryDetails>
    GetWorkflowVersionResult& WithDefinitionRepositoryDetails(DefinitionRepositoryDetailsT&& value) { SetDefinitionRepositoryDetails(std::forward<DefinitionRepositoryDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the workflow version README markdown file within the repository.
     * This file provides documentation and usage information for the workflow. If not
     * specified, the <code>README.md</code> file from the root directory of the
     * repository will be used.</p>
     */
    inline const Aws::String& GetReadmePath() const { return m_readmePath; }
    template<typename ReadmePathT = Aws::String>
    void SetReadmePath(ReadmePathT&& value) { m_readmePathHasBeenSet = true; m_readmePath = std::forward<ReadmePathT>(value); }
    template<typename ReadmePathT = Aws::String>
    GetWorkflowVersionResult& WithReadmePath(ReadmePathT&& value) { SetReadmePath(std::forward<ReadmePathT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Accelerators m_accelerators{Accelerators::NOT_SET};
    bool m_acceleratorsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_digest;
    bool m_digestHasBeenSet = false;

    WorkflowEngine m_engine{WorkflowEngine::NOT_SET};
    bool m_engineHasBeenSet = false;

    Aws::String m_main;
    bool m_mainHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Map<Aws::String, WorkflowParameter> m_parameterTemplate;
    bool m_parameterTemplateHasBeenSet = false;

    WorkflowStatus m_status{WorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    WorkflowType m_type{WorkflowType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_uuid;
    bool m_uuidHasBeenSet = false;

    Aws::String m_workflowBucketOwnerId;
    bool m_workflowBucketOwnerIdHasBeenSet = false;

    ContainerRegistryMap m_containerRegistryMap;
    bool m_containerRegistryMapHasBeenSet = false;

    Aws::String m_readme;
    bool m_readmeHasBeenSet = false;

    DefinitionRepositoryDetails m_definitionRepositoryDetails;
    bool m_definitionRepositoryDetailsHasBeenSet = false;

    Aws::String m_readmePath;
    bool m_readmePathHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
