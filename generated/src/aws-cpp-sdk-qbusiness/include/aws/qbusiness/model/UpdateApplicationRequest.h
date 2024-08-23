/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AttachmentsConfiguration.h>
#include <aws/qbusiness/model/QAppsConfiguration.h>
#include <aws/qbusiness/model/PersonalizationConfiguration.h>
#include <aws/qbusiness/model/AutoSubscriptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM Identity Center instance you are
     * either creating for—or connecting to—your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = value; }
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::move(value); }
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn.assign(value); }
    inline UpdateApplicationRequest& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}
    inline UpdateApplicationRequest& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateApplicationRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateApplicationRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q Business permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateApplicationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateApplicationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline const AttachmentsConfiguration& GetAttachmentsConfiguration() const{ return m_attachmentsConfiguration; }
    inline bool AttachmentsConfigurationHasBeenSet() const { return m_attachmentsConfigurationHasBeenSet; }
    inline void SetAttachmentsConfiguration(const AttachmentsConfiguration& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = value; }
    inline void SetAttachmentsConfiguration(AttachmentsConfiguration&& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = std::move(value); }
    inline UpdateApplicationRequest& WithAttachmentsConfiguration(const AttachmentsConfiguration& value) { SetAttachmentsConfiguration(value); return *this;}
    inline UpdateApplicationRequest& WithAttachmentsConfiguration(AttachmentsConfiguration&& value) { SetAttachmentsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to create and use Amazon Q Apps in the web
     * experience.</p>
     */
    inline const QAppsConfiguration& GetQAppsConfiguration() const{ return m_qAppsConfiguration; }
    inline bool QAppsConfigurationHasBeenSet() const { return m_qAppsConfigurationHasBeenSet; }
    inline void SetQAppsConfiguration(const QAppsConfiguration& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = value; }
    inline void SetQAppsConfiguration(QAppsConfiguration&& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = std::move(value); }
    inline UpdateApplicationRequest& WithQAppsConfiguration(const QAppsConfiguration& value) { SetQAppsConfiguration(value); return *this;}
    inline UpdateApplicationRequest& WithQAppsConfiguration(QAppsConfiguration&& value) { SetQAppsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about chat response personalization. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
     * chat responses</a>.</p>
     */
    inline const PersonalizationConfiguration& GetPersonalizationConfiguration() const{ return m_personalizationConfiguration; }
    inline bool PersonalizationConfigurationHasBeenSet() const { return m_personalizationConfigurationHasBeenSet; }
    inline void SetPersonalizationConfiguration(const PersonalizationConfiguration& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = value; }
    inline void SetPersonalizationConfiguration(PersonalizationConfiguration&& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = std::move(value); }
    inline UpdateApplicationRequest& WithPersonalizationConfiguration(const PersonalizationConfiguration& value) { SetPersonalizationConfiguration(value); return *this;}
    inline UpdateApplicationRequest& WithPersonalizationConfiguration(PersonalizationConfiguration&& value) { SetPersonalizationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to enable updating the default subscription type assigned to an
     * Amazon Q Business application using IAM identity federation for user
     * management.</p>
     */
    inline const AutoSubscriptionConfiguration& GetAutoSubscriptionConfiguration() const{ return m_autoSubscriptionConfiguration; }
    inline bool AutoSubscriptionConfigurationHasBeenSet() const { return m_autoSubscriptionConfigurationHasBeenSet; }
    inline void SetAutoSubscriptionConfiguration(const AutoSubscriptionConfiguration& value) { m_autoSubscriptionConfigurationHasBeenSet = true; m_autoSubscriptionConfiguration = value; }
    inline void SetAutoSubscriptionConfiguration(AutoSubscriptionConfiguration&& value) { m_autoSubscriptionConfigurationHasBeenSet = true; m_autoSubscriptionConfiguration = std::move(value); }
    inline UpdateApplicationRequest& WithAutoSubscriptionConfiguration(const AutoSubscriptionConfiguration& value) { SetAutoSubscriptionConfiguration(value); return *this;}
    inline UpdateApplicationRequest& WithAutoSubscriptionConfiguration(AutoSubscriptionConfiguration&& value) { SetAutoSubscriptionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    AttachmentsConfiguration m_attachmentsConfiguration;
    bool m_attachmentsConfigurationHasBeenSet = false;

    QAppsConfiguration m_qAppsConfiguration;
    bool m_qAppsConfigurationHasBeenSet = false;

    PersonalizationConfiguration m_personalizationConfiguration;
    bool m_personalizationConfigurationHasBeenSet = false;

    AutoSubscriptionConfiguration m_autoSubscriptionConfiguration;
    bool m_autoSubscriptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
