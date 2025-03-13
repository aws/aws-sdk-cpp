/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/RollbackConfiguration.h>
#include <aws/serverlessrepo/model/ParameterValue.h>
#include <aws/serverlessrepo/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class CreateCloudFormationChangeSetRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudFormationChangeSet"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS:TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    CreateCloudFormationChangeSetRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    CreateCloudFormationChangeSetRequest& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const { return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    void SetNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::forward<NotificationArnsT>(value); }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    CreateCloudFormationChangeSetRequest& WithNotificationArns(NotificationArnsT&& value) { SetNotificationArns(std::forward<NotificationArnsT>(value)); return *this;}
    template<typename NotificationArnsT = Aws::String>
    CreateCloudFormationChangeSetRequest& AddNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.emplace_back(std::forward<NotificationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameter values for the parameters of the application.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterOverrides() const { return m_parameterOverrides; }
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
    template<typename ParameterOverridesT = Aws::Vector<ParameterValue>>
    void SetParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::forward<ParameterOverridesT>(value); }
    template<typename ParameterOverridesT = Aws::Vector<ParameterValue>>
    CreateCloudFormationChangeSetRequest& WithParameterOverrides(ParameterOverridesT&& value) { SetParameterOverrides(std::forward<ParameterOverridesT>(value)); return *this;}
    template<typename ParameterOverridesT = ParameterValue>
    CreateCloudFormationChangeSetRequest& AddParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.emplace_back(std::forward<ParameterOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    CreateCloudFormationChangeSetRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = Aws::String>
    CreateCloudFormationChangeSetRequest& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const { return m_rollbackConfiguration; }
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }
    template<typename RollbackConfigurationT = RollbackConfiguration>
    void SetRollbackConfiguration(RollbackConfigurationT&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::forward<RollbackConfigurationT>(value); }
    template<typename RollbackConfigurationT = RollbackConfiguration>
    CreateCloudFormationChangeSetRequest& WithRollbackConfiguration(RollbackConfigurationT&& value) { SetRollbackConfiguration(std::forward<RollbackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const { return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    template<typename SemanticVersionT = Aws::String>
    void SetSemanticVersion(SemanticVersionT&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::forward<SemanticVersionT>(value); }
    template<typename SemanticVersionT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithSemanticVersion(SemanticVersionT&& value) { SetSemanticVersion(std::forward<SemanticVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCloudFormationChangeSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCloudFormationChangeSetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    CreateCloudFormationChangeSetRequest& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet = false;

    Aws::Vector<ParameterValue> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    RollbackConfiguration m_rollbackConfiguration;
    bool m_rollbackConfigurationHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
