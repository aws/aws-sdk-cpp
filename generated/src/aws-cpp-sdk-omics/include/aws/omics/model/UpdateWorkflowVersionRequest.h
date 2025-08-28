/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/StorageType.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class UpdateWorkflowVersionRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API UpdateWorkflowVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkflowVersion"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The workflow's ID. The <code>workflowId</code> is not the UUID.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    UpdateWorkflowVersionRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow version.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    UpdateWorkflowVersionRequest& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the workflow version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWorkflowVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage type for runs that use this workflow version. The
     * <code>storageType</code> can be overridden at run time. <code>DYNAMIC</code>
     * storage dynamically scales the storage up or down, based on file system
     * utilization. STATIC storage allocates a fixed amount of storage. For more
     * information about dynamic and static storage types, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-run-types.html">Run
     * storage types</a> in the <i>in the <i>Amazon Web Services HealthOmics User
     * Guide</i> </i>.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline UpdateWorkflowVersionRequest& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default static storage capacity (in gibibytes) for runs that use this
     * workflow version. The <code>storageCapacity</code> can be overwritten at run
     * time. The storage capacity is not required for runs with a <code>DYNAMIC</code>
     * storage type.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline UpdateWorkflowVersionRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The markdown content for the workflow version's README file. This provides
     * documentation and usage information for users of this specific workflow
     * version.</p>
     */
    inline const Aws::String& GetReadmeMarkdown() const { return m_readmeMarkdown; }
    inline bool ReadmeMarkdownHasBeenSet() const { return m_readmeMarkdownHasBeenSet; }
    template<typename ReadmeMarkdownT = Aws::String>
    void SetReadmeMarkdown(ReadmeMarkdownT&& value) { m_readmeMarkdownHasBeenSet = true; m_readmeMarkdown = std::forward<ReadmeMarkdownT>(value); }
    template<typename ReadmeMarkdownT = Aws::String>
    UpdateWorkflowVersionRequest& WithReadmeMarkdown(ReadmeMarkdownT&& value) { SetReadmeMarkdown(std::forward<ReadmeMarkdownT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    Aws::String m_readmeMarkdown;
    bool m_readmeMarkdownHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
