/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/Node.h>
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
  class ListNodesResult
  {
  public:
    AWS_PANORAMA_API ListNodesResult();
    AWS_PANORAMA_API ListNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of nodes.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }

    /**
     * <p>A list of nodes.</p>
     */
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodes = value; }

    /**
     * <p>A list of nodes.</p>
     */
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodes = std::move(value); }

    /**
     * <p>A list of nodes.</p>
     */
    inline ListNodesResult& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}

    /**
     * <p>A list of nodes.</p>
     */
    inline ListNodesResult& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>A list of nodes.</p>
     */
    inline ListNodesResult& AddNodes(const Node& value) { m_nodes.push_back(value); return *this; }

    /**
     * <p>A list of nodes.</p>
     */
    inline ListNodesResult& AddNodes(Node&& value) { m_nodes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Node> m_nodes;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
