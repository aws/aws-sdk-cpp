/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/EventDestination.h>
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
  class DeleteEventDestinationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteEventDestinationResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteEventDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteEventDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline DeleteEventDestinationResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline DeleteEventDestinationResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline DeleteEventDestinationResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}


    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline DeleteEventDestinationResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline DeleteEventDestinationResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set the event destination was deleted from.</p>
     */
    inline DeleteEventDestinationResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The event destination object that was deleted.</p>
     */
    inline const EventDestination& GetEventDestination() const{ return m_eventDestination; }

    /**
     * <p>The event destination object that was deleted.</p>
     */
    inline void SetEventDestination(const EventDestination& value) { m_eventDestination = value; }

    /**
     * <p>The event destination object that was deleted.</p>
     */
    inline void SetEventDestination(EventDestination&& value) { m_eventDestination = std::move(value); }

    /**
     * <p>The event destination object that was deleted.</p>
     */
    inline DeleteEventDestinationResult& WithEventDestination(const EventDestination& value) { SetEventDestination(value); return *this;}

    /**
     * <p>The event destination object that was deleted.</p>
     */
    inline DeleteEventDestinationResult& WithEventDestination(EventDestination&& value) { SetEventDestination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEventDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEventDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEventDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    EventDestination m_eventDestination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
