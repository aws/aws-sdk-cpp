/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/medialive/model/EventBridgeRuleTemplateEventType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for EventBridgeRuleTemplateSummary<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EventBridgeRuleTemplateSummary">AWS
   * API Reference</a></p>
   */
  class EventBridgeRuleTemplateSummary
  {
  public:
    AWS_MEDIALIVE_API EventBridgeRuleTemplateSummary();
    AWS_MEDIALIVE_API EventBridgeRuleTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EventBridgeRuleTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline EventBridgeRuleTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline EventBridgeRuleTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An eventbridge rule template's ARN (Amazon Resource Name)
     */
    inline EventBridgeRuleTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline EventBridgeRuleTemplateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline EventBridgeRuleTemplateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline EventBridgeRuleTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline EventBridgeRuleTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline EventBridgeRuleTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The number of targets configured to send matching events.
     */
    inline int GetEventTargetCount() const{ return m_eventTargetCount; }

    /**
     * The number of targets configured to send matching events.
     */
    inline bool EventTargetCountHasBeenSet() const { return m_eventTargetCountHasBeenSet; }

    /**
     * The number of targets configured to send matching events.
     */
    inline void SetEventTargetCount(int value) { m_eventTargetCountHasBeenSet = true; m_eventTargetCount = value; }

    /**
     * The number of targets configured to send matching events.
     */
    inline EventBridgeRuleTemplateSummary& WithEventTargetCount(int value) { SetEventTargetCount(value); return *this;}


    
    inline const EventBridgeRuleTemplateEventType& GetEventType() const{ return m_eventType; }

    
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    
    inline void SetEventType(const EventBridgeRuleTemplateEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    
    inline void SetEventType(EventBridgeRuleTemplateEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    
    inline EventBridgeRuleTemplateSummary& WithEventType(const EventBridgeRuleTemplateEventType& value) { SetEventType(value); return *this;}

    
    inline EventBridgeRuleTemplateSummary& WithEventType(EventBridgeRuleTemplateEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline EventBridgeRuleTemplateSummary& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline EventBridgeRuleTemplateSummary& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * An eventbridge rule template group's id. AWS provided template groups have ids
     * that start with `aws-`
     */
    inline EventBridgeRuleTemplateSummary& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline EventBridgeRuleTemplateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline EventBridgeRuleTemplateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * An eventbridge rule template's id. AWS provided templates have ids that start
     * with `aws-`
     */
    inline EventBridgeRuleTemplateSummary& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    
    inline EventBridgeRuleTemplateSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    
    inline EventBridgeRuleTemplateSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline EventBridgeRuleTemplateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline EventBridgeRuleTemplateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline EventBridgeRuleTemplateSummary& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline EventBridgeRuleTemplateSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline EventBridgeRuleTemplateSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline EventBridgeRuleTemplateSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline EventBridgeRuleTemplateSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline EventBridgeRuleTemplateSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline EventBridgeRuleTemplateSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline EventBridgeRuleTemplateSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline EventBridgeRuleTemplateSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline EventBridgeRuleTemplateSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_eventTargetCount;
    bool m_eventTargetCountHasBeenSet = false;

    EventBridgeRuleTemplateEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
