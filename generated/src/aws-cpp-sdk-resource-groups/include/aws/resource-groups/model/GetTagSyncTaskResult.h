/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_RESOURCEGROUPS_API GetTagSyncTaskResult();
    AWS_RESOURCEGROUPS_API GetTagSyncTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GetTagSyncTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application group. </p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArn.assign(value); }
    inline GetTagSyncTaskResult& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline GetTagSyncTaskResult& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group. </p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline void SetGroupName(const Aws::String& value) { m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupName.assign(value); }
    inline GetTagSyncTaskResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline GetTagSyncTaskResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the tag-sync task. </p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline GetTagSyncTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline GetTagSyncTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key. </p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline void SetTagKey(const Aws::String& value) { m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKey.assign(value); }
    inline GetTagSyncTaskResult& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline GetTagSyncTaskResult& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value. </p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }
    inline void SetTagValue(const Aws::String& value) { m_tagValue = value; }
    inline void SetTagValue(Aws::String&& value) { m_tagValue = std::move(value); }
    inline void SetTagValue(const char* value) { m_tagValue.assign(value); }
    inline GetTagSyncTaskResult& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}
    inline GetTagSyncTaskResult& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithTagValue(const char* value) { SetTagValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the role assumed by Resource Groups to tag
     * and untag resources on your behalf. </p> <p>For more information about this
     * role, review <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/arguide/app-tag-sync.html#tag-sync-role">Tag-sync
     * required permissions</a>. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetTagSyncTaskResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetTagSyncTaskResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const TagSyncTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TagSyncTaskStatus& value) { m_status = value; }
    inline void SetStatus(TagSyncTaskStatus&& value) { m_status = std::move(value); }
    inline GetTagSyncTaskResult& WithStatus(const TagSyncTaskStatus& value) { SetStatus(value); return *this;}
    inline GetTagSyncTaskResult& WithStatus(TagSyncTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific error message in cases where the tag-sync task status is
     * <code>ERROR</code>. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetTagSyncTaskResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetTagSyncTaskResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the tag-sync task was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetTagSyncTaskResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetTagSyncTaskResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTagSyncTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTagSyncTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTagSyncTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupArn;

    Aws::String m_groupName;

    Aws::String m_taskArn;

    Aws::String m_tagKey;

    Aws::String m_tagValue;

    Aws::String m_roleArn;

    TagSyncTaskStatus m_status;

    Aws::String m_errorMessage;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
