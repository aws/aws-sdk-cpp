/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerAssociation.h>
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
  class GetConnectPeerAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectPeerAssociationsResult();
    AWS_NETWORKMANAGER_API GetConnectPeerAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetConnectPeerAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline const Aws::Vector<ConnectPeerAssociation>& GetConnectPeerAssociations() const{ return m_connectPeerAssociations; }

    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline void SetConnectPeerAssociations(const Aws::Vector<ConnectPeerAssociation>& value) { m_connectPeerAssociations = value; }

    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline void SetConnectPeerAssociations(Aws::Vector<ConnectPeerAssociation>&& value) { m_connectPeerAssociations = std::move(value); }

    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline GetConnectPeerAssociationsResult& WithConnectPeerAssociations(const Aws::Vector<ConnectPeerAssociation>& value) { SetConnectPeerAssociations(value); return *this;}

    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline GetConnectPeerAssociationsResult& WithConnectPeerAssociations(Aws::Vector<ConnectPeerAssociation>&& value) { SetConnectPeerAssociations(std::move(value)); return *this;}

    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline GetConnectPeerAssociationsResult& AddConnectPeerAssociations(const ConnectPeerAssociation& value) { m_connectPeerAssociations.push_back(value); return *this; }

    /**
     * <p>Displays a list of Connect peer associations.</p>
     */
    inline GetConnectPeerAssociationsResult& AddConnectPeerAssociations(ConnectPeerAssociation&& value) { m_connectPeerAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetConnectPeerAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetConnectPeerAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetConnectPeerAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectPeerAssociation> m_connectPeerAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
