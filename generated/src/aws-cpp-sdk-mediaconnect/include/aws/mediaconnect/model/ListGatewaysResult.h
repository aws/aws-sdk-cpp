/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedGateway.h>
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
  class ListGatewaysResult
  {
  public:
    AWS_MEDIACONNECT_API ListGatewaysResult() = default;
    AWS_MEDIACONNECT_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of gateway summaries.</p>
     */
    inline const Aws::Vector<ListedGateway>& GetGateways() const { return m_gateways; }
    template<typename GatewaysT = Aws::Vector<ListedGateway>>
    void SetGateways(GatewaysT&& value) { m_gatewaysHasBeenSet = true; m_gateways = std::forward<GatewaysT>(value); }
    template<typename GatewaysT = Aws::Vector<ListedGateway>>
    ListGatewaysResult& WithGateways(GatewaysT&& value) { SetGateways(std::forward<GatewaysT>(value)); return *this;}
    template<typename GatewaysT = ListedGateway>
    ListGatewaysResult& AddGateways(GatewaysT&& value) { m_gatewaysHasBeenSet = true; m_gateways.emplace_back(std::forward<GatewaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token that identifies the batch of results that you want to see. </p>
     * <p>For example, you submit a <code>ListGateways</code> request with
     * <code>MaxResults</code> set at 5. The service returns the first batch of results
     * (up to 5) and a <code>NextToken</code> value. To see the next batch of results,
     * you can submit the <code>ListGateways</code> request a second time and specify
     * the <code>NextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGatewaysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGatewaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListedGateway> m_gateways;
    bool m_gatewaysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
