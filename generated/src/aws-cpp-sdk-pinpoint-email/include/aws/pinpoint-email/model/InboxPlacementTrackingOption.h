/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about the inbox placement data settings
   * for a verified domain that’s associated with your AWS account. This data is
   * available only if you enabled the Deliverability dashboard for the domain
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/InboxPlacementTrackingOption">AWS
   * API Reference</a></p>
   */
  class InboxPlacementTrackingOption
  {
  public:
    AWS_PINPOINTEMAIL_API InboxPlacementTrackingOption() = default;
    AWS_PINPOINTEMAIL_API InboxPlacementTrackingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API InboxPlacementTrackingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether inbox placement data is being tracked for the domain.</p>
     */
    inline bool GetGlobal() const { return m_global; }
    inline bool GlobalHasBeenSet() const { return m_globalHasBeenSet; }
    inline void SetGlobal(bool value) { m_globalHasBeenSet = true; m_global = value; }
    inline InboxPlacementTrackingOption& WithGlobal(bool value) { SetGlobal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrackedIsps() const { return m_trackedIsps; }
    inline bool TrackedIspsHasBeenSet() const { return m_trackedIspsHasBeenSet; }
    template<typename TrackedIspsT = Aws::Vector<Aws::String>>
    void SetTrackedIsps(TrackedIspsT&& value) { m_trackedIspsHasBeenSet = true; m_trackedIsps = std::forward<TrackedIspsT>(value); }
    template<typename TrackedIspsT = Aws::Vector<Aws::String>>
    InboxPlacementTrackingOption& WithTrackedIsps(TrackedIspsT&& value) { SetTrackedIsps(std::forward<TrackedIspsT>(value)); return *this;}
    template<typename TrackedIspsT = Aws::String>
    InboxPlacementTrackingOption& AddTrackedIsps(TrackedIspsT&& value) { m_trackedIspsHasBeenSet = true; m_trackedIsps.emplace_back(std::forward<TrackedIspsT>(value)); return *this; }
    ///@}
  private:

    bool m_global{false};
    bool m_globalHasBeenSet = false;

    Aws::Vector<Aws::String> m_trackedIsps;
    bool m_trackedIspsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
