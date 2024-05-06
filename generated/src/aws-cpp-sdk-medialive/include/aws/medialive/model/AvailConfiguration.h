/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AvailSettings.h>
#include <aws/medialive/model/Scte35SegmentationScope.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Avail Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AvailConfiguration">AWS
   * API Reference</a></p>
   */
  class AvailConfiguration
  {
  public:
    AWS_MEDIALIVE_API AvailConfiguration();
    AWS_MEDIALIVE_API AvailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AvailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline const AvailSettings& GetAvailSettings() const{ return m_availSettings; }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline bool AvailSettingsHasBeenSet() const { return m_availSettingsHasBeenSet; }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline void SetAvailSettings(const AvailSettings& value) { m_availSettingsHasBeenSet = true; m_availSettings = value; }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline void SetAvailSettings(AvailSettings&& value) { m_availSettingsHasBeenSet = true; m_availSettings = std::move(value); }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline AvailConfiguration& WithAvailSettings(const AvailSettings& value) { SetAvailSettings(value); return *this;}

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline AvailConfiguration& WithAvailSettings(AvailSettings&& value) { SetAvailSettings(std::move(value)); return *this;}


    /**
     * Configures whether SCTE 35 passthrough triggers segment breaks in all output
     * groups that use segmented outputs. Insertion of a SCTE 35 message typically
     * results in a segment break, in addition to the regular cadence of breaks. The
     * segment breaks appear in video outputs, audio outputs, and captions outputs (if
     * any).

ALL_OUTPUT_GROUPS: Default. Insert the segment break in in all output
     * groups that have segmented outputs. This is the legacy
     * behavior.
SCTE35_ENABLED_OUTPUT_GROUPS: Insert the segment break only in output
     * groups that have SCTE 35 passthrough enabled. This is the recommended value,
     * because it reduces unnecessary segment breaks.
     */
    inline const Scte35SegmentationScope& GetScte35SegmentationScope() const{ return m_scte35SegmentationScope; }

    /**
     * Configures whether SCTE 35 passthrough triggers segment breaks in all output
     * groups that use segmented outputs. Insertion of a SCTE 35 message typically
     * results in a segment break, in addition to the regular cadence of breaks. The
     * segment breaks appear in video outputs, audio outputs, and captions outputs (if
     * any).

ALL_OUTPUT_GROUPS: Default. Insert the segment break in in all output
     * groups that have segmented outputs. This is the legacy
     * behavior.
SCTE35_ENABLED_OUTPUT_GROUPS: Insert the segment break only in output
     * groups that have SCTE 35 passthrough enabled. This is the recommended value,
     * because it reduces unnecessary segment breaks.
     */
    inline bool Scte35SegmentationScopeHasBeenSet() const { return m_scte35SegmentationScopeHasBeenSet; }

    /**
     * Configures whether SCTE 35 passthrough triggers segment breaks in all output
     * groups that use segmented outputs. Insertion of a SCTE 35 message typically
     * results in a segment break, in addition to the regular cadence of breaks. The
     * segment breaks appear in video outputs, audio outputs, and captions outputs (if
     * any).

ALL_OUTPUT_GROUPS: Default. Insert the segment break in in all output
     * groups that have segmented outputs. This is the legacy
     * behavior.
SCTE35_ENABLED_OUTPUT_GROUPS: Insert the segment break only in output
     * groups that have SCTE 35 passthrough enabled. This is the recommended value,
     * because it reduces unnecessary segment breaks.
     */
    inline void SetScte35SegmentationScope(const Scte35SegmentationScope& value) { m_scte35SegmentationScopeHasBeenSet = true; m_scte35SegmentationScope = value; }

    /**
     * Configures whether SCTE 35 passthrough triggers segment breaks in all output
     * groups that use segmented outputs. Insertion of a SCTE 35 message typically
     * results in a segment break, in addition to the regular cadence of breaks. The
     * segment breaks appear in video outputs, audio outputs, and captions outputs (if
     * any).

ALL_OUTPUT_GROUPS: Default. Insert the segment break in in all output
     * groups that have segmented outputs. This is the legacy
     * behavior.
SCTE35_ENABLED_OUTPUT_GROUPS: Insert the segment break only in output
     * groups that have SCTE 35 passthrough enabled. This is the recommended value,
     * because it reduces unnecessary segment breaks.
     */
    inline void SetScte35SegmentationScope(Scte35SegmentationScope&& value) { m_scte35SegmentationScopeHasBeenSet = true; m_scte35SegmentationScope = std::move(value); }

    /**
     * Configures whether SCTE 35 passthrough triggers segment breaks in all output
     * groups that use segmented outputs. Insertion of a SCTE 35 message typically
     * results in a segment break, in addition to the regular cadence of breaks. The
     * segment breaks appear in video outputs, audio outputs, and captions outputs (if
     * any).

ALL_OUTPUT_GROUPS: Default. Insert the segment break in in all output
     * groups that have segmented outputs. This is the legacy
     * behavior.
SCTE35_ENABLED_OUTPUT_GROUPS: Insert the segment break only in output
     * groups that have SCTE 35 passthrough enabled. This is the recommended value,
     * because it reduces unnecessary segment breaks.
     */
    inline AvailConfiguration& WithScte35SegmentationScope(const Scte35SegmentationScope& value) { SetScte35SegmentationScope(value); return *this;}

    /**
     * Configures whether SCTE 35 passthrough triggers segment breaks in all output
     * groups that use segmented outputs. Insertion of a SCTE 35 message typically
     * results in a segment break, in addition to the regular cadence of breaks. The
     * segment breaks appear in video outputs, audio outputs, and captions outputs (if
     * any).

ALL_OUTPUT_GROUPS: Default. Insert the segment break in in all output
     * groups that have segmented outputs. This is the legacy
     * behavior.
SCTE35_ENABLED_OUTPUT_GROUPS: Insert the segment break only in output
     * groups that have SCTE 35 passthrough enabled. This is the recommended value,
     * because it reduces unnecessary segment breaks.
     */
    inline AvailConfiguration& WithScte35SegmentationScope(Scte35SegmentationScope&& value) { SetScte35SegmentationScope(std::move(value)); return *this;}

  private:

    AvailSettings m_availSettings;
    bool m_availSettingsHasBeenSet = false;

    Scte35SegmentationScope m_scte35SegmentationScope;
    bool m_scte35SegmentationScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
