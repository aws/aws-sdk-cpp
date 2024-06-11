/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/DashEncryption.h>
#include <aws/mediapackage-vod/model/SegmentTemplateFormat.h>
#include <aws/mediapackage-vod/model/DashManifest.h>
#include <aws/mediapackage-vod/model/__PeriodTriggersElement.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A Dynamic Adaptive Streaming over HTTP (DASH) packaging configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DashPackage">AWS
   * API Reference</a></p>
   */
  class DashPackage
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DashPackage();
    AWS_MEDIAPACKAGEVOD_API DashPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API DashPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of DASH manifest configurations.
     */
    inline const Aws::Vector<DashManifest>& GetDashManifests() const{ return m_dashManifests; }
    inline bool DashManifestsHasBeenSet() const { return m_dashManifestsHasBeenSet; }
    inline void SetDashManifests(const Aws::Vector<DashManifest>& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = value; }
    inline void SetDashManifests(Aws::Vector<DashManifest>&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::move(value); }
    inline DashPackage& WithDashManifests(const Aws::Vector<DashManifest>& value) { SetDashManifests(value); return *this;}
    inline DashPackage& WithDashManifests(Aws::Vector<DashManifest>&& value) { SetDashManifests(std::move(value)); return *this;}
    inline DashPackage& AddDashManifests(const DashManifest& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.push_back(value); return *this; }
    inline DashPackage& AddDashManifests(DashManifest&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DashEncryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const DashEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(DashEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline DashPackage& WithEncryption(const DashEncryption& value) { SetEncryption(value); return *this;}
    inline DashPackage& WithEncryption(DashEncryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * When includeEncoderConfigurationInSegments is set to true, MediaPackage places
     * your encoder's Sequence Parameter Set (SPS), Picture Parameter Set (PPS), and
     * Video Parameter Set (VPS) metadata in every video segment instead of in the init
     * fragment. This lets you use different SPS/PPS/VPS settings for your assets
     * during content playback.

     */
    inline bool GetIncludeEncoderConfigurationInSegments() const{ return m_includeEncoderConfigurationInSegments; }
    inline bool IncludeEncoderConfigurationInSegmentsHasBeenSet() const { return m_includeEncoderConfigurationInSegmentsHasBeenSet; }
    inline void SetIncludeEncoderConfigurationInSegments(bool value) { m_includeEncoderConfigurationInSegmentsHasBeenSet = true; m_includeEncoderConfigurationInSegments = value; }
    inline DashPackage& WithIncludeEncoderConfigurationInSegments(bool value) { SetIncludeEncoderConfigurationInSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const{ return m_includeIframeOnlyStream; }
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }
    inline DashPackage& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of triggers that controls when the outgoing Dynamic Adaptive Streaming
     * over HTTP (DASH)
Media Presentation Description (MPD) will be partitioned into
     * multiple periods. If empty, the content will not
be partitioned into more than
     * one period. If the list contains "ADS", new periods will be created where
the
     * Asset contains SCTE-35 ad markers.

     */
    inline const Aws::Vector<__PeriodTriggersElement>& GetPeriodTriggers() const{ return m_periodTriggers; }
    inline bool PeriodTriggersHasBeenSet() const { return m_periodTriggersHasBeenSet; }
    inline void SetPeriodTriggers(const Aws::Vector<__PeriodTriggersElement>& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = value; }
    inline void SetPeriodTriggers(Aws::Vector<__PeriodTriggersElement>&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = std::move(value); }
    inline DashPackage& WithPeriodTriggers(const Aws::Vector<__PeriodTriggersElement>& value) { SetPeriodTriggers(value); return *this;}
    inline DashPackage& WithPeriodTriggers(Aws::Vector<__PeriodTriggersElement>&& value) { SetPeriodTriggers(std::move(value)); return *this;}
    inline DashPackage& AddPeriodTriggers(const __PeriodTriggersElement& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(value); return *this; }
    inline DashPackage& AddPeriodTriggers(__PeriodTriggersElement&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }
    inline DashPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline const SegmentTemplateFormat& GetSegmentTemplateFormat() const{ return m_segmentTemplateFormat; }
    inline bool SegmentTemplateFormatHasBeenSet() const { return m_segmentTemplateFormatHasBeenSet; }
    inline void SetSegmentTemplateFormat(const SegmentTemplateFormat& value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = value; }
    inline void SetSegmentTemplateFormat(SegmentTemplateFormat&& value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = std::move(value); }
    inline DashPackage& WithSegmentTemplateFormat(const SegmentTemplateFormat& value) { SetSegmentTemplateFormat(value); return *this;}
    inline DashPackage& WithSegmentTemplateFormat(SegmentTemplateFormat&& value) { SetSegmentTemplateFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DashManifest> m_dashManifests;
    bool m_dashManifestsHasBeenSet = false;

    DashEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    bool m_includeEncoderConfigurationInSegments;
    bool m_includeEncoderConfigurationInSegmentsHasBeenSet = false;

    bool m_includeIframeOnlyStream;
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    Aws::Vector<__PeriodTriggersElement> m_periodTriggers;
    bool m_periodTriggersHasBeenSet = false;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;

    SegmentTemplateFormat m_segmentTemplateFormat;
    bool m_segmentTemplateFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
