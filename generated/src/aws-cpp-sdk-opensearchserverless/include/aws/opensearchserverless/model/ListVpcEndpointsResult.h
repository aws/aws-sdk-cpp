/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/model/VpcEndpointSummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListVpcEndpointsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsResult();
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaries() const{ return m_vpcEndpointSummaries; }

    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline void SetVpcEndpointSummaries(const Aws::Vector<VpcEndpointSummary>& value) { m_vpcEndpointSummaries = value; }

    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline void SetVpcEndpointSummaries(Aws::Vector<VpcEndpointSummary>&& value) { m_vpcEndpointSummaries = std::move(value); }

    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline ListVpcEndpointsResult& WithVpcEndpointSummaries(const Aws::Vector<VpcEndpointSummary>& value) { SetVpcEndpointSummaries(value); return *this;}

    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline ListVpcEndpointsResult& WithVpcEndpointSummaries(Aws::Vector<VpcEndpointSummary>&& value) { SetVpcEndpointSummaries(std::move(value)); return *this;}

    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline ListVpcEndpointsResult& AddVpcEndpointSummaries(const VpcEndpointSummary& value) { m_vpcEndpointSummaries.push_back(value); return *this; }

    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline ListVpcEndpointsResult& AddVpcEndpointSummaries(VpcEndpointSummary&& value) { m_vpcEndpointSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaries;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
