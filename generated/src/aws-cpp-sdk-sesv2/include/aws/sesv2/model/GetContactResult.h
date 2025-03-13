/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/TopicPreference.h>
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
namespace SESV2
{
namespace Model
{
  class GetContactResult
  {
  public:
    AWS_SESV2_API GetContactResult() = default;
    AWS_SESV2_API GetContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline const Aws::String& GetContactListName() const { return m_contactListName; }
    template<typename ContactListNameT = Aws::String>
    void SetContactListName(ContactListNameT&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::forward<ContactListNameT>(value); }
    template<typename ContactListNameT = Aws::String>
    GetContactResult& WithContactListName(ContactListNameT&& value) { SetContactListName(std::forward<ContactListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    GetContactResult& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const { return m_topicPreferences; }
    template<typename TopicPreferencesT = Aws::Vector<TopicPreference>>
    void SetTopicPreferences(TopicPreferencesT&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = std::forward<TopicPreferencesT>(value); }
    template<typename TopicPreferencesT = Aws::Vector<TopicPreference>>
    GetContactResult& WithTopicPreferences(TopicPreferencesT&& value) { SetTopicPreferences(std::forward<TopicPreferencesT>(value)); return *this;}
    template<typename TopicPreferencesT = TopicPreference>
    GetContactResult& AddTopicPreferences(TopicPreferencesT&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.emplace_back(std::forward<TopicPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicDefaultPreferences() const { return m_topicDefaultPreferences; }
    template<typename TopicDefaultPreferencesT = Aws::Vector<TopicPreference>>
    void SetTopicDefaultPreferences(TopicDefaultPreferencesT&& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences = std::forward<TopicDefaultPreferencesT>(value); }
    template<typename TopicDefaultPreferencesT = Aws::Vector<TopicPreference>>
    GetContactResult& WithTopicDefaultPreferences(TopicDefaultPreferencesT&& value) { SetTopicDefaultPreferences(std::forward<TopicDefaultPreferencesT>(value)); return *this;}
    template<typename TopicDefaultPreferencesT = TopicPreference>
    GetContactResult& AddTopicDefaultPreferences(TopicDefaultPreferencesT&& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences.emplace_back(std::forward<TopicDefaultPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const { return m_unsubscribeAll; }
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAllHasBeenSet = true; m_unsubscribeAll = value; }
    inline GetContactResult& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline const Aws::String& GetAttributesData() const { return m_attributesData; }
    template<typename AttributesDataT = Aws::String>
    void SetAttributesData(AttributesDataT&& value) { m_attributesDataHasBeenSet = true; m_attributesData = std::forward<AttributesDataT>(value); }
    template<typename AttributesDataT = Aws::String>
    GetContactResult& WithAttributesData(AttributesDataT&& value) { SetAttributesData(std::forward<AttributesDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetContactResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    GetContactResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicPreferences;
    bool m_topicPreferencesHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicDefaultPreferences;
    bool m_topicDefaultPreferencesHasBeenSet = false;

    bool m_unsubscribeAll{false};
    bool m_unsubscribeAllHasBeenSet = false;

    Aws::String m_attributesData;
    bool m_attributesDataHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
