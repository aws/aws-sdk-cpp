/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/ConnectorSummary.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListConnectorsV2Result
  {
  public:
    AWS_SECURITYHUB_API ListConnectorsV2Result() = default;
    AWS_SECURITYHUB_API ListConnectorsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListConnectorsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use to request the next page of results. Otherwise,
     * this parameter is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorsV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of connectorV2 summaries.</p>
     */
    inline const Aws::Vector<ConnectorSummary>& GetConnectors() const { return m_connectors; }
    template<typename ConnectorsT = Aws::Vector<ConnectorSummary>>
    void SetConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors = std::forward<ConnectorsT>(value); }
    template<typename ConnectorsT = Aws::Vector<ConnectorSummary>>
    ListConnectorsV2Result& WithConnectors(ConnectorsT&& value) { SetConnectors(std::forward<ConnectorsT>(value)); return *this;}
    template<typename ConnectorsT = ConnectorSummary>
    ListConnectorsV2Result& AddConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors.emplace_back(std::forward<ConnectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ConnectorSummary> m_connectors;
    bool m_connectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
