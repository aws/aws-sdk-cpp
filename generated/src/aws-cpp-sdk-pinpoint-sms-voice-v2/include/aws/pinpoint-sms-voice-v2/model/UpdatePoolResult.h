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
    AWS_PINPOINTSMSVOICEV2_API UpdatePoolResult();
    AWS_PINPOINTSMSVOICEV2_API UpdatePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API UpdatePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }
    inline void SetPoolArn(const Aws::String& value) { m_poolArn = value; }
    inline void SetPoolArn(Aws::String&& value) { m_poolArn = std::move(value); }
    inline void SetPoolArn(const char* value) { m_poolArn.assign(value); }
    inline UpdatePoolResult& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}
    inline UpdatePoolResult& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}
    inline UpdatePoolResult& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }
    inline UpdatePoolResult& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline UpdatePoolResult& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline UpdatePoolResult& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pool update request.</p>
     */
    inline const PoolStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PoolStatus& value) { m_status = value; }
    inline void SetStatus(PoolStatus&& value) { m_status = std::move(value); }
    inline UpdatePoolResult& WithStatus(const PoolStatus& value) { SetStatus(value); return *this;}
    inline UpdatePoolResult& WithStatus(PoolStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message for the pool to use.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline void SetMessageType(const MessageType& value) { m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageType = std::move(value); }
    inline UpdatePoolResult& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline UpdatePoolResult& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabled = value; }
    inline UpdatePoolResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArn = value; }
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArn = std::move(value); }
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArn.assign(value); }
    inline UpdatePoolResult& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}
    inline UpdatePoolResult& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}
    inline UpdatePoolResult& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
     * SMS messages.</p>
     */
    inline const Aws::String& GetTwoWayChannelRole() const{ return m_twoWayChannelRole; }
    inline void SetTwoWayChannelRole(const Aws::String& value) { m_twoWayChannelRole = value; }
    inline void SetTwoWayChannelRole(Aws::String&& value) { m_twoWayChannelRole = std::move(value); }
    inline void SetTwoWayChannelRole(const char* value) { m_twoWayChannelRole.assign(value); }
    inline UpdatePoolResult& WithTwoWayChannelRole(const Aws::String& value) { SetTwoWayChannelRole(value); return *this;}
    inline UpdatePoolResult& WithTwoWayChannelRole(Aws::String&& value) { SetTwoWayChannelRole(std::move(value)); return *this;}
    inline UpdatePoolResult& WithTwoWayChannelRole(const char* value) { SetTwoWayChannelRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When an end recipient sends a message that begins with HELP or STOP to one of
     * your dedicated numbers, Amazon Pinpoint automatically replies with a
     * customizable message and adds the end recipient to the OptOutList. When set to
     * true you're responsible for responding to HELP and STOP requests. You're also
     * responsible for tracking and honoring opt-out requests.</p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const{ return m_selfManagedOptOutsEnabled; }
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabled = value; }
    inline UpdatePoolResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList associated with the pool.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }
    inline UpdatePoolResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline UpdatePoolResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline UpdatePoolResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether shared routes are enabled for the pool.</p>
     */
    inline bool GetSharedRoutesEnabled() const{ return m_sharedRoutesEnabled; }
    inline void SetSharedRoutesEnabled(bool value) { m_sharedRoutesEnabled = value; }
    inline UpdatePoolResult& WithSharedRoutesEnabled(bool value) { SetSharedRoutesEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true the pool can't be deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabled = value; }
    inline UpdatePoolResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline UpdatePoolResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline UpdatePoolResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;

    Aws::String m_poolId;

    PoolStatus m_status;

    MessageType m_messageType;

    bool m_twoWayEnabled;

    Aws::String m_twoWayChannelArn;

    Aws::String m_twoWayChannelRole;

    bool m_selfManagedOptOutsEnabled;

    Aws::String m_optOutListName;

    bool m_sharedRoutesEnabled;

    bool m_deletionProtectionEnabled;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
