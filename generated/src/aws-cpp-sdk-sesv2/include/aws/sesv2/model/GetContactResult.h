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
    AWS_SESV2_API GetContactResult();
    AWS_SESV2_API GetContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }
    inline void SetContactListName(const Aws::String& value) { m_contactListName = value; }
    inline void SetContactListName(Aws::String&& value) { m_contactListName = std::move(value); }
    inline void SetContactListName(const char* value) { m_contactListName.assign(value); }
    inline GetContactResult& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}
    inline GetContactResult& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}
    inline GetContactResult& WithContactListName(const char* value) { SetContactListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }
    inline GetContactResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline GetContactResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline GetContactResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const{ return m_topicPreferences; }
    inline void SetTopicPreferences(const Aws::Vector<TopicPreference>& value) { m_topicPreferences = value; }
    inline void SetTopicPreferences(Aws::Vector<TopicPreference>&& value) { m_topicPreferences = std::move(value); }
    inline GetContactResult& WithTopicPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicPreferences(value); return *this;}
    inline GetContactResult& WithTopicPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicPreferences(std::move(value)); return *this;}
    inline GetContactResult& AddTopicPreferences(const TopicPreference& value) { m_topicPreferences.push_back(value); return *this; }
    inline GetContactResult& AddTopicPreferences(TopicPreference&& value) { m_topicPreferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicDefaultPreferences() const{ return m_topicDefaultPreferences; }
    inline void SetTopicDefaultPreferences(const Aws::Vector<TopicPreference>& value) { m_topicDefaultPreferences = value; }
    inline void SetTopicDefaultPreferences(Aws::Vector<TopicPreference>&& value) { m_topicDefaultPreferences = std::move(value); }
    inline GetContactResult& WithTopicDefaultPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicDefaultPreferences(value); return *this;}
    inline GetContactResult& WithTopicDefaultPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicDefaultPreferences(std::move(value)); return *this;}
    inline GetContactResult& AddTopicDefaultPreferences(const TopicPreference& value) { m_topicDefaultPreferences.push_back(value); return *this; }
    inline GetContactResult& AddTopicDefaultPreferences(TopicPreference&& value) { m_topicDefaultPreferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const{ return m_unsubscribeAll; }
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAll = value; }
    inline GetContactResult& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline const Aws::String& GetAttributesData() const{ return m_attributesData; }
    inline void SetAttributesData(const Aws::String& value) { m_attributesData = value; }
    inline void SetAttributesData(Aws::String&& value) { m_attributesData = std::move(value); }
    inline void SetAttributesData(const char* value) { m_attributesData.assign(value); }
    inline GetContactResult& WithAttributesData(const Aws::String& value) { SetAttributesData(value); return *this;}
    inline GetContactResult& WithAttributesData(Aws::String&& value) { SetAttributesData(std::move(value)); return *this;}
    inline GetContactResult& WithAttributesData(const char* value) { SetAttributesData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetContactResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetContactResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetContactResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetContactResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;

    Aws::String m_emailAddress;

    Aws::Vector<TopicPreference> m_topicPreferences;

    Aws::Vector<TopicPreference> m_topicDefaultPreferences;

    bool m_unsubscribeAll;

    Aws::String m_attributesData;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
