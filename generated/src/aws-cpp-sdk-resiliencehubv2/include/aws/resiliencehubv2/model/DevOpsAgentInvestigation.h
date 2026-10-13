/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DevOpsAgentConfidence.h>
#include <aws/resiliencehubv2/model/DevOpsAgentInvestigationStatus.h>
#include <aws/resiliencehubv2/model/DevOpsAgentVerdict.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>The result when DevOps Agent investigates a resilience test run. The verdict
 * is advisory and builds on the test run's own result, which remains
 * authoritative.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DevOpsAgentInvestigation">AWS
 * API Reference</a></p>
 */
class DevOpsAgentInvestigation {
 public:
  AWS_RESILIENCEHUBV2_API DevOpsAgentInvestigation() = default;
  AWS_RESILIENCEHUBV2_API DevOpsAgentInvestigation(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DevOpsAgentInvestigation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The investigation verdict. Valid values:</p> <ul> <li> <p>PASS - The
   * resilience test run passed.</p> </li> <li> <p>FAIL - The resilience test run
   * failed.</p> </li> <li> <p>INCONCLUSIVE - The investigation could not determine a
   * clear outcome.</p> </li> </ul>
   */
  inline DevOpsAgentVerdict GetVerdict() const { return m_verdict; }
  inline bool VerdictHasBeenSet() const { return m_verdictHasBeenSet; }
  inline void SetVerdict(DevOpsAgentVerdict value) {
    m_verdictHasBeenSet = true;
    m_verdict = value;
  }
  inline DevOpsAgentInvestigation& WithVerdict(DevOpsAgentVerdict value) {
    SetVerdict(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence level of the verdict. Valid values:</p> <ul> <li> <p>HIGH -
   * The verdict is highly reliable.</p> </li> <li> <p>MEDIUM - The verdict has
   * moderate reliability.</p> </li> <li> <p>LOW - The verdict has low
   * reliability.</p> </li> </ul>
   */
  inline DevOpsAgentConfidence GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(DevOpsAgentConfidence value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline DevOpsAgentInvestigation& WithConfidence(DevOpsAgentConfidence value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A deep link to the interactive DevOps Agent investigation session.</p>
   */
  inline const Aws::String& GetDeepLink() const { return m_deepLink; }
  inline bool DeepLinkHasBeenSet() const { return m_deepLinkHasBeenSet; }
  template <typename DeepLinkT = Aws::String>
  void SetDeepLink(DeepLinkT&& value) {
    m_deepLinkHasBeenSet = true;
    m_deepLink = std::forward<DeepLinkT>(value);
  }
  template <typename DeepLinkT = Aws::String>
  DevOpsAgentInvestigation& WithDeepLink(DeepLinkT&& value) {
    SetDeepLink(std::forward<DeepLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the investigation. Valid values:</p> <ul> <li>
   * <p>PENDING - The investigation has been created but has not started.</p> </li>
   * <li> <p>IN_PROGRESS - The investigation is running.</p> </li> <li> <p>COMPLETED
   * - The investigation finished successfully.</p> </li> <li> <p>FAILED - The
   * investigation failed to complete.</p> </li> <li> <p>TIMED_OUT - The
   * investigation did not complete within the allotted time.</p> </li> <li>
   * <p>CANCELED - The investigation was canceled.</p> </li> </ul>
   */
  inline DevOpsAgentInvestigationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DevOpsAgentInvestigationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DevOpsAgentInvestigation& WithStatus(DevOpsAgentInvestigationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DevOps Agent analysis summary for the investigation.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  DevOpsAgentInvestigation& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}
 private:
  DevOpsAgentVerdict m_verdict{DevOpsAgentVerdict::NOT_SET};

  DevOpsAgentConfidence m_confidence{DevOpsAgentConfidence::NOT_SET};

  Aws::String m_deepLink;

  DevOpsAgentInvestigationStatus m_status{DevOpsAgentInvestigationStatus::NOT_SET};

  Aws::String m_summary;
  bool m_verdictHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_deepLinkHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
