﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EventBridgeRuleTemplateEventType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/EventBridgeRuleTemplateTarget.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for GetEventBridgeRuleTemplateResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetEventBridgeRuleTemplateResponse">AWS
   * API Reference</a></p>
   */
  class GetEventBridgeRuleTemplateResult
  {
  public:
    AWS_MEDIALIVE_API GetEventBridgeRuleTemplateResult();
    AWS_MEDIALIVE_API GetEventBridgeRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API GetEventBridgeRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetEventBridgeRuleTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetEventBridgeRuleTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEventBridgeRuleTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<EventBridgeRuleTemplateTarget>& GetEventTargets() const{ return m_eventTargets; }
    inline void SetEventTargets(const Aws::Vector<EventBridgeRuleTemplateTarget>& value) { m_eventTargets = value; }
    inline void SetEventTargets(Aws::Vector<EventBridgeRuleTemplateTarget>&& value) { m_eventTargets = std::move(value); }
    inline GetEventBridgeRuleTemplateResult& WithEventTargets(const Aws::Vector<EventBridgeRuleTemplateTarget>& value) { SetEventTargets(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithEventTargets(Aws::Vector<EventBridgeRuleTemplateTarget>&& value) { SetEventTargets(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& AddEventTargets(const EventBridgeRuleTemplateTarget& value) { m_eventTargets.push_back(value); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddEventTargets(EventBridgeRuleTemplateTarget&& value) { m_eventTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const EventBridgeRuleTemplateEventType& GetEventType() const{ return m_eventType; }
    inline void SetEventType(const EventBridgeRuleTemplateEventType& value) { m_eventType = value; }
    inline void SetEventType(EventBridgeRuleTemplateEventType&& value) { m_eventType = std::move(value); }
    inline GetEventBridgeRuleTemplateResult& WithEventType(const EventBridgeRuleTemplateEventType& value) { SetEventType(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithEventType(EventBridgeRuleTemplateEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }
    inline GetEventBridgeRuleTemplateResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetEventBridgeRuleTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline GetEventBridgeRuleTemplateResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetEventBridgeRuleTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetEventBridgeRuleTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEventBridgeRuleTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventBridgeRuleTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventBridgeRuleTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::Vector<EventBridgeRuleTemplateTarget> m_eventTargets;

    EventBridgeRuleTemplateEventType m_eventType;

    Aws::String m_groupId;

    Aws::String m_id;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
