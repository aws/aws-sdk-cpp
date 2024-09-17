/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines an approval rule for a patch baseline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchRule">AWS API
   * Reference</a></p>
   */
  class PatchRule
  {
  public:
    AWS_SSM_API PatchRule();
    AWS_SSM_API PatchRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline const PatchFilterGroup& GetPatchFilterGroup() const{ return m_patchFilterGroup; }
    inline bool PatchFilterGroupHasBeenSet() const { return m_patchFilterGroupHasBeenSet; }
    inline void SetPatchFilterGroup(const PatchFilterGroup& value) { m_patchFilterGroupHasBeenSet = true; m_patchFilterGroup = value; }
    inline void SetPatchFilterGroup(PatchFilterGroup&& value) { m_patchFilterGroupHasBeenSet = true; m_patchFilterGroup = std::move(value); }
    inline PatchRule& WithPatchFilterGroup(const PatchFilterGroup& value) { SetPatchFilterGroup(value); return *this;}
    inline PatchRule& WithPatchFilterGroup(PatchFilterGroup&& value) { SetPatchFilterGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline const PatchComplianceLevel& GetComplianceLevel() const{ return m_complianceLevel; }
    inline bool ComplianceLevelHasBeenSet() const { return m_complianceLevelHasBeenSet; }
    inline void SetComplianceLevel(const PatchComplianceLevel& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = value; }
    inline void SetComplianceLevel(PatchComplianceLevel&& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = std::move(value); }
    inline PatchRule& WithComplianceLevel(const PatchComplianceLevel& value) { SetComplianceLevel(value); return *this;}
    inline PatchRule& WithComplianceLevel(PatchComplianceLevel&& value) { SetComplianceLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released.</p> <p>This parameter is marked as <code>Required: No</code>, but your
     * request must include a value for either <code>ApproveAfterDays</code> or
     * <code>ApproveUntilDate</code>.</p> <p>Not supported for Debian Server or Ubuntu
     * Server.</p>  <p>Use caution when setting this value for Windows
     * Server patch baselines. Because patch updates that are replaced by later updates
     * are removed, setting too broad a value for this parameter can result in crucial
     * patches not being installed. For more information, see the <b>Windows Server</b>
     * tab in the topic <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-selecting-patches.html">How
     * security patches are selected</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p> 
     */
    inline int GetApproveAfterDays() const{ return m_approveAfterDays; }
    inline bool ApproveAfterDaysHasBeenSet() const { return m_approveAfterDaysHasBeenSet; }
    inline void SetApproveAfterDays(int value) { m_approveAfterDaysHasBeenSet = true; m_approveAfterDays = value; }
    inline PatchRule& WithApproveAfterDays(int value) { SetApproveAfterDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically.</p> <p>Enter dates in the
     * format <code>YYYY-MM-DD</code>. For example, <code>2024-12-31</code>.</p>
     * <p>This parameter is marked as <code>Required: No</code>, but your request must
     * include a value for either <code>ApproveUntilDate</code> or
     * <code>ApproveAfterDays</code>.</p> <p>Not supported for Debian Server or Ubuntu
     * Server.</p>  <p>Use caution when setting this value for Windows
     * Server patch baselines. Because patch updates that are replaced by later updates
     * are removed, setting too broad a value for this parameter can result in crucial
     * patches not being installed. For more information, see the <b>Windows Server</b>
     * tab in the topic <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-selecting-patches.html">How
     * security patches are selected</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p> 
     */
    inline const Aws::String& GetApproveUntilDate() const{ return m_approveUntilDate; }
    inline bool ApproveUntilDateHasBeenSet() const { return m_approveUntilDateHasBeenSet; }
    inline void SetApproveUntilDate(const Aws::String& value) { m_approveUntilDateHasBeenSet = true; m_approveUntilDate = value; }
    inline void SetApproveUntilDate(Aws::String&& value) { m_approveUntilDateHasBeenSet = true; m_approveUntilDate = std::move(value); }
    inline void SetApproveUntilDate(const char* value) { m_approveUntilDateHasBeenSet = true; m_approveUntilDate.assign(value); }
    inline PatchRule& WithApproveUntilDate(const Aws::String& value) { SetApproveUntilDate(value); return *this;}
    inline PatchRule& WithApproveUntilDate(Aws::String&& value) { SetApproveUntilDate(std::move(value)); return *this;}
    inline PatchRule& WithApproveUntilDate(const char* value) { SetApproveUntilDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For managed nodes identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is <code>false</code>. Applies to Linux managed nodes
     * only.</p>
     */
    inline bool GetEnableNonSecurity() const{ return m_enableNonSecurity; }
    inline bool EnableNonSecurityHasBeenSet() const { return m_enableNonSecurityHasBeenSet; }
    inline void SetEnableNonSecurity(bool value) { m_enableNonSecurityHasBeenSet = true; m_enableNonSecurity = value; }
    inline PatchRule& WithEnableNonSecurity(bool value) { SetEnableNonSecurity(value); return *this;}
    ///@}
  private:

    PatchFilterGroup m_patchFilterGroup;
    bool m_patchFilterGroupHasBeenSet = false;

    PatchComplianceLevel m_complianceLevel;
    bool m_complianceLevelHasBeenSet = false;

    int m_approveAfterDays;
    bool m_approveAfterDaysHasBeenSet = false;

    Aws::String m_approveUntilDate;
    bool m_approveUntilDateHasBeenSet = false;

    bool m_enableNonSecurity;
    bool m_enableNonSecurityHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
