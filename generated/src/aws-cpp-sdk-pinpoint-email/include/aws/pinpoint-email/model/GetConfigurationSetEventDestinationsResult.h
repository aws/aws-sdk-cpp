/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/EventDestination.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about an event destination for a configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetConfigurationSetEventDestinationsResponse">AWS
   * API Reference</a></p>
   */
  class GetConfigurationSetEventDestinationsResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetConfigurationSetEventDestinationsResult() = default;
    AWS_PINPOINTEMAIL_API GetConfigurationSetEventDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetConfigurationSetEventDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that includes all of the events destinations that have been
     * configured for the configuration set.</p>
     */
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
} // namespace PinpointEmail
} // namespace Aws
