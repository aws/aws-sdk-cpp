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
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult();
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const{ return m_localDomainInfo; }
    inline void SetLocalDomainInfo(const DomainInformationContainer& value) { m_localDomainInfo = value; }
    inline void SetLocalDomainInfo(DomainInformationContainer&& value) { m_localDomainInfo = std::move(value); }
    inline CreateOutboundConnectionResult& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}
    inline CreateOutboundConnectionResult& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const{ return m_remoteDomainInfo; }
    inline void SetRemoteDomainInfo(const DomainInformationContainer& value) { m_remoteDomainInfo = value; }
    inline void SetRemoteDomainInfo(DomainInformationContainer&& value) { m_remoteDomainInfo = std::move(value); }
    inline CreateOutboundConnectionResult& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}
    inline CreateOutboundConnectionResult& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAlias = value; }
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAlias = std::move(value); }
    inline void SetConnectionAlias(const char* value) { m_connectionAlias.assign(value); }
    inline CreateOutboundConnectionResult& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the connection.</p>
     */
    inline const OutboundConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }
    inline void SetConnectionStatus(const OutboundConnectionStatus& value) { m_connectionStatus = value; }
    inline void SetConnectionStatus(OutboundConnectionStatus&& value) { m_connectionStatus = std::move(value); }
    inline CreateOutboundConnectionResult& WithConnectionStatus(const OutboundConnectionStatus& value) { SetConnectionStatus(value); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionStatus(OutboundConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline CreateOutboundConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode.</p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionMode = value; }
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionMode = std::move(value); }
    inline CreateOutboundConnectionResult& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ConnectionProperties</code> for the newly created connection.</p>
     */
    inline const ConnectionProperties& GetConnectionProperties() const{ return m_connectionProperties; }
    inline void SetConnectionProperties(const ConnectionProperties& value) { m_connectionProperties = value; }
    inline void SetConnectionProperties(ConnectionProperties&& value) { m_connectionProperties = std::move(value); }
    inline CreateOutboundConnectionResult& WithConnectionProperties(const ConnectionProperties& value) { SetConnectionProperties(value); return *this;}
    inline CreateOutboundConnectionResult& WithConnectionProperties(ConnectionProperties&& value) { SetConnectionProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOutboundConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOutboundConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOutboundConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DomainInformationContainer m_localDomainInfo;

    DomainInformationContainer m_remoteDomainInfo;

    Aws::String m_connectionAlias;

    OutboundConnectionStatus m_connectionStatus;

    Aws::String m_connectionId;

    ConnectionMode m_connectionMode;

    ConnectionProperties m_connectionProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
