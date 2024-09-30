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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>The Amazon resource name (ARN) of the tag-sync task. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/TagSyncTaskItem">AWS
   * API Reference</a></p>
   */
  class TagSyncTaskItem
  {
  public:
    AWS_RESOURCEGROUPS_API TagSyncTaskItem();
    AWS_RESOURCEGROUPS_API TagSyncTaskItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API TagSyncTaskItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application group. </p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }
    inline TagSyncTaskItem& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline TagSyncTaskItem& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group. </p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline TagSyncTaskItem& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline TagSyncTaskItem& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the tag-sync task. </p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline TagSyncTaskItem& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline TagSyncTaskItem& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key. </p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }
    inline TagSyncTaskItem& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline TagSyncTaskItem& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value. </p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }
    inline TagSyncTaskItem& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}
    inline TagSyncTaskItem& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithTagValue(const char* value) { SetTagValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the role assumed by the service to tag and
     * untag resources on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline TagSyncTaskItem& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline TagSyncTaskItem& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TagSyncTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TagSyncTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TagSyncTaskItem& WithStatus(const TagSyncTaskStatus& value) { SetStatus(value); return *this;}
    inline TagSyncTaskItem& WithStatus(TagSyncTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific error message in cases where the tag-sync task status is
     * <code>Error</code>.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline TagSyncTaskItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline TagSyncTaskItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline TagSyncTaskItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the tag-sync task was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TagSyncTaskItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TagSyncTaskItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
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

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TagSyncTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
