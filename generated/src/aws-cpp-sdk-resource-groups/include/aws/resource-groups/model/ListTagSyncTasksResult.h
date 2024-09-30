/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/TagSyncTaskItem.h>
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
namespace ResourceGroups
{
namespace Model
{
  class ListTagSyncTasksResult
  {
  public:
    AWS_RESOURCEGROUPS_API ListTagSyncTasksResult();
    AWS_RESOURCEGROUPS_API ListTagSyncTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListTagSyncTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tag-sync tasks and information about each task. </p>
     */
    inline const Aws::Vector<TagSyncTaskItem>& GetTagSyncTasks() const{ return m_tagSyncTasks; }
    inline void SetTagSyncTasks(const Aws::Vector<TagSyncTaskItem>& value) { m_tagSyncTasks = value; }
    inline void SetTagSyncTasks(Aws::Vector<TagSyncTaskItem>&& value) { m_tagSyncTasks = std::move(value); }
    inline ListTagSyncTasksResult& WithTagSyncTasks(const Aws::Vector<TagSyncTaskItem>& value) { SetTagSyncTasks(value); return *this;}
    inline ListTagSyncTasksResult& WithTagSyncTasks(Aws::Vector<TagSyncTaskItem>&& value) { SetTagSyncTasks(std::move(value)); return *this;}
    inline ListTagSyncTasksResult& AddTagSyncTasks(const TagSyncTaskItem& value) { m_tagSyncTasks.push_back(value); return *this; }
    inline ListTagSyncTasksResult& AddTagSyncTasks(TagSyncTaskItem&& value) { m_tagSyncTasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTagSyncTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTagSyncTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTagSyncTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTagSyncTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTagSyncTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTagSyncTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TagSyncTaskItem> m_tagSyncTasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
