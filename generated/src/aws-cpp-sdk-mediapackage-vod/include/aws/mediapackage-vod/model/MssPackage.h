/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/MssEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/MssManifest.h>
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
   * A Microsoft Smooth Streaming (MSS) PackagingConfiguration.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/MssPackage">AWS
   * API Reference</a></p>
   */
  class MssPackage
  {
  public:
    AWS_MEDIAPACKAGEVOD_API MssPackage() = default;
    AWS_MEDIAPACKAGEVOD_API MssPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API MssPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * A list of MSS manifest configurations.
     */
    inline const Aws::Vector<MssManifest>& GetMssManifests() const { return m_mssManifests; }
    inline bool MssManifestsHasBeenSet() const { return m_mssManifestsHasBeenSet; }
    template<typename MssManifestsT = Aws::Vector<MssManifest>>
    void SetMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests = std::forward<MssManifestsT>(value); }
    template<typename MssManifestsT = Aws::Vector<MssManifest>>
    MssPackage& WithMssManifests(MssManifestsT&& value) { SetMssManifests(std::forward<MssManifestsT>(value)); return *this;}
    template<typename MssManifestsT = MssManifest>
    MssPackage& AddMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests.emplace_back(std::forward<MssManifestsT>(value)); return *this; }
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
  private:

    MssEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<MssManifest> m_mssManifests;
    bool m_mssManifestsHasBeenSet = false;

    int m_segmentDurationSeconds{0};
    bool m_segmentDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
