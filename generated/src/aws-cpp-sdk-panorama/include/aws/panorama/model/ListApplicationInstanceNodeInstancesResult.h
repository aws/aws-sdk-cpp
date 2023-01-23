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
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesResult();
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListApplicationInstanceNodeInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListApplicationInstanceNodeInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstanceNodeInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstanceNodeInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of node instances.</p>
     */
    inline const Aws::Vector<NodeInstance>& GetNodeInstances() const{ return m_nodeInstances; }

    /**
     * <p>A list of node instances.</p>
     */
    inline void SetNodeInstances(const Aws::Vector<NodeInstance>& value) { m_nodeInstances = value; }

    /**
     * <p>A list of node instances.</p>
     */
    inline void SetNodeInstances(Aws::Vector<NodeInstance>&& value) { m_nodeInstances = std::move(value); }

    /**
     * <p>A list of node instances.</p>
     */
    inline ListApplicationInstanceNodeInstancesResult& WithNodeInstances(const Aws::Vector<NodeInstance>& value) { SetNodeInstances(value); return *this;}

    /**
     * <p>A list of node instances.</p>
     */
    inline ListApplicationInstanceNodeInstancesResult& WithNodeInstances(Aws::Vector<NodeInstance>&& value) { SetNodeInstances(std::move(value)); return *this;}

    /**
     * <p>A list of node instances.</p>
     */
    inline ListApplicationInstanceNodeInstancesResult& AddNodeInstances(const NodeInstance& value) { m_nodeInstances.push_back(value); return *this; }

    /**
     * <p>A list of node instances.</p>
     */
    inline ListApplicationInstanceNodeInstancesResult& AddNodeInstances(NodeInstance&& value) { m_nodeInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<NodeInstance> m_nodeInstances;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
