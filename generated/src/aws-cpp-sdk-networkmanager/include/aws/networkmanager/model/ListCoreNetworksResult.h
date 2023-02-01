/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkSummary.h>
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
  class ListCoreNetworksResult
  {
  public:
    AWS_NETWORKMANAGER_API ListCoreNetworksResult();
    AWS_NETWORKMANAGER_API ListCoreNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListCoreNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the list of core networks.</p>
     */
    inline const Aws::Vector<CoreNetworkSummary>& GetCoreNetworks() const{ return m_coreNetworks; }

    /**
     * <p>Describes the list of core networks.</p>
     */
    inline void SetCoreNetworks(const Aws::Vector<CoreNetworkSummary>& value) { m_coreNetworks = value; }

    /**
     * <p>Describes the list of core networks.</p>
     */
    inline void SetCoreNetworks(Aws::Vector<CoreNetworkSummary>&& value) { m_coreNetworks = std::move(value); }

    /**
     * <p>Describes the list of core networks.</p>
     */
    inline ListCoreNetworksResult& WithCoreNetworks(const Aws::Vector<CoreNetworkSummary>& value) { SetCoreNetworks(value); return *this;}

    /**
     * <p>Describes the list of core networks.</p>
     */
    inline ListCoreNetworksResult& WithCoreNetworks(Aws::Vector<CoreNetworkSummary>&& value) { SetCoreNetworks(std::move(value)); return *this;}

    /**
     * <p>Describes the list of core networks.</p>
     */
    inline ListCoreNetworksResult& AddCoreNetworks(const CoreNetworkSummary& value) { m_coreNetworks.push_back(value); return *this; }

    /**
     * <p>Describes the list of core networks.</p>
     */
    inline ListCoreNetworksResult& AddCoreNetworks(CoreNetworkSummary&& value) { m_coreNetworks.push_back(std::move(value)); return *this; }


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
    inline ListCoreNetworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListCoreNetworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListCoreNetworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CoreNetworkSummary> m_coreNetworks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
