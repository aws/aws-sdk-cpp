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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Specifies details about an outbound cross-cluster connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/OutboundConnection">AWS
   * API Reference</a></p>
   */
  class OutboundConnection
  {
  public:
    AWS_OPENSEARCHSERVICE_API OutboundConnection() = default;
    AWS_OPENSEARCHSERVICE_API OutboundConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API OutboundConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const { return m_localDomainInfo; }
    inline bool LocalDomainInfoHasBeenSet() const { return m_localDomainInfoHasBeenSet; }
    template<typename LocalDomainInfoT = DomainInformationContainer>
    void SetLocalDomainInfo(LocalDomainInfoT&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::forward<LocalDomainInfoT>(value); }
    template<typename LocalDomainInfoT = DomainInformationContainer>
    OutboundConnection& WithLocalDomainInfo(LocalDomainInfoT&& value) { SetLocalDomainInfo(std::forward<LocalDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const { return m_remoteDomainInfo; }
    inline bool RemoteDomainInfoHasBeenSet() const { return m_remoteDomainInfoHasBeenSet; }
    template<typename RemoteDomainInfoT = DomainInformationContainer>
    void SetRemoteDomainInfo(RemoteDomainInfoT&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::forward<RemoteDomainInfoT>(value); }
    template<typename RemoteDomainInfoT = DomainInformationContainer>
    OutboundConnection& WithRemoteDomainInfo(RemoteDomainInfoT&& value) { SetRemoteDomainInfo(std::forward<RemoteDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    OutboundConnection& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const { return m_connectionAlias; }
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }
    template<typename ConnectionAliasT = Aws::String>
    void SetConnectionAlias(ConnectionAliasT&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::forward<ConnectionAliasT>(value); }
    template<typename ConnectionAliasT = Aws::String>
    OutboundConnection& WithConnectionAlias(ConnectionAliasT&& value) { SetConnectionAlias(std::forward<ConnectionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the connection.</p>
     */
    inline const OutboundConnectionStatus& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = OutboundConnectionStatus>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = OutboundConnectionStatus>
    OutboundConnection& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline ConnectionMode GetConnectionMode() const { return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(ConnectionMode value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline OutboundConnection& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties for the outbound connection.</p>
     */
    inline const ConnectionProperties& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = ConnectionProperties>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = ConnectionProperties>
    OutboundConnection& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    ///@}
  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet = false;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;

    OutboundConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;

    ConnectionProperties m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
