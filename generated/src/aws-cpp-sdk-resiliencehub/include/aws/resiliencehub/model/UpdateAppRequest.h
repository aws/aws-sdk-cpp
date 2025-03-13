/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppAssessmentScheduleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/PermissionModel.h>
#include <aws/resiliencehub/model/EventSubscription.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class UpdateAppRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API UpdateAppRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApp"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


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
    UpdateAppRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline AppAssessmentScheduleType GetAssessmentSchedule() const { return m_assessmentSchedule; }
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }
    inline void SetAssessmentSchedule(AppAssessmentScheduleType value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }
    inline UpdateAppRequest& WithAssessmentSchedule(AppAssessmentScheduleType value) { SetAssessmentSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the resiliency policy ARN should be cleared.</p>
     */
    inline bool GetClearResiliencyPolicyArn() const { return m_clearResiliencyPolicyArn; }
    inline bool ClearResiliencyPolicyArnHasBeenSet() const { return m_clearResiliencyPolicyArnHasBeenSet; }
    inline void SetClearResiliencyPolicyArn(bool value) { m_clearResiliencyPolicyArnHasBeenSet = true; m_clearResiliencyPolicyArn = value; }
    inline UpdateAppRequest& WithClearResiliencyPolicyArn(bool value) { SetClearResiliencyPolicyArn(value); return *this;}
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
    UpdateAppRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateAppRequest& WithEventSubscriptions(EventSubscriptionsT&& value) { SetEventSubscriptions(std::forward<EventSubscriptionsT>(value)); return *this;}
    template<typename EventSubscriptionsT = EventSubscription>
    UpdateAppRequest& AddEventSubscriptions(EventSubscriptionsT&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.emplace_back(std::forward<EventSubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the roles and credentials that Resilience Hub would use while
     * creating an application, importing its resources, and running an assessment.</p>
     */
    inline const PermissionModel& GetPermissionModel() const { return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    template<typename PermissionModelT = PermissionModel>
    void SetPermissionModel(PermissionModelT&& value) { m_permissionModelHasBeenSet = true; m_permissionModel = std::forward<PermissionModelT>(value); }
    template<typename PermissionModelT = PermissionModel>
    UpdateAppRequest& WithPermissionModel(PermissionModelT&& value) { SetPermissionModel(std::forward<PermissionModelT>(value)); return *this;}
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
    UpdateAppRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    AppAssessmentScheduleType m_assessmentSchedule{AppAssessmentScheduleType::NOT_SET};
    bool m_assessmentScheduleHasBeenSet = false;

    bool m_clearResiliencyPolicyArn{false};
    bool m_clearResiliencyPolicyArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EventSubscription> m_eventSubscriptions;
    bool m_eventSubscriptionsHasBeenSet = false;

    PermissionModel m_permissionModel;
    bool m_permissionModelHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
