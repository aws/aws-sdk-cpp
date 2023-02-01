/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-events/model/MetricAttribution.h>
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
   * <p>Represents user interaction event information sent using the
   * <code>PutEvents</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_PERSONALIZEEVENTS_API Event();
    AWS_PERSONALIZEEVENTS_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline Event& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline Event& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>An ID associated with the event. If an event ID is not provided, Amazon
     * Personalize generates a unique ID for the event. An event ID is not used as an
     * input to the model. Amazon Personalize uses the event ID to distinquish unique
     * events. Any subsequent events after the first with the same event ID are not
     * used in model training.</p>
     */
    inline Event& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline Event& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline Event& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Interactions schema and depends on the
     * types of events you are tracking.</p>
     */
    inline Event& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>The event value that corresponds to the <code>EVENT_VALUE</code> field of the
     * Interactions schema.</p>
     */
    inline double GetEventValue() const{ return m_eventValue; }

    /**
     * <p>The event value that corresponds to the <code>EVENT_VALUE</code> field of the
     * Interactions schema.</p>
     */
    inline bool EventValueHasBeenSet() const { return m_eventValueHasBeenSet; }

    /**
     * <p>The event value that corresponds to the <code>EVENT_VALUE</code> field of the
     * Interactions schema.</p>
     */
    inline void SetEventValue(double value) { m_eventValueHasBeenSet = true; m_eventValue = value; }

    /**
     * <p>The event value that corresponds to the <code>EVENT_VALUE</code> field of the
     * Interactions schema.</p>
     */
    inline Event& WithEventValue(double value) { SetEventValue(value); return *this;}


    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline Event& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline Event& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Interactions schema.</p>
     */
    inline Event& WithItemId(const char* value) { SetItemId(value); return *this;}


    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline Event& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline Event& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Interactions schema. In the above example, the <code>numberOfRatings</code>
     * would match the 'NUMBER_OF_RATINGS' field defined in the Interactions
     * schema.</p>
     */
    inline Event& WithProperties(const char* value) { SetProperties(value); return *this;}


    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetSentAt() const{ return m_sentAt; }

    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline bool SentAtHasBeenSet() const { return m_sentAtHasBeenSet; }

    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline void SetSentAt(const Aws::Utils::DateTime& value) { m_sentAtHasBeenSet = true; m_sentAt = value; }

    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline void SetSentAt(Aws::Utils::DateTime&& value) { m_sentAtHasBeenSet = true; m_sentAt = std::move(value); }

    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline Event& WithSentAt(const Aws::Utils::DateTime& value) { SetSentAt(value); return *this;}

    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline Event& WithSentAt(Aws::Utils::DateTime&& value) { SetSentAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline Event& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline Event& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the list of recommendations that contains the item the user
     * interacted with. Provide a <code>recommendationId</code> to have Amazon
     * Personalize implicitly record the recommendations you show your user as
     * impressions data. Or provide a <code>recommendationId</code> if you use a metric
     * attribution to measure the impact of recommendations. </p> <p> For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. For more information on creating a metric attribution see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>. </p>
     */
    inline Event& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetImpression() const{ return m_impression; }

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline bool ImpressionHasBeenSet() const { return m_impressionHasBeenSet; }

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline void SetImpression(const Aws::Vector<Aws::String>& value) { m_impressionHasBeenSet = true; m_impression = value; }

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline void SetImpression(Aws::Vector<Aws::String>&& value) { m_impressionHasBeenSet = true; m_impression = std::move(value); }

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline Event& WithImpression(const Aws::Vector<Aws::String>& value) { SetImpression(value); return *this;}

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline Event& WithImpression(Aws::Vector<Aws::String>&& value) { SetImpression(std::move(value)); return *this;}

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline Event& AddImpression(const Aws::String& value) { m_impressionHasBeenSet = true; m_impression.push_back(value); return *this; }

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline Event& AddImpression(Aws::String&& value) { m_impressionHasBeenSet = true; m_impression.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline Event& AddImpression(const char* value) { m_impressionHasBeenSet = true; m_impression.push_back(value); return *this; }


    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline const MetricAttribution& GetMetricAttribution() const{ return m_metricAttribution; }

    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline bool MetricAttributionHasBeenSet() const { return m_metricAttributionHasBeenSet; }

    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline void SetMetricAttribution(const MetricAttribution& value) { m_metricAttributionHasBeenSet = true; m_metricAttribution = value; }

    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline void SetMetricAttribution(MetricAttribution&& value) { m_metricAttributionHasBeenSet = true; m_metricAttribution = std::move(value); }

    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline Event& WithMetricAttribution(const MetricAttribution& value) { SetMetricAttribution(value); return *this;}

    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline Event& WithMetricAttribution(MetricAttribution&& value) { SetMetricAttribution(std::move(value)); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    double m_eventValue;
    bool m_eventValueHasBeenSet = false;

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Utils::DateTime m_sentAt;
    bool m_sentAtHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_impression;
    bool m_impressionHasBeenSet = false;

    MetricAttribution m_metricAttribution;
    bool m_metricAttributionHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
