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
#include <aws/sagemaker/model/WorkerAccessConfiguration.h>
#include <aws/sagemaker/model/MemberDefinition.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateWorkteamRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateWorkteamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkteam"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the work team to update.</p>
     */
    inline const Aws::String& GetWorkteamName() const { return m_workteamName; }
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }
    template<typename WorkteamNameT = Aws::String>
    void SetWorkteamName(WorkteamNameT&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::forward<WorkteamNameT>(value); }
    template<typename WorkteamNameT = Aws::String>
    UpdateWorkteamRequest& WithWorkteamName(WorkteamNameT&& value) { SetWorkteamName(std::forward<WorkteamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the workers that make up the work team. </p> <p>Workforces can be
     * created using Amazon Cognito or your own OIDC Identity Provider (IdP). For
     * private workforces created using Amazon Cognito use
     * <code>CognitoMemberDefinition</code>. For workforces created using your own OIDC
     * identity provider (IdP) use <code>OidcMemberDefinition</code>. You should not
     * provide input for both of these parameters in a single request.</p> <p>For
     * workforces created using Amazon Cognito, private work teams correspond to Amazon
     * Cognito <i>user groups</i> within the user pool used to create a workforce. All
     * of the <code>CognitoMemberDefinition</code> objects that make up the member
     * definition must have the same <code>ClientId</code> and <code>UserPool</code>
     * values. To add a Amazon Cognito user group to an existing worker pool, see <a
     * href="">Adding groups to a User Pool</a>. For more information about user pools,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>For workforces created using your own OIDC IdP,
     * specify the user groups that you want to include in your private work team in
     * <code>OidcMemberDefinition</code> by listing those groups in
     * <code>Groups</code>. Be aware that user groups that are already in the work team
     * must also be listed in <code>Groups</code> when you make this request to remain
     * on the work team. If you do not include these user groups, they will no longer
     * be associated with the work team you update. </p>
     */
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const { return m_memberDefinitions; }
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }
    template<typename MemberDefinitionsT = Aws::Vector<MemberDefinition>>
    void SetMemberDefinitions(MemberDefinitionsT&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::forward<MemberDefinitionsT>(value); }
    template<typename MemberDefinitionsT = Aws::Vector<MemberDefinition>>
    UpdateWorkteamRequest& WithMemberDefinitions(MemberDefinitionsT&& value) { SetMemberDefinitions(std::forward<MemberDefinitionsT>(value)); return *this;}
    template<typename MemberDefinitionsT = MemberDefinition>
    UpdateWorkteamRequest& AddMemberDefinitions(MemberDefinitionsT&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.emplace_back(std::forward<MemberDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An updated description for the work team.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWorkteamRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    UpdateWorkteamRequest& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this optional parameter to constrain access to an Amazon S3 resource
     * based on the IP address using supported IAM global condition keys. The Amazon S3
     * resource is accessed in the worker portal using a Amazon S3 presigned URL.</p>
     */
    inline const WorkerAccessConfiguration& GetWorkerAccessConfiguration() const { return m_workerAccessConfiguration; }
    inline bool WorkerAccessConfigurationHasBeenSet() const { return m_workerAccessConfigurationHasBeenSet; }
    template<typename WorkerAccessConfigurationT = WorkerAccessConfiguration>
    void SetWorkerAccessConfiguration(WorkerAccessConfigurationT&& value) { m_workerAccessConfigurationHasBeenSet = true; m_workerAccessConfiguration = std::forward<WorkerAccessConfigurationT>(value); }
    template<typename WorkerAccessConfigurationT = WorkerAccessConfiguration>
    UpdateWorkteamRequest& WithWorkerAccessConfiguration(WorkerAccessConfigurationT&& value) { SetWorkerAccessConfiguration(std::forward<WorkerAccessConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet = false;

    Aws::Vector<MemberDefinition> m_memberDefinitions;
    bool m_memberDefinitionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    WorkerAccessConfiguration m_workerAccessConfiguration;
    bool m_workerAccessConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
