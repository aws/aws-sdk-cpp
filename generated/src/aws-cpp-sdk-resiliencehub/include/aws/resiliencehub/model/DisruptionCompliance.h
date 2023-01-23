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


    /**
     * <p>The Recovery Point Objective (RPO) that is achievable, in seconds.</p>
     */
    inline int GetAchievableRpoInSecs() const{ return m_achievableRpoInSecs; }

    /**
     * <p>The Recovery Point Objective (RPO) that is achievable, in seconds.</p>
     */
    inline bool AchievableRpoInSecsHasBeenSet() const { return m_achievableRpoInSecsHasBeenSet; }

    /**
     * <p>The Recovery Point Objective (RPO) that is achievable, in seconds.</p>
     */
    inline void SetAchievableRpoInSecs(int value) { m_achievableRpoInSecsHasBeenSet = true; m_achievableRpoInSecs = value; }

    /**
     * <p>The Recovery Point Objective (RPO) that is achievable, in seconds.</p>
     */
    inline DisruptionCompliance& WithAchievableRpoInSecs(int value) { SetAchievableRpoInSecs(value); return *this;}


    /**
     * <p>The Recovery Time Objective (RTO) that is achievable, in seconds</p>
     */
    inline int GetAchievableRtoInSecs() const{ return m_achievableRtoInSecs; }

    /**
     * <p>The Recovery Time Objective (RTO) that is achievable, in seconds</p>
     */
    inline bool AchievableRtoInSecsHasBeenSet() const { return m_achievableRtoInSecsHasBeenSet; }

    /**
     * <p>The Recovery Time Objective (RTO) that is achievable, in seconds</p>
     */
    inline void SetAchievableRtoInSecs(int value) { m_achievableRtoInSecsHasBeenSet = true; m_achievableRtoInSecs = value; }

    /**
     * <p>The Recovery Time Objective (RTO) that is achievable, in seconds</p>
     */
    inline DisruptionCompliance& WithAchievableRtoInSecs(int value) { SetAchievableRtoInSecs(value); return *this;}


    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline const ComplianceStatus& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(const ComplianceStatus& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(ComplianceStatus&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline DisruptionCompliance& WithComplianceStatus(const ComplianceStatus& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline DisruptionCompliance& WithComplianceStatus(ComplianceStatus&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>The current RPO, in seconds.</p>
     */
    inline int GetCurrentRpoInSecs() const{ return m_currentRpoInSecs; }

    /**
     * <p>The current RPO, in seconds.</p>
     */
    inline bool CurrentRpoInSecsHasBeenSet() const { return m_currentRpoInSecsHasBeenSet; }

    /**
     * <p>The current RPO, in seconds.</p>
     */
    inline void SetCurrentRpoInSecs(int value) { m_currentRpoInSecsHasBeenSet = true; m_currentRpoInSecs = value; }

    /**
     * <p>The current RPO, in seconds.</p>
     */
    inline DisruptionCompliance& WithCurrentRpoInSecs(int value) { SetCurrentRpoInSecs(value); return *this;}


    /**
     * <p>The current RTO, in seconds.</p>
     */
    inline int GetCurrentRtoInSecs() const{ return m_currentRtoInSecs; }

    /**
     * <p>The current RTO, in seconds.</p>
     */
    inline bool CurrentRtoInSecsHasBeenSet() const { return m_currentRtoInSecsHasBeenSet; }

    /**
     * <p>The current RTO, in seconds.</p>
     */
    inline void SetCurrentRtoInSecs(int value) { m_currentRtoInSecsHasBeenSet = true; m_currentRtoInSecs = value; }

    /**
     * <p>The current RTO, in seconds.</p>
     */
    inline DisruptionCompliance& WithCurrentRtoInSecs(int value) { SetCurrentRtoInSecs(value); return *this;}


    /**
     * <p>The disruption compliance message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The disruption compliance message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The disruption compliance message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The disruption compliance message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The disruption compliance message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The disruption compliance message.</p>
     */
    inline DisruptionCompliance& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The disruption compliance message.</p>
     */
    inline DisruptionCompliance& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The disruption compliance message.</p>
     */
    inline DisruptionCompliance& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The RPO description.</p>
     */
    inline const Aws::String& GetRpoDescription() const{ return m_rpoDescription; }

    /**
     * <p>The RPO description.</p>
     */
    inline bool RpoDescriptionHasBeenSet() const { return m_rpoDescriptionHasBeenSet; }

    /**
     * <p>The RPO description.</p>
     */
    inline void SetRpoDescription(const Aws::String& value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription = value; }

    /**
     * <p>The RPO description.</p>
     */
    inline void SetRpoDescription(Aws::String&& value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription = std::move(value); }

    /**
     * <p>The RPO description.</p>
     */
    inline void SetRpoDescription(const char* value) { m_rpoDescriptionHasBeenSet = true; m_rpoDescription.assign(value); }

    /**
     * <p>The RPO description.</p>
     */
    inline DisruptionCompliance& WithRpoDescription(const Aws::String& value) { SetRpoDescription(value); return *this;}

    /**
     * <p>The RPO description.</p>
     */
    inline DisruptionCompliance& WithRpoDescription(Aws::String&& value) { SetRpoDescription(std::move(value)); return *this;}

    /**
     * <p>The RPO description.</p>
     */
    inline DisruptionCompliance& WithRpoDescription(const char* value) { SetRpoDescription(value); return *this;}


    /**
     * <p>The RPO reference identifier.</p>
     */
    inline const Aws::String& GetRpoReferenceId() const{ return m_rpoReferenceId; }

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline bool RpoReferenceIdHasBeenSet() const { return m_rpoReferenceIdHasBeenSet; }

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline void SetRpoReferenceId(const Aws::String& value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId = value; }

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline void SetRpoReferenceId(Aws::String&& value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId = std::move(value); }

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline void SetRpoReferenceId(const char* value) { m_rpoReferenceIdHasBeenSet = true; m_rpoReferenceId.assign(value); }

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline DisruptionCompliance& WithRpoReferenceId(const Aws::String& value) { SetRpoReferenceId(value); return *this;}

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline DisruptionCompliance& WithRpoReferenceId(Aws::String&& value) { SetRpoReferenceId(std::move(value)); return *this;}

    /**
     * <p>The RPO reference identifier.</p>
     */
    inline DisruptionCompliance& WithRpoReferenceId(const char* value) { SetRpoReferenceId(value); return *this;}


    /**
     * <p>The RTO description.</p>
     */
    inline const Aws::String& GetRtoDescription() const{ return m_rtoDescription; }

    /**
     * <p>The RTO description.</p>
     */
    inline bool RtoDescriptionHasBeenSet() const { return m_rtoDescriptionHasBeenSet; }

    /**
     * <p>The RTO description.</p>
     */
    inline void SetRtoDescription(const Aws::String& value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription = value; }

    /**
     * <p>The RTO description.</p>
     */
    inline void SetRtoDescription(Aws::String&& value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription = std::move(value); }

    /**
     * <p>The RTO description.</p>
     */
    inline void SetRtoDescription(const char* value) { m_rtoDescriptionHasBeenSet = true; m_rtoDescription.assign(value); }

    /**
     * <p>The RTO description.</p>
     */
    inline DisruptionCompliance& WithRtoDescription(const Aws::String& value) { SetRtoDescription(value); return *this;}

    /**
     * <p>The RTO description.</p>
     */
    inline DisruptionCompliance& WithRtoDescription(Aws::String&& value) { SetRtoDescription(std::move(value)); return *this;}

    /**
     * <p>The RTO description.</p>
     */
    inline DisruptionCompliance& WithRtoDescription(const char* value) { SetRtoDescription(value); return *this;}


    /**
     * <p>The RTO reference identifier.</p>
     */
    inline const Aws::String& GetRtoReferenceId() const{ return m_rtoReferenceId; }

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline bool RtoReferenceIdHasBeenSet() const { return m_rtoReferenceIdHasBeenSet; }

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline void SetRtoReferenceId(const Aws::String& value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId = value; }

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline void SetRtoReferenceId(Aws::String&& value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId = std::move(value); }

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline void SetRtoReferenceId(const char* value) { m_rtoReferenceIdHasBeenSet = true; m_rtoReferenceId.assign(value); }

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline DisruptionCompliance& WithRtoReferenceId(const Aws::String& value) { SetRtoReferenceId(value); return *this;}

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline DisruptionCompliance& WithRtoReferenceId(Aws::String&& value) { SetRtoReferenceId(std::move(value)); return *this;}

    /**
     * <p>The RTO reference identifier.</p>
     */
    inline DisruptionCompliance& WithRtoReferenceId(const char* value) { SetRtoReferenceId(value); return *this;}

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
