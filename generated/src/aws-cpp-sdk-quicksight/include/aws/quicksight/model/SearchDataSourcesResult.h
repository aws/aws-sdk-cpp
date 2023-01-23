/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class SearchDataSourcesResult
  {
  public:
    AWS_QUICKSIGHT_API SearchDataSourcesResult();
    AWS_QUICKSIGHT_API SearchDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline const Aws::Vector<DataSourceSummary>& GetDataSourceSummaries() const{ return m_dataSourceSummaries; }

    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline void SetDataSourceSummaries(const Aws::Vector<DataSourceSummary>& value) { m_dataSourceSummaries = value; }

    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline void SetDataSourceSummaries(Aws::Vector<DataSourceSummary>&& value) { m_dataSourceSummaries = std::move(value); }

    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline SearchDataSourcesResult& WithDataSourceSummaries(const Aws::Vector<DataSourceSummary>& value) { SetDataSourceSummaries(value); return *this;}

    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline SearchDataSourcesResult& WithDataSourceSummaries(Aws::Vector<DataSourceSummary>&& value) { SetDataSourceSummaries(std::move(value)); return *this;}

    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline SearchDataSourcesResult& AddDataSourceSummaries(const DataSourceSummary& value) { m_dataSourceSummaries.push_back(value); return *this; }

    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline SearchDataSourcesResult& AddDataSourceSummaries(DataSourceSummary&& value) { m_dataSourceSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchDataSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchDataSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchDataSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline SearchDataSourcesResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline SearchDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline SearchDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline SearchDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataSourceSummary> m_dataSourceSummaries;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
