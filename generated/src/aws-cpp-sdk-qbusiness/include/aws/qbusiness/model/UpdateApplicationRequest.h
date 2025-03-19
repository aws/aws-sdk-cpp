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
    AWS_QBUSINESS_API UpdateApplicationRequest() = default;

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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateApplicationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM Identity Center instance you are
     * either creating for—or connecting to—your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value); }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    UpdateApplicationRequest& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateApplicationRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q Business permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateApplicationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline const AttachmentsConfiguration& GetAttachmentsConfiguration() const { return m_attachmentsConfiguration; }
    inline bool AttachmentsConfigurationHasBeenSet() const { return m_attachmentsConfigurationHasBeenSet; }
    template<typename AttachmentsConfigurationT = AttachmentsConfiguration>
    void SetAttachmentsConfiguration(AttachmentsConfigurationT&& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = std::forward<AttachmentsConfigurationT>(value); }
    template<typename AttachmentsConfigurationT = AttachmentsConfiguration>
    UpdateApplicationRequest& WithAttachmentsConfiguration(AttachmentsConfigurationT&& value) { SetAttachmentsConfiguration(std::forward<AttachmentsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to create and use Amazon Q Apps in the web
     * experience.</p>
     */
    inline const QAppsConfiguration& GetQAppsConfiguration() const { return m_qAppsConfiguration; }
    inline bool QAppsConfigurationHasBeenSet() const { return m_qAppsConfigurationHasBeenSet; }
    template<typename QAppsConfigurationT = QAppsConfiguration>
    void SetQAppsConfiguration(QAppsConfigurationT&& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = std::forward<QAppsConfigurationT>(value); }
    template<typename QAppsConfigurationT = QAppsConfiguration>
    UpdateApplicationRequest& WithQAppsConfiguration(QAppsConfigurationT&& value) { SetQAppsConfiguration(std::forward<QAppsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about chat response personalization. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
     * chat responses</a>.</p>
     */
    inline const PersonalizationConfiguration& GetPersonalizationConfiguration() const { return m_personalizationConfiguration; }
    inline bool PersonalizationConfigurationHasBeenSet() const { return m_personalizationConfigurationHasBeenSet; }
    template<typename PersonalizationConfigurationT = PersonalizationConfiguration>
    void SetPersonalizationConfiguration(PersonalizationConfigurationT&& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = std::forward<PersonalizationConfigurationT>(value); }
    template<typename PersonalizationConfigurationT = PersonalizationConfiguration>
    UpdateApplicationRequest& WithPersonalizationConfiguration(PersonalizationConfigurationT&& value) { SetPersonalizationConfiguration(std::forward<PersonalizationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to enable updating the default subscription type assigned to an
     * Amazon Q Business application using IAM identity federation for user
     * management.</p>
     */
    inline const AutoSubscriptionConfiguration& GetAutoSubscriptionConfiguration() const { return m_autoSubscriptionConfiguration; }
    inline bool AutoSubscriptionConfigurationHasBeenSet() const { return m_autoSubscriptionConfigurationHasBeenSet; }
    template<typename AutoSubscriptionConfigurationT = AutoSubscriptionConfiguration>
    void SetAutoSubscriptionConfiguration(AutoSubscriptionConfigurationT&& value) { m_autoSubscriptionConfigurationHasBeenSet = true; m_autoSubscriptionConfiguration = std::forward<AutoSubscriptionConfigurationT>(value); }
    template<typename AutoSubscriptionConfigurationT = AutoSubscriptionConfiguration>
    UpdateApplicationRequest& WithAutoSubscriptionConfiguration(AutoSubscriptionConfigurationT&& value) { SetAutoSubscriptionConfiguration(std::forward<AutoSubscriptionConfigurationT>(value)); return *this;}
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
