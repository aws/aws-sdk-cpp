/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
#include <aws/ssm/model/PatchAction.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PatchComplianceStatus.h>
#include <aws/ssm/model/PatchSource.h>
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
namespace SSM
{
namespace Model
{
  class UpdatePatchBaselineResult
  {
  public:
    AWS_SSM_API UpdatePatchBaselineResult() = default;
    AWS_SSM_API UpdatePatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdatePatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const { return m_baselineId; }
    template<typename BaselineIdT = Aws::String>
    void SetBaselineId(BaselineIdT&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::forward<BaselineIdT>(value); }
    template<typename BaselineIdT = Aws::String>
    UpdatePatchBaselineResult& WithBaselineId(BaselineIdT&& value) { SetBaselineId(std::forward<BaselineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdatePatchBaselineResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system rule used by the updated patch baseline.</p>
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline UpdatePatchBaselineResult& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline const PatchFilterGroup& GetGlobalFilters() const { return m_globalFilters; }
    template<typename GlobalFiltersT = PatchFilterGroup>
    void SetGlobalFilters(GlobalFiltersT&& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = std::forward<GlobalFiltersT>(value); }
    template<typename GlobalFiltersT = PatchFilterGroup>
    UpdatePatchBaselineResult& WithGlobalFilters(GlobalFiltersT&& value) { SetGlobalFilters(std::forward<GlobalFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline const PatchRuleGroup& GetApprovalRules() const { return m_approvalRules; }
    template<typename ApprovalRulesT = PatchRuleGroup>
    void SetApprovalRules(ApprovalRulesT&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::forward<ApprovalRulesT>(value); }
    template<typename ApprovalRulesT = PatchRuleGroup>
    UpdatePatchBaselineResult& WithApprovalRules(ApprovalRulesT&& value) { SetApprovalRules(std::forward<ApprovalRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedPatches() const { return m_approvedPatches; }
    template<typename ApprovedPatchesT = Aws::Vector<Aws::String>>
    void SetApprovedPatches(ApprovedPatchesT&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches = std::forward<ApprovedPatchesT>(value); }
    template<typename ApprovedPatchesT = Aws::Vector<Aws::String>>
    UpdatePatchBaselineResult& WithApprovedPatches(ApprovedPatchesT&& value) { SetApprovedPatches(std::forward<ApprovedPatchesT>(value)); return *this;}
    template<typename ApprovedPatchesT = Aws::String>
    UpdatePatchBaselineResult& AddApprovedPatches(ApprovedPatchesT&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.emplace_back(std::forward<ApprovedPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The compliance severity level assigned to the patch baseline after the update
     * completed.</p>
     */
    inline PatchComplianceLevel GetApprovedPatchesComplianceLevel() const { return m_approvedPatchesComplianceLevel; }
    inline void SetApprovedPatchesComplianceLevel(PatchComplianceLevel value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = value; }
    inline UpdatePatchBaselineResult& WithApprovedPatchesComplianceLevel(PatchComplianceLevel value) { SetApprovedPatchesComplianceLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline bool GetApprovedPatchesEnableNonSecurity() const { return m_approvedPatchesEnableNonSecurity; }
    inline void SetApprovedPatchesEnableNonSecurity(bool value) { m_approvedPatchesEnableNonSecurityHasBeenSet = true; m_approvedPatchesEnableNonSecurity = value; }
    inline UpdatePatchBaselineResult& WithApprovedPatchesEnableNonSecurity(bool value) { SetApprovedPatchesEnableNonSecurity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRejectedPatches() const { return m_rejectedPatches; }
    template<typename RejectedPatchesT = Aws::Vector<Aws::String>>
    void SetRejectedPatches(RejectedPatchesT&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches = std::forward<RejectedPatchesT>(value); }
    template<typename RejectedPatchesT = Aws::Vector<Aws::String>>
    UpdatePatchBaselineResult& WithRejectedPatches(RejectedPatchesT&& value) { SetRejectedPatches(std::forward<RejectedPatchesT>(value)); return *this;}
    template<typename RejectedPatchesT = Aws::String>
    UpdatePatchBaselineResult& AddRejectedPatches(RejectedPatchesT&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.emplace_back(std::forward<RejectedPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action specified to take on patches included in the
     * <code>RejectedPatches</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline PatchAction GetRejectedPatchesAction() const { return m_rejectedPatchesAction; }
    inline void SetRejectedPatchesAction(PatchAction value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = value; }
    inline UpdatePatchBaselineResult& WithRejectedPatchesAction(PatchAction value) { SetRejectedPatchesAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the patch baseline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    UpdatePatchBaselineResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the patch baseline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedDate() const { return m_modifiedDate; }
    template<typename ModifiedDateT = Aws::Utils::DateTime>
    void SetModifiedDate(ModifiedDateT&& value) { m_modifiedDateHasBeenSet = true; m_modifiedDate = std::forward<ModifiedDateT>(value); }
    template<typename ModifiedDateT = Aws::Utils::DateTime>
    UpdatePatchBaselineResult& WithModifiedDate(ModifiedDateT&& value) { SetModifiedDate(std::forward<ModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the patch baseline.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePatchBaselineResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline const Aws::Vector<PatchSource>& GetSources() const { return m_sources; }
    template<typename SourcesT = Aws::Vector<PatchSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<PatchSource>>
    UpdatePatchBaselineResult& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = PatchSource>
    UpdatePatchBaselineResult& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the compliance status of managed nodes for which security-related
     * patches are available but were not approved. This preference is specified when
     * the <code>CreatePatchBaseline</code> or <code>UpdatePatchBaseline</code>
     * commands are run.</p> <p>Applies to Windows Server managed nodes only.</p>
     */
    inline PatchComplianceStatus GetAvailableSecurityUpdatesComplianceStatus() const { return m_availableSecurityUpdatesComplianceStatus; }
    inline void SetAvailableSecurityUpdatesComplianceStatus(PatchComplianceStatus value) { m_availableSecurityUpdatesComplianceStatusHasBeenSet = true; m_availableSecurityUpdatesComplianceStatus = value; }
    inline UpdatePatchBaselineResult& WithAvailableSecurityUpdatesComplianceStatus(PatchComplianceStatus value) { SetAvailableSecurityUpdatesComplianceStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePatchBaselineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    PatchFilterGroup m_globalFilters;
    bool m_globalFiltersHasBeenSet = false;

    PatchRuleGroup m_approvalRules;
    bool m_approvalRulesHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvedPatches;
    bool m_approvedPatchesHasBeenSet = false;

    PatchComplianceLevel m_approvedPatchesComplianceLevel{PatchComplianceLevel::NOT_SET};
    bool m_approvedPatchesComplianceLevelHasBeenSet = false;

    bool m_approvedPatchesEnableNonSecurity{false};
    bool m_approvedPatchesEnableNonSecurityHasBeenSet = false;

    Aws::Vector<Aws::String> m_rejectedPatches;
    bool m_rejectedPatchesHasBeenSet = false;

    PatchAction m_rejectedPatchesAction{PatchAction::NOT_SET};
    bool m_rejectedPatchesActionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedDate{};
    bool m_modifiedDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PatchSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    PatchComplianceStatus m_availableSecurityUpdatesComplianceStatus{PatchComplianceStatus::NOT_SET};
    bool m_availableSecurityUpdatesComplianceStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
