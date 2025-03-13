/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkOperationsInfo.h>
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
namespace tnb
{
namespace Model
{
  class ListSolNetworkOperationsResult
  {
  public:
    AWS_TNB_API ListSolNetworkOperationsResult() = default;
    AWS_TNB_API ListSolNetworkOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolNetworkOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline const Aws::Vector<ListSolNetworkOperationsInfo>& GetNetworkOperations() const { return m_networkOperations; }
    template<typename NetworkOperationsT = Aws::Vector<ListSolNetworkOperationsInfo>>
    void SetNetworkOperations(NetworkOperationsT&& value) { m_networkOperationsHasBeenSet = true; m_networkOperations = std::forward<NetworkOperationsT>(value); }
    template<typename NetworkOperationsT = Aws::Vector<ListSolNetworkOperationsInfo>>
    ListSolNetworkOperationsResult& WithNetworkOperations(NetworkOperationsT&& value) { SetNetworkOperations(std::forward<NetworkOperationsT>(value)); return *this;}
    template<typename NetworkOperationsT = ListSolNetworkOperationsInfo>
    ListSolNetworkOperationsResult& AddNetworkOperations(NetworkOperationsT&& value) { m_networkOperationsHasBeenSet = true; m_networkOperations.emplace_back(std::forward<NetworkOperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSolNetworkOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolNetworkOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListSolNetworkOperationsInfo> m_networkOperations;
    bool m_networkOperationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
