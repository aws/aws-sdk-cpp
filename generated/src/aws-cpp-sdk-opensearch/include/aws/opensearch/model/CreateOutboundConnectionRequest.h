/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ConnectionMode.h>
#include <aws/opensearch/model/ConnectionProperties.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>CreateOutboundConnection</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateOutboundConnectionRequest">AWS
   * API Reference</a></p>
   */
  class CreateOutboundConnectionRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutboundConnection"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name and Region of the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const { return m_localDomainInfo; }
    inline bool LocalDomainInfoHasBeenSet() const { return m_localDomainInfoHasBeenSet; }
    template<typename LocalDomainInfoT = DomainInformationContainer>
    void SetLocalDomainInfo(LocalDomainInfoT&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::forward<LocalDomainInfoT>(value); }
    template<typename LocalDomainInfoT = DomainInformationContainer>
    CreateOutboundConnectionRequest& WithLocalDomainInfo(LocalDomainInfoT&& value) { SetLocalDomainInfo(std::forward<LocalDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name and Region of the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const { return m_remoteDomainInfo; }
    inline bool RemoteDomainInfoHasBeenSet() const { return m_remoteDomainInfoHasBeenSet; }
    template<typename RemoteDomainInfoT = DomainInformationContainer>
    void SetRemoteDomainInfo(RemoteDomainInfoT&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::forward<RemoteDomainInfoT>(value); }
    template<typename RemoteDomainInfoT = DomainInformationContainer>
    CreateOutboundConnectionRequest& WithRemoteDomainInfo(RemoteDomainInfoT&& value) { SetRemoteDomainInfo(std::forward<RemoteDomainInfoT>(value)); return *this;}
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
    CreateOutboundConnectionRequest& WithConnectionAlias(ConnectionAliasT&& value) { SetConnectionAlias(std::forward<ConnectionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline ConnectionMode GetConnectionMode() const { return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(ConnectionMode value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline CreateOutboundConnectionRequest& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ConnectionProperties</code> for the outbound connection.</p>
     */
    inline const ConnectionProperties& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = ConnectionProperties>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = ConnectionProperties>
    CreateOutboundConnectionRequest& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    ///@}
  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet = false;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;

    ConnectionProperties m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
