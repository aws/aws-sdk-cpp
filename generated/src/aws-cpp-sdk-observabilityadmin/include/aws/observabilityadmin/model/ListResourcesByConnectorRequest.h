/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ConnectorQuery.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class ListResourcesByConnectorRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API ListResourcesByConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListResourcesByConnector"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The connector to use for the query. Specify one of the following:</p> <ul>
   * <li> <p>The Amazon Resource Name (ARN) of the connector</p> </li> <li> <p>The ID
   * of the connector</p> </li> </ul>
   */
  inline const Aws::String& GetConnectorIdentifier() const { return m_connectorIdentifier; }
  inline bool ConnectorIdentifierHasBeenSet() const { return m_connectorIdentifierHasBeenSet; }
  template <typename ConnectorIdentifierT = Aws::String>
  void SetConnectorIdentifier(ConnectorIdentifierT&& value) {
    m_connectorIdentifierHasBeenSet = true;
    m_connectorIdentifier = std::forward<ConnectorIdentifierT>(value);
  }
  template <typename ConnectorIdentifierT = Aws::String>
  ListResourcesByConnectorRequest& WithConnectorIdentifier(ConnectorIdentifierT&& value) {
    SetConnectorIdentifier(std::forward<ConnectorIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What to list: one cloud provider, and one type of resource in that
   * provider.</p>
   */
  inline const ConnectorQuery& GetSelector() const { return m_selector; }
  inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
  template <typename SelectorT = ConnectorQuery>
  void SetSelector(SelectorT&& value) {
    m_selectorHasBeenSet = true;
    m_selector = std::forward<SelectorT>(value);
  }
  template <typename SelectorT = ConnectorQuery>
  ListResourcesByConnectorRequest& WithSelector(SelectorT&& value) {
    SetSelector(std::forward<SelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in one call. For an
   * <code>EventHubs</code> query, a page can contain more results than this
   * value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListResourcesByConnectorRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results, returned by a previous call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourcesByConnectorRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorIdentifier;

  ConnectorQuery m_selector;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_connectorIdentifierHasBeenSet = false;
  bool m_selectorHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
