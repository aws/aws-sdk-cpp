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
  class GetPatchBaselineResult
  {
  public:
    AWS_SSM_API GetPatchBaselineResult();
    AWS_SSM_API GetPatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetPatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the retrieved patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }
    inline GetPatchBaselineResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}
    inline GetPatchBaselineResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}
    inline GetPatchBaselineResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetPatchBaselineResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetPatchBaselineResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetPatchBaselineResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the operating system specified for the patch baseline.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystem = std::move(value); }
    inline GetPatchBaselineResult& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline GetPatchBaselineResult& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline const PatchFilterGroup& GetGlobalFilters() const{ return m_globalFilters; }
    inline void SetGlobalFilters(const PatchFilterGroup& value) { m_globalFilters = value; }
    inline void SetGlobalFilters(PatchFilterGroup&& value) { m_globalFilters = std::move(value); }
    inline GetPatchBaselineResult& WithGlobalFilters(const PatchFilterGroup& value) { SetGlobalFilters(value); return *this;}
    inline GetPatchBaselineResult& WithGlobalFilters(PatchFilterGroup&& value) { SetGlobalFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline const PatchRuleGroup& GetApprovalRules() const{ return m_approvalRules; }
    inline void SetApprovalRules(const PatchRuleGroup& value) { m_approvalRules = value; }
    inline void SetApprovalRules(PatchRuleGroup&& value) { m_approvalRules = std::move(value); }
    inline GetPatchBaselineResult& WithApprovalRules(const PatchRuleGroup& value) { SetApprovalRules(value); return *this;}
    inline GetPatchBaselineResult& WithApprovalRules(PatchRuleGroup&& value) { SetApprovalRules(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedPatches() const{ return m_approvedPatches; }
    inline void SetApprovedPatches(const Aws::Vector<Aws::String>& value) { m_approvedPatches = value; }
    inline void SetApprovedPatches(Aws::Vector<Aws::String>&& value) { m_approvedPatches = std::move(value); }
    inline GetPatchBaselineResult& WithApprovedPatches(const Aws::Vector<Aws::String>& value) { SetApprovedPatches(value); return *this;}
    inline GetPatchBaselineResult& WithApprovedPatches(Aws::Vector<Aws::String>&& value) { SetApprovedPatches(std::move(value)); return *this;}
    inline GetPatchBaselineResult& AddApprovedPatches(const Aws::String& value) { m_approvedPatches.push_back(value); return *this; }
    inline GetPatchBaselineResult& AddApprovedPatches(Aws::String&& value) { m_approvedPatches.push_back(std::move(value)); return *this; }
    inline GetPatchBaselineResult& AddApprovedPatches(const char* value) { m_approvedPatches.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the specified compliance severity level for approved patches in the
     * patch baseline.</p>
     */
    inline const PatchComplianceLevel& GetApprovedPatchesComplianceLevel() const{ return m_approvedPatchesComplianceLevel; }
    inline void SetApprovedPatchesComplianceLevel(const PatchComplianceLevel& value) { m_approvedPatchesComplianceLevel = value; }
    inline void SetApprovedPatchesComplianceLevel(PatchComplianceLevel&& value) { m_approvedPatchesComplianceLevel = std::move(value); }
    inline GetPatchBaselineResult& WithApprovedPatchesComplianceLevel(const PatchComplianceLevel& value) { SetApprovedPatchesComplianceLevel(value); return *this;}
    inline GetPatchBaselineResult& WithApprovedPatchesComplianceLevel(PatchComplianceLevel&& value) { SetApprovedPatchesComplianceLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline bool GetApprovedPatchesEnableNonSecurity() const{ return m_approvedPatchesEnableNonSecurity; }
    inline void SetApprovedPatchesEnableNonSecurity(bool value) { m_approvedPatchesEnableNonSecurity = value; }
    inline GetPatchBaselineResult& WithApprovedPatchesEnableNonSecurity(bool value) { SetApprovedPatchesEnableNonSecurity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRejectedPatches() const{ return m_rejectedPatches; }
    inline void SetRejectedPatches(const Aws::Vector<Aws::String>& value) { m_rejectedPatches = value; }
    inline void SetRejectedPatches(Aws::Vector<Aws::String>&& value) { m_rejectedPatches = std::move(value); }
    inline GetPatchBaselineResult& WithRejectedPatches(const Aws::Vector<Aws::String>& value) { SetRejectedPatches(value); return *this;}
    inline GetPatchBaselineResult& WithRejectedPatches(Aws::Vector<Aws::String>&& value) { SetRejectedPatches(std::move(value)); return *this;}
    inline GetPatchBaselineResult& AddRejectedPatches(const Aws::String& value) { m_rejectedPatches.push_back(value); return *this; }
    inline GetPatchBaselineResult& AddRejectedPatches(Aws::String&& value) { m_rejectedPatches.push_back(std::move(value)); return *this; }
    inline GetPatchBaselineResult& AddRejectedPatches(const char* value) { m_rejectedPatches.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action specified to take on patches included in the
     * <code>RejectedPatches</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline const PatchAction& GetRejectedPatchesAction() const{ return m_rejectedPatchesAction; }
    inline void SetRejectedPatchesAction(const PatchAction& value) { m_rejectedPatchesAction = value; }
    inline void SetRejectedPatchesAction(PatchAction&& value) { m_rejectedPatchesAction = std::move(value); }
    inline GetPatchBaselineResult& WithRejectedPatchesAction(const PatchAction& value) { SetRejectedPatchesAction(value); return *this;}
    inline GetPatchBaselineResult& WithRejectedPatchesAction(PatchAction&& value) { SetRejectedPatchesAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Patch groups included in the patch baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPatchGroups() const{ return m_patchGroups; }
    inline void SetPatchGroups(const Aws::Vector<Aws::String>& value) { m_patchGroups = value; }
    inline void SetPatchGroups(Aws::Vector<Aws::String>&& value) { m_patchGroups = std::move(value); }
    inline GetPatchBaselineResult& WithPatchGroups(const Aws::Vector<Aws::String>& value) { SetPatchGroups(value); return *this;}
    inline GetPatchBaselineResult& WithPatchGroups(Aws::Vector<Aws::String>&& value) { SetPatchGroups(std::move(value)); return *this;}
    inline GetPatchBaselineResult& AddPatchGroups(const Aws::String& value) { m_patchGroups.push_back(value); return *this; }
    inline GetPatchBaselineResult& AddPatchGroups(Aws::String&& value) { m_patchGroups.push_back(std::move(value)); return *this; }
    inline GetPatchBaselineResult& AddPatchGroups(const char* value) { m_patchGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the patch baseline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetPatchBaselineResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetPatchBaselineResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the patch baseline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedDate() const{ return m_modifiedDate; }
    inline void SetModifiedDate(const Aws::Utils::DateTime& value) { m_modifiedDate = value; }
    inline void SetModifiedDate(Aws::Utils::DateTime&& value) { m_modifiedDate = std::move(value); }
    inline GetPatchBaselineResult& WithModifiedDate(const Aws::Utils::DateTime& value) { SetModifiedDate(value); return *this;}
    inline GetPatchBaselineResult& WithModifiedDate(Aws::Utils::DateTime&& value) { SetModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the patch baseline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetPatchBaselineResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetPatchBaselineResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetPatchBaselineResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline const Aws::Vector<PatchSource>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<PatchSource>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<PatchSource>&& value) { m_sources = std::move(value); }
    inline GetPatchBaselineResult& WithSources(const Aws::Vector<PatchSource>& value) { SetSources(value); return *this;}
    inline GetPatchBaselineResult& WithSources(Aws::Vector<PatchSource>&& value) { SetSources(std::move(value)); return *this;}
    inline GetPatchBaselineResult& AddSources(const PatchSource& value) { m_sources.push_back(value); return *this; }
    inline GetPatchBaselineResult& AddSources(PatchSource&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPatchBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPatchBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPatchBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;

    Aws::String m_name;

    OperatingSystem m_operatingSystem;

    PatchFilterGroup m_globalFilters;

    PatchRuleGroup m_approvalRules;

    Aws::Vector<Aws::String> m_approvedPatches;

    PatchComplianceLevel m_approvedPatchesComplianceLevel;

    bool m_approvedPatchesEnableNonSecurity;

    Aws::Vector<Aws::String> m_rejectedPatches;

    PatchAction m_rejectedPatchesAction;

    Aws::Vector<Aws::String> m_patchGroups;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_modifiedDate;

    Aws::String m_description;

    Aws::Vector<PatchSource> m_sources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
