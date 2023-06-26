/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/TaskState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>Information about the task assigned to one or many devices.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/TaskSummary">AWS
   * API Reference</a></p>
   */
  class TaskSummary
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API TaskSummary();
    AWS_SNOWDEVICEMANAGEMENT_API TaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API TaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the task assigned to one or many devices.</p>
     */
    inline const TaskState& GetState() const{ return m_state; }

    /**
     * <p>The state of the task assigned to one or many devices.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the task assigned to one or many devices.</p>
     */
    inline void SetState(const TaskState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the task assigned to one or many devices.</p>
     */
    inline void SetState(TaskState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the task assigned to one or many devices.</p>
     */
    inline TaskSummary& WithState(const TaskState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the task assigned to one or many devices.</p>
     */
    inline TaskSummary& WithState(TaskState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline TaskSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline TaskSummary& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline TaskSummary& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline TaskSummary& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task ID.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The task ID.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The task ID.</p>
     */
    inline TaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline TaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline TaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    TaskState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
