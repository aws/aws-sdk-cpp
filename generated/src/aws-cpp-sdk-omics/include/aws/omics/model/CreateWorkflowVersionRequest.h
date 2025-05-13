/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/omics/model/WorkflowEngine.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/StorageType.h>
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
  class CreateWorkflowVersionRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateWorkflowVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflowVersion"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workflow where you are creating the new version.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    CreateWorkflowVersionRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the workflow version. Provide a version name that is unique for
     * this workflow. You cannot change the name after HealthOmics creates the version.
     * </p> <p>The version name must start with a letter or number and it can include
     * upper-case and lower-case letters, numbers, hyphens, periods and underscores.
     * The maximum length is 64 characters. You can use a simple naming scheme, such as
     * version1, version2, version3. You can also match your workflow versions with
     * your own internal versioning conventions, such as 2.7.0, 2.7.1, 2.7.2.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    CreateWorkflowVersionRequest& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A zip archive containing the workflow definition for this workflow
     * version.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetDefinitionZip() const { return m_definitionZip; }
    inline bool DefinitionZipHasBeenSet() const { return m_definitionZipHasBeenSet; }
    template<typename DefinitionZipT = Aws::Utils::ByteBuffer>
    void SetDefinitionZip(DefinitionZipT&& value) { m_definitionZipHasBeenSet = true; m_definitionZip = std::forward<DefinitionZipT>(value); }
    template<typename DefinitionZipT = Aws::Utils::ByteBuffer>
    CreateWorkflowVersionRequest& WithDefinitionZip(DefinitionZipT&& value) { SetDefinitionZip(std::forward<DefinitionZipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI specifies the location of the workflow definition for this workflow
     * version.</p>
     */
    inline const Aws::String& GetDefinitionUri() const { return m_definitionUri; }
    inline bool DefinitionUriHasBeenSet() const { return m_definitionUriHasBeenSet; }
    template<typename DefinitionUriT = Aws::String>
    void SetDefinitionUri(DefinitionUriT&& value) { m_definitionUriHasBeenSet = true; m_definitionUri = std::forward<DefinitionUriT>(value); }
    template<typename DefinitionUriT = Aws::String>
    CreateWorkflowVersionRequest& WithDefinitionUri(DefinitionUriT&& value) { SetDefinitionUri(std::forward<DefinitionUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computational accelerator for this workflow version.</p>
     */
    inline Accelerators GetAccelerators() const { return m_accelerators; }
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }
    inline void SetAccelerators(Accelerators value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }
    inline CreateWorkflowVersionRequest& WithAccelerators(Accelerators value) { SetAccelerators(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for this workflow version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkflowVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow engine for this workflow version.</p>
     */
    inline WorkflowEngine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(WorkflowEngine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline CreateWorkflowVersionRequest& WithEngine(WorkflowEngine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the main definition file for this workflow version.</p>
     */
    inline const Aws::String& GetMain() const { return m_main; }
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }
    template<typename MainT = Aws::String>
    void SetMain(MainT&& value) { m_mainHasBeenSet = true; m_main = std::forward<MainT>(value); }
    template<typename MainT = Aws::String>
    CreateWorkflowVersionRequest& WithMain(MainT&& value) { SetMain(std::forward<MainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter template defines the input parameters for runs that use this
     * workflow version.</p>
     */
    inline const Aws::Map<Aws::String, WorkflowParameter>& GetParameterTemplate() const { return m_parameterTemplate; }
    inline bool ParameterTemplateHasBeenSet() const { return m_parameterTemplateHasBeenSet; }
    template<typename ParameterTemplateT = Aws::Map<Aws::String, WorkflowParameter>>
    void SetParameterTemplate(ParameterTemplateT&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate = std::forward<ParameterTemplateT>(value); }
    template<typename ParameterTemplateT = Aws::Map<Aws::String, WorkflowParameter>>
    CreateWorkflowVersionRequest& WithParameterTemplate(ParameterTemplateT&& value) { SetParameterTemplate(std::forward<ParameterTemplateT>(value)); return *this;}
    template<typename ParameterTemplateKeyT = Aws::String, typename ParameterTemplateValueT = WorkflowParameter>
    CreateWorkflowVersionRequest& AddParameterTemplate(ParameterTemplateKeyT&& key, ParameterTemplateValueT&& value) {
      m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(std::forward<ParameterTemplateKeyT>(key), std::forward<ParameterTemplateValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>To ensure that requests don't run multiple times, specify a unique ID for
     * each request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkflowVersionRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage type for runs that use this workflow. STATIC storage
     * allocates a fixed amount of storage. DYNAMIC storage dynamically scales the
     * storage up or down, based on file system utilization. For more information about
     * static and dynamic storage, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/Using-workflows.html">Running
     * workflows</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline CreateWorkflowVersionRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default static storage capacity (in gibibytes) for runs that use this
     * workflow or workflow version.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateWorkflowVersionRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tags to associate with this workflow version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorkflowVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorkflowVersionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Id of the owner of the S3 bucket that contains the
     * workflow definition. You need to specify this parameter if your account is not
     * the bucket owner.</p>
     */
    inline const Aws::String& GetWorkflowBucketOwnerId() const { return m_workflowBucketOwnerId; }
    inline bool WorkflowBucketOwnerIdHasBeenSet() const { return m_workflowBucketOwnerIdHasBeenSet; }
    template<typename WorkflowBucketOwnerIdT = Aws::String>
    void SetWorkflowBucketOwnerId(WorkflowBucketOwnerIdT&& value) { m_workflowBucketOwnerIdHasBeenSet = true; m_workflowBucketOwnerId = std::forward<WorkflowBucketOwnerIdT>(value); }
    template<typename WorkflowBucketOwnerIdT = Aws::String>
    CreateWorkflowVersionRequest& WithWorkflowBucketOwnerId(WorkflowBucketOwnerIdT&& value) { SetWorkflowBucketOwnerId(std::forward<WorkflowBucketOwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_definitionZip{};
    bool m_definitionZipHasBeenSet = false;

    Aws::String m_definitionUri;
    bool m_definitionUriHasBeenSet = false;

    Accelerators m_accelerators{Accelerators::NOT_SET};
    bool m_acceleratorsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkflowEngine m_engine{WorkflowEngine::NOT_SET};
    bool m_engineHasBeenSet = false;

    Aws::String m_main;
    bool m_mainHasBeenSet = false;

    Aws::Map<Aws::String, WorkflowParameter> m_parameterTemplate;
    bool m_parameterTemplateHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workflowBucketOwnerId;
    bool m_workflowBucketOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
