/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a metric attribution associated with an event. For
   * more information about metric attributions, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
   * impact of recommendations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/MetricAttribution">AWS
   * API Reference</a></p>
   */
  class MetricAttribution
  {
  public:
    AWS_PERSONALIZEEVENTS_API MetricAttribution();
    AWS_PERSONALIZEEVENTS_API MetricAttribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API MetricAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline const Aws::String& GetEventAttributionSource() const{ return m_eventAttributionSource; }

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline bool EventAttributionSourceHasBeenSet() const { return m_eventAttributionSourceHasBeenSet; }

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline void SetEventAttributionSource(const Aws::String& value) { m_eventAttributionSourceHasBeenSet = true; m_eventAttributionSource = value; }

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline void SetEventAttributionSource(Aws::String&& value) { m_eventAttributionSourceHasBeenSet = true; m_eventAttributionSource = std::move(value); }

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline void SetEventAttributionSource(const char* value) { m_eventAttributionSourceHasBeenSet = true; m_eventAttributionSource.assign(value); }

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline MetricAttribution& WithEventAttributionSource(const Aws::String& value) { SetEventAttributionSource(value); return *this;}

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline MetricAttribution& WithEventAttributionSource(Aws::String&& value) { SetEventAttributionSource(std::move(value)); return *this;}

    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline MetricAttribution& WithEventAttributionSource(const char* value) { SetEventAttributionSource(value); return *this;}

  private:

    Aws::String m_eventAttributionSource;
    bool m_eventAttributionSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
