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
    AWS_PINPOINTEMAIL_API InboxPlacementTrackingOption();
    AWS_PINPOINTEMAIL_API InboxPlacementTrackingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API InboxPlacementTrackingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether inbox placement data is being tracked for the domain.</p>
     */
    inline bool GetGlobal() const{ return m_global; }

    /**
     * <p>Specifies whether inbox placement data is being tracked for the domain.</p>
     */
    inline bool GlobalHasBeenSet() const { return m_globalHasBeenSet; }

    /**
     * <p>Specifies whether inbox placement data is being tracked for the domain.</p>
     */
    inline void SetGlobal(bool value) { m_globalHasBeenSet = true; m_global = value; }

    /**
     * <p>Specifies whether inbox placement data is being tracked for the domain.</p>
     */
    inline InboxPlacementTrackingOption& WithGlobal(bool value) { SetGlobal(value); return *this;}


    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrackedIsps() const{ return m_trackedIsps; }

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline bool TrackedIspsHasBeenSet() const { return m_trackedIspsHasBeenSet; }

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline void SetTrackedIsps(const Aws::Vector<Aws::String>& value) { m_trackedIspsHasBeenSet = true; m_trackedIsps = value; }

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline void SetTrackedIsps(Aws::Vector<Aws::String>&& value) { m_trackedIspsHasBeenSet = true; m_trackedIsps = std::move(value); }

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline InboxPlacementTrackingOption& WithTrackedIsps(const Aws::Vector<Aws::String>& value) { SetTrackedIsps(value); return *this;}

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline InboxPlacementTrackingOption& WithTrackedIsps(Aws::Vector<Aws::String>&& value) { SetTrackedIsps(std::move(value)); return *this;}

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline InboxPlacementTrackingOption& AddTrackedIsps(const Aws::String& value) { m_trackedIspsHasBeenSet = true; m_trackedIsps.push_back(value); return *this; }

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline InboxPlacementTrackingOption& AddTrackedIsps(Aws::String&& value) { m_trackedIspsHasBeenSet = true; m_trackedIsps.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings, one for each major email provider that the inbox
     * placement data applies to.</p>
     */
    inline InboxPlacementTrackingOption& AddTrackedIsps(const char* value) { m_trackedIspsHasBeenSet = true; m_trackedIsps.push_back(value); return *this; }

  private:

    bool m_global;
    bool m_globalHasBeenSet = false;

    Aws::Vector<Aws::String> m_trackedIsps;
    bool m_trackedIspsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
