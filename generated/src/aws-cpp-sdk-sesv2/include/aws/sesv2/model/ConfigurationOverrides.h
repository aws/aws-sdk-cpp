/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/TrackingConfigurationOverrides.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>An object that overrides settings for a single email sending request. An
 * override applies only to the message or messages in the request that contains
 * it. It doesn't change your account-level settings, and it doesn't change the
 * configuration set that the request uses.</p> <p>A setting that you don't
 * override keeps the value that would otherwise apply to the message. Depending on
 * the setting, that value comes from the configuration set that the message uses,
 * from your account-level settings, or from the Amazon SES default.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ConfigurationOverrides">AWS
 * API Reference</a></p>
 */
class ConfigurationOverrides {
 public:
  AWS_SESV2_API ConfigurationOverrides() = default;
  AWS_SESV2_API ConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API ConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An object that overrides the open and click tracking settings that would
   * otherwise apply to the message.</p>
   */
  inline const TrackingConfigurationOverrides& GetTracking() const { return m_tracking; }
  inline bool TrackingHasBeenSet() const { return m_trackingHasBeenSet; }
  template <typename TrackingT = TrackingConfigurationOverrides>
  void SetTracking(TrackingT&& value) {
    m_trackingHasBeenSet = true;
    m_tracking = std::forward<TrackingT>(value);
  }
  template <typename TrackingT = TrackingConfigurationOverrides>
  ConfigurationOverrides& WithTracking(TrackingT&& value) {
    SetTracking(std::forward<TrackingT>(value));
    return *this;
  }
  ///@}
 private:
  TrackingConfigurationOverrides m_tracking;
  bool m_trackingHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
