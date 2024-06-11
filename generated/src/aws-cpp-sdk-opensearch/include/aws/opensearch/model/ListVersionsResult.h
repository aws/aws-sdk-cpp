﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>Container for the parameters for response received from the
   * <code>ListVersions</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListVersionsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVersionsResult();
    AWS_OPENSEARCHSERVICE_API ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
     * Service supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versions = std::move(value); }
    inline ListVersionsResult& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}
    inline ListVersionsResult& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListVersionsResult& AddVersions(const Aws::String& value) { m_versions.push_back(value); return *this; }
    inline ListVersionsResult& AddVersions(Aws::String&& value) { m_versions.push_back(std::move(value)); return *this; }
    inline ListVersionsResult& AddVersions(const char* value) { m_versions.push_back(value); return *this; }
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
    inline ListVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_versions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
