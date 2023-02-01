/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class CreateGroupRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline CreateGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline CreateGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the group. It can include any Unicode characters.</p> <p>The
     * names for all groups in your account, across all Regions, must be unique.</p>
     */
    inline CreateGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the group. You can associate as
     * many as 50 tags with a group.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
