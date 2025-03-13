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
    AWS_MEDIALIVE_API UpdateEventBridgeRuleTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventBridgeRuleTemplate"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEventBridgeRuleTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<EventBridgeRuleTemplateTarget>& GetEventTargets() const { return m_eventTargets; }
    inline bool EventTargetsHasBeenSet() const { return m_eventTargetsHasBeenSet; }
    template<typename EventTargetsT = Aws::Vector<EventBridgeRuleTemplateTarget>>
    void SetEventTargets(EventTargetsT&& value) { m_eventTargetsHasBeenSet = true; m_eventTargets = std::forward<EventTargetsT>(value); }
    template<typename EventTargetsT = Aws::Vector<EventBridgeRuleTemplateTarget>>
    UpdateEventBridgeRuleTemplateRequest& WithEventTargets(EventTargetsT&& value) { SetEventTargets(std::forward<EventTargetsT>(value)); return *this;}
    template<typename EventTargetsT = EventBridgeRuleTemplateTarget>
    UpdateEventBridgeRuleTemplateRequest& AddEventTargets(EventTargetsT&& value) { m_eventTargetsHasBeenSet = true; m_eventTargets.emplace_back(std::forward<EventTargetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline EventBridgeRuleTemplateEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventBridgeRuleTemplateEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline UpdateEventBridgeRuleTemplateRequest& WithEventType(EventBridgeRuleTemplateEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetGroupIdentifier() const { return m_groupIdentifier; }
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }
    template<typename GroupIdentifierT = Aws::String>
    void SetGroupIdentifier(GroupIdentifierT&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::forward<GroupIdentifierT>(value); }
    template<typename GroupIdentifierT = Aws::String>
    UpdateEventBridgeRuleTemplateRequest& WithGroupIdentifier(GroupIdentifierT&& value) { SetGroupIdentifier(std::forward<GroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An eventbridge rule template's identifier. Can be either be its id or current
     * name.
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateEventBridgeRuleTemplateRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEventBridgeRuleTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EventBridgeRuleTemplateTarget> m_eventTargets;
    bool m_eventTargetsHasBeenSet = false;

    EventBridgeRuleTemplateEventType m_eventType{EventBridgeRuleTemplateEventType::NOT_SET};
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
