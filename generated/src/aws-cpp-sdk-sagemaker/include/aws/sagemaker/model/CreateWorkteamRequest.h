/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotificationConfiguration.h>
#include <aws/sagemaker/model/MemberDefinition.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateWorkteamRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateWorkteamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkteam"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline const Aws::String& GetWorkteamName() const{ return m_workteamName; }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline void SetWorkteamName(const Aws::String& value) { m_workteamNameHasBeenSet = true; m_workteamName = value; }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline void SetWorkteamName(Aws::String&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::move(value); }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline void SetWorkteamName(const char* value) { m_workteamNameHasBeenSet = true; m_workteamName.assign(value); }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline CreateWorkteamRequest& WithWorkteamName(const Aws::String& value) { SetWorkteamName(value); return *this;}

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline CreateWorkteamRequest& WithWorkteamName(Aws::String&& value) { SetWorkteamName(std::move(value)); return *this;}

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline CreateWorkteamRequest& WithWorkteamName(const char* value) { SetWorkteamName(value); return *this;}


    /**
     * <p>The name of the workforce.</p>
     */
    inline const Aws::String& GetWorkforceName() const{ return m_workforceName; }

    /**
     * <p>The name of the workforce.</p>
     */
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }

    /**
     * <p>The name of the workforce.</p>
     */
    inline void SetWorkforceName(const Aws::String& value) { m_workforceNameHasBeenSet = true; m_workforceName = value; }

    /**
     * <p>The name of the workforce.</p>
     */
    inline void SetWorkforceName(Aws::String&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::move(value); }

    /**
     * <p>The name of the workforce.</p>
     */
    inline void SetWorkforceName(const char* value) { m_workforceNameHasBeenSet = true; m_workforceName.assign(value); }

    /**
     * <p>The name of the workforce.</p>
     */
    inline CreateWorkteamRequest& WithWorkforceName(const Aws::String& value) { SetWorkforceName(value); return *this;}

    /**
     * <p>The name of the workforce.</p>
     */
    inline CreateWorkteamRequest& WithWorkforceName(Aws::String&& value) { SetWorkforceName(std::move(value)); return *this;}

    /**
     * <p>The name of the workforce.</p>
     */
    inline CreateWorkteamRequest& WithWorkforceName(const char* value) { SetWorkforceName(value); return *this;}


    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const{ return m_memberDefinitions; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline void SetMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = value; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline void SetMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::move(value); }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline CreateWorkteamRequest& WithMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { SetMemberDefinitions(value); return *this;}

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline CreateWorkteamRequest& WithMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { SetMemberDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline CreateWorkteamRequest& AddMemberDefinitions(const MemberDefinition& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. Do not provide
     * input for both of these parameters in a single request.</p> <p>For workforces
     * created using Amazon Cognito, private work teams correspond to Amazon Cognito
     * <i>user groups</i> within the user pool used to create a workforce. All of the
     * <code>CognitoMemberDefinition</code> objects that make up the member definition
     * must have the same <code>ClientId</code> and <code>UserPool</code> values. To
     * add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>.</p>
     */
    inline CreateWorkteamRequest& AddMemberDefinitions(MemberDefinition&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the work team.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the work team.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the work team.</p>
     */
    inline CreateWorkteamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the work team.</p>
     */
    inline CreateWorkteamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the work team.</p>
     */
    inline CreateWorkteamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline CreateWorkteamRequest& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline CreateWorkteamRequest& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateWorkteamRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateWorkteamRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateWorkteamRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-resource-tags.html">Resource
     * Tag</a> and <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i> Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateWorkteamRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet = false;

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;

    Aws::Vector<MemberDefinition> m_memberDefinitions;
    bool m_memberDefinitionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
