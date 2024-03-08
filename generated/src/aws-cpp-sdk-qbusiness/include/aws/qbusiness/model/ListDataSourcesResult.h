/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DataSource.h>
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
namespace QBusiness
{
namespace Model
{
  class ListDataSourcesResult
  {
  public:
    AWS_QBUSINESS_API ListDataSourcesResult();
    AWS_QBUSINESS_API ListDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSources = value; }

    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSources = std::move(value); }

    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline ListDataSourcesResult& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}

    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline ListDataSourcesResult& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline ListDataSourcesResult& AddDataSources(const DataSource& value) { m_dataSources.push_back(value); return *this; }

    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline ListDataSourcesResult& AddDataSources(DataSource&& value) { m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline ListDataSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline ListDataSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline ListDataSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataSource> m_dataSources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
