/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OutboundConnectionStatus.h>
#include <aws/opensearch/model/ConnectionMode.h>
#include <aws/opensearch/model/ConnectionProperties.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>CreateOutboundConnection</code> request. Contains
   * details about the newly created cross-cluster connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateOutboundConnectionResponse">AWS
   * API Reference</a></p>
   */
  class CreateOutboundConnectionResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult() = default;
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const { return m_localDomainInfo; }
    template<typename LocalDomainInfoT = DomainInformationContainer>
    void SetLocalDomainInfo(LocalDomainInfoT&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::forward<LocalDomainInfoT>(value); }
    template<typename LocalDomainInfoT = DomainInformationContainer>
    CreateOutboundConnectionResult& WithLocalDomainInfo(LocalDomainInfoT&& value) { SetLocalDomainInfo(std::forward<LocalDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const { return m_remoteDomainInfo; }
    template<typename RemoteDomainInfoT = DomainInformationContainer>
    void SetRemoteDomainInfo(RemoteDomainInfoT&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::forward<RemoteDomainInfoT>(value); }
    template<typename RemoteDomainInfoT = DomainInformationContainer>
    CreateOutboundConnectionResult& WithRemoteDomainInfo(RemoteDomainInfoT&& value) { SetRemoteDomainInfo(std::forward<RemoteDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const { return m_connectionAlias; }
    template<typename ConnectionAliasT = Aws::String>
    void SetConnectionAlias(ConnectionAliasT&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::forward<ConnectionAliasT>(value); }
    template<typename ConnectionAliasT = Aws::String>
    CreateOutboundConnectionResult& WithConnectionAlias(ConnectionAliasT&& value) { SetConnectionAlias(std::forward<ConnectionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the connection.</p>
     */
    inline const OutboundConnectionStatus& GetConnectionStatus() const { return m_connectionStatus; }
    template<typename ConnectionStatusT = OutboundConnectionStatus>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = OutboundConnectionStatus>
    CreateOutboundConnectionResult& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    CreateOutboundConnectionResult& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline ConnectionMode GetConnectionMode() const { return m_connectionMode; }
    inline void SetConnectionMode(ConnectionMode value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline CreateOutboundConnectionResult& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ConnectionProperties</code> for the newly created connection.</p>
     */
    inline const ConnectionProperties& GetConnectionProperties() const { return m_connectionProperties; }
    template<typename ConnectionPropertiesT = ConnectionProperties>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = ConnectionProperties>
    CreateOutboundConnectionResult& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateOutboundConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet = false;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;

    OutboundConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;

    ConnectionProperties m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
