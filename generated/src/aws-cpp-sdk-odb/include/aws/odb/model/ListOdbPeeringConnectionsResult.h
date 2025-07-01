/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/OdbPeeringConnectionSummary.h>
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
namespace odb
{
namespace Model
{
  class ListOdbPeeringConnectionsResult
  {
  public:
    AWS_ODB_API ListOdbPeeringConnectionsResult() = default;
    AWS_ODB_API ListOdbPeeringConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListOdbPeeringConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token for the next page of ODB peering connections.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOdbPeeringConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ODB peering connections.</p>
     */
    inline const Aws::Vector<OdbPeeringConnectionSummary>& GetOdbPeeringConnections() const { return m_odbPeeringConnections; }
    template<typename OdbPeeringConnectionsT = Aws::Vector<OdbPeeringConnectionSummary>>
    void SetOdbPeeringConnections(OdbPeeringConnectionsT&& value) { m_odbPeeringConnectionsHasBeenSet = true; m_odbPeeringConnections = std::forward<OdbPeeringConnectionsT>(value); }
    template<typename OdbPeeringConnectionsT = Aws::Vector<OdbPeeringConnectionSummary>>
    ListOdbPeeringConnectionsResult& WithOdbPeeringConnections(OdbPeeringConnectionsT&& value) { SetOdbPeeringConnections(std::forward<OdbPeeringConnectionsT>(value)); return *this;}
    template<typename OdbPeeringConnectionsT = OdbPeeringConnectionSummary>
    ListOdbPeeringConnectionsResult& AddOdbPeeringConnections(OdbPeeringConnectionsT&& value) { m_odbPeeringConnectionsHasBeenSet = true; m_odbPeeringConnections.emplace_back(std::forward<OdbPeeringConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOdbPeeringConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OdbPeeringConnectionSummary> m_odbPeeringConnections;
    bool m_odbPeeringConnectionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
