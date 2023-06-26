/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/Command.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   */
  class CreateTaskRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API CreateTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTask"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;


    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline CreateTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline CreateTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token ensuring that the action is called only once with the specified
     * details.</p>
     */
    inline CreateTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The task to be performed. Only one task is executed on a device at a
     * time.</p>
     */
    inline const Command& GetCommand() const{ return m_command; }

    /**
     * <p>The task to be performed. Only one task is executed on a device at a
     * time.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The task to be performed. Only one task is executed on a device at a
     * time.</p>
     */
    inline void SetCommand(const Command& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The task to be performed. Only one task is executed on a device at a
     * time.</p>
     */
    inline void SetCommand(Command&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The task to be performed. Only one task is executed on a device at a
     * time.</p>
     */
    inline CreateTaskRequest& WithCommand(const Command& value) { SetCommand(value); return *this;}

    /**
     * <p>The task to be performed. Only one task is executed on a device at a
     * time.</p>
     */
    inline CreateTaskRequest& WithCommand(Command&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>A description of the task and its targets.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline CreateTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline CreateTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task and its targets.</p>
     */
    inline CreateTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline CreateTaskRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of managed device IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline CreateTaskRequest& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline CreateTaskRequest& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline CreateTaskRequest& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline CreateTaskRequest& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of managed device IDs.</p>
     */
    inline CreateTaskRequest& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Command m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
