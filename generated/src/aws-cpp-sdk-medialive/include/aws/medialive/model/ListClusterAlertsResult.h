/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ClusterAlert.h>

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
 * Placeholder documentation for ListClusterAlertsResponse<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListClusterAlertsResponse">AWS
 * API Reference</a></p>
 */
class ListClusterAlertsResult {
 public:
  AWS_MEDIALIVE_API ListClusterAlertsResult() = default;
  AWS_MEDIALIVE_API ListClusterAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIALIVE_API ListClusterAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * The alerts found for this cluster
   */
  inline const Aws::Vector<ClusterAlert>& GetAlerts() const { return m_alerts; }
  template <typename AlertsT = Aws::Vector<ClusterAlert>>
  void SetAlerts(AlertsT&& value) {
    m_alertsHasBeenSet = true;
    m_alerts = std::forward<AlertsT>(value);
  }
  template <typename AlertsT = Aws::Vector<ClusterAlert>>
  ListClusterAlertsResult& WithAlerts(AlertsT&& value) {
    SetAlerts(std::forward<AlertsT>(value));
    return *this;
  }
  template <typename AlertsT = ClusterAlert>
  ListClusterAlertsResult& AddAlerts(AlertsT&& value) {
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
  ListClusterAlertsResult& WithNextToken(NextTokenT&& value) {
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
  ListClusterAlertsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ClusterAlert> m_alerts;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_alertsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
