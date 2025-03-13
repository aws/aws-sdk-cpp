/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support-app/model/NotificationSeverityLevel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SupportApp
{
namespace Model
{
  class UpdateSlackChannelConfigurationResult
  {
  public:
    AWS_SUPPORTAPP_API UpdateSlackChannelConfigurationResult() = default;
    AWS_SUPPORTAPP_API UpdateSlackChannelConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API UpdateSlackChannelConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    UpdateSlackChannelConfigurationResult& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    UpdateSlackChannelConfigurationResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
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
    template<typename ChannelRoleArnT = Aws::String>
    void SetChannelRoleArn(ChannelRoleArnT&& value) { m_channelRoleArnHasBeenSet = true; m_channelRoleArn = std::forward<ChannelRoleArnT>(value); }
    template<typename ChannelRoleArnT = Aws::String>
    UpdateSlackChannelConfigurationResult& WithChannelRoleArn(ChannelRoleArnT&& value) { SetChannelRoleArn(std::forward<ChannelRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline bool GetNotifyOnAddCorrespondenceToCase() const { return m_notifyOnAddCorrespondenceToCase; }
    inline void SetNotifyOnAddCorrespondenceToCase(bool value) { m_notifyOnAddCorrespondenceToCaseHasBeenSet = true; m_notifyOnAddCorrespondenceToCase = value; }
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnAddCorrespondenceToCase(bool value) { SetNotifyOnAddCorrespondenceToCase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p>
     */
    inline NotificationSeverityLevel GetNotifyOnCaseSeverity() const { return m_notifyOnCaseSeverity; }
    inline void SetNotifyOnCaseSeverity(NotificationSeverityLevel value) { m_notifyOnCaseSeverityHasBeenSet = true; m_notifyOnCaseSeverity = value; }
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnCaseSeverity(NotificationSeverityLevel value) { SetNotifyOnCaseSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline bool GetNotifyOnCreateOrReopenCase() const { return m_notifyOnCreateOrReopenCase; }
    inline void SetNotifyOnCreateOrReopenCase(bool value) { m_notifyOnCreateOrReopenCaseHasBeenSet = true; m_notifyOnCreateOrReopenCase = value; }
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnCreateOrReopenCase(bool value) { SetNotifyOnCreateOrReopenCase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline bool GetNotifyOnResolveCase() const { return m_notifyOnResolveCase; }
    inline void SetNotifyOnResolveCase(bool value) { m_notifyOnResolveCaseHasBeenSet = true; m_notifyOnResolveCase = value; }
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnResolveCase(bool value) { SetNotifyOnResolveCase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    UpdateSlackChannelConfigurationResult& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSlackChannelConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
