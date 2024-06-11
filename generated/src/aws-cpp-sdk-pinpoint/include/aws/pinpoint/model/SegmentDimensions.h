/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/SegmentBehaviors.h>
#include <aws/pinpoint/model/SegmentDemographics.h>
#include <aws/pinpoint/model/SegmentLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/AttributeDimension.h>
#include <aws/pinpoint/model/MetricDimension.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the dimension settings for a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentDimensions">AWS
   * API Reference</a></p>
   */
  class SegmentDimensions
  {
  public:
    AWS_PINPOINT_API SegmentDimensions();
    AWS_PINPOINT_API SegmentDimensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more custom attributes to use as criteria for the segment.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline SegmentDimensions& WithAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetAttributes(value); return *this;}
    inline SegmentDimensions& WithAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetAttributes(std::move(value)); return *this;}
    inline SegmentDimensions& AddAttributes(const Aws::String& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline SegmentDimensions& AddAttributes(Aws::String&& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SegmentDimensions& AddAttributes(const Aws::String& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SegmentDimensions& AddAttributes(Aws::String&& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline SegmentDimensions& AddAttributes(const char* key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SegmentDimensions& AddAttributes(const char* key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The behavior-based criteria, such as how recently users have used your app,
     * for the segment.</p>
     */
    inline const SegmentBehaviors& GetBehavior() const{ return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    inline void SetBehavior(const SegmentBehaviors& value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline void SetBehavior(SegmentBehaviors&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }
    inline SegmentDimensions& WithBehavior(const SegmentBehaviors& value) { SetBehavior(value); return *this;}
    inline SegmentDimensions& WithBehavior(SegmentBehaviors&& value) { SetBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The demographic-based criteria, such as device platform, for the segment.</p>
     */
    inline const SegmentDemographics& GetDemographic() const{ return m_demographic; }
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }
    inline void SetDemographic(const SegmentDemographics& value) { m_demographicHasBeenSet = true; m_demographic = value; }
    inline void SetDemographic(SegmentDemographics&& value) { m_demographicHasBeenSet = true; m_demographic = std::move(value); }
    inline SegmentDimensions& WithDemographic(const SegmentDemographics& value) { SetDemographic(value); return *this;}
    inline SegmentDimensions& WithDemographic(SegmentDemographics&& value) { SetDemographic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location-based criteria, such as region or GPS coordinates, for the
     * segment.</p>
     */
    inline const SegmentLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const SegmentLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(SegmentLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline SegmentDimensions& WithLocation(const SegmentLocation& value) { SetLocation(value); return *this;}
    inline SegmentDimensions& WithLocation(SegmentLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics to use as criteria for the segment.</p>
     */
    inline const Aws::Map<Aws::String, MetricDimension>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline SegmentDimensions& WithMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { SetMetrics(value); return *this;}
    inline SegmentDimensions& WithMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { SetMetrics(std::move(value)); return *this;}
    inline SegmentDimensions& AddMetrics(const Aws::String& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    inline SegmentDimensions& AddMetrics(Aws::String&& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline SegmentDimensions& AddMetrics(const Aws::String& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }
    inline SegmentDimensions& AddMetrics(Aws::String&& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }
    inline SegmentDimensions& AddMetrics(const char* key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }
    inline SegmentDimensions& AddMetrics(const char* key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more custom user attributes to use as criteria for the segment.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetUserAttributes() const{ return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    inline void SetUserAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }
    inline void SetUserAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }
    inline SegmentDimensions& WithUserAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetUserAttributes(value); return *this;}
    inline SegmentDimensions& WithUserAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetUserAttributes(std::move(value)); return *this;}
    inline SegmentDimensions& AddUserAttributes(const Aws::String& key, const AttributeDimension& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }
    inline SegmentDimensions& AddUserAttributes(Aws::String&& key, const AttributeDimension& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), value); return *this; }
    inline SegmentDimensions& AddUserAttributes(const Aws::String& key, AttributeDimension&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }
    inline SegmentDimensions& AddUserAttributes(Aws::String&& key, AttributeDimension&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline SegmentDimensions& AddUserAttributes(const char* key, AttributeDimension&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }
    inline SegmentDimensions& AddUserAttributes(const char* key, const AttributeDimension& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, AttributeDimension> m_attributes;
    bool m_attributesHasBeenSet = false;

    SegmentBehaviors m_behavior;
    bool m_behaviorHasBeenSet = false;

    SegmentDemographics m_demographic;
    bool m_demographicHasBeenSet = false;

    SegmentLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::Map<Aws::String, MetricDimension> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Map<Aws::String, AttributeDimension> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
