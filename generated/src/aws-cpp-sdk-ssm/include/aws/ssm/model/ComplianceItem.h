/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceStatus.h>
#include <aws/ssm/model/ComplianceSeverity.h>
#include <aws/ssm/model/ComplianceExecutionSummary.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the compliance as defined by the resource type. For
   * example, for a patch resource type, <code>Items</code> includes information
   * about the PatchSeverity, Classification, and so on.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceItem">AWS
   * API Reference</a></p>
   */
  class ComplianceItem
  {
  public:
    AWS_SSM_API ComplianceItem() = default;
    AWS_SSM_API ComplianceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance type. For example, Association (for a State Manager
     * association), Patch, or Custom:<code>string</code> are all valid compliance
     * types.</p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    ComplianceItem& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource. <code>ManagedInstance</code> is currently the only
     * supported resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ComplianceItem& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the resource. For a managed node, this is the node ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ComplianceItem& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the compliance item. For example, if the compliance item is a
     * Windows patch, the ID could be the number of the KB article; for example:
     * KB4010320.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ComplianceItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title for the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ComplianceItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the compliance item. An item is either COMPLIANT,
     * NON_COMPLIANT, or an empty string (for Windows patches that aren't
     * applicable).</p>
     */
    inline ComplianceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComplianceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ComplianceItem& WithStatus(ComplianceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline ComplianceSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ComplianceSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ComplianceItem& WithSeverity(ComplianceSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary for the compliance item. The summary includes an execution ID, the
     * execution type (for example, command), and the execution time.</p> 
     * <p>For State Manager associations, the <code>ExecutionTime</code> value
     * represents when the compliance status was captured and aggregated by the Systems
     * Manager service, not necessarily when the underlying association was executed on
     * the managed node. State Manager updates compliance status for all associations
     * on an instance whenever any association executes, which means multiple
     * associations may show the same execution time even if they were executed at
     * different times.</p> 
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const { return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    template<typename ExecutionSummaryT = ComplianceExecutionSummary>
    void SetExecutionSummary(ExecutionSummaryT&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::forward<ExecutionSummaryT>(value); }
    template<typename ExecutionSummaryT = ComplianceExecutionSummary>
    ComplianceItem& WithExecutionSummary(ExecutionSummaryT&& value) { SetExecutionSummary(std::forward<ExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Map<Aws::String, Aws::String>>
    ComplianceItem& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsKeyT = Aws::String, typename DetailsValueT = Aws::String>
    ComplianceItem& AddDetails(DetailsKeyT&& key, DetailsValueT&& value) {
      m_detailsHasBeenSet = true; m_details.emplace(std::forward<DetailsKeyT>(key), std::forward<DetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    ComplianceStatus m_status{ComplianceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ComplianceSeverity m_severity{ComplianceSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    ComplianceExecutionSummary m_executionSummary;
    bool m_executionSummaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
