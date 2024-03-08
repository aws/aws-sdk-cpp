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

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline App& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline App& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline App& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline const AppAssessmentScheduleType& GetAssessmentSchedule() const{ return m_assessmentSchedule; }

    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }

    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline void SetAssessmentSchedule(const AppAssessmentScheduleType& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }

    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline void SetAssessmentSchedule(AppAssessmentScheduleType&& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = std::move(value); }

    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline App& WithAssessmentSchedule(const AppAssessmentScheduleType& value) { SetAssessmentSchedule(value); return *this;}

    /**
     * <p>Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline App& WithAssessmentSchedule(AppAssessmentScheduleType&& value) { SetAssessmentSchedule(std::move(value)); return *this;}


    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline const AppComplianceStatusType& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(const AppComplianceStatusType& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline void SetComplianceStatus(AppComplianceStatusType&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline App& WithComplianceStatus(const AppComplianceStatusType& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>Current status of compliance for the resiliency policy.</p>
     */
    inline App& WithComplianceStatus(AppComplianceStatusType&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>Date and time when the app was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Date and time when the app was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Date and time when the app was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Date and time when the app was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Date and time when the app was created.</p>
     */
    inline App& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Date and time when the app was created.</p>
     */
    inline App& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Optional description for an application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Optional description for an application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Optional description for an application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Optional description for an application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Optional description for an application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Optional description for an application.</p>
     */
    inline App& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional description for an application.</p>
     */
    inline App& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Optional description for an application.</p>
     */
    inline App& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline const AppDriftStatusType& GetDriftStatus() const{ return m_driftStatus; }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline void SetDriftStatus(const AppDriftStatusType& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline void SetDriftStatus(AppDriftStatusType&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline App& WithDriftStatus(const AppDriftStatusType& value) { SetDriftStatus(value); return *this;}

    /**
     * <p>Indicates if compliance drifts (deviations) were detected while running an
     * assessment for your application.</p>
     */
    inline App& WithDriftStatus(AppDriftStatusType&& value) { SetDriftStatus(std::move(value)); return *this;}


    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptions() const{ return m_eventSubscriptions; }

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline bool EventSubscriptionsHasBeenSet() const { return m_eventSubscriptionsHasBeenSet; }

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline void SetEventSubscriptions(const Aws::Vector<EventSubscription>& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = value; }

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline void SetEventSubscriptions(Aws::Vector<EventSubscription>&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = std::move(value); }

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline App& WithEventSubscriptions(const Aws::Vector<EventSubscription>& value) { SetEventSubscriptions(value); return *this;}

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline App& WithEventSubscriptions(Aws::Vector<EventSubscription>&& value) { SetEventSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline App& AddEventSubscriptions(const EventSubscription& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(value); return *this; }

    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * and <b>Scheduled assessment failure</b> events.</p>
     */
    inline App& AddEventSubscriptions(EventSubscription&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAppComplianceEvaluationTime() const{ return m_lastAppComplianceEvaluationTime; }

    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline bool LastAppComplianceEvaluationTimeHasBeenSet() const { return m_lastAppComplianceEvaluationTimeHasBeenSet; }

    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline void SetLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = value; }

    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline void SetLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { m_lastAppComplianceEvaluationTimeHasBeenSet = true; m_lastAppComplianceEvaluationTime = std::move(value); }

    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline App& WithLastAppComplianceEvaluationTime(const Aws::Utils::DateTime& value) { SetLastAppComplianceEvaluationTime(value); return *this;}

    /**
     * <p>Date and time the most recent compliance evaluation.</p>
     */
    inline App& WithLastAppComplianceEvaluationTime(Aws::Utils::DateTime&& value) { SetLastAppComplianceEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftEvaluationTime() const{ return m_lastDriftEvaluationTime; }

    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline bool LastDriftEvaluationTimeHasBeenSet() const { return m_lastDriftEvaluationTimeHasBeenSet; }

    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline void SetLastDriftEvaluationTime(const Aws::Utils::DateTime& value) { m_lastDriftEvaluationTimeHasBeenSet = true; m_lastDriftEvaluationTime = value; }

    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline void SetLastDriftEvaluationTime(Aws::Utils::DateTime&& value) { m_lastDriftEvaluationTimeHasBeenSet = true; m_lastDriftEvaluationTime = std::move(value); }

    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline App& WithLastDriftEvaluationTime(const Aws::Utils::DateTime& value) { SetLastDriftEvaluationTime(value); return *this;}

    /**
     * <p>Indicates the last time that a drift was evaluated.</p>
     */
    inline App& WithLastDriftEvaluationTime(Aws::Utils::DateTime&& value) { SetLastDriftEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResiliencyScoreEvaluationTime() const{ return m_lastResiliencyScoreEvaluationTime; }

    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline bool LastResiliencyScoreEvaluationTimeHasBeenSet() const { return m_lastResiliencyScoreEvaluationTimeHasBeenSet; }

    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline void SetLastResiliencyScoreEvaluationTime(const Aws::Utils::DateTime& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = value; }

    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline void SetLastResiliencyScoreEvaluationTime(Aws::Utils::DateTime&& value) { m_lastResiliencyScoreEvaluationTimeHasBeenSet = true; m_lastResiliencyScoreEvaluationTime = std::move(value); }

    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline App& WithLastResiliencyScoreEvaluationTime(const Aws::Utils::DateTime& value) { SetLastResiliencyScoreEvaluationTime(value); return *this;}

    /**
     * <p>Date and time the most recent resiliency score evaluation.</p>
     */
    inline App& WithLastResiliencyScoreEvaluationTime(Aws::Utils::DateTime&& value) { SetLastResiliencyScoreEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>Name for the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name for the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name for the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name for the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name for the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name for the application.</p>
     */
    inline App& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name for the application.</p>
     */
    inline App& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name for the application.</p>
     */
    inline App& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline const PermissionModel& GetPermissionModel() const{ return m_permissionModel; }

    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }

    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline void SetPermissionModel(const PermissionModel& value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }

    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline void SetPermissionModel(PermissionModel&& value) { m_permissionModelHasBeenSet = true; m_permissionModel = std::move(value); }

    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline App& WithPermissionModel(const PermissionModel& value) { SetPermissionModel(value); return *this;}

    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating the application, importing its resources, and running an
     * assessment.</p>
     */
    inline App& WithPermissionModel(PermissionModel&& value) { SetPermissionModel(std::move(value)); return *this;}


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

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline App& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline App& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline App& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline double GetResiliencyScore() const{ return m_resiliencyScore; }

    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }

    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline void SetResiliencyScore(double value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }

    /**
     * <p>Current resiliency score for the application.</p>
     */
    inline App& WithResiliencyScore(double value) { SetResiliencyScore(value); return *this;}


    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline int GetRpoInSecs() const{ return m_rpoInSecs; }

    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }

    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }

    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline App& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}


    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline int GetRtoInSecs() const{ return m_rtoInSecs; }

    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }

    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }

    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline App& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}


    /**
     * <p>Status of the application.</p>
     */
    inline const AppStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the application.</p>
     */
    inline void SetStatus(const AppStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the application.</p>
     */
    inline void SetStatus(AppStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the application.</p>
     */
    inline App& WithStatus(const AppStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the application.</p>
     */
    inline App& WithStatus(AppStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline App& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    AppAssessmentScheduleType m_assessmentSchedule;
    bool m_assessmentScheduleHasBeenSet = false;

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
