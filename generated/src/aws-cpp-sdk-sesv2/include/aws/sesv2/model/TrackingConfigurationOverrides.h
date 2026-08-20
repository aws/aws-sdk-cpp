/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/FeatureStatus.h>

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
 * <p>An object that overrides, for a single email sending request, the engagement
 * tracking settings that would otherwise apply. Use these overrides to turn open
 * tracking or click tracking on or off for an individual message, for example to
 * suppress tracking in a transactional message that you send from an account or a
 * configuration set that has tracking enabled.</p> <p>Without an override,
 * engagement tracking is determined by your account-level
 * <code>EngagementMetrics</code> setting, which you configure using the
 * <code>PutAccountVdmAttributes</code> operation, by the
 * <code>EngagementMetrics</code> setting of the configuration set that the message
 * uses, which you configure using the <code>PutConfigurationSetVdmOptions</code>
 * operation, and by whether that configuration set has an event destination whose
 * <code>MatchingEventTypes</code> include the <code>OPEN</code> or
 * <code>CLICK</code> event types.</p> <p>For more information about tracking open
 * and click events, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/event-publishing.html">Amazon
 * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TrackingConfigurationOverrides">AWS
 * API Reference</a></p>
 */
class TrackingConfigurationOverrides {
 public:
  AWS_SESV2_API TrackingConfigurationOverrides() = default;
  AWS_SESV2_API TrackingConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API TrackingConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether Amazon SES tracks when the recipient opens this message.
   * Can be one of the following:</p> <ul> <li> <p> <code>ENABLED</code> – Amazon SES
   * tracks opens for this message, even when your account-level and configuration
   * set settings don't enable open tracking.</p> </li> <li> <p>
   * <code>DISABLED</code> – Amazon SES doesn't track opens for this message, even
   * when your account-level or configuration set settings enable open tracking.
   * Amazon SES doesn't add the tracking image to the message.</p> </li> </ul> <p>If
   * you don't specify this value, Amazon SES uses the open tracking setting that
   * would otherwise apply to the message.</p>
   */
  inline FeatureStatus GetOpenTrackingEnabled() const { return m_openTrackingEnabled; }
  inline bool OpenTrackingEnabledHasBeenSet() const { return m_openTrackingEnabledHasBeenSet; }
  inline void SetOpenTrackingEnabled(FeatureStatus value) {
    m_openTrackingEnabledHasBeenSet = true;
    m_openTrackingEnabled = value;
  }
  inline TrackingConfigurationOverrides& WithOpenTrackingEnabled(FeatureStatus value) {
    SetOpenTrackingEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Amazon SES tracks when the recipient clicks a link in this
   * message. Can be one of the following:</p> <ul> <li> <p> <code>ENABLED</code> –
   * Amazon SES tracks clicks for this message, even when your account-level and
   * configuration set settings don't enable click tracking.</p> </li> <li> <p>
   * <code>DISABLED</code> – Amazon SES doesn't track clicks for this message, even
   * when your account-level or configuration set settings enable click tracking.
   * Amazon SES doesn't rewrite the links in the message.</p> </li> </ul> <p>If you
   * don't specify this value, Amazon SES uses the click tracking setting that would
   * otherwise apply to the message.</p>  <p>Enabling open or click tracking
   * with an override doesn't create an event destination. Amazon SES records the
   * resulting open and click events in VDM, where you can review them using VDM
   * metrics and Message Insights. To also receive these events at a destination that
   * you own, the configuration set that the message uses must have an event
   * destination that publishes open and click events.</p>
   */
  inline FeatureStatus GetClickTrackingEnabled() const { return m_clickTrackingEnabled; }
  inline bool ClickTrackingEnabledHasBeenSet() const { return m_clickTrackingEnabledHasBeenSet; }
  inline void SetClickTrackingEnabled(FeatureStatus value) {
    m_clickTrackingEnabledHasBeenSet = true;
    m_clickTrackingEnabled = value;
  }
  inline TrackingConfigurationOverrides& WithClickTrackingEnabled(FeatureStatus value) {
    SetClickTrackingEnabled(value);
    return *this;
  }
  ///@}
 private:
  FeatureStatus m_openTrackingEnabled{FeatureStatus::NOT_SET};

  FeatureStatus m_clickTrackingEnabled{FeatureStatus::NOT_SET};
  bool m_openTrackingEnabledHasBeenSet = false;
  bool m_clickTrackingEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
