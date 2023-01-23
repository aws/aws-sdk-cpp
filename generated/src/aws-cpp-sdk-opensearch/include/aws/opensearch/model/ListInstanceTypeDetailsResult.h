/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/InstanceTypeDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListInstanceTypeDetailsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult();
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline const Aws::Vector<InstanceTypeDetails>& GetInstanceTypeDetails() const{ return m_instanceTypeDetails; }

    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline void SetInstanceTypeDetails(const Aws::Vector<InstanceTypeDetails>& value) { m_instanceTypeDetails = value; }

    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline void SetInstanceTypeDetails(Aws::Vector<InstanceTypeDetails>&& value) { m_instanceTypeDetails = std::move(value); }

    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline ListInstanceTypeDetailsResult& WithInstanceTypeDetails(const Aws::Vector<InstanceTypeDetails>& value) { SetInstanceTypeDetails(value); return *this;}

    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline ListInstanceTypeDetailsResult& WithInstanceTypeDetails(Aws::Vector<InstanceTypeDetails>&& value) { SetInstanceTypeDetails(std::move(value)); return *this;}

    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline ListInstanceTypeDetailsResult& AddInstanceTypeDetails(const InstanceTypeDetails& value) { m_instanceTypeDetails.push_back(value); return *this; }

    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline ListInstanceTypeDetailsResult& AddInstanceTypeDetails(InstanceTypeDetails&& value) { m_instanceTypeDetails.push_back(std::move(value)); return *this; }


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
    inline ListInstanceTypeDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListInstanceTypeDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListInstanceTypeDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceTypeDetails> m_instanceTypeDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
