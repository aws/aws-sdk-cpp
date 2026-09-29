/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/BeaconEventType.h>
#include <aws/mediatailor/model/ClientSideBeaconingMode.h>

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
 * <p>The beaconing settings that apply to client-side reporting sessions: whether
 * MediaTailor includes its beacons in the ad tracking response, and which player
 * operation events it reports on.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ClientSideBeaconingConfiguration">AWS
 * API Reference</a></p>
 */
class ClientSideBeaconingConfiguration {
 public:
  AWS_MEDIATAILOR_API ClientSideBeaconingConfiguration() = default;
  AWS_MEDIATAILOR_API ClientSideBeaconingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API ClientSideBeaconingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether MediaTailor includes its beacons in the ad tracking
   * response. Valid values, which are case-sensitive:</p> <ul> <li> <p>
   * <code>INSIGHTS</code> – MediaTailor includes its beacons in the ad tracking
   * response.</p> </li> <li> <p> <code>DISABLED</code> – MediaTailor doesn't include
   * its beacons in the ad tracking response.</p> </li> </ul> <p>If you send a
   * <code>ClientSide</code> object, this setting is required. If you omit
   * <code>BeaconingConfiguration</code> or <code>ClientSide</code> entirely,
   * MediaTailor uses <code>INSIGHTS</code>.</p> <p>
   * <code>PutPlaybackConfiguration</code> replaces the whole playback configuration.
   * To keep beaconing off, include <code>DISABLED</code> in every subsequent
   * write.</p>
   */
  inline ClientSideBeaconingMode GetReportingMode() const { return m_reportingMode; }
  inline bool ReportingModeHasBeenSet() const { return m_reportingModeHasBeenSet; }
  inline void SetReportingMode(ClientSideBeaconingMode value) {
    m_reportingModeHasBeenSet = true;
    m_reportingMode = value;
  }
  inline ClientSideBeaconingConfiguration& WithReportingMode(ClientSideBeaconingMode value) {
    SetReportingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The player operation events to report on, in addition to the ad progress
   * events that MediaTailor always reports on. The default is an empty list. This
   * parameter is valid only when <code>ReportingMode</code> is
   * <code>INSIGHTS</code>. MediaTailor rejects the request if you specify a value
   * while <code>ReportingMode</code> is <code>DISABLED</code>, or if you specify
   * duplicate values.</p>
   */
  inline const Aws::Vector<BeaconEventType>& GetAdditionalEventTypes() const { return m_additionalEventTypes; }
  inline bool AdditionalEventTypesHasBeenSet() const { return m_additionalEventTypesHasBeenSet; }
  template <typename AdditionalEventTypesT = Aws::Vector<BeaconEventType>>
  void SetAdditionalEventTypes(AdditionalEventTypesT&& value) {
    m_additionalEventTypesHasBeenSet = true;
    m_additionalEventTypes = std::forward<AdditionalEventTypesT>(value);
  }
  template <typename AdditionalEventTypesT = Aws::Vector<BeaconEventType>>
  ClientSideBeaconingConfiguration& WithAdditionalEventTypes(AdditionalEventTypesT&& value) {
    SetAdditionalEventTypes(std::forward<AdditionalEventTypesT>(value));
    return *this;
  }
  inline ClientSideBeaconingConfiguration& AddAdditionalEventTypes(BeaconEventType value) {
    m_additionalEventTypesHasBeenSet = true;
    m_additionalEventTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  ClientSideBeaconingMode m_reportingMode{ClientSideBeaconingMode::NOT_SET};

  Aws::Vector<BeaconEventType> m_additionalEventTypes;
  bool m_reportingModeHasBeenSet = false;
  bool m_additionalEventTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
