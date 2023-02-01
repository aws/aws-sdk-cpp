/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkChange.h>
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
  class GetCoreNetworkChangeSetResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeSetResult();
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes a core network changes.</p>
     */
    inline const Aws::Vector<CoreNetworkChange>& GetCoreNetworkChanges() const{ return m_coreNetworkChanges; }

    /**
     * <p>Describes a core network changes.</p>
     */
    inline void SetCoreNetworkChanges(const Aws::Vector<CoreNetworkChange>& value) { m_coreNetworkChanges = value; }

    /**
     * <p>Describes a core network changes.</p>
     */
    inline void SetCoreNetworkChanges(Aws::Vector<CoreNetworkChange>&& value) { m_coreNetworkChanges = std::move(value); }

    /**
     * <p>Describes a core network changes.</p>
     */
    inline GetCoreNetworkChangeSetResult& WithCoreNetworkChanges(const Aws::Vector<CoreNetworkChange>& value) { SetCoreNetworkChanges(value); return *this;}

    /**
     * <p>Describes a core network changes.</p>
     */
    inline GetCoreNetworkChangeSetResult& WithCoreNetworkChanges(Aws::Vector<CoreNetworkChange>&& value) { SetCoreNetworkChanges(std::move(value)); return *this;}

    /**
     * <p>Describes a core network changes.</p>
     */
    inline GetCoreNetworkChangeSetResult& AddCoreNetworkChanges(const CoreNetworkChange& value) { m_coreNetworkChanges.push_back(value); return *this; }

    /**
     * <p>Describes a core network changes.</p>
     */
    inline GetCoreNetworkChangeSetResult& AddCoreNetworkChanges(CoreNetworkChange&& value) { m_coreNetworkChanges.push_back(std::move(value)); return *this; }


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
    inline GetCoreNetworkChangeSetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetCoreNetworkChangeSetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetCoreNetworkChangeSetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CoreNetworkChange> m_coreNetworkChanges;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
