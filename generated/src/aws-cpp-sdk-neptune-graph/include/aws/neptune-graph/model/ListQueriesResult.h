/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/QuerySummary.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class ListQueriesResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ListQueriesResult();
    AWS_NEPTUNEGRAPH_API ListQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline const Aws::Vector<QuerySummary>& GetQueries() const{ return m_queries; }

    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline void SetQueries(const Aws::Vector<QuerySummary>& value) { m_queries = value; }

    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline void SetQueries(Aws::Vector<QuerySummary>&& value) { m_queries = std::move(value); }

    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline ListQueriesResult& WithQueries(const Aws::Vector<QuerySummary>& value) { SetQueries(value); return *this;}

    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline ListQueriesResult& WithQueries(Aws::Vector<QuerySummary>&& value) { SetQueries(std::move(value)); return *this;}

    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline ListQueriesResult& AddQueries(const QuerySummary& value) { m_queries.push_back(value); return *this; }

    /**
     * <p>A list of current openCypher queries.</p>
     */
    inline ListQueriesResult& AddQueries(QuerySummary&& value) { m_queries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListQueriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListQueriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListQueriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<QuerySummary> m_queries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
