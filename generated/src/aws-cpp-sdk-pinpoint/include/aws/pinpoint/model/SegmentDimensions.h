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
    AWS_PINPOINT_API SegmentDimensions() = default;
    AWS_PINPOINT_API SegmentDimensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more custom attributes to use as criteria for the segment.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeDimension>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeDimension>>
    SegmentDimensions& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = AttributeDimension>
    SegmentDimensions& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The behavior-based criteria, such as how recently users have used your app,
     * for the segment.</p>
     */
    inline const SegmentBehaviors& GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    template<typename BehaviorT = SegmentBehaviors>
    void SetBehavior(BehaviorT&& value) { m_behaviorHasBeenSet = true; m_behavior = std::forward<BehaviorT>(value); }
    template<typename BehaviorT = SegmentBehaviors>
    SegmentDimensions& WithBehavior(BehaviorT&& value) { SetBehavior(std::forward<BehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The demographic-based criteria, such as device platform, for the segment.</p>
     */
    inline const SegmentDemographics& GetDemographic() const { return m_demographic; }
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }
    template<typename DemographicT = SegmentDemographics>
    void SetDemographic(DemographicT&& value) { m_demographicHasBeenSet = true; m_demographic = std::forward<DemographicT>(value); }
    template<typename DemographicT = SegmentDemographics>
    SegmentDimensions& WithDemographic(DemographicT&& value) { SetDemographic(std::forward<DemographicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location-based criteria, such as region or GPS coordinates, for the
     * segment.</p>
     */
    inline const SegmentLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = SegmentLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = SegmentLocation>
    SegmentDimensions& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics to use as criteria for the segment.</p>
     */
    inline const Aws::Map<Aws::String, MetricDimension>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, MetricDimension>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, MetricDimension>>
    SegmentDimensions& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = MetricDimension>
    SegmentDimensions& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>One or more custom user attributes to use as criteria for the segment.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetUserAttributes() const { return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    template<typename UserAttributesT = Aws::Map<Aws::String, AttributeDimension>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Map<Aws::String, AttributeDimension>>
    SegmentDimensions& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesKeyT = Aws::String, typename UserAttributesValueT = AttributeDimension>
    SegmentDimensions& AddUserAttributes(UserAttributesKeyT&& key, UserAttributesValueT&& value) {
      m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::forward<UserAttributesKeyT>(key), std::forward<UserAttributesValueT>(value)); return *this;
    }
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
