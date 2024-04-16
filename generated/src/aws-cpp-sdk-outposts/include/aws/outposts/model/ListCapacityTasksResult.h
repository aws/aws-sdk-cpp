/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CapacityTaskSummary.h>
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
namespace Outposts
{
namespace Model
{
  class ListCapacityTasksResult
  {
  public:
    AWS_OUTPOSTS_API ListCapacityTasksResult();
    AWS_OUTPOSTS_API ListCapacityTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListCapacityTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline const Aws::Vector<CapacityTaskSummary>& GetCapacityTasks() const{ return m_capacityTasks; }

    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline void SetCapacityTasks(const Aws::Vector<CapacityTaskSummary>& value) { m_capacityTasks = value; }

    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline void SetCapacityTasks(Aws::Vector<CapacityTaskSummary>&& value) { m_capacityTasks = std::move(value); }

    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline ListCapacityTasksResult& WithCapacityTasks(const Aws::Vector<CapacityTaskSummary>& value) { SetCapacityTasks(value); return *this;}

    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline ListCapacityTasksResult& WithCapacityTasks(Aws::Vector<CapacityTaskSummary>&& value) { SetCapacityTasks(std::move(value)); return *this;}

    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline ListCapacityTasksResult& AddCapacityTasks(const CapacityTaskSummary& value) { m_capacityTasks.push_back(value); return *this; }

    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline ListCapacityTasksResult& AddCapacityTasks(CapacityTaskSummary&& value) { m_capacityTasks.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListCapacityTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCapacityTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCapacityTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCapacityTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCapacityTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCapacityTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CapacityTaskSummary> m_capacityTasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
