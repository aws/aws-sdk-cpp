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
    AWS_OPENSEARCHSERVICE_API OutboundConnection();
    AWS_OPENSEARCHSERVICE_API OutboundConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API OutboundConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const{ return m_localDomainInfo; }
    inline bool LocalDomainInfoHasBeenSet() const { return m_localDomainInfoHasBeenSet; }
    inline void SetLocalDomainInfo(const DomainInformationContainer& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = value; }
    inline void SetLocalDomainInfo(DomainInformationContainer&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::move(value); }
    inline OutboundConnection& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}
    inline OutboundConnection& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const{ return m_remoteDomainInfo; }
    inline bool RemoteDomainInfoHasBeenSet() const { return m_remoteDomainInfoHasBeenSet; }
    inline void SetRemoteDomainInfo(const DomainInformationContainer& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = value; }
    inline void SetRemoteDomainInfo(DomainInformationContainer&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::move(value); }
    inline OutboundConnection& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}
    inline OutboundConnection& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline OutboundConnection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline OutboundConnection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline OutboundConnection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = value; }
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::move(value); }
    inline void SetConnectionAlias(const char* value) { m_connectionAliasHasBeenSet = true; m_connectionAlias.assign(value); }
    inline OutboundConnection& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}
    inline OutboundConnection& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}
    inline OutboundConnection& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the connection.</p>
     */
    inline const OutboundConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(const OutboundConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline void SetConnectionStatus(OutboundConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }
    inline OutboundConnection& WithConnectionStatus(const OutboundConnectionStatus& value) { SetConnectionStatus(value); return *this;}
    inline OutboundConnection& WithConnectionStatus(OutboundConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionModeHasBeenSet = true; m_connectionMode = std::move(value); }
    inline OutboundConnection& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}
    inline OutboundConnection& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties for the outbound connection.</p>
     */
    inline const ConnectionProperties& GetConnectionProperties() const{ return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    inline void SetConnectionProperties(const ConnectionProperties& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }
    inline void SetConnectionProperties(ConnectionProperties&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }
    inline OutboundConnection& WithConnectionProperties(const ConnectionProperties& value) { SetConnectionProperties(value); return *this;}
    inline OutboundConnection& WithConnectionProperties(ConnectionProperties&& value) { SetConnectionProperties(std::move(value)); return *this;}
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

    ConnectionMode m_connectionMode;
    bool m_connectionModeHasBeenSet = false;

    ConnectionProperties m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
