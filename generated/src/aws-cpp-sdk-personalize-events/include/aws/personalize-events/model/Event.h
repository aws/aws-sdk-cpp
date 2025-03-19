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
   * <p>Represents item interaction event information sent using the
   * <code>PutEvents</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_PERSONALIZEEVENTS_API Event() = default;
    AWS_PERSONALIZEEVENTS_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    Event& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event, such as click or download. This property corresponds to
     * the <code>EVENT_TYPE</code> field of your Item interactions dataset's schema and
     * depends on the types of events you are tracking.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    Event& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event value that corresponds to the <code>EVENT_VALUE</code> field of the
     * Item interactions schema.</p>
     */
    inline double GetEventValue() const { return m_eventValue; }
    inline bool EventValueHasBeenSet() const { return m_eventValueHasBeenSet; }
    inline void SetEventValue(double value) { m_eventValueHasBeenSet = true; m_eventValue = value; }
    inline Event& WithEventValue(double value) { SetEventValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item ID key that corresponds to the <code>ITEM_ID</code> field of the
     * Item interactions dataset's schema.</p>
     */
    inline const Aws::String& GetItemId() const { return m_itemId; }
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
    template<typename ItemIdT = Aws::String>
    void SetItemId(ItemIdT&& value) { m_itemIdHasBeenSet = true; m_itemId = std::forward<ItemIdT>(value); }
    template<typename ItemIdT = Aws::String>
    Event& WithItemId(ItemIdT&& value) { SetItemId(std::forward<ItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string map of event-specific data that you might choose to record. For
     * example, if a user rates a movie on your site, other than movie ID
     * (<code>itemId</code>) and rating (<code>eventValue</code>) , you might also send
     * the number of movie ratings made by the user.</p> <p>Each item in the map
     * consists of a key-value pair. For example,</p> <p> <code>{"numberOfRatings":
     * "12"}</code> </p> <p>The keys use camel case names that match the fields in the
     * Item interactions dataset's schema. In the above example, the
     * <code>numberOfRatings</code> would match the 'NUMBER_OF_RATINGS' field defined
     * in the Item interactions dataset's schema.</p> <p> The following can't be
     * included as a keyword for properties (case insensitive). </p> <ul> <li> <p>
     * userId </p> </li> <li> <p> sessionId </p> </li> <li> <p>eventType</p> </li> <li>
     * <p>timestamp</p> </li> <li> <p>recommendationId</p> </li> <li> <p>impression</p>
     * </li> </ul>
     */
    inline const Aws::String& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::String>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::String>
    Event& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp (in Unix time) on the client side when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetSentAt() const { return m_sentAt; }
    inline bool SentAtHasBeenSet() const { return m_sentAtHasBeenSet; }
    template<typename SentAtT = Aws::Utils::DateTime>
    void SetSentAt(SentAtT&& value) { m_sentAtHasBeenSet = true; m_sentAt = std::forward<SentAtT>(value); }
    template<typename SentAtT = Aws::Utils::DateTime>
    Event& WithSentAt(SentAtT&& value) { SetSentAt(std::forward<SentAtT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    Event& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of item IDs that represents the sequence of items you have shown the
     * user. For example, <code>["itemId1", "itemId2", "itemId3"]</code>. Provide a
     * list of items to manually record impressions data for an event. For more
     * information on recording impressions data, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html#putevents-including-impressions-data">Recording
     * impressions data</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetImpression() const { return m_impression; }
    inline bool ImpressionHasBeenSet() const { return m_impressionHasBeenSet; }
    template<typename ImpressionT = Aws::Vector<Aws::String>>
    void SetImpression(ImpressionT&& value) { m_impressionHasBeenSet = true; m_impression = std::forward<ImpressionT>(value); }
    template<typename ImpressionT = Aws::Vector<Aws::String>>
    Event& WithImpression(ImpressionT&& value) { SetImpression(std::forward<ImpressionT>(value)); return *this;}
    template<typename ImpressionT = Aws::String>
    Event& AddImpression(ImpressionT&& value) { m_impressionHasBeenSet = true; m_impression.emplace_back(std::forward<ImpressionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the metric attribution associated with an event.
     * For more information about metric attributions, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline const MetricAttribution& GetMetricAttribution() const { return m_metricAttribution; }
    inline bool MetricAttributionHasBeenSet() const { return m_metricAttributionHasBeenSet; }
    template<typename MetricAttributionT = MetricAttribution>
    void SetMetricAttribution(MetricAttributionT&& value) { m_metricAttributionHasBeenSet = true; m_metricAttribution = std::forward<MetricAttributionT>(value); }
    template<typename MetricAttributionT = MetricAttribution>
    Event& WithMetricAttribution(MetricAttributionT&& value) { SetMetricAttribution(std::forward<MetricAttributionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    double m_eventValue{0.0};
    bool m_eventValueHasBeenSet = false;

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Utils::DateTime m_sentAt{};
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
