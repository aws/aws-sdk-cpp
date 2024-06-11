﻿/**
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
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline CreateCloudFormationChangeSetRequest& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& AddCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::move(value); }
    inline CreateCloudFormationChangeSetRequest& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(std::move(value)); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameter values for the parameters of the application.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterOverrides() const{ return m_parameterOverrides; }
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
    inline void SetParameterOverrides(const Aws::Vector<ParameterValue>& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = value; }
    inline void SetParameterOverrides(Aws::Vector<ParameterValue>&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::move(value); }
    inline CreateCloudFormationChangeSetRequest& WithParameterOverrides(const Aws::Vector<ParameterValue>& value) { SetParameterOverrides(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithParameterOverrides(Aws::Vector<ParameterValue>&& value) { SetParameterOverrides(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& AddParameterOverrides(const ParameterValue& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(value); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddParameterOverrides(ParameterValue&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline CreateCloudFormationChangeSetRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const{ return m_rollbackConfiguration; }
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }
    inline void SetRollbackConfiguration(const RollbackConfiguration& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = value; }
    inline void SetRollbackConfiguration(RollbackConfiguration&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::move(value); }
    inline CreateCloudFormationChangeSetRequest& WithRollbackConfiguration(const RollbackConfiguration& value) { SetRollbackConfiguration(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithRollbackConfiguration(RollbackConfiguration&& value) { SetRollbackConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property corresponds to the parameter of the same name for the <i>AWS
     * CloudFormation <a
     * href="https://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">CreateChangeSet</a>

     * </i> API.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCloudFormationChangeSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCloudFormationChangeSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline CreateCloudFormationChangeSetRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
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
