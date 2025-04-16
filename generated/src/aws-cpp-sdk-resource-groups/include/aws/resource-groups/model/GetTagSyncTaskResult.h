/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/resource-groups/model/TagSyncTaskStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class GetTagSyncTaskResult
  {
  public:
    AWS_RESOURCEGROUPS_API GetTagSyncTaskResult() = default;
    AWS_RESOURCEGROUPS_API GetTagSyncTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GetTagSyncTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application group. </p>
     */
    inline const Aws::String& GetGroupArn() const { return m_groupArn; }
    template<typename GroupArnT = Aws::String>
    void SetGroupArn(GroupArnT&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::forward<GroupArnT>(value); }
    template<typename GroupArnT = Aws::String>
    GetTagSyncTaskResult& WithGroupArn(GroupArnT&& value) { SetGroupArn(std::forward<GroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group. </p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GetTagSyncTaskResult& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the tag-sync task. </p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    GetTagSyncTaskResult& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key. </p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    GetTagSyncTaskResult& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value. </p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    GetTagSyncTaskResult& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceQuery& GetResourceQuery() const { return m_resourceQuery; }
    template<typename ResourceQueryT = ResourceQuery>
    void SetResourceQuery(ResourceQueryT&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::forward<ResourceQueryT>(value); }
    template<typename ResourceQueryT = ResourceQuery>
    GetTagSyncTaskResult& WithResourceQuery(ResourceQueryT&& value) { SetResourceQuery(std::forward<ResourceQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the role assumed by Resource Groups to tag
     * and untag resources on your behalf. </p> <p>For more information about this
     * role, review <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/arguide/app-tag-sync.html#tag-sync-role">Tag-sync
     * required permissions</a>. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetTagSyncTaskResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the tag-sync task. </p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>ACTIVE</code> - The tag-sync task is actively managing resources in
     * the application by adding or removing the <code>awsApplication</code> tag from
     * resources when they are tagged or untagged with the specified tag key-value
     * pair. </p> </li> <li> <p> <code>ERROR</code> - The tag-sync task is not actively
     * managing resources in the application. Review the <code>ErrorMessage</code> for
     * more information about resolving the error. </p> </li> </ul>
     */
    inline TagSyncTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(TagSyncTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTagSyncTaskResult& WithStatus(TagSyncTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific error message in cases where the tag-sync task status is
     * <code>ERROR</code>. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetTagSyncTaskResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the tag-sync task was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetTagSyncTaskResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTagSyncTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TagSyncTaskStatus m_status{TagSyncTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
