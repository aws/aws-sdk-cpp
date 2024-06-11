/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/Topic.h>
#include <aws/sesv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class CreateContactListRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateContactListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContactList"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }
    inline CreateContactListRequest& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}
    inline CreateContactListRequest& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}
    inline CreateContactListRequest& WithContactListName(const char* value) { SetContactListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline const Aws::Vector<Topic>& GetTopics() const{ return m_topics; }
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }
    inline void SetTopics(const Aws::Vector<Topic>& value) { m_topicsHasBeenSet = true; m_topics = value; }
    inline void SetTopics(Aws::Vector<Topic>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }
    inline CreateContactListRequest& WithTopics(const Aws::Vector<Topic>& value) { SetTopics(value); return *this;}
    inline CreateContactListRequest& WithTopics(Aws::Vector<Topic>&& value) { SetTopics(std::move(value)); return *this;}
    inline CreateContactListRequest& AddTopics(const Topic& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }
    inline CreateContactListRequest& AddTopics(Topic&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateContactListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateContactListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateContactListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContactListRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateContactListRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContactListRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateContactListRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::Vector<Topic> m_topics;
    bool m_topicsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
