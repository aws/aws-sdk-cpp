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
    AWS_SUPPORTAPP_API CreateSlackChannelConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlackChannelConfiguration"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    CreateSlackChannelConfigurationRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    CreateSlackChannelConfigurationRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline const Aws::String& GetChannelRoleArn() const { return m_channelRoleArn; }
    inline bool ChannelRoleArnHasBeenSet() const { return m_channelRoleArnHasBeenSet; }
    template<typename ChannelRoleArnT = Aws::String>
    void SetChannelRoleArn(ChannelRoleArnT&& value) { m_channelRoleArnHasBeenSet = true; m_channelRoleArn = std::forward<ChannelRoleArnT>(value); }
    template<typename ChannelRoleArnT = Aws::String>
    CreateSlackChannelConfigurationRequest& WithChannelRoleArn(ChannelRoleArnT&& value) { SetChannelRoleArn(std::forward<ChannelRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline bool GetNotifyOnAddCorrespondenceToCase() const { return m_notifyOnAddCorrespondenceToCase; }
    inline bool NotifyOnAddCorrespondenceToCaseHasBeenSet() const { return m_notifyOnAddCorrespondenceToCaseHasBeenSet; }
    inline void SetNotifyOnAddCorrespondenceToCase(bool value) { m_notifyOnAddCorrespondenceToCaseHasBeenSet = true; m_notifyOnAddCorrespondenceToCase = value; }
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnAddCorrespondenceToCase(bool value) { SetNotifyOnAddCorrespondenceToCase(value); return *this;}
    ///@}

    ///@{
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
    inline NotificationSeverityLevel GetNotifyOnCaseSeverity() const { return m_notifyOnCaseSeverity; }
    inline bool NotifyOnCaseSeverityHasBeenSet() const { return m_notifyOnCaseSeverityHasBeenSet; }
    inline void SetNotifyOnCaseSeverity(NotificationSeverityLevel value) { m_notifyOnCaseSeverityHasBeenSet = true; m_notifyOnCaseSeverity = value; }
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnCaseSeverity(NotificationSeverityLevel value) { SetNotifyOnCaseSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline bool GetNotifyOnCreateOrReopenCase() const { return m_notifyOnCreateOrReopenCase; }
    inline bool NotifyOnCreateOrReopenCaseHasBeenSet() const { return m_notifyOnCreateOrReopenCaseHasBeenSet; }
    inline void SetNotifyOnCreateOrReopenCase(bool value) { m_notifyOnCreateOrReopenCaseHasBeenSet = true; m_notifyOnCreateOrReopenCase = value; }
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnCreateOrReopenCase(bool value) { SetNotifyOnCreateOrReopenCase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline bool GetNotifyOnResolveCase() const { return m_notifyOnResolveCase; }
    inline bool NotifyOnResolveCaseHasBeenSet() const { return m_notifyOnResolveCaseHasBeenSet; }
    inline void SetNotifyOnResolveCase(bool value) { m_notifyOnResolveCaseHasBeenSet = true; m_notifyOnResolveCase = value; }
    inline CreateSlackChannelConfigurationRequest& WithNotifyOnResolveCase(bool value) { SetNotifyOnResolveCase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    CreateSlackChannelConfigurationRequest& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelRoleArn;
    bool m_channelRoleArnHasBeenSet = false;

    bool m_notifyOnAddCorrespondenceToCase{false};
    bool m_notifyOnAddCorrespondenceToCaseHasBeenSet = false;

    NotificationSeverityLevel m_notifyOnCaseSeverity{NotificationSeverityLevel::NOT_SET};
    bool m_notifyOnCaseSeverityHasBeenSet = false;

    bool m_notifyOnCreateOrReopenCase{false};
    bool m_notifyOnCreateOrReopenCaseHasBeenSet = false;

    bool m_notifyOnResolveCase{false};
    bool m_notifyOnResolveCaseHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
