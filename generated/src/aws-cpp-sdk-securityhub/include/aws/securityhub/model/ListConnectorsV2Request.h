/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConnectorProviderName.h>
#include <aws/securityhub/model/ConnectorStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class ListConnectorsV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API ListConnectorsV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnectorsV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The pagination token per the Amazon Web Services Pagination standard</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorsV2Request& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListConnectorsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the third-party provider.</p>
     */
    inline ConnectorProviderName GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(ConnectorProviderName value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline ListConnectorsV2Request& WithProviderName(ConnectorProviderName value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for the connectorV2.</p>
     */
    inline ConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
    inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
    inline void SetConnectorStatus(ConnectorStatus value) { m_connectorStatusHasBeenSet = true; m_connectorStatus = value; }
    inline ListConnectorsV2Request& WithConnectorStatus(ConnectorStatus value) { SetConnectorStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ConnectorProviderName m_providerName{ConnectorProviderName::NOT_SET};
    bool m_providerNameHasBeenSet = false;

    ConnectorStatus m_connectorStatus{ConnectorStatus::NOT_SET};
    bool m_connectorStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
