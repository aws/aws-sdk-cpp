/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/OdbNetworkSummary.h>
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
  class ListOdbNetworksResult
  {
  public:
    AWS_ODB_API ListOdbNetworksResult() = default;
    AWS_ODB_API ListOdbNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListOdbNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOdbNetworksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ODB networks.</p>
     */
    inline const Aws::Vector<OdbNetworkSummary>& GetOdbNetworks() const { return m_odbNetworks; }
    template<typename OdbNetworksT = Aws::Vector<OdbNetworkSummary>>
    void SetOdbNetworks(OdbNetworksT&& value) { m_odbNetworksHasBeenSet = true; m_odbNetworks = std::forward<OdbNetworksT>(value); }
    template<typename OdbNetworksT = Aws::Vector<OdbNetworkSummary>>
    ListOdbNetworksResult& WithOdbNetworks(OdbNetworksT&& value) { SetOdbNetworks(std::forward<OdbNetworksT>(value)); return *this;}
    template<typename OdbNetworksT = OdbNetworkSummary>
    ListOdbNetworksResult& AddOdbNetworks(OdbNetworksT&& value) { m_odbNetworksHasBeenSet = true; m_odbNetworks.emplace_back(std::forward<OdbNetworksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOdbNetworksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OdbNetworkSummary> m_odbNetworks;
    bool m_odbNetworksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
