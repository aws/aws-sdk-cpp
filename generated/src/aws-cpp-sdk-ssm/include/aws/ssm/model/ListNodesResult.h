/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Node.h>
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
namespace SSM
{
namespace Model
{
  class ListNodesResult
  {
  public:
    AWS_SSM_API ListNodesResult();
    AWS_SSM_API ListNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of managed nodes that match the specified filter criteria.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodes = value; }
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodes = std::move(value); }
    inline ListNodesResult& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}
    inline ListNodesResult& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}
    inline ListNodesResult& AddNodes(const Node& value) { m_nodes.push_back(value); return *this; }
    inline ListNodesResult& AddNodes(Node&& value) { m_nodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Node> m_nodes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
