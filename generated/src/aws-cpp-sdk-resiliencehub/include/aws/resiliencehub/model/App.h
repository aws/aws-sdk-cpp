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
    AWS_RESILIENCEHUB_API App();
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
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline App& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline App& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline App& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline const AppAssessmentScheduleType& GetAssessmentSchedule() const{ return m_assessmentSchedule; }
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }
    inline void SetAssessmentSchedule(const AppAssessmentScheduleType& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }
    inline void SetAssessmentSchedule(AppAssessmentScheduleType&& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = std::move(value); }
    inline App& WithAssessmentSchedule(const AppAssessmentScheduleType& value) { SetAssessmentSchedule(value); return *this;}
    inline App& WithAssessmentSchedule(AppAssessmentScheduleType&& value) { SetAssessmentSchedule(std::move(value)); return *this;}
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
    inline App& WithAwsApplicationArn(const Aws::String& value) { SetAwsApplicationArn(value); return *this;}
    inline App& WithAwsApplicationArn(Aws::String&& value) { SetAwsApplicationArn(std::move(value)); return *this;}
    inline App& WithAwsApplicationArn(const char* value) { SetAwsApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline const AppComplianceStatusType& GetComplianceStatus() const{ return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(const AppComplianceStatusType& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline void SetComplianceStatus(AppComplianceStatusType&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }
    inline App& WithComplianceStatus(const AppComplianceStatusType& value) { SetComplianceStatus(value); return *this;}
    inline App& WithComplianceStatus(AppComplianceStatusType&& value) { SetComplianceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline App& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline App& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional description for an application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline App& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline App& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline App& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline App& WithDriftStatus(const AppDriftStatusType& value) { SetDriftStatus(value); return *this;}
    inline App& WithDriftStatus(AppDriftStatusType&& value) { SetDriftStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptions() const{ return m_eventSubscriptions; }
    inline bool EventSubscriptionsHasBeenSet() const { return m_eventSubscriptionsHasBeenSet; }
    inline void SetEventSubscriptions(const Aws::Vector<EventSubscription>& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = value; }
    inline void SetEventSubscriptions(Aws::Vector<EventSubscription>&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = std::move(value); }
    inline App& WithEventSubscriptions(const Aws::Vector<EventSubscription>& value) { SetEventSubscriptions(value); return *this;}
    inline App& WithEventSubscriptions(Aws::Vector<EventSubscription>&& value) { SetEventSubscriptions(std::move(value)); return *this;}
    inline App& AddEventSubscriptions(const EventSubscription& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(value); return *this; }
    inline App& AddEventSubscriptions(EventSubscription&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAppComplianceEvaluationTime() const{ return m_lastAppComplianceEvaluationTime; }
    inline bool LastAppComplianceEvaluationTimeHasBeenSet() const { return m_lastAppComplianceEvaluationTimeHasBeenSet; }
    inline void SetLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = value; }
    inline void SetLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = std::move(value); }
    inline App& WithLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { SetLastAppComplianceEvaluationTime(value); return *this;}
    inline App& WithLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { SetLastAppComplianceEvaluationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftEvaluationTime() const{ return m_lastDriftEvaluationTime; }
    inline bool LastDriftEvaluationTimeHasBeenSet() const { return m_lastDriftEvaluationTimeHasBeenSet; }
    inline void SetLastDriftEvaluationTime(const Aws::Utils::DateTime& value) { m_lastDriftEvaluationTimeHasBeenSet = true; m_lastDriftEvaluationTime = value; }
    inline void SetLastDriftEvaluationTime(Aws::Utils::DateTime&& value) { m_lastDriftEvaluationTimeHasBeenSet = true; m_lastDriftEvaluationTime = std::move(value); }
    inline App& WithLastDriftEvaluationTime(const Aws::Utils::DateTime& value) { SetLastDriftEvaluationTime(value); return *this;}
    inline App& WithLastDriftEvaluationTime(Aws::Utils::DateTime&& value) { SetLastDriftEvaluationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResiliencyScoreEvaluationTime() const{ return m_lastResiliencyScoreEvaluationTime; }
    inline bool LastResiliencyScoreEvaluationTimeHasBeenSet() const { return m_lastResiliencyScoreEvaluationTimeHasBeenSet; }
    inline void SetLastResiliencyScoreEvaluationTime(const Aws::Utils::DateTime& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = value; }
    inline void SetLastResiliencyScoreEvaluationTime(Aws::Utils::DateTime&& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = std::move(value); }
    inline App& WithLastResiliencyScoreEvaluationTime(const Aws::Utils::DateTime& value) { SetLastResiliencyScoreEvaluationTime(value); return *this;}
    inline App& WithLastResiliencyScoreEvaluationTime(Aws::Utils::DateTime&& value) { SetLastResiliencyScoreEvaluationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline App& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline App& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline App& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline const PermissionModel& GetPermissionModel() const{ return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    inline void SetPermissionModel(const PermissionModel& value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }
    inline void SetPermissionModel(PermissionModel&& value) { m_permissionModelHasBeenSet = true; m_permissionModel = std::move(value); }
    inline App& WithPermissionModel(const PermissionModel& value) { SetPermissionModel(value); return *this;}
    inline App& WithPermissionModel(PermissionModel&& value) { SetPermissionModel(std::move(value)); return *this;}
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
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }
    inline App& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline App& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline App& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const{ return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline App& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline int GetRpoInSecs() const{ return m_rpoInSecs; }
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }
    inline App& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline int GetRtoInSecs() const{ return m_rtoInSecs; }
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }
    inline App& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the application.</p>
     */
    inline const AppStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AppStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AppStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline App& WithStatus(const AppStatusType& value) { SetStatus(value); return *this;}
    inline App& WithStatus(AppStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline App& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline App& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline App& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline App& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline App& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline App& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline App& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline App& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline App& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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

    Aws::Vector<EventSubscription> m_eventSubscriptions;
    bool m_eventSubscriptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastAppComplianceEvaluationTime;
    bool m_lastAppComplianceEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastDriftEvaluationTime;
    bool m_lastDriftEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastResiliencyScoreEvaluationTime;
    bool m_lastResiliencyScoreEvaluationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PermissionModel m_permissionModel;
    bool m_permissionModelHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    double m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    int m_rpoInSecs;
    bool m_rpoInSecsHasBeenSet = false;

    int m_rtoInSecs;
    bool m_rtoInSecsHasBeenSet = false;

    AppStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
