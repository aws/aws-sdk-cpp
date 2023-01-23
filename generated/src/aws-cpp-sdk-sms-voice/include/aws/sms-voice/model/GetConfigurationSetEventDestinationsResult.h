/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms-voice/model/EventDestination.h>
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
namespace PinpointSMSVoice
{
namespace Model
{
  /**
   * An object that contains information about an event destination.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/GetConfigurationSetEventDestinationsResponse">AWS
   * API Reference</a></p>
   */
  class GetConfigurationSetEventDestinationsResult
  {
  public:
    AWS_PINPOINTSMSVOICE_API GetConfigurationSetEventDestinationsResult();
    AWS_PINPOINTSMSVOICE_API GetConfigurationSetEventDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICE_API GetConfigurationSetEventDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const{ return m_eventDestinations; }

    
    inline void SetEventDestinations(const Aws::Vector<EventDestination>& value) { m_eventDestinations = value; }

    
    inline void SetEventDestinations(Aws::Vector<EventDestination>&& value) { m_eventDestinations = std::move(value); }

    
    inline GetConfigurationSetEventDestinationsResult& WithEventDestinations(const Aws::Vector<EventDestination>& value) { SetEventDestinations(value); return *this;}

    
    inline GetConfigurationSetEventDestinationsResult& WithEventDestinations(Aws::Vector<EventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}

    
    inline GetConfigurationSetEventDestinationsResult& AddEventDestinations(const EventDestination& value) { m_eventDestinations.push_back(value); return *this; }

    
    inline GetConfigurationSetEventDestinationsResult& AddEventDestinations(EventDestination&& value) { m_eventDestinations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EventDestination> m_eventDestinations;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
