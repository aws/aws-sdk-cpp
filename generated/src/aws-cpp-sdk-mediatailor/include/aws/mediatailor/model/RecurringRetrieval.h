/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/TrafficShapingRetrievalWindow.h>
#include <aws/mediatailor/model/TrafficShapingTpsConfiguration.h>
#include <aws/mediatailor/model/TrafficShapingType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>With recurring prefetch, MediaTailor automatically prefetches ads for every
 * avail that occurs during the retrieval window. The following configurations
 * describe the MediaTailor behavior when prefetching ads for a live
 * event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/RecurringRetrieval">AWS
 * API Reference</a></p>
 */
class RecurringRetrieval {
 public:
  AWS_MEDIATAILOR_API RecurringRetrieval() = default;
  AWS_MEDIATAILOR_API RecurringRetrieval(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API RecurringRetrieval& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dynamic variables to use for substitution during prefetch requests to the
   * ADS.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDynamicVariables() const { return m_dynamicVariables; }
  inline bool DynamicVariablesHasBeenSet() const { return m_dynamicVariablesHasBeenSet; }
  template <typename DynamicVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetDynamicVariables(DynamicVariablesT&& value) {
    m_dynamicVariablesHasBeenSet = true;
    m_dynamicVariables = std::forward<DynamicVariablesT>(value);
  }
  template <typename DynamicVariablesT = Aws::Map<Aws::String, Aws::String>>
  RecurringRetrieval& WithDynamicVariables(DynamicVariablesT&& value) {
    SetDynamicVariables(std::forward<DynamicVariablesT>(value));
    return *this;
  }
  template <typename DynamicVariablesKeyT = Aws::String, typename DynamicVariablesValueT = Aws::String>
  RecurringRetrieval& AddDynamicVariables(DynamicVariablesKeyT&& key, DynamicVariablesValueT&& value) {
    m_dynamicVariablesHasBeenSet = true;
    m_dynamicVariables.emplace(std::forward<DynamicVariablesKeyT>(key), std::forward<DynamicVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds that MediaTailor waits after an ad avail before
   * prefetching ads for the next avail. If not set, the default is 0 (no delay).</p>
   */
  inline int GetDelayAfterAvailEndSeconds() const { return m_delayAfterAvailEndSeconds; }
  inline bool DelayAfterAvailEndSecondsHasBeenSet() const { return m_delayAfterAvailEndSecondsHasBeenSet; }
  inline void SetDelayAfterAvailEndSeconds(int value) {
    m_delayAfterAvailEndSecondsHasBeenSet = true;
    m_delayAfterAvailEndSeconds = value;
  }
  inline RecurringRetrieval& WithDelayAfterAvailEndSeconds(int value) {
    SetDelayAfterAvailEndSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the type of traffic shaping used for traffic shaping and limiting
   * the number of requests to the ADS at one time.</p>
   */
  inline TrafficShapingType GetTrafficShapingType() const { return m_trafficShapingType; }
  inline bool TrafficShapingTypeHasBeenSet() const { return m_trafficShapingTypeHasBeenSet; }
  inline void SetTrafficShapingType(TrafficShapingType value) {
    m_trafficShapingTypeHasBeenSet = true;
    m_trafficShapingType = value;
  }
  inline RecurringRetrieval& WithTrafficShapingType(TrafficShapingType value) {
    SetTrafficShapingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for spreading ADS traffic across a set window instead of
   * sending ADS requests for all sessions at the same time.</p>
   */
  inline const TrafficShapingRetrievalWindow& GetTrafficShapingRetrievalWindow() const { return m_trafficShapingRetrievalWindow; }
  inline bool TrafficShapingRetrievalWindowHasBeenSet() const { return m_trafficShapingRetrievalWindowHasBeenSet; }
  template <typename TrafficShapingRetrievalWindowT = TrafficShapingRetrievalWindow>
  void SetTrafficShapingRetrievalWindow(TrafficShapingRetrievalWindowT&& value) {
    m_trafficShapingRetrievalWindowHasBeenSet = true;
    m_trafficShapingRetrievalWindow = std::forward<TrafficShapingRetrievalWindowT>(value);
  }
  template <typename TrafficShapingRetrievalWindowT = TrafficShapingRetrievalWindow>
  RecurringRetrieval& WithTrafficShapingRetrievalWindow(TrafficShapingRetrievalWindowT&& value) {
    SetTrafficShapingRetrievalWindow(std::forward<TrafficShapingRetrievalWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for TPS-based traffic shaping that limits the number of
   * requests to the ad decision server (ADS) based on transactions per second
   * instead of time windows.</p>
   */
  inline const TrafficShapingTpsConfiguration& GetTrafficShapingTpsConfiguration() const { return m_trafficShapingTpsConfiguration; }
  inline bool TrafficShapingTpsConfigurationHasBeenSet() const { return m_trafficShapingTpsConfigurationHasBeenSet; }
  template <typename TrafficShapingTpsConfigurationT = TrafficShapingTpsConfiguration>
  void SetTrafficShapingTpsConfiguration(TrafficShapingTpsConfigurationT&& value) {
    m_trafficShapingTpsConfigurationHasBeenSet = true;
    m_trafficShapingTpsConfiguration = std::forward<TrafficShapingTpsConfigurationT>(value);
  }
  template <typename TrafficShapingTpsConfigurationT = TrafficShapingTpsConfiguration>
  RecurringRetrieval& WithTrafficShapingTpsConfiguration(TrafficShapingTpsConfigurationT&& value) {
    SetTrafficShapingTpsConfiguration(std::forward<TrafficShapingTpsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_dynamicVariables;

  int m_delayAfterAvailEndSeconds{0};

  TrafficShapingType m_trafficShapingType{TrafficShapingType::NOT_SET};

  TrafficShapingRetrievalWindow m_trafficShapingRetrievalWindow;

  TrafficShapingTpsConfiguration m_trafficShapingTpsConfiguration;
  bool m_dynamicVariablesHasBeenSet = false;
  bool m_delayAfterAvailEndSecondsHasBeenSet = false;
  bool m_trafficShapingTypeHasBeenSet = false;
  bool m_trafficShapingRetrievalWindowHasBeenSet = false;
  bool m_trafficShapingTpsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
