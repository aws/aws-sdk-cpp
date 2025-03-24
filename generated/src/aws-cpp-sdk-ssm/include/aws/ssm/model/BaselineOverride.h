/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
#include <aws/ssm/model/PatchAction.h>
#include <aws/ssm/model/PatchComplianceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchSource.h>
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
   * <p>Defines the basic information about a patch baseline override.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/BaselineOverride">AWS
   * API Reference</a></p>
   */
  class BaselineOverride
  {
  public:
    AWS_SSM_API BaselineOverride() = default;
    AWS_SSM_API BaselineOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API BaselineOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline BaselineOverride& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    
    inline const PatchFilterGroup& GetGlobalFilters() const { return m_globalFilters; }
    inline bool GlobalFiltersHasBeenSet() const { return m_globalFiltersHasBeenSet; }
    template<typename GlobalFiltersT = PatchFilterGroup>
    void SetGlobalFilters(GlobalFiltersT&& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = std::forward<GlobalFiltersT>(value); }
    template<typename GlobalFiltersT = PatchFilterGroup>
    BaselineOverride& WithGlobalFilters(GlobalFiltersT&& value) { SetGlobalFilters(std::forward<GlobalFiltersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PatchRuleGroup& GetApprovalRules() const { return m_approvalRules; }
    inline bool ApprovalRulesHasBeenSet() const { return m_approvalRulesHasBeenSet; }
    template<typename ApprovalRulesT = PatchRuleGroup>
    void SetApprovalRules(ApprovalRulesT&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::forward<ApprovalRulesT>(value); }
    template<typename ApprovalRulesT = PatchRuleGroup>
    BaselineOverride& WithApprovalRules(ApprovalRulesT&& value) { SetApprovalRules(std::forward<ApprovalRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">Package
     * name formats for approved and rejected patch lists</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedPatches() const { return m_approvedPatches; }
    inline bool ApprovedPatchesHasBeenSet() const { return m_approvedPatchesHasBeenSet; }
    template<typename ApprovedPatchesT = Aws::Vector<Aws::String>>
    void SetApprovedPatches(ApprovedPatchesT&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches = std::forward<ApprovedPatchesT>(value); }
    template<typename ApprovedPatchesT = Aws::Vector<Aws::String>>
    BaselineOverride& WithApprovedPatches(ApprovedPatchesT&& value) { SetApprovedPatches(std::forward<ApprovedPatchesT>(value)); return *this;}
    template<typename ApprovedPatchesT = Aws::String>
    BaselineOverride& AddApprovedPatches(ApprovedPatchesT&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.emplace_back(std::forward<ApprovedPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline PatchComplianceLevel GetApprovedPatchesComplianceLevel() const { return m_approvedPatchesComplianceLevel; }
    inline bool ApprovedPatchesComplianceLevelHasBeenSet() const { return m_approvedPatchesComplianceLevelHasBeenSet; }
    inline void SetApprovedPatchesComplianceLevel(PatchComplianceLevel value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = value; }
    inline BaselineOverride& WithApprovedPatchesComplianceLevel(PatchComplianceLevel value) { SetApprovedPatchesComplianceLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">Package
     * name formats for approved and rejected patch lists</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRejectedPatches() const { return m_rejectedPatches; }
    inline bool RejectedPatchesHasBeenSet() const { return m_rejectedPatchesHasBeenSet; }
    template<typename RejectedPatchesT = Aws::Vector<Aws::String>>
    void SetRejectedPatches(RejectedPatchesT&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches = std::forward<RejectedPatchesT>(value); }
    template<typename RejectedPatchesT = Aws::Vector<Aws::String>>
    BaselineOverride& WithRejectedPatches(RejectedPatchesT&& value) { SetRejectedPatches(std::forward<RejectedPatchesT>(value)); return *this;}
    template<typename RejectedPatchesT = Aws::String>
    BaselineOverride& AddRejectedPatches(RejectedPatchesT&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.emplace_back(std::forward<RejectedPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline PatchAction GetRejectedPatchesAction() const { return m_rejectedPatchesAction; }
    inline bool RejectedPatchesActionHasBeenSet() const { return m_rejectedPatchesActionHasBeenSet; }
    inline void SetRejectedPatchesAction(PatchAction value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = value; }
    inline BaselineOverride& WithRejectedPatchesAction(PatchAction value) { SetRejectedPatchesAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline bool GetApprovedPatchesEnableNonSecurity() const { return m_approvedPatchesEnableNonSecurity; }
    inline bool ApprovedPatchesEnableNonSecurityHasBeenSet() const { return m_approvedPatchesEnableNonSecurityHasBeenSet; }
    inline void SetApprovedPatchesEnableNonSecurity(bool value) { m_approvedPatchesEnableNonSecurityHasBeenSet = true; m_approvedPatchesEnableNonSecurity = value; }
    inline BaselineOverride& WithApprovedPatchesEnableNonSecurity(bool value) { SetApprovedPatchesEnableNonSecurity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline const Aws::Vector<PatchSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<PatchSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<PatchSource>>
    BaselineOverride& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = PatchSource>
    BaselineOverride& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether managed nodes for which there are available
     * security-related patches that have not been approved by the baseline are being
     * defined as <code>COMPLIANT</code> or <code>NON_COMPLIANT</code>. This option is
     * specified when the <code>CreatePatchBaseline</code> or
     * <code>UpdatePatchBaseline</code> commands are run.</p> <p>Applies to Windows
     * Server managed nodes only.</p>
     */
    inline PatchComplianceStatus GetAvailableSecurityUpdatesComplianceStatus() const { return m_availableSecurityUpdatesComplianceStatus; }
    inline bool AvailableSecurityUpdatesComplianceStatusHasBeenSet() const { return m_availableSecurityUpdatesComplianceStatusHasBeenSet; }
    inline void SetAvailableSecurityUpdatesComplianceStatus(PatchComplianceStatus value) { m_availableSecurityUpdatesComplianceStatusHasBeenSet = true; m_availableSecurityUpdatesComplianceStatus = value; }
    inline BaselineOverride& WithAvailableSecurityUpdatesComplianceStatus(PatchComplianceStatus value) { SetAvailableSecurityUpdatesComplianceStatus(value); return *this;}
    ///@}
  private:

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

    Aws::Vector<Aws::String> m_rejectedPatches;
    bool m_rejectedPatchesHasBeenSet = false;

    PatchAction m_rejectedPatchesAction{PatchAction::NOT_SET};
    bool m_rejectedPatchesActionHasBeenSet = false;

    bool m_approvedPatchesEnableNonSecurity{false};
    bool m_approvedPatchesEnableNonSecurityHasBeenSet = false;

    Aws::Vector<PatchSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    PatchComplianceStatus m_availableSecurityUpdatesComplianceStatus{PatchComplianceStatus::NOT_SET};
    bool m_availableSecurityUpdatesComplianceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
