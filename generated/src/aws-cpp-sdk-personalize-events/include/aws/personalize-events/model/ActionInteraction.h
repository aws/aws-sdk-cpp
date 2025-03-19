/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PersonalizeEvents
{
namespace Model
{

  /**
   * <p>Represents an action interaction event sent using the
   * <code>PutActionInteractions</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/ActionInteraction">AWS
   * API Reference</a></p>
   */
  class ActionInteraction
  {
  public:
    AWS_PERSONALIZEEVENTS_API ActionInteraction() = default;
    AWS_PERSONALIZEEVENTS_API ActionInteraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API ActionInteraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action the user interacted with. This corresponds to the
     * <code>ACTION_ID</code> field of the Action interaction schema.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    ActionInteraction& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who interacted with the action. This corresponds to the
     * <code>USER_ID</code> field of the Action interaction schema.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    ActionInteraction& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID associated with the user's visit. Your application generates a unique
     * <code>sessionId</code> when a user first visits your website or uses your
     * application. </p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    ActionInteraction& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the action interaction event occurred. Timestamps must
     * be in Unix epoch time format, in seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    ActionInteraction& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action interaction event. You can specify <code>Viewed</code>,
     * <code>Taken</code>, and <code>Not Taken</code> event types. For more information
     * about action interaction event type data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-event-type-data.html">Event
     * type data</a>. </p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    ActionInteraction& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinguish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    ActionInteraction& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the list of recommendations that contains the action the user
     * interacted with.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    ActionInteraction& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of action IDs that represents the sequence of actions you have shown
     * the user. For example, <code>["actionId1", "actionId2", "actionId3"]</code>.
     * Amazon Personalize doesn't use impressions data from action interaction events.
     * Instead, record multiple events for each action and use the <code>Viewed</code>
     * event type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetImpression() const { return m_impression; }
    inline bool ImpressionHasBeenSet() const { return m_impressionHasBeenSet; }
    template<typename ImpressionT = Aws::Vector<Aws::String>>
    void SetImpression(ImpressionT&& value) { m_impressionHasBeenSet = true; m_impression = std::forward<ImpressionT>(value); }
    template<typename ImpressionT = Aws::Vector<Aws::String>>
    ActionInteraction& WithImpression(ImpressionT&& value) { SetImpression(std::forward<ImpressionT>(value)); return *this;}
    template<typename ImpressionT = Aws::String>
    ActionInteraction& AddImpression(ImpressionT&& value) { m_impressionHasBeenSet = true; m_impression.emplace_back(std::forward<ImpressionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user takes an action, other than the action ID, you might also
     * send the number of actions taken by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfActions":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Action interactions schema. In the above example, the
     * <code>numberOfActions</code> would match the 'NUMBER_OF_ACTIONS' field defined
     * in the Action interactions schema.</p> <p> The following can't be included as a
     * keyword for properties (case insensitive). </p> <ul> <li> <p> userId </p> </li>
     * <li> <p> sessionId </p> </li> <li> <p>eventType</p> </li> <li> <p>timestamp</p>
     * </li> <li> <p>recommendationId</p> </li> <li> <p>impression</p> </li> </ul>
     */
    inline const Aws::String& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::String>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::String>
    ActionInteraction& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_impression;
    bool m_impressionHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
