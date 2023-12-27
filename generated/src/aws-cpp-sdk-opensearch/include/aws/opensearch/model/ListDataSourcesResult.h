/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DataSourceDetails.h>
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
   * <p>The result of a <code>ListDataSources</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDataSourcesResponse">AWS
   * API Reference</a></p>
   */
  class ListDataSourcesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDataSourcesResult();
    AWS_OPENSEARCHSERVICE_API ListDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline const Aws::Vector<DataSourceDetails>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline void SetDataSources(const Aws::Vector<DataSourceDetails>& value) { m_dataSources = value; }

    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline void SetDataSources(Aws::Vector<DataSourceDetails>&& value) { m_dataSources = std::move(value); }

    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline ListDataSourcesResult& WithDataSources(const Aws::Vector<DataSourceDetails>& value) { SetDataSources(value); return *this;}

    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline ListDataSourcesResult& WithDataSources(Aws::Vector<DataSourceDetails>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline ListDataSourcesResult& AddDataSources(const DataSourceDetails& value) { m_dataSources.push_back(value); return *this; }

    /**
     * <p>A list of data sources associated with specified domain.</p>
     */
    inline ListDataSourcesResult& AddDataSources(DataSourceDetails&& value) { m_dataSources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataSourceDetails> m_dataSources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
