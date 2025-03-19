/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AssessmentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
#include <aws/resiliencehub/model/Cost.h>
#include <aws/resiliencehub/model/DriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/AssessmentInvoker.h>
#include <aws/resiliencehub/model/ResiliencyPolicy.h>
#include <aws/resiliencehub/model/ResiliencyScore.h>
#include <aws/resiliencehub/model/ResourceErrorsDetails.h>
#include <aws/resiliencehub/model/AssessmentSummary.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/DisruptionCompliance.h>
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
   * <p>Defines an application assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppAssessment">AWS
   * API Reference</a></p>
   */
  class AppAssessment
  {
  public:
    AWS_RESILIENCEHUB_API AppAssessment() = default;
    AWS_RESILIENCEHUB_API AppAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AppAssessment& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
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
    AppAssessment& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
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
    AppAssessment& WithAssessmentArn(AssessmentArnT&& value) { SetAssessmentArn(std::forward<AssessmentArnT>(value)); return *this;}
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
    AppAssessment& WithAssessmentName(AssessmentNameT&& value) { SetAssessmentName(std::forward<AssessmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the assessment for the resiliency policy.</p>
     */
    inline AssessmentStatus GetAssessmentStatus() const { return m_assessmentStatus; }
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
    inline void SetAssessmentStatus(AssessmentStatus value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }
    inline AppAssessment& WithAssessmentStatus(AssessmentStatus value) { SetAssessmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application compliance against the resiliency policy.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetCompliance() const { return m_compliance; }
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }
    template<typename ComplianceT = Aws::Map<DisruptionType, DisruptionCompliance>>
    void SetCompliance(ComplianceT&& value) { m_complianceHasBeenSet = true; m_compliance = std::forward<ComplianceT>(value); }
    template<typename ComplianceT = Aws::Map<DisruptionType, DisruptionCompliance>>
    AppAssessment& WithCompliance(ComplianceT&& value) { SetCompliance(std::forward<ComplianceT>(value)); return *this;}
    inline AppAssessment& AddCompliance(DisruptionType key, DisruptionCompliance value) {
      m_complianceHasBeenSet = true; m_compliance.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Current status of the compliance for the resiliency policy.</p>
     */
    inline ComplianceStatus GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(ComplianceStatus value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline AppAssessment& WithComplianceStatus(ComplianceStatus value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost for the application.</p>
     */
    inline const Cost& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = Cost>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = Cost>
    AppAssessment& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline DriftStatus GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(DriftStatus value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline AppAssessment& WithDriftStatus(DriftStatus value) { SetDriftStatus(value); return *this;}
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
    AppAssessment& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that invoked the assessment.</p>
     */
    inline AssessmentInvoker GetInvoker() const { return m_invoker; }
    inline bool InvokerHasBeenSet() const { return m_invokerHasBeenSet; }
    inline void SetInvoker(AssessmentInvoker value) { m_invokerHasBeenSet = true; m_invoker = value; }
    inline AppAssessment& WithInvoker(AssessmentInvoker value) { SetInvoker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error or warning message from the assessment execution</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AppAssessment& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resiliency policy of an application.</p>
     */
    inline const ResiliencyPolicy& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = ResiliencyPolicy>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = ResiliencyPolicy>
    AppAssessment& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current resiliency score for an application.</p>
     */
    inline const ResiliencyScore& GetResiliencyScore() const { return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    template<typename ResiliencyScoreT = ResiliencyScore>
    void SetResiliencyScore(ResiliencyScoreT&& value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = std::forward<ResiliencyScoreT>(value); }
    template<typename ResiliencyScoreT = ResiliencyScore>
    AppAssessment& WithResiliencyScore(ResiliencyScoreT&& value) { SetResiliencyScore(std::forward<ResiliencyScoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A resource error object containing a list of errors retrieving an
     * application's resources. </p>
     */
    inline const ResourceErrorsDetails& GetResourceErrorsDetails() const { return m_resourceErrorsDetails; }
    inline bool ResourceErrorsDetailsHasBeenSet() const { return m_resourceErrorsDetailsHasBeenSet; }
    template<typename ResourceErrorsDetailsT = ResourceErrorsDetails>
    void SetResourceErrorsDetails(ResourceErrorsDetailsT&& value) { m_resourceErrorsDetailsHasBeenSet = true; m_resourceErrorsDetails = std::forward<ResourceErrorsDetailsT>(value); }
    template<typename ResourceErrorsDetailsT = ResourceErrorsDetails>
    AppAssessment& WithResourceErrorsDetails(ResourceErrorsDetailsT&& value) { SetResourceErrorsDetails(std::forward<ResourceErrorsDetailsT>(value)); return *this;}
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
    AppAssessment& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the AI-generated summary for the Resilience Hub assessment,
     * providing a concise overview that highlights the top risks and
     * recommendations.</p>  <p>This property is available only in the US East
     * (N. Virginia) Region.</p> 
     */
    inline const AssessmentSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = AssessmentSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = AssessmentSummary>
    AppAssessment& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AppAssessment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AppAssessment& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Version name of the published application.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    AppAssessment& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
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

    Aws::Map<DisruptionType, DisruptionCompliance> m_compliance;
    bool m_complianceHasBeenSet = false;

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

    ResiliencyPolicy m_policy;
    bool m_policyHasBeenSet = false;

    ResiliencyScore m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    ResourceErrorsDetails m_resourceErrorsDetails;
    bool m_resourceErrorsDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    AssessmentSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
