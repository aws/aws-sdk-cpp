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
    AWS_RESILIENCEHUB_API AppAssessmentSummary() = default;
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
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    AppAssessmentSummary& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of an application.</p>
     */
    inline const Aws::String& GetAppVersion() const { return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    template<typename AppVersionT = Aws::String>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = Aws::String>
    AppAssessmentSummary& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
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
    inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    template<typename AssessmentArnT = Aws::String>
    void SetAssessmentArn(AssessmentArnT&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::forward<AssessmentArnT>(value); }
    template<typename AssessmentArnT = Aws::String>
    AppAssessmentSummary& WithAssessmentArn(AssessmentArnT&& value) { SetAssessmentArn(std::forward<AssessmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the assessment.</p>
     */
    inline const Aws::String& GetAssessmentName() const { return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    template<typename AssessmentNameT = Aws::String>
    void SetAssessmentName(AssessmentNameT&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::forward<AssessmentNameT>(value); }
    template<typename AssessmentNameT = Aws::String>
    AppAssessmentSummary& WithAssessmentName(AssessmentNameT&& value) { SetAssessmentName(std::forward<AssessmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline AssessmentStatus GetAssessmentStatus() const { return m_assessmentStatus; }
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
    inline void SetAssessmentStatus(AssessmentStatus value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }
    inline AppAssessmentSummary& WithAssessmentStatus(AssessmentStatus value) { SetAssessmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline ComplianceStatus GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(ComplianceStatus value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline AppAssessmentSummary& WithComplianceStatus(ComplianceStatus value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost for an application.</p>
     */
    inline const Cost& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = Cost>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = Cost>
    AppAssessmentSummary& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline DriftStatus GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(DriftStatus value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline AppAssessmentSummary& WithDriftStatus(DriftStatus value) { SetDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AppAssessmentSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entity that invoked the assessment.</p>
     */
    inline AssessmentInvoker GetInvoker() const { return m_invoker; }
    inline bool InvokerHasBeenSet() const { return m_invokerHasBeenSet; }
    inline void SetInvoker(AssessmentInvoker value) { m_invokerHasBeenSet = true; m_invoker = value; }
    inline AppAssessmentSummary& WithInvoker(AssessmentInvoker value) { SetInvoker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message from the assessment run.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AppAssessmentSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const { return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline AppAssessmentSummary& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Starting time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AppAssessmentSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of an application version.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    AppAssessmentSummary& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
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

    AssessmentStatus m_assessmentStatus{AssessmentStatus::NOT_SET};
    bool m_assessmentStatusHasBeenSet = false;

    ComplianceStatus m_complianceStatus{ComplianceStatus::NOT_SET};
    bool m_complianceStatusHasBeenSet = false;

    Cost m_cost;
    bool m_costHasBeenSet = false;

    DriftStatus m_driftStatus{DriftStatus::NOT_SET};
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    AssessmentInvoker m_invoker{AssessmentInvoker::NOT_SET};
    bool m_invokerHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    double m_resiliencyScore{0.0};
    bool m_resiliencyScoreHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
