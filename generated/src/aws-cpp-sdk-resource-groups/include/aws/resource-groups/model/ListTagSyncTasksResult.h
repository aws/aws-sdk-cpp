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
    AWS_RESOURCEGROUPS_API ListTagSyncTasksResult() = default;
    AWS_RESOURCEGROUPS_API ListTagSyncTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListTagSyncTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tag-sync tasks and information about each task. </p>
     */
    inline const Aws::Vector<TagSyncTaskItem>& GetTagSyncTasks() const { return m_tagSyncTasks; }
    template<typename TagSyncTasksT = Aws::Vector<TagSyncTaskItem>>
    void SetTagSyncTasks(TagSyncTasksT&& value) { m_tagSyncTasksHasBeenSet = true; m_tagSyncTasks = std::forward<TagSyncTasksT>(value); }
    template<typename TagSyncTasksT = Aws::Vector<TagSyncTaskItem>>
    ListTagSyncTasksResult& WithTagSyncTasks(TagSyncTasksT&& value) { SetTagSyncTasks(std::forward<TagSyncTasksT>(value)); return *this;}
    template<typename TagSyncTasksT = TagSyncTaskItem>
    ListTagSyncTasksResult& AddTagSyncTasks(TagSyncTasksT&& value) { m_tagSyncTasksHasBeenSet = true; m_tagSyncTasks.emplace_back(std::forward<TagSyncTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTagSyncTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTagSyncTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagSyncTaskItem> m_tagSyncTasks;
    bool m_tagSyncTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
