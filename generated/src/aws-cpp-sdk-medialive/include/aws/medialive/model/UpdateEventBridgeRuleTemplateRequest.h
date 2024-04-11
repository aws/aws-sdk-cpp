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
#include <aws/medialive/model/EventBridgeRuleTemplateTarget.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for UpdateEventBridgeRuleTemplateRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateEventBridgeRuleTemplateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateEventBridgeRuleTemplateRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateEventBridgeRuleTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventBridgeRuleTemplate"; }

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
    inline UpdateEventBridgeRuleTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Vector<EventBridgeRuleTemplateTarget>& GetEventTargets() const{ return m_eventTargets; }

    
    inline bool EventTargetsHasBeenSet() const { return m_eventTargetsHasBeenSet; }

    
    inline void SetEventTargets(const Aws::Vector<EventBridgeRuleTemplateTarget>& value) { m_eventTargetsHasBeenSet = true; m_eventTargets = value; }

    
    inline void SetEventTargets(Aws::Vector<EventBridgeRuleTemplateTarget>&& value) { m_eventTargetsHasBeenSet = true; m_eventTargets = std::move(value); }

    
    inline UpdateEventBridgeRuleTemplateRequest& WithEventTargets(const Aws::Vector<EventBridgeRuleTemplateTarget>& value) { SetEventTargets(value); return *this;}

    
    inline UpdateEventBridgeRuleTemplateRequest& WithEventTargets(Aws::Vector<EventBridgeRuleTemplateTarget>&& value) { SetEventTargets(std::move(value)); return *this;}

    
    inline UpdateEventBridgeRuleTemplateRequest& AddEventTargets(const EventBridgeRuleTemplateTarget& value) { m_eventTargetsHasBeenSet = true; m_eventTargets.push_back(value); return *this; }

    
    inline UpdateEventBridgeRuleTemplateRequest& AddEventTargets(EventBridgeRuleTemplateTarget&& value) { m_eventTargetsHasBeenSet = true; m_eventTargets.push_back(std::move(value)); return *this; }


    
    inline const EventBridgeRuleTemplateEventType& GetEventType() const{ return m_eventType; }

    
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    
    inline void SetEventType(const EventBridgeRuleTemplateEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    
    inline void SetEventType(EventBridgeRuleTemplateEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    
    inline UpdateEventBridgeRuleTemplateRequest& WithEventType(const EventBridgeRuleTemplateEventType& value) { SetEventType(value); return *this;}

    
    inline UpdateEventBridgeRuleTemplateRequest& WithEventType(EventBridgeRuleTemplateEventType&& value) { SetEventType(std::move(value)); return *this;}


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
    inline UpdateEventBridgeRuleTemplateRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline UpdateEventBridgeRuleTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline UpdateEventBridgeRuleTemplateRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EventBridgeRuleTemplateTarget> m_eventTargets;
    bool m_eventTargetsHasBeenSet = false;

    EventBridgeRuleTemplateEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
