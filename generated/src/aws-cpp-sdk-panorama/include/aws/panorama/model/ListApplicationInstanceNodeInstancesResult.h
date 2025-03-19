/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/NodeInstance.h>
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
namespace Panorama
{
namespace Model
{
  class ListApplicationInstanceNodeInstancesResult
  {
  public:
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesResult() = default;
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationInstanceNodeInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node instances.</p>
     */
    inline const Aws::Vector<NodeInstance>& GetNodeInstances() const { return m_nodeInstances; }
    template<typename NodeInstancesT = Aws::Vector<NodeInstance>>
    void SetNodeInstances(NodeInstancesT&& value) { m_nodeInstancesHasBeenSet = true; m_nodeInstances = std::forward<NodeInstancesT>(value); }
    template<typename NodeInstancesT = Aws::Vector<NodeInstance>>
    ListApplicationInstanceNodeInstancesResult& WithNodeInstances(NodeInstancesT&& value) { SetNodeInstances(std::forward<NodeInstancesT>(value)); return *this;}
    template<typename NodeInstancesT = NodeInstance>
    ListApplicationInstanceNodeInstancesResult& AddNodeInstances(NodeInstancesT&& value) { m_nodeInstancesHasBeenSet = true; m_nodeInstances.emplace_back(std::forward<NodeInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationInstanceNodeInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NodeInstance> m_nodeInstances;
    bool m_nodeInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
