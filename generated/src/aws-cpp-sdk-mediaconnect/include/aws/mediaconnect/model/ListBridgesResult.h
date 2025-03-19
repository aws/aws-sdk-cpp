/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedBridge.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListBridgesResult
  {
  public:
    AWS_MEDIACONNECT_API ListBridgesResult() = default;
    AWS_MEDIACONNECT_API ListBridgesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListBridgesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of bridge summaries.</p>
     */
    inline const Aws::Vector<ListedBridge>& GetBridges() const { return m_bridges; }
    template<typename BridgesT = Aws::Vector<ListedBridge>>
    void SetBridges(BridgesT&& value) { m_bridgesHasBeenSet = true; m_bridges = std::forward<BridgesT>(value); }
    template<typename BridgesT = Aws::Vector<ListedBridge>>
    ListBridgesResult& WithBridges(BridgesT&& value) { SetBridges(std::forward<BridgesT>(value)); return *this;}
    template<typename BridgesT = ListedBridge>
    ListBridgesResult& AddBridges(BridgesT&& value) { m_bridgesHasBeenSet = true; m_bridges.emplace_back(std::forward<BridgesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token that identifies the batch of results that you want to see. </p>
     * <p>For example, you submit a <code>ListBridges</code> request with
     * <code>MaxResults</code> set at 5. The service returns the first batch of results
     * (up to 5) and a <code>NextToken</code> value. To see the next batch of results,
     * you can submit the <code>ListBridges</code> request a second time and specify
     * the <code>NextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBridgesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBridgesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListedBridge> m_bridges;
    bool m_bridgesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
