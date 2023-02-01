/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Connection.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetConnectionsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectionsResult();
    AWS_NETWORKMANAGER_API GetConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the connections.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>Information about the connections.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }

    /**
     * <p>Information about the connections.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }

    /**
     * <p>Information about the connections.</p>
     */
    inline GetConnectionsResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>Information about the connections.</p>
     */
    inline GetConnectionsResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>Information about the connections.</p>
     */
    inline GetConnectionsResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>Information about the connections.</p>
     */
    inline GetConnectionsResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline GetConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline GetConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline GetConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Connection> m_connections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
