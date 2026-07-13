/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CspmConnectorProviderName.h>
#include <aws/securityhub/model/CspmConnectorStatus.h>
#include <aws/securityhub/model/CspmEnablementStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SecurityHub {
namespace Model {

/**
 */
class ListConnectorsRequest : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API ListConnectorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnectors"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The pagination token to request the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectorsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConnectorsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the cloud provider to filter connectors by.</p>
   */
  inline CspmConnectorProviderName GetProviderName() const { return m_providerName; }
  inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
  inline void SetProviderName(CspmConnectorProviderName value) {
    m_providerNameHasBeenSet = true;
    m_providerName = value;
  }
  inline ListConnectorsRequest& WithProviderName(CspmConnectorProviderName value) {
    SetProviderName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connectivity status to filter connectors by.</p>
   */
  inline CspmConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
  inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
  inline void SetConnectorStatus(CspmConnectorStatus value) {
    m_connectorStatusHasBeenSet = true;
    m_connectorStatus = value;
  }
  inline ListConnectorsRequest& WithConnectorStatus(CspmConnectorStatus value) {
    SetConnectorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enablement status to filter connectors by.</p>
   */
  inline CspmEnablementStatus GetEnablementStatus() const { return m_enablementStatus; }
  inline bool EnablementStatusHasBeenSet() const { return m_enablementStatusHasBeenSet; }
  inline void SetEnablementStatus(CspmEnablementStatus value) {
    m_enablementStatusHasBeenSet = true;
    m_enablementStatus = value;
  }
  inline ListConnectorsRequest& WithEnablementStatus(CspmEnablementStatus value) {
    SetEnablementStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  CspmConnectorProviderName m_providerName{CspmConnectorProviderName::NOT_SET};

  CspmConnectorStatus m_connectorStatus{CspmConnectorStatus::NOT_SET};

  CspmEnablementStatus m_enablementStatus{CspmEnablementStatus::NOT_SET};
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_providerNameHasBeenSet = false;
  bool m_connectorStatusHasBeenSet = false;
  bool m_enablementStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
