/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
#include <aws/ssm/model/PatchAction.h>
#include <aws/ssm/model/PatchComplianceStatus.h>
#include <aws/ssm/model/PatchSource.h>
#include <aws/ssm/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreatePatchBaselineRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreatePatchBaselineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePatchBaseline"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline CreatePatchBaselineRequest& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePatchBaselineRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     *  <p>The <code>GlobalFilters</code> parameter can be configured only
     * by using the CLI or an Amazon Web Services SDK. It can't be configured from the
     * Patch Manager console, and its value isn't displayed in the console.</p>
     * 
     */
    inline const PatchFilterGroup& GetGlobalFilters() const { return m_globalFilters; }
    inline bool GlobalFiltersHasBeenSet() const { return m_globalFiltersHasBeenSet; }
    template<typename GlobalFiltersT = PatchFilterGroup>
    void SetGlobalFilters(GlobalFiltersT&& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = std::forward<GlobalFiltersT>(value); }
    template<typename GlobalFiltersT = PatchFilterGroup>
    CreatePatchBaselineRequest& WithGlobalFilters(GlobalFiltersT&& value) { SetGlobalFilters(std::forward<GlobalFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline const PatchRuleGroup& GetApprovalRules() const { return m_approvalRules; }
    inline bool ApprovalRulesHasBeenSet() const { return m_approvalRulesHasBeenSet; }
    template<typename ApprovalRulesT = PatchRuleGroup>
    void SetApprovalRules(ApprovalRulesT&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::forward<ApprovalRulesT>(value); }
    template<typename ApprovalRulesT = PatchRuleGroup>
    CreatePatchBaselineRequest& WithApprovalRules(ApprovalRulesT&& value) { SetApprovalRules(std::forward<ApprovalRulesT>(value)); return *this;}
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
    CreatePatchBaselineRequest& WithApprovedPatches(ApprovedPatchesT&& value) { SetApprovedPatches(std::forward<ApprovedPatchesT>(value)); return *this;}
    template<typename ApprovedPatchesT = Aws::String>
    CreatePatchBaselineRequest& AddApprovedPatches(ApprovedPatchesT&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.emplace_back(std::forward<ApprovedPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline PatchComplianceLevel GetApprovedPatchesComplianceLevel() const { return m_approvedPatchesComplianceLevel; }
    inline bool ApprovedPatchesComplianceLevelHasBeenSet() const { return m_approvedPatchesComplianceLevelHasBeenSet; }
    inline void SetApprovedPatchesComplianceLevel(PatchComplianceLevel value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = value; }
    inline CreatePatchBaselineRequest& WithApprovedPatchesComplianceLevel(PatchComplianceLevel value) { SetApprovedPatchesComplianceLevel(value); return *this;}
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
    inline CreatePatchBaselineRequest& WithApprovedPatchesEnableNonSecurity(bool value) { SetApprovedPatchesEnableNonSecurity(value); return *this;}
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
    CreatePatchBaselineRequest& WithRejectedPatches(RejectedPatchesT&& value) { SetRejectedPatches(std::forward<RejectedPatchesT>(value)); return *this;}
    template<typename RejectedPatchesT = Aws::String>
    CreatePatchBaselineRequest& AddRejectedPatches(RejectedPatchesT&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.emplace_back(std::forward<RejectedPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <dl> <dt>ALLOW_AS_DEPENDENCY</dt> <dd>
     * <p> <b>Linux and macOS</b>: A package in the rejected patches list is installed
     * only if it is a dependency of another package. It is considered compliant with
     * the patch baseline, and its status is reported as <code>INSTALLED_OTHER</code>.
     * This is the default action if no option is specified.</p> <p> <b>Windows
     * Server</b>: Windows Server doesn't support the concept of package dependencies.
     * If a package in the rejected patches list and already installed on the node, its
     * status is reported as <code>INSTALLED_OTHER</code>. Any package not already
     * installed on the node is skipped. This is the default action if no option is
     * specified.</p> </dd> <dt>BLOCK</dt> <dd> <p> <b>All OSs</b>: Packages in the
     * rejected patches list, and packages that include them as dependencies, aren't
     * installed by Patch Manager under any circumstances. </p> <p>State value
     * assignment for patch compliance:</p> <ul> <li> <p>If a package was installed
     * before it was added to the rejected patches list, or is installed outside of
     * Patch Manager afterward, it's considered noncompliant with the patch baseline
     * and its status is reported as <code>INSTALLED_REJECTED</code>.</p> </li> <li>
     * <p>If an update attempts to install a dependency package that is now rejected by
     * the baseline, when previous versions of the package were not rejected, the
     * package being updated is reported as <code>MISSING</code> for <code>SCAN</code>
     * operations and as <code>FAILED</code> for <code>INSTALL</code> operations.</p>
     * </li> </ul> </dd> </dl>
     */
    inline PatchAction GetRejectedPatchesAction() const { return m_rejectedPatchesAction; }
    inline bool RejectedPatchesActionHasBeenSet() const { return m_rejectedPatchesActionHasBeenSet; }
    inline void SetRejectedPatchesAction(PatchAction value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = value; }
    inline CreatePatchBaselineRequest& WithRejectedPatchesAction(PatchAction value) { SetRejectedPatchesAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the patch baseline.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePatchBaselineRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreatePatchBaselineRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = PatchSource>
    CreatePatchBaselineRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the status you want to assign to security patches that are
     * available but not approved because they don't meet the installation criteria
     * specified in the patch baseline.</p> <p>Example scenario: Security patches that
     * you might want installed can be skipped if you have specified a long period to
     * wait after a patch is released before installation. If an update to the patch is
     * released during your specified waiting period, the waiting period for installing
     * the patch starts over. If the waiting period is too long, multiple versions of
     * the patch could be released but never installed.</p> <p>Supported for Windows
     * Server managed nodes only.</p>
     */
    inline PatchComplianceStatus GetAvailableSecurityUpdatesComplianceStatus() const { return m_availableSecurityUpdatesComplianceStatus; }
    inline bool AvailableSecurityUpdatesComplianceStatusHasBeenSet() const { return m_availableSecurityUpdatesComplianceStatusHasBeenSet; }
    inline void SetAvailableSecurityUpdatesComplianceStatus(PatchComplianceStatus value) { m_availableSecurityUpdatesComplianceStatusHasBeenSet = true; m_availableSecurityUpdatesComplianceStatus = value; }
    inline CreatePatchBaselineRequest& WithAvailableSecurityUpdatesComplianceStatus(PatchComplianceStatus value) { SetAvailableSecurityUpdatesComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreatePatchBaselineRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePatchBaselineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePatchBaselineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PatchSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    PatchComplianceStatus m_availableSecurityUpdatesComplianceStatus{PatchComplianceStatus::NOT_SET};
    bool m_availableSecurityUpdatesComplianceStatusHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
