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
    AWS_SSM_API PutComplianceItemsRequest();

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
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline PutComplianceItemsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline PutComplianceItemsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline PutComplianceItemsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline PutComplianceItemsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline PutComplianceItemsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline PutComplianceItemsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline PutComplianceItemsRequest& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline PutComplianceItemsRequest& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline PutComplianceItemsRequest& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * <code>yyyy-MM-dd'T'HH:mm:ss'Z'</code> </p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const{ return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    inline void SetExecutionSummary(const ComplianceExecutionSummary& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }
    inline void SetExecutionSummary(ComplianceExecutionSummary&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }
    inline PutComplianceItemsRequest& WithExecutionSummary(const ComplianceExecutionSummary& value) { SetExecutionSummary(value); return *this;}
    inline PutComplianceItemsRequest& WithExecutionSummary(ComplianceExecutionSummary&& value) { SetExecutionSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, and so on.</p>
     */
    inline const Aws::Vector<ComplianceItemEntry>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<ComplianceItemEntry>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<ComplianceItemEntry>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline PutComplianceItemsRequest& WithItems(const Aws::Vector<ComplianceItemEntry>& value) { SetItems(value); return *this;}
    inline PutComplianceItemsRequest& WithItems(Aws::Vector<ComplianceItemEntry>&& value) { SetItems(std::move(value)); return *this;}
    inline PutComplianceItemsRequest& AddItems(const ComplianceItemEntry& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline PutComplianceItemsRequest& AddItems(ComplianceItemEntry&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline const Aws::String& GetItemContentHash() const{ return m_itemContentHash; }
    inline bool ItemContentHashHasBeenSet() const { return m_itemContentHashHasBeenSet; }
    inline void SetItemContentHash(const Aws::String& value) { m_itemContentHashHasBeenSet = true; m_itemContentHash = value; }
    inline void SetItemContentHash(Aws::String&& value) { m_itemContentHashHasBeenSet = true; m_itemContentHash = std::move(value); }
    inline void SetItemContentHash(const char* value) { m_itemContentHashHasBeenSet = true; m_itemContentHash.assign(value); }
    inline PutComplianceItemsRequest& WithItemContentHash(const Aws::String& value) { SetItemContentHash(value); return *this;}
    inline PutComplianceItemsRequest& WithItemContentHash(Aws::String&& value) { SetItemContentHash(std::move(value)); return *this;}
    inline PutComplianceItemsRequest& WithItemContentHash(const char* value) { SetItemContentHash(value); return *this;}
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
    inline const ComplianceUploadType& GetUploadType() const{ return m_uploadType; }
    inline bool UploadTypeHasBeenSet() const { return m_uploadTypeHasBeenSet; }
    inline void SetUploadType(const ComplianceUploadType& value) { m_uploadTypeHasBeenSet = true; m_uploadType = value; }
    inline void SetUploadType(ComplianceUploadType&& value) { m_uploadTypeHasBeenSet = true; m_uploadType = std::move(value); }
    inline PutComplianceItemsRequest& WithUploadType(const ComplianceUploadType& value) { SetUploadType(value); return *this;}
    inline PutComplianceItemsRequest& WithUploadType(ComplianceUploadType&& value) { SetUploadType(std::move(value)); return *this;}
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

    ComplianceUploadType m_uploadType;
    bool m_uploadTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
