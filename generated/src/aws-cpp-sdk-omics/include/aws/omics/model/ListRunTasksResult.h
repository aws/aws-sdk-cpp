/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/TaskListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListRunTasksResult
  {
  public:
    AWS_OMICS_API ListRunTasksResult();
    AWS_OMICS_API ListRunTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListRunTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tasks.</p>
     */
    inline const Aws::Vector<TaskListItem>& GetItems() const{ return m_items; }

    /**
     * <p>A list of tasks.</p>
     */
    inline void SetItems(const Aws::Vector<TaskListItem>& value) { m_items = value; }

    /**
     * <p>A list of tasks.</p>
     */
    inline void SetItems(Aws::Vector<TaskListItem>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of tasks.</p>
     */
    inline ListRunTasksResult& WithItems(const Aws::Vector<TaskListItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of tasks.</p>
     */
    inline ListRunTasksResult& WithItems(Aws::Vector<TaskListItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of tasks.</p>
     */
    inline ListRunTasksResult& AddItems(const TaskListItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of tasks.</p>
     */
    inline ListRunTasksResult& AddItems(TaskListItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TaskListItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
