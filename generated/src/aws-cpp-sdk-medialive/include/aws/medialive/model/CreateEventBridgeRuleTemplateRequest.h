/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EventBridgeRuleTemplateEventType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/EventBridgeRuleTemplateTarget.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for CreateEventBridgeRuleTemplateRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateEventBridgeRuleTemplateRequest">AWS
   * API Reference</a></p>
   */
  class CreateEventBridgeRuleTemplateRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateEventBridgeRuleTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventBridgeRuleTemplate"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


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
    inline CreateEventBridgeRuleTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Vector<EventBridgeRuleTemplateTarget>& GetEventTargets() const{ return m_eventTargets; }

    
    inline bool EventTargetsHasBeenSet() const { return m_eventTargetsHasBeenSet; }

    
    inline void SetEventTargets(const Aws::Vector<EventBridgeRuleTemplateTarget>& value) { m_eventTargetsHasBeenSet = true; m_eventTargets = value; }

    
    inline void SetEventTargets(Aws::Vector<EventBridgeRuleTemplateTarget>&& value) { m_eventTargetsHasBeenSet = true; m_eventTargets = std::move(value); }

    
    inline CreateEventBridgeRuleTemplateRequest& WithEventTargets(const Aws::Vector<EventBridgeRuleTemplateTarget>& value) { SetEventTargets(value); return *this;}

    
    inline CreateEventBridgeRuleTemplateRequest& WithEventTargets(Aws::Vector<EventBridgeRuleTemplateTarget>&& value) { SetEventTargets(std::move(value)); return *this;}

    
    inline CreateEventBridgeRuleTemplateRequest& AddEventTargets(const EventBridgeRuleTemplateTarget& value) { m_eventTargetsHasBeenSet = true; m_eventTargets.push_back(value); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddEventTargets(EventBridgeRuleTemplateTarget&& value) { m_eventTargetsHasBeenSet = true; m_eventTargets.push_back(std::move(value)); return *this; }


    
    inline const EventBridgeRuleTemplateEventType& GetEventType() const{ return m_eventType; }

    
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    
    inline void SetEventType(const EventBridgeRuleTemplateEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    
    inline void SetEventType(EventBridgeRuleTemplateEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    
    inline CreateEventBridgeRuleTemplateRequest& WithEventType(const EventBridgeRuleTemplateEventType& value) { SetEventType(value); return *this;}

    
    inline CreateEventBridgeRuleTemplateRequest& WithEventType(EventBridgeRuleTemplateEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


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
    inline CreateEventBridgeRuleTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CreateEventBridgeRuleTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateEventBridgeRuleTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateEventBridgeRuleTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateEventBridgeRuleTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EventBridgeRuleTemplateTarget> m_eventTargets;
    bool m_eventTargetsHasBeenSet = false;

    EventBridgeRuleTemplateEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
