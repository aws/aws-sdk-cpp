/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkInstanceInfo.h>
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
  class ListSolNetworkInstancesResult
  {
  public:
    AWS_TNB_API ListSolNetworkInstancesResult() = default;
    AWS_TNB_API ListSolNetworkInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolNetworkInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists network instances.</p>
     */
    inline const Aws::Vector<ListSolNetworkInstanceInfo>& GetNetworkInstances() const { return m_networkInstances; }
    template<typename NetworkInstancesT = Aws::Vector<ListSolNetworkInstanceInfo>>
    void SetNetworkInstances(NetworkInstancesT&& value) { m_networkInstancesHasBeenSet = true; m_networkInstances = std::forward<NetworkInstancesT>(value); }
    template<typename NetworkInstancesT = Aws::Vector<ListSolNetworkInstanceInfo>>
    ListSolNetworkInstancesResult& WithNetworkInstances(NetworkInstancesT&& value) { SetNetworkInstances(std::forward<NetworkInstancesT>(value)); return *this;}
    template<typename NetworkInstancesT = ListSolNetworkInstanceInfo>
    ListSolNetworkInstancesResult& AddNetworkInstances(NetworkInstancesT&& value) { m_networkInstancesHasBeenSet = true; m_networkInstances.emplace_back(std::forward<NetworkInstancesT>(value)); return *this; }
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
    ListSolNetworkInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolNetworkInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListSolNetworkInstanceInfo> m_networkInstances;
    bool m_networkInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
