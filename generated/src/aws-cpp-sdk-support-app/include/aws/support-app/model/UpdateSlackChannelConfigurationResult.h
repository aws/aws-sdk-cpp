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
    AWS_SUPPORTAPP_API UpdateSlackChannelConfigurationResult();
    AWS_SUPPORTAPP_API UpdateSlackChannelConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API UpdateSlackChannelConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelId = value; }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelId = std::move(value); }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline void SetChannelId(const char* value) { m_channelId.assign(value); }

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>The channel ID in Slack. This ID identifies a channel within a Slack
     * workspace.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the Slack channel that you configure for the Amazon Web Services
     * Support App.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


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
    inline void SetChannelRoleArn(const Aws::String& value) { m_channelRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline void SetChannelRoleArn(Aws::String&& value) { m_channelRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline void SetChannelRoleArn(const char* value) { m_channelRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelRoleArn(const Aws::String& value) { SetChannelRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelRoleArn(Aws::String&& value) { SetChannelRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that you want to use to perform
     * operations on Amazon Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
     * access to the Amazon Web Services Support App</a> in the <i>Amazon Web Services
     * Support User Guide</i>.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithChannelRoleArn(const char* value) { SetChannelRoleArn(value); return *this;}


    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline bool GetNotifyOnAddCorrespondenceToCase() const{ return m_notifyOnAddCorrespondenceToCase; }

    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline void SetNotifyOnAddCorrespondenceToCase(bool value) { m_notifyOnAddCorrespondenceToCase = value; }

    /**
     * <p>Whether you want to get notified when a support case has a new
     * correspondence.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnAddCorrespondenceToCase(bool value) { SetNotifyOnAddCorrespondenceToCase(value); return *this;}


    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p>
     */
    inline const NotificationSeverityLevel& GetNotifyOnCaseSeverity() const{ return m_notifyOnCaseSeverity; }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p>
     */
    inline void SetNotifyOnCaseSeverity(const NotificationSeverityLevel& value) { m_notifyOnCaseSeverity = value; }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p>
     */
    inline void SetNotifyOnCaseSeverity(NotificationSeverityLevel&& value) { m_notifyOnCaseSeverity = std::move(value); }

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnCaseSeverity(const NotificationSeverityLevel& value) { SetNotifyOnCaseSeverity(value); return *this;}

    /**
     * <p>The case severity for a support case that you want to receive
     * notifications.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnCaseSeverity(NotificationSeverityLevel&& value) { SetNotifyOnCaseSeverity(std::move(value)); return *this;}


    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline bool GetNotifyOnCreateOrReopenCase() const{ return m_notifyOnCreateOrReopenCase; }

    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline void SetNotifyOnCreateOrReopenCase(bool value) { m_notifyOnCreateOrReopenCase = value; }

    /**
     * <p>Whether you want to get notified when a support case is created or
     * reopened.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnCreateOrReopenCase(bool value) { SetNotifyOnCreateOrReopenCase(value); return *this;}


    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline bool GetNotifyOnResolveCase() const{ return m_notifyOnResolveCase; }

    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline void SetNotifyOnResolveCase(bool value) { m_notifyOnResolveCase = value; }

    /**
     * <p>Whether you want to get notified when a support case is resolved.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithNotifyOnResolveCase(bool value) { SetNotifyOnResolveCase(value); return *this;}


    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const Aws::String& value) { m_teamId = value; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(Aws::String&& value) { m_teamId = std::move(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const char* value) { m_teamId.assign(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline UpdateSlackChannelConfigurationResult& WithTeamId(const char* value) { SetTeamId(value); return *this;}

  private:

    Aws::String m_channelId;

    Aws::String m_channelName;

    Aws::String m_channelRoleArn;

    bool m_notifyOnAddCorrespondenceToCase;

    NotificationSeverityLevel m_notifyOnCaseSeverity;

    bool m_notifyOnCreateOrReopenCase;

    bool m_notifyOnResolveCase;

    Aws::String m_teamId;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
