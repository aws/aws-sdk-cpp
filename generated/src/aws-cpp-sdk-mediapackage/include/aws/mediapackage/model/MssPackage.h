/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/MssEncryption.h>
#include <aws/mediapackage/model/StreamSelection.h>
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
   * A Microsoft Smooth Streaming (MSS) packaging configuration.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/MssPackage">AWS
   * API Reference</a></p>
   */
  class MssPackage
  {
  public:
    AWS_MEDIAPACKAGE_API MssPackage() = default;
    AWS_MEDIAPACKAGE_API MssPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API MssPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const MssEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = MssEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = MssEncryption>
    MssPackage& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time window (in seconds) contained in each manifest.
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline MssPackage& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * The duration (in seconds) of each segment.
     */
    inline int GetSegmentDurationSeconds() const { return m_segmentDurationSeconds; }
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }
    inline MssPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamSelection& GetStreamSelection() const { return m_streamSelection; }
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }
    template<typename StreamSelectionT = StreamSelection>
    void SetStreamSelection(StreamSelectionT&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::forward<StreamSelectionT>(value); }
    template<typename StreamSelectionT = StreamSelection>
    MssPackage& WithStreamSelection(StreamSelectionT&& value) { SetStreamSelection(std::forward<StreamSelectionT>(value)); return *this;}
    ///@}
  private:

    MssEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_segmentDurationSeconds{0};
    bool m_segmentDurationSecondsHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
