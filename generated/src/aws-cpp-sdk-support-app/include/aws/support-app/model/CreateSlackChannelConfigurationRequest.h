/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support-app/model/NotificationSeverityLevel.h>
#include <utility>

namespace Aws
{
namespace SupportApp
{
namespace Model
{

  /**
   */
  class CreateSlackChannelConfigurationRequest : public SupportAppRequest
  {
  public:
    AWS_SUPPORTAPP_API CreateSlackChannelConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlackChannelConfiguration"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;


    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline const Aws::String& GetChannelRoleArn() const{ return m_channelRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline bool ChannelRoleArnHasBeenSet() const { return m_channelRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline void SetChannelRoleArn(const Aws::String& value) { m_channelRoleArnHasBeenSet = true; m_channelRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline void SetChannelRoleArn(Aws::String&& value) { m_channelRoleArnHasBeenSet = true; m_channelRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline void SetChannelRoleArn(const char* value) { m_channelRoleArnHasBeenSet = true; m_channelRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelRoleArn(const Aws::String& value) { SetChannelRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelRoleArn(Aws::String&& value) { SetChannelRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithChannelRoleArn(const char* value) { SetChannelRoleArn(value); return *this;}


    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline bool GetNotifyOnAddCorrespondenceToCase() const{ return m_notifyOnAddCorrespondenceToCase; }

    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline bool NotifyOnAddCorrespondenceToCaseHasBeenSet() const { return m_notifyOnAddCorrespondenceToCaseHasBeenSet; }

    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline void SetNotifyOnAddCorrespondenceToCase(bool value) { m_notifyOnAddCorrespondenceToCaseHasBeenSet = true; m_notifyOnAddCorrespondenceToCase = value; }

    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnAddCorrespondenceToCase(bool value) { SetNotifyOnAddCorrespondenceToCase(value); return *this;}


    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p> <p>If you specify <code>high</code> or <code>all</code>, you
     * must specify <code>true</code> for at least one of the following parameters:</p>
     * <ul> <li> <p> <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul> <p>If you specify
     * <code>none</code>, the following parameters must be null or
     * <code>false</code>:</p> <ul> <li> <p>
     * <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul>  <p>If you don't specify
     * these parameters in your request, they default to <code>false</code>.</p>
     * 
     */
    inline const NotificationSeverityLevel& GetNotifyOnCaseSeverity() const{ return m_notifyOnCaseSeverity; }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p> <p>If you specify <code>high</code> or <code>all</code>, you
     * must specify <code>true</code> for at least one of the following parameters:</p>
     * <ul> <li> <p> <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul> <p>If you specify
     * <code>none</code>, the following parameters must be null or
     * <code>false</code>:</p> <ul> <li> <p>
     * <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul>  <p>If you don't specify
     * these parameters in your request, they default to <code>false</code>.</p>
     * 
     */
    inline bool NotifyOnCaseSeverityHasBeenSet() const { return m_notifyOnCaseSeverityHasBeenSet; }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p> <p>If you specify <code>high</code> or <code>all</code>, you
     * must specify <code>true</code> for at least one of the following parameters:</p>
     * <ul> <li> <p> <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul> <p>If you specify
     * <code>none</code>, the following parameters must be null or
     * <code>false</code>:</p> <ul> <li> <p>
     * <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul>  <p>If you don't specify
     * these parameters in your request, they default to <code>false</code>.</p>
     * 
     */
    inline void SetNotifyOnCaseSeverity(const NotificationSeverityLevel& value) { m_notifyOnCaseSeverityHasBeenSet = true; m_notifyOnCaseSeverity = value; }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p> <p>If you specify <code>high</code> or <code>all</code>, you
     * must specify <code>true</code> for at least one of the following parameters:</p>
     * <ul> <li> <p> <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul> <p>If you specify
     * <code>none</code>, the following parameters must be null or
     * <code>false</code>:</p> <ul> <li> <p>
     * <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul>  <p>If you don't specify
     * these parameters in your request, they default to <code>false</code>.</p>
     * 
     */
    inline void SetNotifyOnCaseSeverity(NotificationSeverityLevel&& value) { m_notifyOnCaseSeverityHasBeenSet = true; m_notifyOnCaseSeverity = std::move(value); }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p> <p>If you specify <code>high</code> or <code>all</code>, you
     * must specify <code>true</code> for at least one of the following parameters:</p>
     * <ul> <li> <p> <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul> <p>If you specify
     * <code>none</code>, the following parameters must be null or
     * <code>false</code>:</p> <ul> <li> <p>
     * <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul>  <p>If you don't specify
     * these parameters in your request, they default to <code>false</code>.</p>
     * 
     */
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnCaseSeverity(const NotificationSeverityLevel& value) { SetNotifyOnCaseSeverity(value); return *this;}

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p> <p>If you specify <code>high</code> or <code>all</code>, you
     * must specify <code>true</code> for at least one of the following parameters:</p>
     * <ul> <li> <p> <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul> <p>If you specify
     * <code>none</code>, the following parameters must be null or
     * <code>false</code>:</p> <ul> <li> <p>
     * <code>notifyOnAddCorrespondenceToCase</code> </p> </li> <li> <p>
     * <code>notifyOnCreateOrReopenCase</code> </p> </li> <li> <p>
     * <code>notifyOnResolveCase</code> </p> </li> </ul>  <p>If you don't specify
     * these parameters in your request, they default to <code>false</code>.</p>
     * 
     */
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnCaseSeverity(NotificationSeverityLevel&& value) { SetNotifyOnCaseSeverity(std::move(value)); return *this;}


    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline bool GetNotifyOnCreateOrReopenCase() const{ return m_notifyOnCreateOrReopenCase; }

    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline bool NotifyOnCreateOrReopenCaseHasBeenSet() const { return m_notifyOnCreateOrReopenCaseHasBeenSet; }

    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline void SetNotifyOnCreateOrReopenCase(bool value) { m_notifyOnCreateOrReopenCaseHasBeenSet = true; m_notifyOnCreateOrReopenCase = value; }

    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnCreateOrReopenCase(bool value) { SetNotifyOnCreateOrReopenCase(value); return *this;}


    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline bool GetNotifyOnResolveCase() const{ return m_notifyOnResolveCase; }

    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline bool NotifyOnResolveCaseHasBeenSet() const { return m_notifyOnResolveCaseHasBeenSet; }

    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline void SetNotifyOnResolveCase(bool value) { m_notifyOnResolveCaseHasBeenSet = true; m_notifyOnResolveCase = value; }

    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnResolveCase(bool value) { SetNotifyOnResolveCase(value); return *this;}


    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline CreateSlackChannelConfigurationRequest& WithTeamId(const char* value) { SetTeamId(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelRoleArn;
    bool m_channelRoleArnHasBeenSet = false;

    bool m_notifyOnAddCorrespondenceToCase;
    bool m_notifyOnAddCorrespondenceToCaseHasBeenSet = false;

    NotificationSeverityLevel m_notifyOnCaseSeverity;
    bool m_notifyOnCaseSeverityHasBeenSet = false;

    bool m_notifyOnCreateOrReopenCase;
    bool m_notifyOnCreateOrReopenCaseHasBeenSet = false;

    bool m_notifyOnResolveCase;
    bool m_notifyOnResolveCaseHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
