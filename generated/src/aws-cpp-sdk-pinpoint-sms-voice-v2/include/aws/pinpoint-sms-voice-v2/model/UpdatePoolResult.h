/**
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class UpdatePoolResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdatePoolResult() = default;
    AWS_PINPOINTSMSVOICEV2_API UpdatePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API UpdatePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const { return m_poolArn; }
    template<typename PoolArnT = Aws::String>
    void SetPoolArn(PoolArnT&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::forward<PoolArnT>(value); }
    template<typename PoolArnT = Aws::String>
    UpdatePoolResult& WithPoolArn(PoolArnT&& value) { SetPoolArn(std::forward<PoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    UpdatePoolResult& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pool update request.</p>
     */
    inline PoolStatus GetStatus() const { return m_status; }
    inline void SetStatus(PoolStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdatePoolResult& WithStatus(PoolStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message for the pool to use.</p>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline UpdatePoolResult& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const { return m_twoWayEnabled; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabledHasBeenSet = true; m_twoWayEnabled = value; }
    inline UpdatePoolResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const { return m_twoWayChannelArn; }
    template<typename TwoWayChannelArnT = Aws::String>
    void SetTwoWayChannelArn(TwoWayChannelArnT&& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = std::forward<TwoWayChannelArnT>(value); }
    template<typename TwoWayChannelArnT = Aws::String>
    UpdatePoolResult& WithTwoWayChannelArn(TwoWayChannelArnT&& value) { SetTwoWayChannelArn(std::forward<TwoWayChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
     * SMS messages.</p>
     */
    inline const Aws::String& GetTwoWayChannelRole() const { return m_twoWayChannelRole; }
    template<typename TwoWayChannelRoleT = Aws::String>
    void SetTwoWayChannelRole(TwoWayChannelRoleT&& value) { m_twoWayChannelRoleHasBeenSet = true; m_twoWayChannelRole = std::forward<TwoWayChannelRoleT>(value); }
    template<typename TwoWayChannelRoleT = Aws::String>
    UpdatePoolResult& WithTwoWayChannelRole(TwoWayChannelRoleT&& value) { SetTwoWayChannelRole(std::forward<TwoWayChannelRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When an end recipient sends a message that begins with HELP or STOP to one of
     * your dedicated numbers, AWS End User Messaging SMS and Voice automatically
     * replies with a customizable message and adds the end recipient to the
     * OptOutList. When set to true you're responsible for responding to HELP and STOP
     * requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const { return m_selfManagedOptOutsEnabled; }
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabledHasBeenSet = true; m_selfManagedOptOutsEnabled = value; }
    inline UpdatePoolResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList associated with the pool.</p>
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    UpdatePoolResult& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether shared routes are enabled for the pool.</p>
     */
    inline bool GetSharedRoutesEnabled() const { return m_sharedRoutesEnabled; }
    inline void SetSharedRoutesEnabled(bool value) { m_sharedRoutesEnabledHasBeenSet = true; m_sharedRoutesEnabled = value; }
    inline UpdatePoolResult& WithSharedRoutesEnabled(bool value) { SetSharedRoutesEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true the pool can't be deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline UpdatePoolResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    UpdatePoolResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePoolResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    PoolStatus m_status{PoolStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    bool m_twoWayEnabled{false};
    bool m_twoWayEnabledHasBeenSet = false;

    Aws::String m_twoWayChannelArn;
    bool m_twoWayChannelArnHasBeenSet = false;

    Aws::String m_twoWayChannelRole;
    bool m_twoWayChannelRoleHasBeenSet = false;

    bool m_selfManagedOptOutsEnabled{false};
    bool m_selfManagedOptOutsEnabledHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    bool m_sharedRoutesEnabled{false};
    bool m_sharedRoutesEnabledHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
