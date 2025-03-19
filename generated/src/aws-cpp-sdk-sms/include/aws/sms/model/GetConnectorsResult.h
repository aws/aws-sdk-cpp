/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/Connector.h>
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
namespace SMS
{
namespace Model
{
  class GetConnectorsResult
  {
  public:
    AWS_SMS_API GetConnectorsResult() = default;
    AWS_SMS_API GetConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the registered connectors.</p>
     */
    inline const Aws::Vector<Connector>& GetConnectorList() const { return m_connectorList; }
    template<typename ConnectorListT = Aws::Vector<Connector>>
    void SetConnectorList(ConnectorListT&& value) { m_connectorListHasBeenSet = true; m_connectorList = std::forward<ConnectorListT>(value); }
    template<typename ConnectorListT = Aws::Vector<Connector>>
    GetConnectorsResult& WithConnectorList(ConnectorListT&& value) { SetConnectorList(std::forward<ConnectorListT>(value)); return *this;}
    template<typename ConnectorListT = Connector>
    GetConnectorsResult& AddConnectorList(ConnectorListT&& value) { m_connectorListHasBeenSet = true; m_connectorList.emplace_back(std::forward<ConnectorListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetConnectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Connector> m_connectorList;
    bool m_connectorListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
