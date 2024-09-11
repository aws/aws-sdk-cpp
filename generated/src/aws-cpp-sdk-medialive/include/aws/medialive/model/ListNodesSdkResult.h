/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/DescribeNodeSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListNodesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListNodesResponse">AWS
   * API Reference</a></p>
   */
  class ListNodesSdkResult
  {
  public:
    AWS_MEDIALIVE_API ListNodesSdkResult();
    AWS_MEDIALIVE_API ListNodesSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListNodesSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Token for the next result.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNodesSdkResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNodesSdkResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNodesSdkResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of Nodes that exist in the Cluster.
     */
    inline const Aws::Vector<DescribeNodeSummary>& GetNodes() const{ return m_nodes; }
    inline void SetNodes(const Aws::Vector<DescribeNodeSummary>& value) { m_nodes = value; }
    inline void SetNodes(Aws::Vector<DescribeNodeSummary>&& value) { m_nodes = std::move(value); }
    inline ListNodesSdkResult& WithNodes(const Aws::Vector<DescribeNodeSummary>& value) { SetNodes(value); return *this;}
    inline ListNodesSdkResult& WithNodes(Aws::Vector<DescribeNodeSummary>&& value) { SetNodes(std::move(value)); return *this;}
    inline ListNodesSdkResult& AddNodes(const DescribeNodeSummary& value) { m_nodes.push_back(value); return *this; }
    inline ListNodesSdkResult& AddNodes(DescribeNodeSummary&& value) { m_nodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNodesSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNodesSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNodesSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DescribeNodeSummary> m_nodes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
