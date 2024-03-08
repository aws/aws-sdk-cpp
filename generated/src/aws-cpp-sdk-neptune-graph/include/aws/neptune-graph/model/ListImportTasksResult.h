/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/ImportTaskSummary.h>
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
  class ListImportTasksResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ListImportTasksResult();
    AWS_NEPTUNEGRAPH_API ListImportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListImportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested list of import tasks.</p>
     */
    inline const Aws::Vector<ImportTaskSummary>& GetTasks() const{ return m_tasks; }

    /**
     * <p>The requested list of import tasks.</p>
     */
    inline void SetTasks(const Aws::Vector<ImportTaskSummary>& value) { m_tasks = value; }

    /**
     * <p>The requested list of import tasks.</p>
     */
    inline void SetTasks(Aws::Vector<ImportTaskSummary>&& value) { m_tasks = std::move(value); }

    /**
     * <p>The requested list of import tasks.</p>
     */
    inline ListImportTasksResult& WithTasks(const Aws::Vector<ImportTaskSummary>& value) { SetTasks(value); return *this;}

    /**
     * <p>The requested list of import tasks.</p>
     */
    inline ListImportTasksResult& WithTasks(Aws::Vector<ImportTaskSummary>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>The requested list of import tasks.</p>
     */
    inline ListImportTasksResult& AddTasks(const ImportTaskSummary& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>The requested list of import tasks.</p>
     */
    inline ListImportTasksResult& AddTasks(ImportTaskSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListImportTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListImportTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListImportTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListImportTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListImportTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListImportTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImportTaskSummary> m_tasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
