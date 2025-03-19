/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/TopicPreference.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class CreateContactRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContact"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline const Aws::String& GetContactListName() const { return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    template<typename ContactListNameT = Aws::String>
    void SetContactListName(ContactListNameT&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::forward<ContactListNameT>(value); }
    template<typename ContactListNameT = Aws::String>
    CreateContactRequest& WithContactListName(ContactListNameT&& value) { SetContactListName(std::forward<ContactListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    CreateContactRequest& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const { return m_topicPreferences; }
    inline bool TopicPreferencesHasBeenSet() const { return m_topicPreferencesHasBeenSet; }
    template<typename TopicPreferencesT = Aws::Vector<TopicPreference>>
    void SetTopicPreferences(TopicPreferencesT&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = std::forward<TopicPreferencesT>(value); }
    template<typename TopicPreferencesT = Aws::Vector<TopicPreference>>
    CreateContactRequest& WithTopicPreferences(TopicPreferencesT&& value) { SetTopicPreferences(std::forward<TopicPreferencesT>(value)); return *this;}
    template<typename TopicPreferencesT = TopicPreference>
    CreateContactRequest& AddTopicPreferences(TopicPreferencesT&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.emplace_back(std::forward<TopicPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const { return m_unsubscribeAll; }
    inline bool UnsubscribeAllHasBeenSet() const { return m_unsubscribeAllHasBeenSet; }
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAllHasBeenSet = true; m_unsubscribeAll = value; }
    inline CreateContactRequest& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline const Aws::String& GetAttributesData() const { return m_attributesData; }
    inline bool AttributesDataHasBeenSet() const { return m_attributesDataHasBeenSet; }
    template<typename AttributesDataT = Aws::String>
    void SetAttributesData(AttributesDataT&& value) { m_attributesDataHasBeenSet = true; m_attributesData = std::forward<AttributesDataT>(value); }
    template<typename AttributesDataT = Aws::String>
    CreateContactRequest& WithAttributesData(AttributesDataT&& value) { SetAttributesData(std::forward<AttributesDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicPreferences;
    bool m_topicPreferencesHasBeenSet = false;

    bool m_unsubscribeAll{false};
    bool m_unsubscribeAllHasBeenSet = false;

    Aws::String m_attributesData;
    bool m_attributesDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
