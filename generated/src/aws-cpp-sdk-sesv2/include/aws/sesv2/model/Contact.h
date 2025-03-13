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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>A contact is the end-user who is receiving the email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Contact">AWS API
   * Reference</a></p>
   */
  class Contact
  {
  public:
    AWS_SESV2_API Contact() = default;
    AWS_SESV2_API Contact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    Contact& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const { return m_topicPreferences; }
    inline bool TopicPreferencesHasBeenSet() const { return m_topicPreferencesHasBeenSet; }
    template<typename TopicPreferencesT = Aws::Vector<TopicPreference>>
    void SetTopicPreferences(TopicPreferencesT&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = std::forward<TopicPreferencesT>(value); }
    template<typename TopicPreferencesT = Aws::Vector<TopicPreference>>
    Contact& WithTopicPreferences(TopicPreferencesT&& value) { SetTopicPreferences(std::forward<TopicPreferencesT>(value)); return *this;}
    template<typename TopicPreferencesT = TopicPreference>
    Contact& AddTopicPreferences(TopicPreferencesT&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.emplace_back(std::forward<TopicPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicDefaultPreferences() const { return m_topicDefaultPreferences; }
    inline bool TopicDefaultPreferencesHasBeenSet() const { return m_topicDefaultPreferencesHasBeenSet; }
    template<typename TopicDefaultPreferencesT = Aws::Vector<TopicPreference>>
    void SetTopicDefaultPreferences(TopicDefaultPreferencesT&& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences = std::forward<TopicDefaultPreferencesT>(value); }
    template<typename TopicDefaultPreferencesT = Aws::Vector<TopicPreference>>
    Contact& WithTopicDefaultPreferences(TopicDefaultPreferencesT&& value) { SetTopicDefaultPreferences(std::forward<TopicDefaultPreferencesT>(value)); return *this;}
    template<typename TopicDefaultPreferencesT = TopicPreference>
    Contact& AddTopicDefaultPreferences(TopicDefaultPreferencesT&& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences.emplace_back(std::forward<TopicDefaultPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const { return m_unsubscribeAll; }
    inline bool UnsubscribeAllHasBeenSet() const { return m_unsubscribeAllHasBeenSet; }
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAllHasBeenSet = true; m_unsubscribeAll = value; }
    inline Contact& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    Contact& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicPreferences;
    bool m_topicPreferencesHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicDefaultPreferences;
    bool m_topicDefaultPreferencesHasBeenSet = false;

    bool m_unsubscribeAll{false};
    bool m_unsubscribeAllHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
