/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/BatchLoadTask.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class ListBatchLoadTasksResult
  {
  public:
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksResult();
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline ListBatchLoadTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline ListBatchLoadTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline ListBatchLoadTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of batch load task details.</p>
     */
    inline const Aws::Vector<BatchLoadTask>& GetBatchLoadTasks() const{ return m_batchLoadTasks; }

    /**
     * <p>A list of batch load task details.</p>
     */
    inline void SetBatchLoadTasks(const Aws::Vector<BatchLoadTask>& value) { m_batchLoadTasks = value; }

    /**
     * <p>A list of batch load task details.</p>
     */
    inline void SetBatchLoadTasks(Aws::Vector<BatchLoadTask>&& value) { m_batchLoadTasks = std::move(value); }

    /**
     * <p>A list of batch load task details.</p>
     */
    inline ListBatchLoadTasksResult& WithBatchLoadTasks(const Aws::Vector<BatchLoadTask>& value) { SetBatchLoadTasks(value); return *this;}

    /**
     * <p>A list of batch load task details.</p>
     */
    inline ListBatchLoadTasksResult& WithBatchLoadTasks(Aws::Vector<BatchLoadTask>&& value) { SetBatchLoadTasks(std::move(value)); return *this;}

    /**
     * <p>A list of batch load task details.</p>
     */
    inline ListBatchLoadTasksResult& AddBatchLoadTasks(const BatchLoadTask& value) { m_batchLoadTasks.push_back(value); return *this; }

    /**
     * <p>A list of batch load task details.</p>
     */
    inline ListBatchLoadTasksResult& AddBatchLoadTasks(BatchLoadTask&& value) { m_batchLoadTasks.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBatchLoadTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBatchLoadTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBatchLoadTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<BatchLoadTask> m_batchLoadTasks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
