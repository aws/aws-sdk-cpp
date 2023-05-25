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
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class UpdateContactListRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateContactListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactList"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline UpdateContactListRequest& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline UpdateContactListRequest& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline UpdateContactListRequest& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline const Aws::Vector<Topic>& GetTopics() const{ return m_topics; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline void SetTopics(const Aws::Vector<Topic>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline void SetTopics(Aws::Vector<Topic>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline UpdateContactListRequest& WithTopics(const Aws::Vector<Topic>& value) { SetTopics(value); return *this;}

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline UpdateContactListRequest& WithTopics(Aws::Vector<Topic>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline UpdateContactListRequest& AddTopics(const Topic& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline UpdateContactListRequest& AddTopics(Topic&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline UpdateContactListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline UpdateContactListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline UpdateContactListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::Vector<Topic> m_topics;
    bool m_topicsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
