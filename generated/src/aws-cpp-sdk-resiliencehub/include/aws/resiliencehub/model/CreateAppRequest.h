/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/resiliencehub/model/AppAssessmentScheduleType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/PermissionModel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/EventSubscription.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class CreateAppRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Assessment execution schedule with 'Daily' or 'Disabled' values. </p>
     */
    inline const AppAssessmentScheduleType& GetAssessmentSchedule() const{ return m_assessmentSchedule; }
    inline bool AssessmentScheduleHasBeenSet() const { return m_assessmentScheduleHasBeenSet; }
    inline void SetAssessmentSchedule(const AppAssessmentScheduleType& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = value; }
    inline void SetAssessmentSchedule(AppAssessmentScheduleType&& value) { m_assessmentScheduleHasBeenSet = true; m_assessmentSchedule = std::move(value); }
    inline CreateAppRequest& WithAssessmentSchedule(const AppAssessmentScheduleType& value) { SetAssessmentSchedule(value); return *this;}
    inline CreateAppRequest& WithAssessmentSchedule(AppAssessmentScheduleType&& value) { SetAssessmentSchedule(std::move(value)); return *this;}
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
    inline CreateAppRequest& WithAwsApplicationArn(const Aws::String& value) { SetAwsApplicationArn(value); return *this;}
    inline CreateAppRequest& WithAwsApplicationArn(Aws::String&& value) { SetAwsApplicationArn(std::move(value)); return *this;}
    inline CreateAppRequest& WithAwsApplicationArn(const char* value) { SetAwsApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAppRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAppRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAppRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of events you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports only <b>Drift detected</b> and <b>Scheduled
     * assessment failure</b> events notification.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptions() const{ return m_eventSubscriptions; }
    inline bool EventSubscriptionsHasBeenSet() const { return m_eventSubscriptionsHasBeenSet; }
    inline void SetEventSubscriptions(const Aws::Vector<EventSubscription>& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = value; }
    inline void SetEventSubscriptions(Aws::Vector<EventSubscription>&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = std::move(value); }
    inline CreateAppRequest& WithEventSubscriptions(const Aws::Vector<EventSubscription>& value) { SetEventSubscriptions(value); return *this;}
    inline CreateAppRequest& WithEventSubscriptions(Aws::Vector<EventSubscription>&& value) { SetEventSubscriptions(std::move(value)); return *this;}
    inline CreateAppRequest& AddEventSubscriptions(const EventSubscription& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(value); return *this; }
    inline CreateAppRequest& AddEventSubscriptions(EventSubscription&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAppRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateAppRequest& WithPermissionModel(const PermissionModel& value) { SetPermissionModel(value); return *this;}
    inline CreateAppRequest& WithPermissionModel(PermissionModel&& value) { SetPermissionModel(std::move(value)); return *this;}
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
    inline CreateAppRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline CreateAppRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline CreateAppRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
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
    inline CreateAppRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAppRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAppRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAppRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAppRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAppRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAppRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAppRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAppRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    AppAssessmentScheduleType m_assessmentSchedule;
    bool m_assessmentScheduleHasBeenSet = false;

    Aws::String m_awsApplicationArn;
    bool m_awsApplicationArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EventSubscription> m_eventSubscriptions;
    bool m_eventSubscriptionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PermissionModel m_permissionModel;
    bool m_permissionModelHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
