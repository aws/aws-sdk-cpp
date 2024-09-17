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
    AWS_PERSONALIZEEVENTS_API ActionInteraction();
    AWS_PERSONALIZEEVENTS_API ActionInteraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API ActionInteraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action the user interacted with. This corresponds to the
     * <code>ACTION_ID</code> field of the Action interaction schema.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }
    inline ActionInteraction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline ActionInteraction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline ActionInteraction& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who interacted with the action. This corresponds to the
     * <code>USER_ID</code> field of the Action interaction schema.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline ActionInteraction& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline ActionInteraction& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline ActionInteraction& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID associated with the user's visit. Your application generates a unique
     * <code>sessionId</code> when a user first visits your website or uses your
     * application. </p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline ActionInteraction& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ActionInteraction& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ActionInteraction& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the action interaction event occurred. Timestamps must
     * be in Unix epoch time format, in seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline ActionInteraction& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline ActionInteraction& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action interaction event. You can specify <code>Viewed</code>,
     * <code>Taken</code>, and <code>Not Taken</code> event types. For more information
     * about action interaction event type data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-event-type-data.html">Event
     * type data</a>. </p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline ActionInteraction& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline ActionInteraction& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline ActionInteraction& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinguish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline ActionInteraction& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline ActionInteraction& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline ActionInteraction& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the list of recommendations that contains the action the user
     * interacted with.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline ActionInteraction& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline ActionInteraction& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline ActionInteraction& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of action IDs that represents the sequence of actions you have shown
     * the user. For example, <code>["actionId1", "actionId2", "actionId3"]</code>.
     * Amazon Personalize doesn't use impressions data from action interaction events.
     * Instead, record multiple events for each action and use the <code>Viewed</code>
     * event type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetImpression() const{ return m_impression; }
    inline bool ImpressionHasBeenSet() const { return m_impressionHasBeenSet; }
    inline void SetImpression(const Aws::Vector<Aws::String>& value) { m_impressionHasBeenSet = true; m_impression = value; }
    inline void SetImpression(Aws::Vector<Aws::String>&& value) { m_impressionHasBeenSet = true; m_impression = std::move(value); }
    inline ActionInteraction& WithImpression(const Aws::Vector<Aws::String>& value) { SetImpression(value); return *this;}
    inline ActionInteraction& WithImpression(Aws::Vector<Aws::String>&& value) { SetImpression(std::move(value)); return *this;}
    inline ActionInteraction& AddImpression(const Aws::String& value) { m_impressionHasBeenSet = true; m_impression.push_back(value); return *this; }
    inline ActionInteraction& AddImpression(Aws::String&& value) { m_impressionHasBeenSet = true; m_impression.push_back(std::move(value)); return *this; }
    inline ActionInteraction& AddImpression(const char* value) { m_impressionHasBeenSet = true; m_impression.push_back(value); return *this; }
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
    inline const Aws::String& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }
    inline ActionInteraction& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}
    inline ActionInteraction& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}
    inline ActionInteraction& WithProperties(const char* value) { SetProperties(value); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
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
