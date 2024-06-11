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
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionRequest();

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
    inline const DomainInformationContainer& GetLocalDomainInfo() const{ return m_localDomainInfo; }
    inline bool LocalDomainInfoHasBeenSet() const { return m_localDomainInfoHasBeenSet; }
    inline void SetLocalDomainInfo(const DomainInformationContainer& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = value; }
    inline void SetLocalDomainInfo(DomainInformationContainer&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::move(value); }
    inline CreateOutboundConnectionRequest& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}
    inline CreateOutboundConnectionRequest& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name and Region of the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const{ return m_remoteDomainInfo; }
    inline bool RemoteDomainInfoHasBeenSet() const { return m_remoteDomainInfoHasBeenSet; }
    inline void SetRemoteDomainInfo(const DomainInformationContainer& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = value; }
    inline void SetRemoteDomainInfo(DomainInformationContainer&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::move(value); }
    inline CreateOutboundConnectionRequest& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}
    inline CreateOutboundConnectionRequest& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}
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
    inline CreateOutboundConnectionRequest& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}
    inline CreateOutboundConnectionRequest& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}
    inline CreateOutboundConnectionRequest& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionModeHasBeenSet = true; m_connectionMode = std::move(value); }
    inline CreateOutboundConnectionRequest& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}
    inline CreateOutboundConnectionRequest& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ConnectionProperties</code> for the outbound connection.</p>
     */
    inline const ConnectionProperties& GetConnectionProperties() const{ return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    inline void SetConnectionProperties(const ConnectionProperties& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }
    inline void SetConnectionProperties(ConnectionProperties&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }
    inline CreateOutboundConnectionRequest& WithConnectionProperties(const ConnectionProperties& value) { SetConnectionProperties(value); return *this;}
    inline CreateOutboundConnectionRequest& WithConnectionProperties(ConnectionProperties&& value) { SetConnectionProperties(std::move(value)); return *this;}
    ///@}
  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet = false;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;

    ConnectionMode m_connectionMode;
    bool m_connectionModeHasBeenSet = false;

    ConnectionProperties m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
