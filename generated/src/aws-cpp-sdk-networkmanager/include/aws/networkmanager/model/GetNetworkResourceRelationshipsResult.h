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
    AWS_NETWORKMANAGER_API GetNetworkResourceRelationshipsResult() = default;
    AWS_NETWORKMANAGER_API GetNetworkResourceRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkResourceRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource relationships.</p>
     */
    inline const Aws::Vector<Relationship>& GetRelationships() const { return m_relationships; }
    template<typename RelationshipsT = Aws::Vector<Relationship>>
    void SetRelationships(RelationshipsT&& value) { m_relationshipsHasBeenSet = true; m_relationships = std::forward<RelationshipsT>(value); }
    template<typename RelationshipsT = Aws::Vector<Relationship>>
    GetNetworkResourceRelationshipsResult& WithRelationships(RelationshipsT&& value) { SetRelationships(std::forward<RelationshipsT>(value)); return *this;}
    template<typename RelationshipsT = Relationship>
    GetNetworkResourceRelationshipsResult& AddRelationships(RelationshipsT&& value) { m_relationshipsHasBeenSet = true; m_relationships.emplace_back(std::forward<RelationshipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetNetworkResourceRelationshipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkResourceRelationshipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Relationship> m_relationships;
    bool m_relationshipsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
