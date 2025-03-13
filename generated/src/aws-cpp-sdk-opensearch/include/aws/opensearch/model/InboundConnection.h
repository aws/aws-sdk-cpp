/**
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
    AWS_OPENSEARCHSERVICE_API InboundConnection() = default;
    AWS_OPENSEARCHSERVICE_API InboundConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InboundConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    InboundConnection& WithLocalDomainInfo(LocalDomainInfoT&& value) { SetLocalDomainInfo(std::forward<LocalDomainInfoT>(value)); return *this;}
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
    InboundConnection& WithRemoteDomainInfo(RemoteDomainInfoT&& value) { SetRemoteDomainInfo(std::forward<RemoteDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    InboundConnection& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the connection.</p>
     */
    inline const InboundConnectionStatus& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = InboundConnectionStatus>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = InboundConnectionStatus>
    InboundConnection& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline ConnectionMode GetConnectionMode() const { return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(ConnectionMode value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline InboundConnection& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
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

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
