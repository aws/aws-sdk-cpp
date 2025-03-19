/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/CmafEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/HlsManifest.h>
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
   * A CMAF packaging configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CmafPackage">AWS
   * API Reference</a></p>
   */
  class CmafPackage
  {
  public:
    AWS_MEDIAPACKAGEVOD_API CmafPackage() = default;
    AWS_MEDIAPACKAGEVOD_API CmafPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API CmafPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CmafEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = CmafEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = CmafEncryption>
    CmafPackage& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of HLS manifest configurations.
     */
    inline const Aws::Vector<HlsManifest>& GetHlsManifests() const { return m_hlsManifests; }
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }
    template<typename HlsManifestsT = Aws::Vector<HlsManifest>>
    void SetHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::forward<HlsManifestsT>(value); }
    template<typename HlsManifestsT = Aws::Vector<HlsManifest>>
    CmafPackage& WithHlsManifests(HlsManifestsT&& value) { SetHlsManifests(std::forward<HlsManifestsT>(value)); return *this;}
    template<typename HlsManifestsT = HlsManifest>
    CmafPackage& AddHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.emplace_back(std::forward<HlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * When includeEncoderConfigurationInSegments is set to true, MediaPackage places
     * your encoder's Sequence Parameter Set (SPS), Picture Parameter Set (PPS), and
     * Video Parameter Set (VPS) metadata in every video segment instead of in the init
     * fragment. This lets you use different SPS/PPS/VPS settings for your assets
     * during content playback.

     */
    inline bool GetIncludeEncoderConfigurationInSegments() const { return m_includeEncoderConfigurationInSegments; }
    inline bool IncludeEncoderConfigurationInSegmentsHasBeenSet() const { return m_includeEncoderConfigurationInSegmentsHasBeenSet; }
    inline void SetIncludeEncoderConfigurationInSegments(bool value) { m_includeEncoderConfigurationInSegmentsHasBeenSet = true; m_includeEncoderConfigurationInSegments = value; }
    inline CmafPackage& WithIncludeEncoderConfigurationInSegments(bool value) { SetIncludeEncoderConfigurationInSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline int GetSegmentDurationSeconds() const { return m_segmentDurationSeconds; }
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }
    inline CmafPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}
    ///@}
  private:

    CmafEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<HlsManifest> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    bool m_includeEncoderConfigurationInSegments{false};
    bool m_includeEncoderConfigurationInSegmentsHasBeenSet = false;

    int m_segmentDurationSeconds{0};
    bool m_segmentDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
