/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedGatewayInstance.h>
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
  class ListGatewayInstancesResult
  {
  public:
    AWS_MEDIACONNECT_API ListGatewayInstancesResult() = default;
    AWS_MEDIACONNECT_API ListGatewayInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListGatewayInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of instance summaries.</p>
     */
    inline const Aws::Vector<ListedGatewayInstance>& GetInstances() const { return m_instances; }
    template<typename InstancesT = Aws::Vector<ListedGatewayInstance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<ListedGatewayInstance>>
    ListGatewayInstancesResult& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = ListedGatewayInstance>
    ListGatewayInstancesResult& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token that identifies the batch of results that you want to see. </p>
     * <p>For example, you submit a <code>ListInstances</code> request with MaxResults
     * set at 5. The service returns the first batch of results (up to 5) and a
     * <code>NextToken</code> value. To see the next batch of results, you can submit
     * the <code>ListInstances</code> request a second time and specify the
     * <code>NextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGatewayInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGatewayInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListedGatewayInstance> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
