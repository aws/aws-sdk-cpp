﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PatchOperationType.h>
#include <aws/ssm/model/RebootOption.h>
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
   * <p>Defines the high-level patch compliance state for a managed node, providing
   * information about the number of installed, missing, not applicable, and failed
   * patches along with metadata about the operation when this information was
   * gathered for the managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePatchState">AWS
   * API Reference</a></p>
   */
  class InstancePatchState
  {
  public:
    AWS_SSM_API InstancePatchState() = default;
    AWS_SSM_API InstancePatchState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePatchState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstancePatchState& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline const Aws::String& GetPatchGroup() const { return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    template<typename PatchGroupT = Aws::String>
    void SetPatchGroup(PatchGroupT&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::forward<PatchGroupT>(value); }
    template<typename PatchGroupT = Aws::String>
    InstancePatchState& WithPatchGroup(PatchGroupT&& value) { SetPatchGroup(std::forward<PatchGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline const Aws::String& GetBaselineId() const { return m_baselineId; }
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }
    template<typename BaselineIdT = Aws::String>
    void SetBaselineId(BaselineIdT&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::forward<BaselineIdT>(value); }
    template<typename BaselineIdT = Aws::String>
    InstancePatchState& WithBaselineId(BaselineIdT&& value) { SetBaselineId(std::forward<BaselineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    InstancePatchState& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">SSM
     * Command document for patching: <code>AWS-RunPatchBaseline</code> </a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetInstallOverrideList() const { return m_installOverrideList; }
    inline bool InstallOverrideListHasBeenSet() const { return m_installOverrideListHasBeenSet; }
    template<typename InstallOverrideListT = Aws::String>
    void SetInstallOverrideList(InstallOverrideListT&& value) { m_installOverrideListHasBeenSet = true; m_installOverrideList = std::forward<InstallOverrideListT>(value); }
    template<typename InstallOverrideListT = Aws::String>
    InstancePatchState& WithInstallOverrideList(InstallOverrideListT&& value) { SetInstallOverrideList(std::forward<InstallOverrideListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline const Aws::String& GetOwnerInformation() const { return m_ownerInformation; }
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }
    template<typename OwnerInformationT = Aws::String>
    void SetOwnerInformation(OwnerInformationT&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::forward<OwnerInformationT>(value); }
    template<typename OwnerInformationT = Aws::String>
    InstancePatchState& WithOwnerInformation(OwnerInformationT&& value) { SetOwnerInformation(std::forward<OwnerInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * managed node.</p>
     */
    inline int GetInstalledCount() const { return m_installedCount; }
    inline bool InstalledCountHasBeenSet() const { return m_installedCountHasBeenSet; }
    inline void SetInstalledCount(int value) { m_installedCountHasBeenSet = true; m_installedCount = value; }
    inline InstancePatchState& WithInstalledCount(int value) { SetInstalledCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the managed node.</p>
     */
    inline int GetInstalledOtherCount() const { return m_installedOtherCount; }
    inline bool InstalledOtherCountHasBeenSet() const { return m_installedOtherCountHasBeenSet; }
    inline void SetInstalledOtherCount(int value) { m_installedOtherCountHasBeenSet = true; m_installedOtherCount = value; }
    inline InstancePatchState& WithInstalledOtherCount(int value) { SetInstalledOtherCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches installed by Patch Manager since the last time the
     * managed node was rebooted.</p>
     */
    inline int GetInstalledPendingRebootCount() const { return m_installedPendingRebootCount; }
    inline bool InstalledPendingRebootCountHasBeenSet() const { return m_installedPendingRebootCountHasBeenSet; }
    inline void SetInstalledPendingRebootCount(int value) { m_installedPendingRebootCountHasBeenSet = true; m_installedPendingRebootCount = value; }
    inline InstancePatchState& WithInstalledPendingRebootCount(int value) { SetInstalledPendingRebootCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches installed on a managed node that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>InstalledRejected</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstalledRejectedCount</code> will always be <code>0</code> (zero).</p>
     * 
     */
    inline int GetInstalledRejectedCount() const { return m_installedRejectedCount; }
    inline bool InstalledRejectedCountHasBeenSet() const { return m_installedRejectedCountHasBeenSet; }
    inline void SetInstalledRejectedCount(int value) { m_installedRejectedCountHasBeenSet = true; m_installedRejectedCount = value; }
    inline InstancePatchState& WithInstalledRejectedCount(int value) { SetInstalledRejectedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * managed node but aren't currently installed.</p>
     */
    inline int GetMissingCount() const { return m_missingCount; }
    inline bool MissingCountHasBeenSet() const { return m_missingCountHasBeenSet; }
    inline void SetMissingCount(int value) { m_missingCountHasBeenSet = true; m_missingCount = value; }
    inline InstancePatchState& WithMissingCount(int value) { SetMissingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches from the patch baseline that were attempted to be
     * installed during the last patching operation, but failed to install.</p>
     */
    inline int GetFailedCount() const { return m_failedCount; }
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }
    inline InstancePatchState& WithFailedCount(int value) { SetFailedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches beyond the supported limit of
     * <code>NotApplicableCount</code> that aren't reported by name to Inventory.
     * Inventory is a tool in Amazon Web Services Systems Manager.</p>
     */
    inline int GetUnreportedNotApplicableCount() const { return m_unreportedNotApplicableCount; }
    inline bool UnreportedNotApplicableCountHasBeenSet() const { return m_unreportedNotApplicableCountHasBeenSet; }
    inline void SetUnreportedNotApplicableCount(int value) { m_unreportedNotApplicableCountHasBeenSet = true; m_unreportedNotApplicableCount = value; }
    inline InstancePatchState& WithUnreportedNotApplicableCount(int value) { SetUnreportedNotApplicableCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches from the patch baseline that aren't applicable for the
     * managed node and therefore aren't installed on the node. This number may be
     * truncated if the list of patch names is very large. The number of patches beyond
     * this limit are reported in <code>UnreportedNotApplicableCount</code>.</p>
     */
    inline int GetNotApplicableCount() const { return m_notApplicableCount; }
    inline bool NotApplicableCountHasBeenSet() const { return m_notApplicableCountHasBeenSet; }
    inline void SetNotApplicableCount(int value) { m_notApplicableCountHasBeenSet = true; m_notApplicableCount = value; }
    inline InstancePatchState& WithNotApplicableCount(int value) { SetNotApplicableCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of security-related patches that are available but not approved
     * because they didn't meet the patch baseline requirements. For example, an
     * updated version of a patch might have been released before the specified
     * auto-approval period was over.</p> <p>Applies to Windows Server managed nodes
     * only.</p>
     */
    inline int GetAvailableSecurityUpdateCount() const { return m_availableSecurityUpdateCount; }
    inline bool AvailableSecurityUpdateCountHasBeenSet() const { return m_availableSecurityUpdateCountHasBeenSet; }
    inline void SetAvailableSecurityUpdateCount(int value) { m_availableSecurityUpdateCountHasBeenSet = true; m_availableSecurityUpdateCount = value; }
    inline InstancePatchState& WithAvailableSecurityUpdateCount(int value) { SetAvailableSecurityUpdateCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline const Aws::Utils::DateTime& GetOperationStartTime() const { return m_operationStartTime; }
    inline bool OperationStartTimeHasBeenSet() const { return m_operationStartTimeHasBeenSet; }
    template<typename OperationStartTimeT = Aws::Utils::DateTime>
    void SetOperationStartTime(OperationStartTimeT&& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = std::forward<OperationStartTimeT>(value); }
    template<typename OperationStartTimeT = Aws::Utils::DateTime>
    InstancePatchState& WithOperationStartTime(OperationStartTimeT&& value) { SetOperationStartTime(std::forward<OperationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline const Aws::Utils::DateTime& GetOperationEndTime() const { return m_operationEndTime; }
    inline bool OperationEndTimeHasBeenSet() const { return m_operationEndTimeHasBeenSet; }
    template<typename OperationEndTimeT = Aws::Utils::DateTime>
    void SetOperationEndTime(OperationEndTimeT&& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = std::forward<OperationEndTimeT>(value); }
    template<typename OperationEndTimeT = Aws::Utils::DateTime>
    InstancePatchState& WithOperationEndTime(OperationEndTimeT&& value) { SetOperationEndTime(std::forward<OperationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline PatchOperationType GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(PatchOperationType value) { m_operationHasBeenSet = true; m_operation = value; }
    inline InstancePatchState& WithOperation(PatchOperationType value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline const Aws::Utils::DateTime& GetLastNoRebootInstallOperationTime() const { return m_lastNoRebootInstallOperationTime; }
    inline bool LastNoRebootInstallOperationTimeHasBeenSet() const { return m_lastNoRebootInstallOperationTimeHasBeenSet; }
    template<typename LastNoRebootInstallOperationTimeT = Aws::Utils::DateTime>
    void SetLastNoRebootInstallOperationTime(LastNoRebootInstallOperationTimeT&& value) { m_lastNoRebootInstallOperationTimeHasBeenSet = true; m_lastNoRebootInstallOperationTime = std::forward<LastNoRebootInstallOperationTimeT>(value); }
    template<typename LastNoRebootInstallOperationTimeT = Aws::Utils::DateTime>
    InstancePatchState& WithLastNoRebootInstallOperationTime(LastNoRebootInstallOperationTimeT&& value) { SetLastNoRebootInstallOperationTime(std::forward<LastNoRebootInstallOperationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline RebootOption GetRebootOption() const { return m_rebootOption; }
    inline bool RebootOptionHasBeenSet() const { return m_rebootOptionHasBeenSet; }
    inline void SetRebootOption(RebootOption value) { m_rebootOptionHasBeenSet = true; m_rebootOption = value; }
    inline InstancePatchState& WithRebootOption(RebootOption value) { SetRebootOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches per node that are specified as <code>Critical</code>
     * for compliance reporting in the patch baseline aren't installed. These patches
     * might be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetCriticalNonCompliantCount() const { return m_criticalNonCompliantCount; }
    inline bool CriticalNonCompliantCountHasBeenSet() const { return m_criticalNonCompliantCountHasBeenSet; }
    inline void SetCriticalNonCompliantCount(int value) { m_criticalNonCompliantCountHasBeenSet = true; m_criticalNonCompliantCount = value; }
    inline InstancePatchState& WithCriticalNonCompliantCount(int value) { SetCriticalNonCompliantCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches per node that are specified as <code>Security</code> in
     * a patch advisory aren't installed. These patches might be missing, have failed
     * installation, were rejected, or were installed but awaiting a required managed
     * node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetSecurityNonCompliantCount() const { return m_securityNonCompliantCount; }
    inline bool SecurityNonCompliantCountHasBeenSet() const { return m_securityNonCompliantCountHasBeenSet; }
    inline void SetSecurityNonCompliantCount(int value) { m_securityNonCompliantCountHasBeenSet = true; m_securityNonCompliantCount = value; }
    inline InstancePatchState& WithSecurityNonCompliantCount(int value) { SetSecurityNonCompliantCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches per node that are specified as other than
     * <code>Critical</code> or <code>Security</code> but aren't compliant with the
     * patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetOtherNonCompliantCount() const { return m_otherNonCompliantCount; }
    inline bool OtherNonCompliantCountHasBeenSet() const { return m_otherNonCompliantCountHasBeenSet; }
    inline void SetOtherNonCompliantCount(int value) { m_otherNonCompliantCountHasBeenSet = true; m_otherNonCompliantCount = value; }
    inline InstancePatchState& WithOtherNonCompliantCount(int value) { SetOtherNonCompliantCount(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_installOverrideList;
    bool m_installOverrideListHasBeenSet = false;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet = false;

    int m_installedCount{0};
    bool m_installedCountHasBeenSet = false;

    int m_installedOtherCount{0};
    bool m_installedOtherCountHasBeenSet = false;

    int m_installedPendingRebootCount{0};
    bool m_installedPendingRebootCountHasBeenSet = false;

    int m_installedRejectedCount{0};
    bool m_installedRejectedCountHasBeenSet = false;

    int m_missingCount{0};
    bool m_missingCountHasBeenSet = false;

    int m_failedCount{0};
    bool m_failedCountHasBeenSet = false;

    int m_unreportedNotApplicableCount{0};
    bool m_unreportedNotApplicableCountHasBeenSet = false;

    int m_notApplicableCount{0};
    bool m_notApplicableCountHasBeenSet = false;

    int m_availableSecurityUpdateCount{0};
    bool m_availableSecurityUpdateCountHasBeenSet = false;

    Aws::Utils::DateTime m_operationStartTime{};
    bool m_operationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_operationEndTime{};
    bool m_operationEndTimeHasBeenSet = false;

    PatchOperationType m_operation{PatchOperationType::NOT_SET};
    bool m_operationHasBeenSet = false;

    Aws::Utils::DateTime m_lastNoRebootInstallOperationTime{};
    bool m_lastNoRebootInstallOperationTimeHasBeenSet = false;

    RebootOption m_rebootOption{RebootOption::NOT_SET};
    bool m_rebootOptionHasBeenSet = false;

    int m_criticalNonCompliantCount{0};
    bool m_criticalNonCompliantCountHasBeenSet = false;

    int m_securityNonCompliantCount{0};
    bool m_securityNonCompliantCountHasBeenSet = false;

    int m_otherNonCompliantCount{0};
    bool m_otherNonCompliantCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
