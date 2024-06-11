﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/InboundConnectionStatus.h>
#include <aws/opensearch/model/ConnectionMode.h>
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
   * <p>Describes an inbound cross-cluster connection for Amazon OpenSearch Service.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
   * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InboundConnection">AWS
   * API Reference</a></p>
   */
  class InboundConnection
  {
  public:
    AWS_OPENSEARCHSERVICE_API InboundConnection();
    AWS_OPENSEARCHSERVICE_API InboundConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InboundConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const{ return m_localDomainInfo; }
    inline bool LocalDomainInfoHasBeenSet() const { return m_localDomainInfoHasBeenSet; }
    inline void SetLocalDomainInfo(const DomainInformationContainer& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = value; }
    inline void SetLocalDomainInfo(DomainInformationContainer&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::move(value); }
    inline InboundConnection& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}
    inline InboundConnection& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const{ return m_remoteDomainInfo; }
    inline bool RemoteDomainInfoHasBeenSet() const { return m_remoteDomainInfoHasBeenSet; }
    inline void SetRemoteDomainInfo(const DomainInformationContainer& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = value; }
    inline void SetRemoteDomainInfo(DomainInformationContainer&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::move(value); }
    inline InboundConnection& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}
    inline InboundConnection& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline InboundConnection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline InboundConnection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline InboundConnection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the connection.</p>
     */
    inline const InboundConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(const InboundConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline void SetConnectionStatus(InboundConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }
    inline InboundConnection& WithConnectionStatus(const InboundConnectionStatus& value) { SetConnectionStatus(value); return *this;}
    inline InboundConnection& WithConnectionStatus(InboundConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionModeHasBeenSet = true; m_connectionMode = std::move(value); }
    inline InboundConnection& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}
    inline InboundConnection& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}
    ///@}
  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet = false;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    InboundConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    ConnectionMode m_connectionMode;
    bool m_connectionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
