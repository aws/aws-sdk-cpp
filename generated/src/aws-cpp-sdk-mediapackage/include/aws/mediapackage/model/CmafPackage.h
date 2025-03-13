/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/CmafEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/StreamSelection.h>
#include <aws/mediapackage/model/HlsManifest.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Common Media Application Format (CMAF) packaging configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CmafPackage">AWS
   * API Reference</a></p>
   */
  class CmafPackage
  {
  public:
    AWS_MEDIAPACKAGE_API CmafPackage() = default;
    AWS_MEDIAPACKAGE_API CmafPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API CmafPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * A list of HLS manifest configurations
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
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const { return m_segmentDurationSeconds; }
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }
    inline CmafPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline const Aws::String& GetSegmentPrefix() const { return m_segmentPrefix; }
    inline bool SegmentPrefixHasBeenSet() const { return m_segmentPrefixHasBeenSet; }
    template<typename SegmentPrefixT = Aws::String>
    void SetSegmentPrefix(SegmentPrefixT&& value) { m_segmentPrefixHasBeenSet = true; m_segmentPrefix = std::forward<SegmentPrefixT>(value); }
    template<typename SegmentPrefixT = Aws::String>
    CmafPackage& WithSegmentPrefix(SegmentPrefixT&& value) { SetSegmentPrefix(std::forward<SegmentPrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StreamSelection& GetStreamSelection() const { return m_streamSelection; }
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }
    template<typename StreamSelectionT = StreamSelection>
    void SetStreamSelection(StreamSelectionT&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::forward<StreamSelectionT>(value); }
    template<typename StreamSelectionT = StreamSelection>
    CmafPackage& WithStreamSelection(StreamSelectionT&& value) { SetStreamSelection(std::forward<StreamSelectionT>(value)); return *this;}
    ///@}
  private:

    CmafEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<HlsManifest> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    int m_segmentDurationSeconds{0};
    bool m_segmentDurationSecondsHasBeenSet = false;

    Aws::String m_segmentPrefix;
    bool m_segmentPrefixHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
