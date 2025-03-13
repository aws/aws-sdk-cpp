/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/MsSmoothAudioDeduplication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/MsSmoothEncryptionSettings.h>
#include <aws/mediaconvert/model/MsSmoothFragmentLengthControl.h>
#include <aws/mediaconvert/model/MsSmoothManifestEncoding.h>
#include <aws/mediaconvert/model/MsSmoothAdditionalManifest.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings related to your Microsoft Smooth Streaming output package. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MsSmoothGroupSettings">AWS
   * API Reference</a></p>
   */
  class MsSmoothGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API MsSmoothGroupSettings() = default;
    AWS_MEDIACONVERT_API MsSmoothGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MsSmoothGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline const Aws::Vector<MsSmoothAdditionalManifest>& GetAdditionalManifests() const { return m_additionalManifests; }
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }
    template<typename AdditionalManifestsT = Aws::Vector<MsSmoothAdditionalManifest>>
    void SetAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::forward<AdditionalManifestsT>(value); }
    template<typename AdditionalManifestsT = Aws::Vector<MsSmoothAdditionalManifest>>
    MsSmoothGroupSettings& WithAdditionalManifests(AdditionalManifestsT&& value) { SetAdditionalManifests(std::forward<AdditionalManifestsT>(value)); return *this;}
    template<typename AdditionalManifestsT = MsSmoothAdditionalManifest>
    MsSmoothGroupSettings& AddAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.emplace_back(std::forward<AdditionalManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline MsSmoothAudioDeduplication GetAudioDeduplication() const { return m_audioDeduplication; }
    inline bool AudioDeduplicationHasBeenSet() const { return m_audioDeduplicationHasBeenSet; }
    inline void SetAudioDeduplication(MsSmoothAudioDeduplication value) { m_audioDeduplicationHasBeenSet = true; m_audioDeduplication = value; }
    inline MsSmoothGroupSettings& WithAudioDeduplication(MsSmoothAudioDeduplication value) { SetAudioDeduplication(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Destination to specify the S3 output location and the output filename base.
     * Destination accepts format identifiers. If you do not specify the base filename
     * in the URI, the service will use the filename of the input file. If your job has
     * multiple inputs, the service uses the filename of the first input file.
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    MsSmoothGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline const DestinationSettings& GetDestinationSettings() const { return m_destinationSettings; }
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }
    template<typename DestinationSettingsT = DestinationSettings>
    void SetDestinationSettings(DestinationSettingsT&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::forward<DestinationSettingsT>(value); }
    template<typename DestinationSettingsT = DestinationSettings>
    MsSmoothGroupSettings& WithDestinationSettings(DestinationSettingsT&& value) { SetDestinationSettings(std::forward<DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If you are using DRM, set DRM System to specify the value SpekeKeyProvider.
     */
    inline const MsSmoothEncryptionSettings& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = MsSmoothEncryptionSettings>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = MsSmoothEncryptionSettings>
    MsSmoothGroupSettings& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify how you want MediaConvert to determine the fragment length. Choose Exact
     * to have the encoder use the exact length that you specify with the setting
     * Fragment length. This might result in extra I-frames. Choose Multiple of GOP to
     * have the encoder round up the segment lengths to match the next GOP boundary.
     */
    inline int GetFragmentLength() const { return m_fragmentLength; }
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }
    inline MsSmoothGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how you want MediaConvert to determine the fragment length. Choose Exact
     * to have the encoder use the exact length that you specify with the setting
     * Fragment length. This might result in extra I-frames. Choose Multiple of GOP to
     * have the encoder round up the segment lengths to match the next GOP boundary.
     */
    inline MsSmoothFragmentLengthControl GetFragmentLengthControl() const { return m_fragmentLengthControl; }
    inline bool FragmentLengthControlHasBeenSet() const { return m_fragmentLengthControlHasBeenSet; }
    inline void SetFragmentLengthControl(MsSmoothFragmentLengthControl value) { m_fragmentLengthControlHasBeenSet = true; m_fragmentLengthControl = value; }
    inline MsSmoothGroupSettings& WithFragmentLengthControl(MsSmoothFragmentLengthControl value) { SetFragmentLengthControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Manifest encoding to specify the encoding format for the server and client
     * manifest. Valid options are utf8 and utf16.
     */
    inline MsSmoothManifestEncoding GetManifestEncoding() const { return m_manifestEncoding; }
    inline bool ManifestEncodingHasBeenSet() const { return m_manifestEncodingHasBeenSet; }
    inline void SetManifestEncoding(MsSmoothManifestEncoding value) { m_manifestEncodingHasBeenSet = true; m_manifestEncoding = value; }
    inline MsSmoothGroupSettings& WithManifestEncoding(MsSmoothManifestEncoding value) { SetManifestEncoding(value); return *this;}
    ///@}
  private:

    Aws::Vector<MsSmoothAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    MsSmoothAudioDeduplication m_audioDeduplication{MsSmoothAudioDeduplication::NOT_SET};
    bool m_audioDeduplicationHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    MsSmoothEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_fragmentLength{0};
    bool m_fragmentLengthHasBeenSet = false;

    MsSmoothFragmentLengthControl m_fragmentLengthControl{MsSmoothFragmentLengthControl::NOT_SET};
    bool m_fragmentLengthControlHasBeenSet = false;

    MsSmoothManifestEncoding m_manifestEncoding{MsSmoothManifestEncoding::NOT_SET};
    bool m_manifestEncodingHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
