/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace MediaLive {
namespace Model {

/**
 * Placeholder documentation for ListMultiplexAlertsRequest<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexAlertsRequest">AWS
 * API Reference</a></p>
 */
class ListMultiplexAlertsRequest : public MediaLiveRequest {
 public:
  AWS_MEDIALIVE_API ListMultiplexAlertsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMultiplexAlerts"; }

  AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

  AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * The maximum number of items to return
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMultiplexAlertsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The unique ID of the multiplex
   */
  inline const Aws::String& GetMultiplexId() const { return m_multiplexId; }
  inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
  template <typename MultiplexIdT = Aws::String>
  void SetMultiplexId(MultiplexIdT&& value) {
    m_multiplexIdHasBeenSet = true;
    m_multiplexId = std::forward<MultiplexIdT>(value);
  }
  template <typename MultiplexIdT = Aws::String>
  ListMultiplexAlertsRequest& WithMultiplexId(MultiplexIdT&& value) {
    SetMultiplexId(std::forward<MultiplexIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The next pagination token
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMultiplexAlertsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specifies the set of alerts to return based on their state. SET - Return only
   * alerts with SET state. CLEARED - Return only alerts with CLEARED state. ALL -
   * Return all alerts.
   */
  inline const Aws::String& GetStateFilter() const { return m_stateFilter; }
  inline bool StateFilterHasBeenSet() const { return m_stateFilterHasBeenSet; }
  template <typename StateFilterT = Aws::String>
  void SetStateFilter(StateFilterT&& value) {
    m_stateFilterHasBeenSet = true;
    m_stateFilter = std::forward<StateFilterT>(value);
  }
  template <typename StateFilterT = Aws::String>
  ListMultiplexAlertsRequest& WithStateFilter(StateFilterT&& value) {
    SetStateFilter(std::forward<StateFilterT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_multiplexId;

  Aws::String m_nextToken;

  Aws::String m_stateFilter;
  bool m_maxResultsHasBeenSet = false;
  bool m_multiplexIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_stateFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
