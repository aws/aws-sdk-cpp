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
    AWS_SESV2_API UpdateContactListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactList"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const { return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    template<typename ContactListNameT = Aws::String>
    void SetContactListName(ContactListNameT&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::forward<ContactListNameT>(value); }
    template<typename ContactListNameT = Aws::String>
    UpdateContactListRequest& WithContactListName(ContactListNameT&& value) { SetContactListName(std::forward<ContactListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline const Aws::Vector<Topic>& GetTopics() const { return m_topics; }
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }
    template<typename TopicsT = Aws::Vector<Topic>>
    void SetTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics = std::forward<TopicsT>(value); }
    template<typename TopicsT = Aws::Vector<Topic>>
    UpdateContactListRequest& WithTopics(TopicsT&& value) { SetTopics(std::forward<TopicsT>(value)); return *this;}
    template<typename TopicsT = Topic>
    UpdateContactListRequest& AddTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics.emplace_back(std::forward<TopicsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateContactListRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
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
