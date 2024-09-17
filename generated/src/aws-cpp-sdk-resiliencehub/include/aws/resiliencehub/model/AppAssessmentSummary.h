/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AssessmentStatus.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
#include <aws/resiliencehub/model/Cost.h>
#include <aws/resiliencehub/model/DriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/AssessmentInvoker.h>
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
   * <p>Defines an application assessment summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppAssessmentSummary">AWS
   * API Reference</a></p>
   */
  class AppAssessmentSummary
  {
  public:
    AWS_RESILIENCEHUB_API AppAssessmentSummary();
    AWS_RESILIENCEHUB_API AppAssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppAssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline AppAssessmentSummary& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline AppAssessmentSummary& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline AppAssessmentSummary& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of an application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }
    inline AppAssessmentSummary& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline AppAssessmentSummary& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline AppAssessmentSummary& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }
    inline AppAssessmentSummary& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}
    inline AppAssessmentSummary& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}
    inline AppAssessmentSummary& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the assessment.</p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }
    inline AppAssessmentSummary& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}
    inline AppAssessmentSummary& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}
    inline AppAssessmentSummary& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline const AssessmentStatus& GetAssessmentStatus() const{ return m_assessmentStatus; }
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
    inline void SetAssessmentStatus(const AssessmentStatus& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }
    inline void SetAssessmentStatus(AssessmentStatus&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = std::move(value); }
    inline AppAssessmentSummary& WithAssessmentStatus(const AssessmentStatus& value) { SetAssessmentStatus(value); return *this;}
    inline AppAssessmentSummary& WithAssessmentStatus(AssessmentStatus&& value) { SetAssessmentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline const ComplianceStatus& GetComplianceStatus() const{ return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(const ComplianceStatus& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline void SetComplianceStatus(ComplianceStatus&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }
    inline AppAssessmentSummary& WithComplianceStatus(const ComplianceStatus& value) { SetComplianceStatus(value); return *this;}
    inline AppAssessmentSummary& WithComplianceStatus(ComplianceStatus&& value) { SetComplianceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost for an application.</p>
     */
    inline const Cost& GetCost() const{ return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    inline void SetCost(const Cost& value) { m_costHasBeenSet = true; m_cost = value; }
    inline void SetCost(Cost&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }
    inline AppAssessmentSummary& WithCost(const Cost& value) { SetCost(value); return *this;}
    inline AppAssessmentSummary& WithCost(Cost&& value) { SetCost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline const DriftStatus& GetDriftStatus() const{ return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(const DriftStatus& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline void SetDriftStatus(DriftStatus&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }
    inline AppAssessmentSummary& WithDriftStatus(const DriftStatus& value) { SetDriftStatus(value); return *this;}
    inline AppAssessmentSummary& WithDriftStatus(DriftStatus&& value) { SetDriftStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>End time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AppAssessmentSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AppAssessmentSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entity that invoked the assessment.</p>
     */
    inline const AssessmentInvoker& GetInvoker() const{ return m_invoker; }
    inline bool InvokerHasBeenSet() const { return m_invokerHasBeenSet; }
    inline void SetInvoker(const AssessmentInvoker& value) { m_invokerHasBeenSet = true; m_invoker = value; }
    inline void SetInvoker(AssessmentInvoker&& value) { m_invokerHasBeenSet = true; m_invoker = std::move(value); }
    inline AppAssessmentSummary& WithInvoker(const AssessmentInvoker& value) { SetInvoker(value); return *this;}
    inline AppAssessmentSummary& WithInvoker(AssessmentInvoker&& value) { SetInvoker(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message from the assessment run.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AppAssessmentSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AppAssessmentSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AppAssessmentSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const{ return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline AppAssessmentSummary& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Starting time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AppAssessmentSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AppAssessmentSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of an application version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline AppAssessmentSummary& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline AppAssessmentSummary& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline AppAssessmentSummary& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    AssessmentStatus m_assessmentStatus;
    bool m_assessmentStatusHasBeenSet = false;

    ComplianceStatus m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    Cost m_cost;
    bool m_costHasBeenSet = false;

    DriftStatus m_driftStatus;
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    AssessmentInvoker m_invoker;
    bool m_invokerHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    double m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
