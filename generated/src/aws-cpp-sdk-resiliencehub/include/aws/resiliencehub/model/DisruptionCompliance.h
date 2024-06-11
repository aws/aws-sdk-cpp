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
    AWS_RESILIENCEHUB_API DisruptionCompliance();
    AWS_RESILIENCEHUB_API DisruptionCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API DisruptionCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Recovery Point Objective (RPO) that is achievable, in seconds.</p>
     */
    inline int GetAchievableRpoInSecs() const{ return m_achievableRpoInSecs; }
    inline bool AchievableRpoInSecsHasBeenSet() const { return m_achievableRpoInSecsHasBeenSet; }
    inline void SetAchievableRpoInSecs(int value) { m_achievableRpoInSecsHasBeenSet = true; m_achievableRpoInSecs = value; }
    inline DisruptionCompliance& WithAchievableRpoInSecs(int value) { SetAchievableRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recovery Time Objective (RTO) that is achievable, in seconds</p>
     */
    inline int GetAchievableRtoInSecs() const{ return m_achievableRtoInSecs; }
    inline bool AchievableRtoInSecsHasBeenSet() const { return m_achievableRtoInSecsHasBeenSet; }
    inline void SetAchievableRtoInSecs(int value) { m_achievableRtoInSecsHasBeenSet = true; m_achievableRtoInSecs = value; }
    inline DisruptionCompliance& WithAchievableRtoInSecs(int value) { SetAchievableRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline const ComplianceStatus& GetComplianceStatus() const{ return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(const ComplianceStatus& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline void SetComplianceStatus(ComplianceStatus&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }
    inline DisruptionCompliance& WithComplianceStatus(const ComplianceStatus& value) { SetComplianceStatus(value); return *this;}
    inline DisruptionCompliance& WithComplianceStatus(ComplianceStatus&& value) { SetComplianceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current RPO, in seconds.</p>
     */
    inline int GetCurrentRpoInSecs() const{ return m_currentRpoInSecs; }
    inline bool CurrentRpoInSecsHasBeenSet() const { return m_currentRpoInSecsHasBeenSet; }
    inline void SetCurrentRpoInSecs(int value) { m_currentRpoInSecsHasBeenSet = true; m_currentRpoInSecs = value; }
    inline DisruptionCompliance& WithCurrentRpoInSecs(int value) { SetCurrentRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current RTO, in seconds.</p>
     */
    inline int GetCurrentRtoInSecs() const{ return m_currentRtoInSecs; }
    inline bool CurrentRtoInSecsHasBeenSet() const { return m_currentRtoInSecsHasBeenSet; }
    inline void SetCurrentRtoInSecs(int value) { m_currentRtoInSecsHasBeenSet = true; m_currentRtoInSecs = value; }
    inline DisruptionCompliance& WithCurrentRtoInSecs(int value) { SetCurrentRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disruption compliance message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DisruptionCompliance& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DisruptionCompliance& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DisruptionCompliance& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RPO description.</p>
     */
    inline const Aws::String& GetRpoDescription() const{ return m_rpoDescription; }
    inline bool RpoDescriptionHasBeenSet() const { return m_rpoDescriptionHasBeenSet; }
    inline void SetRpoDescription(const Aws::String& value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription = value; }
    inline void SetRpoDescription(Aws::String&& value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription = std::move(value); }
    inline void SetRpoDescription(const char* value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription.assign(value); }
    inline DisruptionCompliance& WithRpoDescription(const Aws::String& value) { SetRpoDescription(value); return *this;}
    inline DisruptionCompliance& WithRpoDescription(Aws::String&& value) { SetRpoDescription(std::move(value)); return *this;}
    inline DisruptionCompliance& WithRpoDescription(const char* value) { SetRpoDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the RPO .</p>
     */
    inline const Aws::String& GetRpoReferenceId() const{ return m_rpoReferenceId; }
    inline bool RpoReferenceIdHasBeenSet() const { return m_rpoReferenceIdHasBeenSet; }
    inline void SetRpoReferenceId(const Aws::String& value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId = value; }
    inline void SetRpoReferenceId(Aws::String&& value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId = std::move(value); }
    inline void SetRpoReferenceId(const char* value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId.assign(value); }
    inline DisruptionCompliance& WithRpoReferenceId(const Aws::String& value) { SetRpoReferenceId(value); return *this;}
    inline DisruptionCompliance& WithRpoReferenceId(Aws::String&& value) { SetRpoReferenceId(std::move(value)); return *this;}
    inline DisruptionCompliance& WithRpoReferenceId(const char* value) { SetRpoReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RTO description.</p>
     */
    inline const Aws::String& GetRtoDescription() const{ return m_rtoDescription; }
    inline bool RtoDescriptionHasBeenSet() const { return m_rtoDescriptionHasBeenSet; }
    inline void SetRtoDescription(const Aws::String& value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription = value; }
    inline void SetRtoDescription(Aws::String&& value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription = std::move(value); }
    inline void SetRtoDescription(const char* value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription.assign(value); }
    inline DisruptionCompliance& WithRtoDescription(const Aws::String& value) { SetRtoDescription(value); return *this;}
    inline DisruptionCompliance& WithRtoDescription(Aws::String&& value) { SetRtoDescription(std::move(value)); return *this;}
    inline DisruptionCompliance& WithRtoDescription(const char* value) { SetRtoDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the RTO.</p>
     */
    inline const Aws::String& GetRtoReferenceId() const{ return m_rtoReferenceId; }
    inline bool RtoReferenceIdHasBeenSet() const { return m_rtoReferenceIdHasBeenSet; }
    inline void SetRtoReferenceId(const Aws::String& value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId = value; }
    inline void SetRtoReferenceId(Aws::String&& value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId = std::move(value); }
    inline void SetRtoReferenceId(const char* value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId.assign(value); }
    inline DisruptionCompliance& WithRtoReferenceId(const Aws::String& value) { SetRtoReferenceId(value); return *this;}
    inline DisruptionCompliance& WithRtoReferenceId(Aws::String&& value) { SetRtoReferenceId(std::move(value)); return *this;}
    inline DisruptionCompliance& WithRtoReferenceId(const char* value) { SetRtoReferenceId(value); return *this;}
    ///@}
  private:

    int m_achievableRpoInSecs;
    bool m_achievableRpoInSecsHasBeenSet = false;

    int m_achievableRtoInSecs;
    bool m_achievableRtoInSecsHasBeenSet = false;

    ComplianceStatus m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    int m_currentRpoInSecs;
    bool m_currentRpoInSecsHasBeenSet = false;

    int m_currentRtoInSecs;
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
