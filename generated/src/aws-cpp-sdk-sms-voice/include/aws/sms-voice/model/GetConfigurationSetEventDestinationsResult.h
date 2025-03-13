/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_PINPOINTSMSVOICE_API GetConfigurationSetEventDestinationsResult() = default;
    AWS_PINPOINTSMSVOICE_API GetConfigurationSetEventDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICE_API GetConfigurationSetEventDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const { return m_eventDestinations; }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    void SetEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::forward<EventDestinationsT>(value); }
    template<typename EventDestinationsT = Aws::Vector<EventDestination>>
    GetConfigurationSetEventDestinationsResult& WithEventDestinations(EventDestinationsT&& value) { SetEventDestinations(std::forward<EventDestinationsT>(value)); return *this;}
    template<typename EventDestinationsT = EventDestination>
    GetConfigurationSetEventDestinationsResult& AddEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.emplace_back(std::forward<EventDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationSetEventDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
