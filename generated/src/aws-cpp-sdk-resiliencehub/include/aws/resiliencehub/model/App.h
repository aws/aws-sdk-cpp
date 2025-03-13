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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/PermissionModel.h>
#include <aws/resiliencehub/model/AppStatusType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/EventSubscription.h>
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
   * <p>Defines an Resilience Hub application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/App">AWS
   * API Reference</a></p>
   */
  class App
  {
  public:
    AWS_RESILIENCEHUB_API App() = default;
    AWS_RESILIENCEHUB_API App(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API App& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    App& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline AppAssessmentScheduleType GetAssessmentSchedule() const { return m_assessmentSchedule; }
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }
    inline void SetAssessmentSchedule(AppAssessmentScheduleType value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }
    inline App& WithAssessmentSchedule(AppAssessmentScheduleType value) { SetAssessmentSchedule(value); return *this;}
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
    App& WithAwsApplicationArn(AwsApplicationArnT&& value) { SetAwsApplicationArn(std::forward<AwsApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline AppComplianceStatusType GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(AppComplianceStatusType value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline App& WithComplianceStatus(AppComplianceStatusType value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    App& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional description for an application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    App& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline AppDriftStatusType GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(AppDriftStatusType value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline App& WithDriftStatus(AppDriftStatusType value) { SetDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptions() const { return m_eventSubscriptions; }
    inline bool EventSubscriptionsHasBeenSet() const { return m_eventSubscriptionsHasBeenSet; }
    template<typename EventSubscriptionsT = Aws::Vector<EventSubscription>>
    void SetEventSubscriptions(EventSubscriptionsT&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = std::forward<EventSubscriptionsT>(value); }
    template<typename EventSubscriptionsT = Aws::Vector<EventSubscription>>
    App& WithEventSubscriptions(EventSubscriptionsT&& value) { SetEventSubscriptions(std::forward<EventSubscriptionsT>(value)); return *this;}
    template<typename EventSubscriptionsT = EventSubscription>
    App& AddEventSubscriptions(EventSubscriptionsT&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.emplace_back(std::forward<EventSubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAppComplianceEvaluationTime() const { return m_lastAppComplianceEvaluationTime; }
    inline bool LastAppComplianceEvaluationTimeHasBeenSet() const { return m_lastAppComplianceEvaluationTimeHasBeenSet; }
    template<typename LastAppComplianceEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastAppComplianceEvaluationTime(LastAppComplianceEvaluationTimeT&& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = std::forward<LastAppComplianceEvaluationTimeT>(value); }
    template<typename LastAppComplianceEvaluationTimeT = Aws::Utils::DateTime>
    App& WithLastAppComplianceEvaluationTime(LastAppComplianceEvaluationTimeT&& value) { SetLastAppComplianceEvaluationTime(std::forward<LastAppComplianceEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftEvaluationTime() const { return m_lastDriftEvaluationTime; }
    inline bool LastDriftEvaluationTimeHasBeenSet() const { return m_lastDriftEvaluationTimeHasBeenSet; }
    template<typename LastDriftEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastDriftEvaluationTime(LastDriftEvaluationTimeT&& value) { m_lastDriftEvaluationTimeHasBeenSet = true; m_lastDriftEvaluationTime = std::forward<LastDriftEvaluationTimeT>(value); }
    template<typename LastDriftEvaluationTimeT = Aws::Utils::DateTime>
    App& WithLastDriftEvaluationTime(LastDriftEvaluationTimeT&& value) { SetLastDriftEvaluationTime(std::forward<LastDriftEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResiliencyScoreEvaluationTime() const { return m_lastResiliencyScoreEvaluationTime; }
    inline bool LastResiliencyScoreEvaluationTimeHasBeenSet() const { return m_lastResiliencyScoreEvaluationTimeHasBeenSet; }
    template<typename LastResiliencyScoreEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastResiliencyScoreEvaluationTime(LastResiliencyScoreEvaluationTimeT&& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = std::forward<LastResiliencyScoreEvaluationTimeT>(value); }
    template<typename LastResiliencyScoreEvaluationTimeT = Aws::Utils::DateTime>
    App& WithLastResiliencyScoreEvaluationTime(LastResiliencyScoreEvaluationTimeT&& value) { SetLastResiliencyScoreEvaluationTime(std::forward<LastResiliencyScoreEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    App& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline const PermissionModel& GetPermissionModel() const { return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    template<typename PermissionModelT = PermissionModel>
    void SetPermissionModel(PermissionModelT&& value) { m_permissionModelHasBeenSet = true; m_permissionModel = std::forward<PermissionModelT>(value); }
    template<typename PermissionModelT = PermissionModel>
    App& WithPermissionModel(PermissionModelT&& value) { SetPermissionModel(std::forward<PermissionModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    App& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const { return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline App& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline int GetRpoInSecs() const { return m_rpoInSecs; }
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }
    inline App& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline int GetRtoInSecs() const { return m_rtoInSecs; }
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }
    inline App& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline AppStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AppStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline App& WithStatus(AppStatusType value) { SetStatus(value); return *this;}
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
    App& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    App& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    Aws::Vector<EventSubscription> m_eventSubscriptions;
    bool m_eventSubscriptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastAppComplianceEvaluationTime{};
    bool m_lastAppComplianceEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastDriftEvaluationTime{};
    bool m_lastDriftEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastResiliencyScoreEvaluationTime{};
    bool m_lastResiliencyScoreEvaluationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PermissionModel m_permissionModel;
    bool m_permissionModelHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    double m_resiliencyScore{0.0};
    bool m_resiliencyScoreHasBeenSet = false;

    int m_rpoInSecs{0};
    bool m_rpoInSecsHasBeenSet = false;

    int m_rtoInSecs{0};
    bool m_rtoInSecsHasBeenSet = false;

    AppStatusType m_status{AppStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
