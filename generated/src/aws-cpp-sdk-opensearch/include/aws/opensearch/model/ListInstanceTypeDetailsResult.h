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


    ///@{
    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline const Aws::Vector<InstanceTypeDetails>& GetInstanceTypeDetails() const{ return m_instanceTypeDetails; }
    inline void SetInstanceTypeDetails(const Aws::Vector<InstanceTypeDetails>& value) { m_instanceTypeDetails = value; }
    inline void SetInstanceTypeDetails(Aws::Vector<InstanceTypeDetails>&& value) { m_instanceTypeDetails = std::move(value); }
    inline ListInstanceTypeDetailsResult& WithInstanceTypeDetails(const Aws::Vector<InstanceTypeDetails>& value) { SetInstanceTypeDetails(value); return *this;}
    inline ListInstanceTypeDetailsResult& WithInstanceTypeDetails(Aws::Vector<InstanceTypeDetails>&& value) { SetInstanceTypeDetails(std::move(value)); return *this;}
    inline ListInstanceTypeDetailsResult& AddInstanceTypeDetails(const InstanceTypeDetails& value) { m_instanceTypeDetails.push_back(value); return *this; }
    inline ListInstanceTypeDetailsResult& AddInstanceTypeDetails(InstanceTypeDetails&& value) { m_instanceTypeDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstanceTypeDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstanceTypeDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstanceTypeDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstanceTypeDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstanceTypeDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstanceTypeDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceTypeDetails> m_instanceTypeDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
