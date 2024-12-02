/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/DirectQueryDataSource.h>
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
  class ListDirectQueryDataSourcesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDirectQueryDataSourcesResult();
    AWS_OPENSEARCHSERVICE_API ListDirectQueryDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDirectQueryDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDirectQueryDataSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDirectQueryDataSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDirectQueryDataSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of the direct query data sources that are returned by the
     * <code>ListDirectQueryDataSources</code> API operation. </p>
     */
    inline const Aws::Vector<DirectQueryDataSource>& GetDirectQueryDataSources() const{ return m_directQueryDataSources; }
    inline void SetDirectQueryDataSources(const Aws::Vector<DirectQueryDataSource>& value) { m_directQueryDataSources = value; }
    inline void SetDirectQueryDataSources(Aws::Vector<DirectQueryDataSource>&& value) { m_directQueryDataSources = std::move(value); }
    inline ListDirectQueryDataSourcesResult& WithDirectQueryDataSources(const Aws::Vector<DirectQueryDataSource>& value) { SetDirectQueryDataSources(value); return *this;}
    inline ListDirectQueryDataSourcesResult& WithDirectQueryDataSources(Aws::Vector<DirectQueryDataSource>&& value) { SetDirectQueryDataSources(std::move(value)); return *this;}
    inline ListDirectQueryDataSourcesResult& AddDirectQueryDataSources(const DirectQueryDataSource& value) { m_directQueryDataSources.push_back(value); return *this; }
    inline ListDirectQueryDataSourcesResult& AddDirectQueryDataSources(DirectQueryDataSource&& value) { m_directQueryDataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDirectQueryDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDirectQueryDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDirectQueryDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DirectQueryDataSource> m_directQueryDataSources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
