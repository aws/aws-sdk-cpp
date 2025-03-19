/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
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
  class SetDefaultMessageTypeResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetDefaultMessageTypeResult() = default;
    AWS_PINPOINTSMSVOICEV2_API SetDefaultMessageTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SetDefaultMessageTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const { return m_configurationSetArn; }
    template<typename ConfigurationSetArnT = Aws::String>
    void SetConfigurationSetArn(ConfigurationSetArnT&& value) { m_configurationSetArnHasBeenSet = true; m_configurationSetArn = std::forward<ConfigurationSetArnT>(value); }
    template<typename ConfigurationSetArnT = Aws::String>
    SetDefaultMessageTypeResult& WithConfigurationSetArn(ConfigurationSetArnT&& value) { SetConfigurationSetArn(std::forward<ConfigurationSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set that was updated.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SetDefaultMessageTypeResult& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new default message type of the configuration set.</p>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline SetDefaultMessageTypeResult& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SetDefaultMessageTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetArn;
    bool m_configurationSetArnHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
