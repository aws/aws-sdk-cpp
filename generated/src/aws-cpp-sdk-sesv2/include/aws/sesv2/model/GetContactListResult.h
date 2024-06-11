/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/Topic.h>
#include <aws/sesv2/model/Tag.h>
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
  class GetContactListResult
  {
  public:
    AWS_SESV2_API GetContactListResult();
    AWS_SESV2_API GetContactListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetContactListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }
    inline void SetContactListName(const Aws::String& value) { m_contactListName = value; }
    inline void SetContactListName(Aws::String&& value) { m_contactListName = std::move(value); }
    inline void SetContactListName(const char* value) { m_contactListName.assign(value); }
    inline GetContactListResult& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}
    inline GetContactListResult& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}
    inline GetContactListResult& WithContactListName(const char* value) { SetContactListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline const Aws::Vector<Topic>& GetTopics() const{ return m_topics; }
    inline void SetTopics(const Aws::Vector<Topic>& value) { m_topics = value; }
    inline void SetTopics(Aws::Vector<Topic>&& value) { m_topics = std::move(value); }
    inline GetContactListResult& WithTopics(const Aws::Vector<Topic>& value) { SetTopics(value); return *this;}
    inline GetContactListResult& WithTopics(Aws::Vector<Topic>&& value) { SetTopics(std::move(value)); return *this;}
    inline GetContactListResult& AddTopics(const Topic& value) { m_topics.push_back(value); return *this; }
    inline GetContactListResult& AddTopics(Topic&& value) { m_topics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetContactListResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetContactListResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetContactListResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting when the contact list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetContactListResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetContactListResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp noting the last time the contact list was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetContactListResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetContactListResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline GetContactListResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GetContactListResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetContactListResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline GetContactListResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContactListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContactListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContactListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;

    Aws::Vector<Topic> m_topics;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
