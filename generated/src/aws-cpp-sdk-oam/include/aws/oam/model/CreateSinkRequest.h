/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class CreateSinkRequest : public OAMRequest
  {
  public:
    AWS_OAM_API CreateSinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSink"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the sink.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the sink.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the sink.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the sink.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the sink.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the sink.</p>
     */
    inline CreateSinkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the sink.</p>
     */
    inline CreateSinkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the sink.</p>
     */
    inline CreateSinkRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateSinkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
