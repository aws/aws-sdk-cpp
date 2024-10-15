/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppAssessmentScheduleType.h>
#include <aws/resiliencehub/model/AppComplianceStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/AppDriftStatusType.h>
#include <aws/resiliencehub/model/AppStatusType.h>
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
   * <p>Defines an application summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppSummary">AWS
   * API Reference</a></p>
   */
  class AppSummary
  {
  public:
    AWS_RESILIENCEHUB_API AppSummary();
    AWS_RESILIENCEHUB_API AppSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AppSummary& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline AppSummary& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline AppSummary& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline const AppAssessmentScheduleType& GetAssessmentSchedule() const{ return m_assessmentSchedule; }
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }
    inline void SetAssessmentSchedule(const AppAssessmentScheduleType& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }
    inline void SetAssessmentSchedule(AppAssessmentScheduleType&& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = std::move(value); }
    inline AppSummary& WithAssessmentSchedule(const AppAssessmentScheduleType& value) { SetAssessmentSchedule(value); return *this;}
    inline AppSummary& WithAssessmentSchedule(AppAssessmentScheduleType&& value) { SetAssessmentSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of Resource Groups group that is integrated with
     * an AppRegistry application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAwsApplicationArn() const{ return m_awsApplicationArn; }
    inline bool AwsApplicationArnHasBeenSet() const { return m_awsApplicationArnHasBeenSet; }
    inline void SetAwsApplicationArn(const Aws::String& value) { m_awsApplicationArnHasBeenSet = true; m_awsApplicationArn = value; }
    inline void SetAwsApplicationArn(Aws::String&& value) { m_awsApplicationArnHasBeenSet = true; m_awsApplicationArn = std::move(value); }
    inline void SetAwsApplicationArn(const char* value) { m_awsApplicationArnHasBeenSet = true; m_awsApplicationArn.assign(value); }
    inline AppSummary& WithAwsApplicationArn(const Aws::String& value) { SetAwsApplicationArn(value); return *this;}
    inline AppSummary& WithAwsApplicationArn(Aws::String&& value) { SetAwsApplicationArn(std::move(value)); return *this;}
    inline AppSummary& WithAwsApplicationArn(const char* value) { SetAwsApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline const AppComplianceStatusType& GetComplianceStatus() const{ return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(const AppComplianceStatusType& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline void SetComplianceStatus(AppComplianceStatusType&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }
    inline AppSummary& WithComplianceStatus(const AppComplianceStatusType& value) { SetComplianceStatus(value); return *this;}
    inline AppSummary& WithComplianceStatus(AppComplianceStatusType&& value) { SetComplianceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the app was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AppSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AppSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for an app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AppSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AppSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AppSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline const AppDriftStatusType& GetDriftStatus() const{ return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(const AppDriftStatusType& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline void SetDriftStatus(AppDriftStatusType&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }
    inline AppSummary& WithDriftStatus(const AppDriftStatusType& value) { SetDriftStatus(value); return *this;}
    inline AppSummary& WithDriftStatus(AppDriftStatusType&& value) { SetDriftStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time of the most recent compliance evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAppComplianceEvaluationTime() const{ return m_lastAppComplianceEvaluationTime; }
    inline bool LastAppComplianceEvaluationTimeHasBeenSet() const { return m_lastAppComplianceEvaluationTimeHasBeenSet; }
    inline void SetLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = value; }
    inline void SetLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = std::move(value); }
    inline AppSummary& WithLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { SetLastAppComplianceEvaluationTime(value); return *this;}
    inline AppSummary& WithLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { SetLastAppComplianceEvaluationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const{ return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline AppSummary& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline int GetRpoInSecs() const{ return m_rpoInSecs; }
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }
    inline AppSummary& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline int GetRtoInSecs() const{ return m_rtoInSecs; }
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }
    inline AppSummary& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline const AppStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AppStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AppStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AppSummary& WithStatus(const AppStatusType& value) { SetStatus(value); return *this;}
    inline AppSummary& WithStatus(AppStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    AppAssessmentScheduleType m_assessmentSchedule;
    bool m_assessmentScheduleHasBeenSet = false;

    Aws::String m_awsApplicationArn;
    bool m_awsApplicationArnHasBeenSet = false;

    AppComplianceStatusType m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AppDriftStatusType m_driftStatus;
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastAppComplianceEvaluationTime;
    bool m_lastAppComplianceEvaluationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    int m_rpoInSecs;
    bool m_rpoInSecsHasBeenSet = false;

    int m_rtoInSecs;
    bool m_rtoInSecsHasBeenSet = false;

    AppStatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
