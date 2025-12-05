/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MultiplexAlert.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {
/**
 * Placeholder documentation for ListMultiplexAlertsResponse<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexAlertsResponse">AWS
 * API Reference</a></p>
 */
class ListMultiplexAlertsResult {
 public:
  AWS_MEDIALIVE_API ListMultiplexAlertsResult() = default;
  AWS_MEDIALIVE_API ListMultiplexAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIALIVE_API ListMultiplexAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * The alerts found for this multiplex
   */
  inline const Aws::Vector<MultiplexAlert>& GetAlerts() const { return m_alerts; }
  template <typename AlertsT = Aws::Vector<MultiplexAlert>>
  void SetAlerts(AlertsT&& value) {
    m_alertsHasBeenSet = true;
    m_alerts = std::forward<AlertsT>(value);
  }
  template <typename AlertsT = Aws::Vector<MultiplexAlert>>
  ListMultiplexAlertsResult& WithAlerts(AlertsT&& value) {
    SetAlerts(std::forward<AlertsT>(value));
    return *this;
  }
  template <typename AlertsT = MultiplexAlert>
  ListMultiplexAlertsResult& AddAlerts(AlertsT&& value) {
    m_alertsHasBeenSet = true;
    m_alerts.emplace_back(std::forward<AlertsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The token to use to retrieve the next page of results
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMultiplexAlertsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListMultiplexAlertsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MultiplexAlert> m_alerts;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_alertsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
