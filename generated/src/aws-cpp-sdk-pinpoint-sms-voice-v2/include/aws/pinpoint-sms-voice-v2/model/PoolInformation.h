﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/PoolStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for a pool in an Amazon Web Services account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PoolInformation">AWS
   * API Reference</a></p>
   */
  class PoolInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PoolInformation();
    AWS_PINPOINTSMSVOICEV2_API PoolInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API PoolInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }
    inline void SetPoolArn(const Aws::String& value) { m_poolArnHasBeenSet = true; m_poolArn = value; }
    inline void SetPoolArn(Aws::String&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::move(value); }
    inline void SetPoolArn(const char* value) { m_poolArnHasBeenSet = true; m_poolArn.assign(value); }
    inline PoolInformation& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}
    inline PoolInformation& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}
    inline PoolInformation& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline PoolInformation& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline PoolInformation& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline PoolInformation& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pool.</p>
     */
    inline const PoolStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PoolStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PoolStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PoolInformation& WithStatus(const PoolStatus& value) { SetStatus(value); return *this;}
    inline PoolInformation& WithStatus(PoolStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }
    inline PoolInformation& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline PoolInformation& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true you can receive incoming text messages from your end
     * recipients using the TwoWayChannelArn.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }
    inline bool TwoWayEnabledHasBeenSet() const { return m_twoWayEnabledHasBeenSet; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabledHasBeenSet = true; m_twoWayEnabled = value; }
    inline PoolInformation& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }
    inline bool TwoWayChannelArnHasBeenSet() const { return m_twoWayChannelArnHasBeenSet; }
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = value; }
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = std::move(value); }
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn.assign(value); }
    inline PoolInformation& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}
    inline PoolInformation& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}
    inline PoolInformation& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
     * SMS messages.</p>
     */
    inline const Aws::String& GetTwoWayChannelRole() const{ return m_twoWayChannelRole; }
    inline bool TwoWayChannelRoleHasBeenSet() const { return m_twoWayChannelRoleHasBeenSet; }
    inline void SetTwoWayChannelRole(const Aws::String& value) { m_twoWayChannelRoleHasBeenSet = true; m_twoWayChannelRole = value; }
    inline void SetTwoWayChannelRole(Aws::String&& value) { m_twoWayChannelRoleHasBeenSet = true; m_twoWayChannelRole = std::move(value); }
    inline void SetTwoWayChannelRole(const char* value) { m_twoWayChannelRoleHasBeenSet = true; m_twoWayChannelRole.assign(value); }
    inline PoolInformation& WithTwoWayChannelRole(const Aws::String& value) { SetTwoWayChannelRole(value); return *this;}
    inline PoolInformation& WithTwoWayChannelRole(Aws::String&& value) { SetTwoWayChannelRole(std::move(value)); return *this;}
    inline PoolInformation& WithTwoWayChannelRole(const char* value) { SetTwoWayChannelRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to false, an end recipient sends a message that begins with HELP or
     * STOP to one of your dedicated numbers, Amazon Pinpoint automatically replies
     * with a customizable message and adds the end recipient to the OptOutList. When
     * set to true you're responsible for responding to HELP and STOP requests. You're
     * also responsible for tracking and honoring opt-out requests. For more
     * information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-managing.html#settings-account-sms-self-managed-opt-out">Self-managed
     * opt-outs</a> </p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const{ return m_selfManagedOptOutsEnabled; }
    inline bool SelfManagedOptOutsEnabledHasBeenSet() const { return m_selfManagedOptOutsEnabledHasBeenSet; }
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabledHasBeenSet = true; m_selfManagedOptOutsEnabled = value; }
    inline PoolInformation& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList associated with the pool.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListNameHasBeenSet = true; m_optOutListName.assign(value); }
    inline PoolInformation& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline PoolInformation& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline PoolInformation& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to enable shared routes on your pool.</p> <p>By default, this is
     * set to <code>False</code>. If you set this value to <code>True</code>, your
     * messages are sent using phone numbers or sender IDs (depending on the country)
     * that are shared with other Amazon Pinpoint users. In some countries, such as the
     * United States, senders aren't allowed to use shared routes and must use a
     * dedicated phone number or short code.</p>
     */
    inline bool GetSharedRoutesEnabled() const{ return m_sharedRoutesEnabled; }
    inline bool SharedRoutesEnabledHasBeenSet() const { return m_sharedRoutesEnabledHasBeenSet; }
    inline void SetSharedRoutesEnabled(bool value) { m_sharedRoutesEnabledHasBeenSet = true; m_sharedRoutesEnabled = value; }
    inline PoolInformation& WithSharedRoutesEnabled(bool value) { SetSharedRoutesEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true the pool can't be deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline PoolInformation& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline PoolInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline PoolInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    PoolStatus m_status;
    bool m_statusHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    bool m_twoWayEnabled;
    bool m_twoWayEnabledHasBeenSet = false;

    Aws::String m_twoWayChannelArn;
    bool m_twoWayChannelArnHasBeenSet = false;

    Aws::String m_twoWayChannelRole;
    bool m_twoWayChannelRoleHasBeenSet = false;

    bool m_selfManagedOptOutsEnabled;
    bool m_selfManagedOptOutsEnabledHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    bool m_sharedRoutesEnabled;
    bool m_sharedRoutesEnabledHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
