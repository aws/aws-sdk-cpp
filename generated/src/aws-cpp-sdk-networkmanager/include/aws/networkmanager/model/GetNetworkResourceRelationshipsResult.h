/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Relationship.h>
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
  class GetNetworkResourceRelationshipsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkResourceRelationshipsResult();
    AWS_NETWORKMANAGER_API GetNetworkResourceRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkResourceRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource relationships.</p>
     */
    inline const Aws::Vector<Relationship>& GetRelationships() const{ return m_relationships; }

    /**
     * <p>The resource relationships.</p>
     */
    inline void SetRelationships(const Aws::Vector<Relationship>& value) { m_relationships = value; }

    /**
     * <p>The resource relationships.</p>
     */
    inline void SetRelationships(Aws::Vector<Relationship>&& value) { m_relationships = std::move(value); }

    /**
     * <p>The resource relationships.</p>
     */
    inline GetNetworkResourceRelationshipsResult& WithRelationships(const Aws::Vector<Relationship>& value) { SetRelationships(value); return *this;}

    /**
     * <p>The resource relationships.</p>
     */
    inline GetNetworkResourceRelationshipsResult& WithRelationships(Aws::Vector<Relationship>&& value) { SetRelationships(std::move(value)); return *this;}

    /**
     * <p>The resource relationships.</p>
     */
    inline GetNetworkResourceRelationshipsResult& AddRelationships(const Relationship& value) { m_relationships.push_back(value); return *this; }

    /**
     * <p>The resource relationships.</p>
     */
    inline GetNetworkResourceRelationshipsResult& AddRelationships(Relationship&& value) { m_relationships.push_back(std::move(value)); return *this; }


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
    inline GetNetworkResourceRelationshipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkResourceRelationshipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkResourceRelationshipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Relationship> m_relationships;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
