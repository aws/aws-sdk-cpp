/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/ExportTaskSummary.h>
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
  class ListExportTasksResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ListExportTasksResult();
    AWS_NEPTUNEGRAPH_API ListExportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListExportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested list of export tasks.</p>
     */
    inline const Aws::Vector<ExportTaskSummary>& GetTasks() const{ return m_tasks; }
    inline void SetTasks(const Aws::Vector<ExportTaskSummary>& value) { m_tasks = value; }
    inline void SetTasks(Aws::Vector<ExportTaskSummary>&& value) { m_tasks = std::move(value); }
    inline ListExportTasksResult& WithTasks(const Aws::Vector<ExportTaskSummary>& value) { SetTasks(value); return *this;}
    inline ListExportTasksResult& WithTasks(Aws::Vector<ExportTaskSummary>&& value) { SetTasks(std::move(value)); return *this;}
    inline ListExportTasksResult& AddTasks(const ExportTaskSummary& value) { m_tasks.push_back(value); return *this; }
    inline ListExportTasksResult& AddTasks(ExportTaskSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token used to paginate output.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListExportTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExportTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExportTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListExportTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListExportTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListExportTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExportTaskSummary> m_tasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
