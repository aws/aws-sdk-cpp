/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchComplianceDataState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about the state of a patch on a particular managed node as it
   * relates to the patch baseline used to patch the node.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchComplianceData">AWS
   * API Reference</a></p>
   */
  class PatchComplianceData
  {
  public:
    AWS_SSM_API PatchComplianceData() = default;
    AWS_SSM_API PatchComplianceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchComplianceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the patch.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    PatchComplianceData& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system-specific ID of the patch.</p>
     */
    inline const Aws::String& GetKBId() const { return m_kBId; }
    inline bool KBIdHasBeenSet() const { return m_kBIdHasBeenSet; }
    template<typename KBIdT = Aws::String>
    void SetKBId(KBIdT&& value) { m_kBIdHasBeenSet = true; m_kBId = std::forward<KBIdT>(value); }
    template<typename KBIdT = Aws::String>
    PatchComplianceData& WithKBId(KBIdT&& value) { SetKBId(std::forward<KBIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of the patch, such as <code>SecurityUpdates</code>,
     * <code>Updates</code>, and <code>CriticalUpdates</code>.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    PatchComplianceData& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the patch such as <code>Critical</code>,
     * <code>Important</code>, and <code>Moderate</code>.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    PatchComplianceData& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the patch on the managed node, such as INSTALLED or FAILED.</p>
     * <p>For descriptions of each patch state, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/compliance-about.html#compliance-monitor-patch">About
     * patch compliance</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline PatchComplianceDataState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(PatchComplianceDataState value) { m_stateHasBeenSet = true; m_state = value; }
    inline PatchComplianceData& WithState(PatchComplianceDataState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date/time the patch was installed on the managed node. Not all operating
     * systems provide this level of information.</p>
     */
    inline const Aws::Utils::DateTime& GetInstalledTime() const { return m_installedTime; }
    inline bool InstalledTimeHasBeenSet() const { return m_installedTimeHasBeenSet; }
    template<typename InstalledTimeT = Aws::Utils::DateTime>
    void SetInstalledTime(InstalledTimeT&& value) { m_installedTimeHasBeenSet = true; m_installedTime = std::forward<InstalledTimeT>(value); }
    template<typename InstalledTimeT = Aws::Utils::DateTime>
    PatchComplianceData& WithInstalledTime(InstalledTimeT&& value) { SetInstalledTime(std::forward<InstalledTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more Common Vulnerabilities and Exposure (CVE) issues that
     * are resolved by the patch.</p>  <p>Currently, CVE ID values are reported
     * only for patches with a status of <code>Missing</code> or
     * <code>Failed</code>.</p> 
     */
    inline const Aws::String& GetCVEIds() const { return m_cVEIds; }
    inline bool CVEIdsHasBeenSet() const { return m_cVEIdsHasBeenSet; }
    template<typename CVEIdsT = Aws::String>
    void SetCVEIds(CVEIdsT&& value) { m_cVEIdsHasBeenSet = true; m_cVEIds = std::forward<CVEIdsT>(value); }
    template<typename CVEIdsT = Aws::String>
    PatchComplianceData& WithCVEIds(CVEIdsT&& value) { SetCVEIds(std::forward<CVEIdsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_kBId;
    bool m_kBIdHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    PatchComplianceDataState m_state{PatchComplianceDataState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_installedTime{};
    bool m_installedTimeHasBeenSet = false;

    Aws::String m_cVEIds;
    bool m_cVEIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
