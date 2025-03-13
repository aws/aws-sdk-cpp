/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides an overview of the patch compliance status for an instance against a
   * selected compliance standard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/PatchSummary">AWS
   * API Reference</a></p>
   */
  class PatchSummary
  {
  public:
    AWS_SECURITYHUB_API PatchSummary() = default;
    AWS_SECURITYHUB_API PatchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PatchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 256.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PatchSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches from the compliance standard that were installed
     * successfully.</p> <p>The value can be an integer from <code>0</code> to
     * <code>100000</code>.</p>
     */
    inline int GetInstalledCount() const { return m_installedCount; }
    inline bool InstalledCountHasBeenSet() const { return m_installedCountHasBeenSet; }
    inline void SetInstalledCount(int value) { m_installedCountHasBeenSet = true; m_installedCount = value; }
    inline PatchSummary& WithInstalledCount(int value) { SetInstalledCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches that are part of the compliance standard but are not
     * installed. The count includes patches that failed to install.</p> <p>The value
     * can be an integer from <code>0</code> to <code>100000</code>.</p>
     */
    inline int GetMissingCount() const { return m_missingCount; }
    inline bool MissingCountHasBeenSet() const { return m_missingCountHasBeenSet; }
    inline void SetMissingCount(int value) { m_missingCountHasBeenSet = true; m_missingCount = value; }
    inline PatchSummary& WithMissingCount(int value) { SetMissingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches from the compliance standard that failed to
     * install.</p> <p>The value can be an integer from <code>0</code> to
     * <code>100000</code>.</p>
     */
    inline int GetFailedCount() const { return m_failedCount; }
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }
    inline PatchSummary& WithFailedCount(int value) { SetFailedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of installed patches that are not part of the compliance
     * standard.</p> <p>The value can be an integer from <code>0</code> to
     * <code>100000</code>.</p>
     */
    inline int GetInstalledOtherCount() const { return m_installedOtherCount; }
    inline bool InstalledOtherCountHasBeenSet() const { return m_installedOtherCountHasBeenSet; }
    inline void SetInstalledOtherCount(int value) { m_installedOtherCountHasBeenSet = true; m_installedOtherCount = value; }
    inline PatchSummary& WithInstalledOtherCount(int value) { SetInstalledOtherCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches that are installed but are also on a list of patches
     * that the customer rejected.</p> <p>The value can be an integer from
     * <code>0</code> to <code>100000</code>.</p>
     */
    inline int GetInstalledRejectedCount() const { return m_installedRejectedCount; }
    inline bool InstalledRejectedCountHasBeenSet() const { return m_installedRejectedCountHasBeenSet; }
    inline void SetInstalledRejectedCount(int value) { m_installedRejectedCountHasBeenSet = true; m_installedRejectedCount = value; }
    inline PatchSummary& WithInstalledRejectedCount(int value) { SetInstalledRejectedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of patches that were applied, but that require the instance to be
     * rebooted in order to be marked as installed.</p> <p>The value can be an integer
     * from <code>0</code> to <code>100000</code>.</p>
     */
    inline int GetInstalledPendingReboot() const { return m_installedPendingReboot; }
    inline bool InstalledPendingRebootHasBeenSet() const { return m_installedPendingRebootHasBeenSet; }
    inline void SetInstalledPendingReboot(int value) { m_installedPendingRebootHasBeenSet = true; m_installedPendingReboot = value; }
    inline PatchSummary& WithInstalledPendingReboot(int value) { SetInstalledPendingReboot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the operation started.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetOperationStartTime() const { return m_operationStartTime; }
    inline bool OperationStartTimeHasBeenSet() const { return m_operationStartTimeHasBeenSet; }
    template<typename OperationStartTimeT = Aws::String>
    void SetOperationStartTime(OperationStartTimeT&& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = std::forward<OperationStartTimeT>(value); }
    template<typename OperationStartTimeT = Aws::String>
    PatchSummary& WithOperationStartTime(OperationStartTimeT&& value) { SetOperationStartTime(std::forward<OperationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the operation completed.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetOperationEndTime() const { return m_operationEndTime; }
    inline bool OperationEndTimeHasBeenSet() const { return m_operationEndTimeHasBeenSet; }
    template<typename OperationEndTimeT = Aws::String>
    void SetOperationEndTime(OperationEndTimeT&& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = std::forward<OperationEndTimeT>(value); }
    template<typename OperationEndTimeT = Aws::String>
    PatchSummary& WithOperationEndTime(OperationEndTimeT&& value) { SetOperationEndTime(std::forward<OperationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reboot option specified for the instance.</p> <p>Length Constraints:
     * Minimum length of 1. Maximum length of 256.</p>
     */
    inline const Aws::String& GetRebootOption() const { return m_rebootOption; }
    inline bool RebootOptionHasBeenSet() const { return m_rebootOptionHasBeenSet; }
    template<typename RebootOptionT = Aws::String>
    void SetRebootOption(RebootOptionT&& value) { m_rebootOptionHasBeenSet = true; m_rebootOption = std::forward<RebootOptionT>(value); }
    template<typename RebootOptionT = Aws::String>
    PatchSummary& WithRebootOption(RebootOptionT&& value) { SetRebootOption(std::forward<RebootOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>.</p> <p>Length Constraints: Minimum
     * length of 1. Maximum length of 256.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    PatchSummary& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_installedCount{0};
    bool m_installedCountHasBeenSet = false;

    int m_missingCount{0};
    bool m_missingCountHasBeenSet = false;

    int m_failedCount{0};
    bool m_failedCountHasBeenSet = false;

    int m_installedOtherCount{0};
    bool m_installedOtherCountHasBeenSet = false;

    int m_installedRejectedCount{0};
    bool m_installedRejectedCountHasBeenSet = false;

    int m_installedPendingReboot{0};
    bool m_installedPendingRebootHasBeenSet = false;

    Aws::String m_operationStartTime;
    bool m_operationStartTimeHasBeenSet = false;

    Aws::String m_operationEndTime;
    bool m_operationEndTimeHasBeenSet = false;

    Aws::String m_rebootOption;
    bool m_rebootOptionHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
