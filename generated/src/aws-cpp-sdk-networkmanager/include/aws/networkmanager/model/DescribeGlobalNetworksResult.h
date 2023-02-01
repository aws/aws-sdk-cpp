/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/GlobalNetwork.h>
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
  class DescribeGlobalNetworksResult
  {
  public:
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksResult();
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the global networks.</p>
     */
    inline const Aws::Vector<GlobalNetwork>& GetGlobalNetworks() const{ return m_globalNetworks; }

    /**
     * <p>Information about the global networks.</p>
     */
    inline void SetGlobalNetworks(const Aws::Vector<GlobalNetwork>& value) { m_globalNetworks = value; }

    /**
     * <p>Information about the global networks.</p>
     */
    inline void SetGlobalNetworks(Aws::Vector<GlobalNetwork>&& value) { m_globalNetworks = std::move(value); }

    /**
     * <p>Information about the global networks.</p>
     */
    inline DescribeGlobalNetworksResult& WithGlobalNetworks(const Aws::Vector<GlobalNetwork>& value) { SetGlobalNetworks(value); return *this;}

    /**
     * <p>Information about the global networks.</p>
     */
    inline DescribeGlobalNetworksResult& WithGlobalNetworks(Aws::Vector<GlobalNetwork>&& value) { SetGlobalNetworks(std::move(value)); return *this;}

    /**
     * <p>Information about the global networks.</p>
     */
    inline DescribeGlobalNetworksResult& AddGlobalNetworks(const GlobalNetwork& value) { m_globalNetworks.push_back(value); return *this; }

    /**
     * <p>Information about the global networks.</p>
     */
    inline DescribeGlobalNetworksResult& AddGlobalNetworks(GlobalNetwork&& value) { m_globalNetworks.push_back(std::move(value)); return *this; }


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
    inline DescribeGlobalNetworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeGlobalNetworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeGlobalNetworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GlobalNetwork> m_globalNetworks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
