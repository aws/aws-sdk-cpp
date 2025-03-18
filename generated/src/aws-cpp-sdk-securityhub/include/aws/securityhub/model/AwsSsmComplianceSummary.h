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
   * <p>Provides the details about the compliance status for a patch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSsmComplianceSummary">AWS
   * API Reference</a></p>
   */
  class AwsSsmComplianceSummary
  {
  public:
    AWS_SECURITYHUB_API AwsSsmComplianceSummary() = default;
    AWS_SECURITYHUB_API AwsSsmComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSsmComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsSsmComplianceSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>CRITICAL</code>.</p>
     */
    inline int GetCompliantCriticalCount() const { return m_compliantCriticalCount; }
    inline bool CompliantCriticalCountHasBeenSet() const { return m_compliantCriticalCountHasBeenSet; }
    inline void SetCompliantCriticalCount(int value) { m_compliantCriticalCountHasBeenSet = true; m_compliantCriticalCount = value; }
    inline AwsSsmComplianceSummary& WithCompliantCriticalCount(int value) { SetCompliantCriticalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline int GetCompliantHighCount() const { return m_compliantHighCount; }
    inline bool CompliantHighCountHasBeenSet() const { return m_compliantHighCountHasBeenSet; }
    inline void SetCompliantHighCount(int value) { m_compliantHighCountHasBeenSet = true; m_compliantHighCount = value; }
    inline AwsSsmComplianceSummary& WithCompliantHighCount(int value) { SetCompliantHighCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline int GetCompliantMediumCount() const { return m_compliantMediumCount; }
    inline bool CompliantMediumCountHasBeenSet() const { return m_compliantMediumCountHasBeenSet; }
    inline void SetCompliantMediumCount(int value) { m_compliantMediumCountHasBeenSet = true; m_compliantMediumCount = value; }
    inline AwsSsmComplianceSummary& WithCompliantMediumCount(int value) { SetCompliantMediumCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline const Aws::String& GetExecutionType() const { return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    template<typename ExecutionTypeT = Aws::String>
    void SetExecutionType(ExecutionTypeT&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::forward<ExecutionTypeT>(value); }
    template<typename ExecutionTypeT = Aws::String>
    AwsSsmComplianceSummary& WithExecutionType(ExecutionTypeT&& value) { SetExecutionType(std::forward<ExecutionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patch items that are noncompliant, the number of items that have a
     * severity of <code>CRITICAL</code>.</p>
     */
    inline int GetNonCompliantCriticalCount() const { return m_nonCompliantCriticalCount; }
    inline bool NonCompliantCriticalCountHasBeenSet() const { return m_nonCompliantCriticalCountHasBeenSet; }
    inline void SetNonCompliantCriticalCount(int value) { m_nonCompliantCriticalCountHasBeenSet = true; m_nonCompliantCriticalCount = value; }
    inline AwsSsmComplianceSummary& WithNonCompliantCriticalCount(int value) { SetNonCompliantCriticalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline int GetCompliantInformationalCount() const { return m_compliantInformationalCount; }
    inline bool CompliantInformationalCountHasBeenSet() const { return m_compliantInformationalCountHasBeenSet; }
    inline void SetCompliantInformationalCount(int value) { m_compliantInformationalCountHasBeenSet = true; m_compliantInformationalCount = value; }
    inline AwsSsmComplianceSummary& WithCompliantInformationalCount(int value) { SetCompliantInformationalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline int GetNonCompliantInformationalCount() const { return m_nonCompliantInformationalCount; }
    inline bool NonCompliantInformationalCountHasBeenSet() const { return m_nonCompliantInformationalCountHasBeenSet; }
    inline void SetNonCompliantInformationalCount(int value) { m_nonCompliantInformationalCountHasBeenSet = true; m_nonCompliantInformationalCount = value; }
    inline AwsSsmComplianceSummary& WithNonCompliantInformationalCount(int value) { SetNonCompliantInformationalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline int GetCompliantUnspecifiedCount() const { return m_compliantUnspecifiedCount; }
    inline bool CompliantUnspecifiedCountHasBeenSet() const { return m_compliantUnspecifiedCountHasBeenSet; }
    inline void SetCompliantUnspecifiedCount(int value) { m_compliantUnspecifiedCountHasBeenSet = true; m_compliantUnspecifiedCount = value; }
    inline AwsSsmComplianceSummary& WithCompliantUnspecifiedCount(int value) { SetCompliantUnspecifiedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline int GetNonCompliantLowCount() const { return m_nonCompliantLowCount; }
    inline bool NonCompliantLowCountHasBeenSet() const { return m_nonCompliantLowCountHasBeenSet; }
    inline void SetNonCompliantLowCount(int value) { m_nonCompliantLowCountHasBeenSet = true; m_nonCompliantLowCount = value; }
    inline AwsSsmComplianceSummary& WithNonCompliantLowCount(int value) { SetNonCompliantLowCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline int GetNonCompliantHighCount() const { return m_nonCompliantHighCount; }
    inline bool NonCompliantHighCountHasBeenSet() const { return m_nonCompliantHighCountHasBeenSet; }
    inline void SetNonCompliantHighCount(int value) { m_nonCompliantHighCountHasBeenSet = true; m_nonCompliantHighCount = value; }
    inline AwsSsmComplianceSummary& WithNonCompliantHighCount(int value) { SetNonCompliantHighCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline int GetCompliantLowCount() const { return m_compliantLowCount; }
    inline bool CompliantLowCountHasBeenSet() const { return m_compliantLowCountHasBeenSet; }
    inline void SetCompliantLowCount(int value) { m_compliantLowCountHasBeenSet = true; m_compliantLowCount = value; }
    inline AwsSsmComplianceSummary& WithCompliantLowCount(int value) { SetCompliantLowCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    AwsSsmComplianceSummary& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline const Aws::String& GetPatchBaselineId() const { return m_patchBaselineId; }
    inline bool PatchBaselineIdHasBeenSet() const { return m_patchBaselineIdHasBeenSet; }
    template<typename PatchBaselineIdT = Aws::String>
    void SetPatchBaselineId(PatchBaselineIdT&& value) { m_patchBaselineIdHasBeenSet = true; m_patchBaselineId = std::forward<PatchBaselineIdT>(value); }
    template<typename PatchBaselineIdT = Aws::String>
    AwsSsmComplianceSummary& WithPatchBaselineId(PatchBaselineIdT&& value) { SetPatchBaselineId(std::forward<PatchBaselineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetOverallSeverity() const { return m_overallSeverity; }
    inline bool OverallSeverityHasBeenSet() const { return m_overallSeverityHasBeenSet; }
    template<typename OverallSeverityT = Aws::String>
    void SetOverallSeverity(OverallSeverityT&& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = std::forward<OverallSeverityT>(value); }
    template<typename OverallSeverityT = Aws::String>
    AwsSsmComplianceSummary& WithOverallSeverity(OverallSeverityT&& value) { SetOverallSeverity(std::forward<OverallSeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline int GetNonCompliantMediumCount() const { return m_nonCompliantMediumCount; }
    inline bool NonCompliantMediumCountHasBeenSet() const { return m_nonCompliantMediumCountHasBeenSet; }
    inline void SetNonCompliantMediumCount(int value) { m_nonCompliantMediumCountHasBeenSet = true; m_nonCompliantMediumCount = value; }
    inline AwsSsmComplianceSummary& WithNonCompliantMediumCount(int value) { SetNonCompliantMediumCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline int GetNonCompliantUnspecifiedCount() const { return m_nonCompliantUnspecifiedCount; }
    inline bool NonCompliantUnspecifiedCountHasBeenSet() const { return m_nonCompliantUnspecifiedCountHasBeenSet; }
    inline void SetNonCompliantUnspecifiedCount(int value) { m_nonCompliantUnspecifiedCountHasBeenSet = true; m_nonCompliantUnspecifiedCount = value; }
    inline AwsSsmComplianceSummary& WithNonCompliantUnspecifiedCount(int value) { SetNonCompliantUnspecifiedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline const Aws::String& GetPatchGroup() const { return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    template<typename PatchGroupT = Aws::String>
    void SetPatchGroup(PatchGroupT&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::forward<PatchGroupT>(value); }
    template<typename PatchGroupT = Aws::String>
    AwsSsmComplianceSummary& WithPatchGroup(PatchGroupT&& value) { SetPatchGroup(std::forward<PatchGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_compliantCriticalCount{0};
    bool m_compliantCriticalCountHasBeenSet = false;

    int m_compliantHighCount{0};
    bool m_compliantHighCountHasBeenSet = false;

    int m_compliantMediumCount{0};
    bool m_compliantMediumCountHasBeenSet = false;

    Aws::String m_executionType;
    bool m_executionTypeHasBeenSet = false;

    int m_nonCompliantCriticalCount{0};
    bool m_nonCompliantCriticalCountHasBeenSet = false;

    int m_compliantInformationalCount{0};
    bool m_compliantInformationalCountHasBeenSet = false;

    int m_nonCompliantInformationalCount{0};
    bool m_nonCompliantInformationalCountHasBeenSet = false;

    int m_compliantUnspecifiedCount{0};
    bool m_compliantUnspecifiedCountHasBeenSet = false;

    int m_nonCompliantLowCount{0};
    bool m_nonCompliantLowCountHasBeenSet = false;

    int m_nonCompliantHighCount{0};
    bool m_nonCompliantHighCountHasBeenSet = false;

    int m_compliantLowCount{0};
    bool m_compliantLowCountHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_patchBaselineId;
    bool m_patchBaselineIdHasBeenSet = false;

    Aws::String m_overallSeverity;
    bool m_overallSeverityHasBeenSet = false;

    int m_nonCompliantMediumCount{0};
    bool m_nonCompliantMediumCountHasBeenSet = false;

    int m_nonCompliantUnspecifiedCount{0};
    bool m_nonCompliantUnspecifiedCountHasBeenSet = false;

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
