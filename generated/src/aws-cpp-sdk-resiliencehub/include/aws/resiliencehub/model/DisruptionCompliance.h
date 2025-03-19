/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines the compliance against the resiliency policy for a
   * disruption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DisruptionCompliance">AWS
   * API Reference</a></p>
   */
  class DisruptionCompliance
  {
  public:
    AWS_RESILIENCEHUB_API DisruptionCompliance() = default;
    AWS_RESILIENCEHUB_API DisruptionCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API DisruptionCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Recovery Point Objective (RPO) that is achievable, in seconds.</p>
     */
    inline int GetAchievableRpoInSecs() const { return m_achievableRpoInSecs; }
    inline bool AchievableRpoInSecsHasBeenSet() const { return m_achievableRpoInSecsHasBeenSet; }
    inline void SetAchievableRpoInSecs(int value) { m_achievableRpoInSecsHasBeenSet = true; m_achievableRpoInSecs = value; }
    inline DisruptionCompliance& WithAchievableRpoInSecs(int value) { SetAchievableRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recovery Time Objective (RTO) that is achievable, in seconds</p>
     */
    inline int GetAchievableRtoInSecs() const { return m_achievableRtoInSecs; }
    inline bool AchievableRtoInSecsHasBeenSet() const { return m_achievableRtoInSecsHasBeenSet; }
    inline void SetAchievableRtoInSecs(int value) { m_achievableRtoInSecsHasBeenSet = true; m_achievableRtoInSecs = value; }
    inline DisruptionCompliance& WithAchievableRtoInSecs(int value) { SetAchievableRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline ComplianceStatus GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(ComplianceStatus value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline DisruptionCompliance& WithComplianceStatus(ComplianceStatus value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current RPO, in seconds.</p>
     */
    inline int GetCurrentRpoInSecs() const { return m_currentRpoInSecs; }
    inline bool CurrentRpoInSecsHasBeenSet() const { return m_currentRpoInSecsHasBeenSet; }
    inline void SetCurrentRpoInSecs(int value) { m_currentRpoInSecsHasBeenSet = true; m_currentRpoInSecs = value; }
    inline DisruptionCompliance& WithCurrentRpoInSecs(int value) { SetCurrentRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current RTO, in seconds.</p>
     */
    inline int GetCurrentRtoInSecs() const { return m_currentRtoInSecs; }
    inline bool CurrentRtoInSecsHasBeenSet() const { return m_currentRtoInSecsHasBeenSet; }
    inline void SetCurrentRtoInSecs(int value) { m_currentRtoInSecsHasBeenSet = true; m_currentRtoInSecs = value; }
    inline DisruptionCompliance& WithCurrentRtoInSecs(int value) { SetCurrentRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disruption compliance message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DisruptionCompliance& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RPO description.</p>
     */
    inline const Aws::String& GetRpoDescription() const { return m_rpoDescription; }
    inline bool RpoDescriptionHasBeenSet() const { return m_rpoDescriptionHasBeenSet; }
    template<typename RpoDescriptionT = Aws::String>
    void SetRpoDescription(RpoDescriptionT&& value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription = std::forward<RpoDescriptionT>(value); }
    template<typename RpoDescriptionT = Aws::String>
    DisruptionCompliance& WithRpoDescription(RpoDescriptionT&& value) { SetRpoDescription(std::forward<RpoDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the RPO .</p>
     */
    inline const Aws::String& GetRpoReferenceId() const { return m_rpoReferenceId; }
    inline bool RpoReferenceIdHasBeenSet() const { return m_rpoReferenceIdHasBeenSet; }
    template<typename RpoReferenceIdT = Aws::String>
    void SetRpoReferenceId(RpoReferenceIdT&& value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId = std::forward<RpoReferenceIdT>(value); }
    template<typename RpoReferenceIdT = Aws::String>
    DisruptionCompliance& WithRpoReferenceId(RpoReferenceIdT&& value) { SetRpoReferenceId(std::forward<RpoReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RTO description.</p>
     */
    inline const Aws::String& GetRtoDescription() const { return m_rtoDescription; }
    inline bool RtoDescriptionHasBeenSet() const { return m_rtoDescriptionHasBeenSet; }
    template<typename RtoDescriptionT = Aws::String>
    void SetRtoDescription(RtoDescriptionT&& value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription = std::forward<RtoDescriptionT>(value); }
    template<typename RtoDescriptionT = Aws::String>
    DisruptionCompliance& WithRtoDescription(RtoDescriptionT&& value) { SetRtoDescription(std::forward<RtoDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the RTO.</p>
     */
    inline const Aws::String& GetRtoReferenceId() const { return m_rtoReferenceId; }
    inline bool RtoReferenceIdHasBeenSet() const { return m_rtoReferenceIdHasBeenSet; }
    template<typename RtoReferenceIdT = Aws::String>
    void SetRtoReferenceId(RtoReferenceIdT&& value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId = std::forward<RtoReferenceIdT>(value); }
    template<typename RtoReferenceIdT = Aws::String>
    DisruptionCompliance& WithRtoReferenceId(RtoReferenceIdT&& value) { SetRtoReferenceId(std::forward<RtoReferenceIdT>(value)); return *this;}
    ///@}
  private:

    int m_achievableRpoInSecs{0};
    bool m_achievableRpoInSecsHasBeenSet = false;

    int m_achievableRtoInSecs{0};
    bool m_achievableRtoInSecsHasBeenSet = false;

    ComplianceStatus m_complianceStatus{ComplianceStatus::NOT_SET};
    bool m_complianceStatusHasBeenSet = false;

    int m_currentRpoInSecs{0};
    bool m_currentRpoInSecsHasBeenSet = false;

    int m_currentRtoInSecs{0};
    bool m_currentRtoInSecsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_rpoDescription;
    bool m_rpoDescriptionHasBeenSet = false;

    Aws::String m_rpoReferenceId;
    bool m_rpoReferenceIdHasBeenSet = false;

    Aws::String m_rtoDescription;
    bool m_rtoDescriptionHasBeenSet = false;

    Aws::String m_rtoReferenceId;
    bool m_rtoReferenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
