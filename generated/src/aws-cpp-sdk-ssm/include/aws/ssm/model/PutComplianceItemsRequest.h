/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceExecutionSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ComplianceUploadType.h>
#include <aws/ssm/model/ComplianceItemEntry.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class PutComplianceItemsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API PutComplianceItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutComplianceItems"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify an ID for this resource. For a managed node, this is the node ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    PutComplianceItemsRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    PutComplianceItemsRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    PutComplianceItemsRequest& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * <code>yyyy-MM-dd'T'HH:mm:ss'Z'</code> </p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const { return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    template<typename ExecutionSummaryT = ComplianceExecutionSummary>
    void SetExecutionSummary(ExecutionSummaryT&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::forward<ExecutionSummaryT>(value); }
    template<typename ExecutionSummaryT = ComplianceExecutionSummary>
    PutComplianceItemsRequest& WithExecutionSummary(ExecutionSummaryT&& value) { SetExecutionSummary(std::forward<ExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, and so on.</p>
     */
    inline const Aws::Vector<ComplianceItemEntry>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<ComplianceItemEntry>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<ComplianceItemEntry>>
    PutComplianceItemsRequest& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = ComplianceItemEntry>
    PutComplianceItemsRequest& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline const Aws::String& GetItemContentHash() const { return m_itemContentHash; }
    inline bool ItemContentHashHasBeenSet() const { return m_itemContentHashHasBeenSet; }
    template<typename ItemContentHashT = Aws::String>
    void SetItemContentHash(ItemContentHashT&& value) { m_itemContentHashHasBeenSet = true; m_itemContentHash = std::forward<ItemContentHashT>(value); }
    template<typename ItemContentHashT = Aws::String>
    PutComplianceItemsRequest& WithItemContentHash(ItemContentHashT&& value) { SetItemContentHash(std::forward<ItemContentHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode for uploading compliance items. You can specify
     * <code>COMPLETE</code> or <code>PARTIAL</code>. In <code>COMPLETE</code> mode,
     * the system overwrites all existing compliance information for the resource. You
     * must provide a full list of compliance items each time you send the request.</p>
     * <p>In <code>PARTIAL</code> mode, the system overwrites compliance information
     * for a specific association. The association must be configured with
     * <code>SyncCompliance</code> set to <code>MANUAL</code>. By default, all requests
     * use <code>COMPLETE</code> mode.</p>  <p>This attribute is only valid for
     * association compliance.</p> 
     */
    inline ComplianceUploadType GetUploadType() const { return m_uploadType; }
    inline bool UploadTypeHasBeenSet() const { return m_uploadTypeHasBeenSet; }
    inline void SetUploadType(ComplianceUploadType value) { m_uploadTypeHasBeenSet = true; m_uploadType = value; }
    inline PutComplianceItemsRequest& WithUploadType(ComplianceUploadType value) { SetUploadType(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    ComplianceExecutionSummary m_executionSummary;
    bool m_executionSummaryHasBeenSet = false;

    Aws::Vector<ComplianceItemEntry> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_itemContentHash;
    bool m_itemContentHashHasBeenSet = false;

    ComplianceUploadType m_uploadType{ComplianceUploadType::NOT_SET};
    bool m_uploadTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
