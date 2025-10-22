/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ChannelAlert.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListAlertsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListAlertsResponse">AWS
   * API Reference</a></p>
   */
  class ListAlertsResult
  {
  public:
    AWS_MEDIALIVE_API ListAlertsResult() = default;
    AWS_MEDIALIVE_API ListAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The alerts found for this channel
     */
    inline const Aws::Vector<ChannelAlert>& GetAlerts() const { return m_alerts; }
    template<typename AlertsT = Aws::Vector<ChannelAlert>>
    void SetAlerts(AlertsT&& value) { m_alertsHasBeenSet = true; m_alerts = std::forward<AlertsT>(value); }
    template<typename AlertsT = Aws::Vector<ChannelAlert>>
    ListAlertsResult& WithAlerts(AlertsT&& value) { SetAlerts(std::forward<AlertsT>(value)); return *this;}
    template<typename AlertsT = ChannelAlert>
    ListAlertsResult& AddAlerts(AlertsT&& value) { m_alertsHasBeenSet = true; m_alerts.emplace_back(std::forward<AlertsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token to use to retrieve the next page of results
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAlertsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAlertsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelAlert> m_alerts;
    bool m_alertsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
