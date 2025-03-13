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
    AWS_RESILIENCEHUB_API AppSummary() = default;
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
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    AppSummary& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline AppAssessmentScheduleType GetAssessmentSchedule() const { return m_assessmentSchedule; }
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }
    inline void SetAssessmentSchedule(AppAssessmentScheduleType value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }
    inline AppSummary& WithAssessmentSchedule(AppAssessmentScheduleType value) { SetAssessmentSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of Resource Groups group that is integrated with
     * an AppRegistry application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAwsApplicationArn() const { return m_awsApplicationArn; }
    inline bool AwsApplicationArnHasBeenSet() const { return m_awsApplicationArnHasBeenSet; }
    template<typename AwsApplicationArnT = Aws::String>
    void SetAwsApplicationArn(AwsApplicationArnT&& value) { m_awsApplicationArnHasBeenSet = true; m_awsApplicationArn = std::forward<AwsApplicationArnT>(value); }
    template<typename AwsApplicationArnT = Aws::String>
    AppSummary& WithAwsApplicationArn(AwsApplicationArnT&& value) { SetAwsApplicationArn(std::forward<AwsApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of compliance for the resiliency policy.</p>
     */
    inline AppComplianceStatusType GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(AppComplianceStatusType value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline AppSummary& WithComplianceStatus(AppComplianceStatusType value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the app was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AppSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for an app.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AppSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline AppDriftStatusType GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(AppDriftStatusType value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline AppSummary& WithDriftStatus(AppDriftStatusType value) { SetDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time of the most recent compliance evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAppComplianceEvaluationTime() const { return m_lastAppComplianceEvaluationTime; }
    inline bool LastAppComplianceEvaluationTimeHasBeenSet() const { return m_lastAppComplianceEvaluationTimeHasBeenSet; }
    template<typename LastAppComplianceEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastAppComplianceEvaluationTime(LastAppComplianceEvaluationTimeT&& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = std::forward<LastAppComplianceEvaluationTimeT>(value); }
    template<typename LastAppComplianceEvaluationTimeT = Aws::Utils::DateTime>
    AppSummary& WithLastAppComplianceEvaluationTime(LastAppComplianceEvaluationTimeT&& value) { SetLastAppComplianceEvaluationTime(std::forward<LastAppComplianceEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const { return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline AppSummary& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline int GetRpoInSecs() const { return m_rpoInSecs; }
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }
    inline AppSummary& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline int GetRtoInSecs() const { return m_rtoInSecs; }
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }
    inline AppSummary& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline AppStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AppStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline AppSummary& WithStatus(AppStatusType value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    AppAssessmentScheduleType m_assessmentSchedule{AppAssessmentScheduleType::NOT_SET};
    bool m_assessmentScheduleHasBeenSet = false;

    Aws::String m_awsApplicationArn;
    bool m_awsApplicationArnHasBeenSet = false;

    AppComplianceStatusType m_complianceStatus{AppComplianceStatusType::NOT_SET};
    bool m_complianceStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AppDriftStatusType m_driftStatus{AppDriftStatusType::NOT_SET};
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastAppComplianceEvaluationTime{};
    bool m_lastAppComplianceEvaluationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_resiliencyScore{0.0};
    bool m_resiliencyScoreHasBeenSet = false;

    int m_rpoInSecs{0};
    bool m_rpoInSecsHasBeenSet = false;

    int m_rtoInSecs{0};
    bool m_rtoInSecsHasBeenSet = false;

    AppStatusType m_status{AppStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
